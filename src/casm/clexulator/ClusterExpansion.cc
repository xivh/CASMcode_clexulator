#include "casm/clexulator/ClusterExpansion.hh"

#include "casm/clexulator/Clexulator.hh"

namespace CASM {
namespace clexulator {

ClusterExpansion::ClusterExpansion(Correlations const &_correlations,
                                   SparseCoefficients const &_coefficients)
    : m_correlations(_correlations), m_coefficients(_coefficients) {}

/// \brief Reset pointer to configuration currently being calculated
void ClusterExpansion::set(ConfigDoFValues const *dof_values) {
  return m_correlations.set(dof_values);
}

/// \brief Pointer to configuration currently being calculated
ConfigDoFValues const *ClusterExpansion::get() const {
  return m_correlations.get();
}

double ClusterExpansion::intensive_value() {
  auto const &e = m_correlations.extensive();
  return m_coefficients * m_correlations.intensive(e);
}

double ClusterExpansion::extensive_value() {
  return m_coefficients * m_correlations.extensive();
}

double ClusterExpansion::occ_delta_value(Index linear_site_index, int new_occ) {
  bool skip_if_unnecessary_for_occ_delta = true;
  auto const &p = m_correlations.point(linear_site_index,
                                       skip_if_unnecessary_for_occ_delta);
  return m_coefficients *
         m_correlations.occ_delta(linear_site_index, new_occ, p);
}

double ClusterExpansion::local_delta_value(DoFKey const &key,
                                           Index linear_site_index,
                                           Eigen::VectorXd const &new_value) {
  auto const &p = m_correlations.point(linear_site_index);
  return m_coefficients *
         m_correlations.local_delta(key, linear_site_index, new_value, p);
}

double ClusterExpansion::global_delta_value(DoFKey const &key,
                                            Eigen::VectorXd const &new_value) {
  auto const &e = m_correlations.extensive();
  return m_coefficients * m_correlations.global_delta(key, new_value, e);
}

std::set<xtal::UnitCellCoord> ClusterExpansion::required_update_neighborhood()
    const {
  return m_correlations.required_update_neighborhood();
}

}  // namespace clexulator
}  // namespace CASM
