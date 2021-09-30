#include "casm/clexulator/ClusterExpansion.hh"

#include "casm/clexulator/Clexulator.hh"

namespace CASM {
namespace clexulator {

ClusterExpansion::ClusterExpansion(Correlations const &_correlations,
                                   SparseCoefficients const &_coefficients)
    : m_correlations(_correlations),
      m_coefficients(_coefficients),
      m_corr_indices_begin(m_coefficients.index.data()),
      m_corr_indices_end(m_corr_indices_begin + m_coefficients.index.size()) {}

/// \brief Reset pointer to configuration currently being calculated
void ClusterExpansion::reset(ConfigDoFValues const *dof_values) {
  return m_correlations.reset_dof_values(dof_values);
}

/// \brief Pointer to configuration currently being calculated
ConfigDoFValues const *ClusterExpansion::get() const {
  return m_correlations.get_dof_values();
}

double ClusterExpansion::intensive_value() {
  return m_coefficients * m_correlations.restricted_intensive(
                              m_corr_indices_begin, m_corr_indices_end);
}

double ClusterExpansion::extensive_value() {
  return m_coefficients * m_correlations.restricted_extensive(
                              m_corr_indices_begin, m_corr_indices_end);
}

double ClusterExpansion::occ_delta_value(Index linear_site_index, int new_occ) {
  return m_coefficients * m_correlations.restricted_occ_delta(
                              linear_site_index, new_occ, m_corr_indices_begin,
                              m_corr_indices_end);
}

double ClusterExpansion::local_delta_value(DoFKey const &key,
                                           Index linear_site_index,
                                           Eigen::VectorXd const &new_value) {
  return m_coefficients * m_correlations.restricted_local_delta(
                              key, linear_site_index, new_value,
                              m_corr_indices_begin, m_corr_indices_end);
}

double ClusterExpansion::global_delta_value(DoFKey const &key,
                                            Eigen::VectorXd const &new_value) {
  return m_coefficients *
         m_correlations.restricted_global_delta(
             key, new_value, m_corr_indices_begin, m_corr_indices_end);
}

std::set<xtal::UnitCellCoord> ClusterExpansion::required_update_neighborhood()
    const {
  return m_correlations.clexulator()->site_neighborhood(m_corr_indices_begin,
                                                        m_corr_indices_end);
}

}  // namespace clexulator
}  // namespace CASM
