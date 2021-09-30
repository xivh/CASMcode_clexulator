#include "casm/clexulator/LocalClusterExpansion.hh"

namespace CASM {
namespace clexulator {

LocalClusterExpansion::LocalClusterExpansion(
    LocalCorrelations const &_correlations,
    SparseCoefficients const &_coefficients)
    : m_correlations(_correlations),
      m_coefficients(_coefficients),
      m_corr_indices_begin(m_coefficients.index.data()),
      m_corr_indices_end(m_corr_indices_begin + m_coefficients.index.size()) {}

/// \brief Reset pointer to configuration currently being calculated
void LocalClusterExpansion::reset(ConfigDoFValues const *dof_values) {
  return m_correlations.reset_dof_values(dof_values);
}

/// \brief Pointer to configuration currently being calculated
ConfigDoFValues const *LocalClusterExpansion::get() const {
  return m_correlations.get_dof_values();
}

/// \brief Value at particular unit cell and phenomenal cluster
double LocalClusterExpansion::value(Index unitcell_index,
                                    Index equivalent_index) {
  return m_coefficients * m_correlations.restricted_local(
                              unitcell_index, equivalent_index,
                              m_corr_indices_begin, m_corr_indices_end);
}

/// \brief Return the coordinates of sites (relative to the origin unit cell)
///     where a change in DoF values requires this calculators values to be
///     re-calculated.
std::set<xtal::UnitCellCoord>
LocalClusterExpansion::required_update_neighborhood(
    Index equivalent_index) const {
  return m_correlations.clexulator(equivalent_index)
      ->site_neighborhood(m_corr_indices_begin, m_corr_indices_end);
}

}  // namespace clexulator
}  // namespace CASM
