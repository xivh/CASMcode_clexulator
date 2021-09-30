#include "casm/clexulator/Correlations.hh"

#include "casm/clexulator/Clexulator.hh"
#include "casm/clexulator/NeighborList.hh"

namespace CASM {

namespace clexulator {

/// \brief Construct a Correlations object
///
/// \param dof_values Pointer to the ConfigDoFValues to be used as input for
///     calculating correlations. As with direct use of Clexulator, the
///     ConfigDoFValues object being used as input may be modified between
///     calls, but the pointers to the underlying global and local DoF value
///     vectors and matrices must remain valid (i.e. they must not be erased)
///     or a new Correlations object should be used.
/// \param supercell_neighbor_list Pointer to the neighbor list used as input
///     to the Clexulator
/// \param clexulator Pointer to the Clexulator used to calculate correlations
/// \param always_recalculate_delta_reference If true, perform "safe"
///     calculation of delta_corr values by always calculating the current
///     correlations used as a reference for delta correlations. If false, do
///     not re-calculate the current correlations used to calculate delta
///     correlations, and instead use the extensive correlations calculated
///     during the last call of `intensive`, `restricted_intensive`,
///     `extensive`, or `restricted_extensive`.
Correlations::Correlations(ConfigDoFValues const *dof_values,
                           SuperNeighborList const *supercell_neighbor_list,
                           Clexulator const *clexulator,
                           bool always_recalculate_delta_reference)
    : m_dof_values(dof_values),
      m_supercell_neighbor_list(supercell_neighbor_list),
      m_clexulator(clexulator),
      m_always_recalculate_delta_reference(always_recalculate_delta_reference) {
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
  m_all_corr_indices_begin = m_all_correlation_indices.data();
  m_all_corr_indices_end =
      m_all_corr_indices_begin + m_all_correlation_indices.size();

  m_tcorr.resize(n);
  m_point_corr.resize(n);
  m_intensive_corr.resize(n);
  m_extensive_corr.resize(n);
  m_delta_corr.resize(n);
  setZero();
}

/// \brief Reset internal pointer to DoF values - must have the same supercell
void Correlations::reset_dof_values(ConfigDoFValues const *_dof_values) {
  if (_dof_values == nullptr) {
    throw std::runtime_error(
        "Error in Correlations::reset: _dof_values == nullptr");
  }
  m_dof_values = _dof_values;
}

/// \brief Get internal pointer to DoF values
ConfigDoFValues const *Correlations::get_dof_values() const {
  return m_dof_values;
}

/// \brief Get internal pointer to clexulator
Clexulator const *Correlations::clexulator() const { return m_clexulator; }

/// \brief Set the internal correlations vector to zero
void Correlations::setZero() {
  m_point_corr.setZero();
  m_intensive_corr.setZero();
  m_extensive_corr.setZero();
  m_delta_corr.setZero();
}

/// \brief Calculate and return intensive correlations
Eigen::VectorXd const &Correlations::intensive() {
  return restricted_intensive(m_all_corr_indices_begin, m_all_corr_indices_end);
}

/// \brief Calculate and return restricted intensive correlations
Eigen::VectorXd const &Correlations::restricted_intensive(
    unsigned int const *corr_indices_begin,
    unsigned int const *corr_indices_end) {
  restricted_extensive(corr_indices_begin, corr_indices_end);
  double n_unitcells = (double)m_supercell_neighbor_list->n_unitcells();
  for (auto it = corr_indices_begin; it != corr_indices_end; ++it) {
    *(m_intensive_corr.data() + *it) =
        *(m_extensive_corr.data() + *it) / n_unitcells;
  }
  return m_intensive_corr;
}

/// \brief Calculate and return extensive correlations
Eigen::VectorXd const &Correlations::extensive() {
  return restricted_extensive(m_all_corr_indices_begin, m_all_corr_indices_end);
}

/// \brief Calculate and return restricted extensive correlations
Eigen::VectorXd const &Correlations::restricted_extensive(
    unsigned int const *corr_indices_begin,
    unsigned int const *corr_indices_end) {
  int n_unitcells = m_supercell_neighbor_list->n_unitcells();

  for (auto it = corr_indices_begin; it != corr_indices_end; ++it) {
    *(m_extensive_corr.data() + *it) = 0.0;
  }

  for (int unitcell_index = 0; unitcell_index < n_unitcells; unitcell_index++) {
    // Fill up contributions
    m_clexulator->calc_restricted_global_corr_contribution(
        *m_dof_values, m_supercell_neighbor_list->sites(unitcell_index).data(),
        m_tcorr.data(), corr_indices_begin, corr_indices_end);

    for (auto it = corr_indices_begin; it != corr_indices_end; ++it) {
      *(m_extensive_corr.data() + *it) += *(m_tcorr.data() + *it);
    }
  }
  return m_extensive_corr;
}

/// \brief Calculate and return the contribution from a particular unit cell
Eigen::VectorXd const &Correlations::contribution(Index linear_unitcell_index) {
  return restricted_contribution(
      linear_unitcell_index, m_all_corr_indices_begin, m_all_corr_indices_end);
}

/// \brief Calculate and return the restricted contribution from a particular
/// unit cell
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
      *m_dof_values, unitcell_nlist.data(), m_tcorr.data(), corr_indices_begin,
      corr_indices_end);
  return m_tcorr;
}

/// \brief Check if point correlations valid at specified point
bool Correlations::has_point(Index linear_site_index) const {
  if (linear_site_index < 0 ||
      linear_site_index >= m_supercell_neighbor_list->n_sites()) {
    std::stringstream msg;
    msg << "Error in Correlations::has_point: "
        << "invalid linear_site_index.";
    throw std::runtime_error(msg.str());
  }

  Index neighbor_index =
      m_supercell_neighbor_list->neighbor_index(linear_site_index);

  if (neighbor_index == -1) {
    return false;
  }
  return true;
}

/// \brief Calculate and return correlations at specified point
Eigen::VectorXd const &Correlations::point(Index linear_site_index) {
  return restricted_point(linear_site_index, m_all_corr_indices_begin,
                          m_all_corr_indices_end);
}

/// \brief Calculate and return restricted correlations at specified point
Eigen::VectorXd const &Correlations::restricted_point(
    Index linear_site_index, unsigned int const *corr_indices_begin,
    unsigned int const *corr_indices_end) {
  if (linear_site_index < 0 ||
      linear_site_index >= m_supercell_neighbor_list->n_sites()) {
    std::stringstream msg;
    msg << "Error in Correlations::restricted_point: "
        << "invalid linear_site_index.";
    throw std::runtime_error(msg.str());
  }

  Index unitcell_index =
      m_supercell_neighbor_list->unitcell_index(linear_site_index);
  Index neighbor_index =
      m_supercell_neighbor_list->neighbor_index(linear_site_index);

  if (neighbor_index == -1) {
    std::stringstream msg;
    msg << "Error in Correlations::restricted_point: invalid linear_site_index."
        << "No point correlations associated with the site.";
    throw std::runtime_error(msg.str());
  }

  auto const &unitcell_nlist = m_supercell_neighbor_list->sites(unitcell_index);
  m_clexulator->calc_restricted_point_corr(
      *m_dof_values, unitcell_nlist.data(), neighbor_index, m_point_corr.data(),
      corr_indices_begin, corr_indices_end);
  return m_point_corr;
}

/// \brief Calculate and return extensive correlations
///
/// \param include_all_sites If true, include a row for every site, even if
/// there are no point correlations associated with that site (in which case
/// the row is all zeros). If false, only include rows are only included for
/// sites from sublattices included in `PrimNeighborList::sublat_indices()`
/// (rows are still ordered according to increasing site index).
Eigen::MatrixXd Correlations::all_points(bool include_all_sites) {
  return restricted_all_points(m_all_corr_indices_begin, m_all_corr_indices_end,
                               include_all_sites);
}

/// \brief Calculate and return restricted extensive correlations
///
/// \param include_all_sites If true, include a row for every site, even if
/// there are no point correlations associated with that site (in which case
/// the row is all zeros). If false, only include rows are only included for
/// sites from sublattices included in `PrimNeighborList::sublat_indices()`
/// (rows are still ordered according to increasing site index).
Eigen::MatrixXd Correlations::restricted_all_points(
    unsigned int const *corr_indices_begin,
    unsigned int const *corr_indices_end, bool include_all_sites) {
  Index n_unitcells = m_supercell_neighbor_list->n_unitcells();
  Index n_corr = m_clexulator->corr_size();
  Index n_sites = m_supercell_neighbor_list->n_sites();
  Index n_rows =
      include_all_sites ? n_sites : n_unitcells * m_clexulator->n_point_corr();
  Eigen::MatrixXd corr = Eigen::MatrixXd::Zero(n_rows, n_corr);
  Index row_index = 0;
  for (Index l = 0; l < n_sites; l++) {
    if (m_supercell_neighbor_list->neighbor_index(l) == -1) {
      if (include_all_sites) {
        ++row_index;
      } else {
        continue;
      }
    } else {
      corr.row(row_index) =
          restricted_point(l, m_all_corr_indices_begin, m_all_corr_indices_end);
      ++row_index;
    }
  }
  return corr;
}

/// \brief Return the site index corresponding to each row of the matrix
/// returned by `all_points` or `restricted_all_points`
std::vector<Index> Correlations::all_points_site_indices(
    bool include_all_sites) {
  std::vector<Index> site_indices;
  Index n_sites = m_supercell_neighbor_list->n_sites();
  for (Index l = 0; l < n_sites; l++) {
    if (m_supercell_neighbor_list->neighbor_index(l) == -1 &&
        !include_all_sites) {
      continue;
    }
    site_indices.push_back(l);
  }
  return site_indices;
}

/// \brief Calculate and return change in (extensive) correlations due to an
/// occupation change, restricted to specified correlations
///
/// \returns Change in point correlations, relative to the extensive
/// correlations with the current DoF values
///
/// Notes:
/// - If constructed with `always_recalculate_delta_reference == false`, make
/// sure to call `restricted_point(linear_site_index, corr_indices_begin,
/// corr_indices_end)` to set the reference correlations before calling this
/// method.
Eigen::VectorXd const &Correlations::restricted_occ_delta(
    Index linear_site_index, int new_occ,
    unsigned int const *corr_indices_begin,
    unsigned int const *corr_indices_end) {
  Index unitcell_index =
      m_supercell_neighbor_list->unitcell_index(linear_site_index);
  int neighbor_index =
      m_supercell_neighbor_list->neighbor_index(linear_site_index);

  auto const &nlist_sites = m_supercell_neighbor_list->sites(unitcell_index);
  long int const *nlist_begin = nlist_sites.data();

  if (!m_supercell_neighbor_list->overlaps()) {
    int curr_occ = m_dof_values->occupation[linear_site_index];
    m_clexulator->calc_restricted_delta_point_corr(
        *m_dof_values, nlist_begin, neighbor_index, curr_occ, new_occ,
        m_delta_corr.data(), corr_indices_begin, corr_indices_end);
    return m_delta_corr;
  } else {
    // Calculate initial point corr (set, use `m_point_corr`)
    if (m_always_recalculate_delta_reference) {
      m_clexulator->calc_restricted_point_corr(
          *m_dof_values, nlist_begin, neighbor_index, m_point_corr.data(),
          corr_indices_begin, corr_indices_end);
    }

    // Get current value
    Eigen::VectorXi const &values = m_dof_values->occupation;
    int curr_occ = values[linear_site_index];

    // Apply change (at the end we will unapply)
    Eigen::VectorXi &mutable_values = const_cast<Eigen::VectorXi &>(values);
    mutable_values[linear_site_index] = new_occ;

    // Calculate final point corr
    m_clexulator->calc_restricted_point_corr(
        *m_dof_values, nlist_begin, neighbor_index, m_delta_corr.data(),
        corr_indices_begin, corr_indices_end);

    // dcorr = final - initial
    for (auto it = corr_indices_begin; it != corr_indices_end; ++it) {
      *(m_delta_corr.data() + *it) -= *(m_point_corr.data() + *it);
    }

    // Unapply change
    mutable_values[linear_site_index] = curr_occ;
    return m_delta_corr;
  }
}

/// \brief Calculate and return change in (extensive) correlations due to a
/// local continuous DoF change, restricted to specified correlations
///
/// \returns Change in point correlations, relative to the extensive
/// correlations with the current DoF values
///
/// Notes:
/// - If constructed with `always_recalculate_delta_reference == false`, make
/// sure to call `restricted_point(linear_site_index, corr_indices_begin,
/// corr_indices_end)` to set the reference correlations before calling this
/// method.
Eigen::VectorXd const &Correlations::restricted_local_delta(
    DoFKey const &key, Index linear_site_index,
    Eigen::VectorXd const &new_value, unsigned int const *corr_indices_begin,
    unsigned int const *corr_indices_end) {
  Index unitcell_index =
      m_supercell_neighbor_list->unitcell_index(linear_site_index);
  int neighbor_index =
      m_supercell_neighbor_list->neighbor_index(linear_site_index);

  auto const &nlist_sites = m_supercell_neighbor_list->sites(unitcell_index);
  long int const *nlist_begin = nlist_sites.data();

  // Calculate initial point corr (set, use `m_point_corr`)
  if (m_always_recalculate_delta_reference) {
    m_clexulator->calc_restricted_point_corr(
        *m_dof_values, nlist_begin, neighbor_index, m_point_corr.data(),
        corr_indices_begin, corr_indices_end);
  }

  // Get current value
  Eigen::MatrixXd const &values = m_dof_values->local_dof_values.at(key);
  Eigen::VectorXd curr_value = values.col(linear_site_index);

  // Apply change (at the end we will unapply)
  Eigen::MatrixXd &mutable_values = const_cast<Eigen::MatrixXd &>(values);
  mutable_values.col(linear_site_index) = new_value;

  // Calculate after
  m_clexulator->calc_restricted_point_corr(
      *m_dof_values, nlist_begin, neighbor_index, m_delta_corr.data(),
      corr_indices_begin, corr_indices_end);

  // dcorr = after - before
  for (auto it = corr_indices_begin; it != corr_indices_end; ++it) {
    *(m_delta_corr.data() + *it) -= *(m_tcorr.data() + *it);
  }

  // Unapply change
  mutable_values.col(linear_site_index) = curr_value;
  return m_delta_corr;
}

/// \brief Calculate and return change in (extensive) correlations due to a
/// global continuous DoF change, restricted to specified correlations
///
/// Notes:
/// - If constructed with `always_recalculate_delta_reference == false`, make
/// sure to call `restricted_extensive(linear_site_index, corr_indices_begin,
/// corr_indices_end)` to set the reference correlations before calling this
/// method.
Eigen::VectorXd const &Correlations::restricted_global_delta(
    DoFKey const &key, Eigen::VectorXd const &new_value,
    unsigned int const *corr_indices_begin,
    unsigned int const *corr_indices_end) {
  if (m_always_recalculate_delta_reference) {
    restricted_extensive(corr_indices_begin, corr_indices_end);
  }

  // Get current value
  Eigen::VectorXd const &value = m_dof_values->global_dof_values.at(key);
  Eigen::VectorXd curr_value = value;

  // Apply change (at the end we will unapply)
  Eigen::VectorXd &mutable_value = const_cast<Eigen::VectorXd &>(value);
  mutable_value = new_value;

  // Calculate extensive correlations after change (store in m_delta_corr)
  // ----
  int n_unitcells = m_supercell_neighbor_list->n_unitcells();

  for (auto it = corr_indices_begin; it != corr_indices_end; ++it) {
    *(m_delta_corr.data() + *it) = 0.0;
  }

  for (int unitcell_index = 0; unitcell_index < n_unitcells; unitcell_index++) {
    // Fill up contributions
    m_clexulator->calc_restricted_global_corr_contribution(
        *m_dof_values, m_supercell_neighbor_list->sites(unitcell_index).data(),
        m_tcorr.data(), corr_indices_begin, corr_indices_end);

    for (auto it = corr_indices_begin; it != corr_indices_end; ++it) {
      *(m_delta_corr.data() + *it) += *(m_tcorr.data() + *it);
    }
  }
  // ----

  // dcorr = after - before
  for (auto it = corr_indices_begin; it != corr_indices_end; ++it) {
    *(m_delta_corr.data() + *it) -= *(m_extensive_corr.data() + *it);
  }

  // Unapply change
  mutable_value = curr_value;
  return m_delta_corr;
}

}  // namespace clexulator
}  // namespace CASM
