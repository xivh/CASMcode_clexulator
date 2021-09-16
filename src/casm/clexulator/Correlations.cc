#include "casm/clexulator/Correlations.hh"

#include "casm/clexulator/Clexulator.hh"
#include "casm/clexulator/NeighborList.hh"

namespace CASM {

namespace clexulator {

Correlations::Correlations(ConfigDoFValues const *dof_values,
                           SuperNeighborList const *supercell_neighbor_list,
                           Clexulator const *clexulator)
    : m_dof_values(dof_values),
      m_supercell_neighbor_list(supercell_neighbor_list),
      m_clexulator(clexulator) {
  if (m_dof_values == nullptr) {
    throw std::runtime_error(
        "Error constructing Correlations: dof_values == nullptr");
  }

  if (m_supercell_neighbor_list == nullptr) {
    throw std::runtime_error(
        "Error constructing Correlations: supercell_neighbor_list == nullptr");
  }

  if (m_clexulator == nullptr) {
    throw std::runtime_error(
        "Error constructing Correlations: clexulator == nullptr");
  }

  // construct m_all_correlation_indices
  int n = m_clexulator->corr_size();
  for (int i = 0; i < n; ++i) {
    m_all_correlation_indices.push_back(i);
  }
  m_corr.resize(n);
  m_tcorr.resize(n);
  setZero();
}

/// \brief Set the internal correlations vector to zero
void Correlations::setZero() { m_corr.setZero(); }

Eigen::VectorXd const &Correlations::intensive() {
  return restricted_intensive(
      m_all_correlation_indices.data(),
      m_all_correlation_indices.data() + m_all_correlation_indices.size());
}

Eigen::VectorXd const &Correlations::restricted_intensive(
    unsigned int const *corr_indices_begin,
    unsigned int const *corr_indices_end) {
  restricted_extensive(corr_indices_begin, corr_indices_end);
  m_corr /= (double)m_supercell_neighbor_list->n_unitcells();
  return m_corr;
}

Eigen::VectorXd const &Correlations::extensive() {
  return restricted_extensive(
      m_all_correlation_indices.data(),
      m_all_correlation_indices.data() + m_all_correlation_indices.size());
}

Eigen::VectorXd const &Correlations::restricted_extensive(
    unsigned int const *corr_indices_begin,
    unsigned int const *corr_indices_end) {
  int n_unitcells = m_supercell_neighbor_list->n_unitcells();

  for (auto it = corr_indices_begin; it != corr_indices_end; ++it) {
    *(m_corr.data() + *it) = 0.0;
  }

  for (int unitcell_index = 0; unitcell_index < n_unitcells; unitcell_index++) {
    // Fill up contributions
    m_clexulator->calc_restricted_global_corr_contribution(
        *m_dof_values, m_supercell_neighbor_list->sites(unitcell_index).data(),
        m_tcorr.data(), corr_indices_begin, corr_indices_end);

    for (auto it = corr_indices_begin; it != corr_indices_end; ++it) {
      *(m_corr.data() + *it) += *(m_tcorr.data() + *it);
    }
  }
  return m_corr;
}

Eigen::VectorXd const &Correlations::contribution(Index linear_unitcell_index) {
  return restricted_contribution(
      linear_unitcell_index, m_all_correlation_indices.data(),
      m_all_correlation_indices.data() + m_all_correlation_indices.size());
}

Eigen::VectorXd const &Correlations::restricted_contribution(
    Index linear_unitcell_index, unsigned int const *corr_indices_begin,
    unsigned int const *corr_indices_end) {
  int n_unitcells = m_supercell_neighbor_list->n_unitcells();

  if (linear_unitcell_index >= n_unitcells) {
    std::stringstream msg;
    msg << "Error in Correlations::contribution(Index): "
        << "linear_unitcell_index out of range (" << linear_unitcell_index
        << " >= " << n_unitcells << ")";
    throw std::runtime_error(msg.str());
  }

  auto const &unitcell_nlist =
      m_supercell_neighbor_list->sites(linear_unitcell_index);
  m_clexulator->calc_restricted_global_corr_contribution(
      *m_dof_values, unitcell_nlist.data(), m_corr.data(), corr_indices_begin,
      corr_indices_end);
  return m_corr;
}

}  // namespace clexulator
}  // namespace CASM
