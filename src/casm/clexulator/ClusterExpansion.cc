#include "casm/clexulator/ClusterExpansion.hh"

namespace CASM {
namespace clexulator {

/// \brief Return the set of sites for which a change in DoF results in a
///     change in any cluster expansion value
std::set<xtal::UnitCellCoord> make_required_update_neighborhood(
    std::vector<ClusterExpansion> const &cluster_expansions) {
  std::set<xtal::UnitCellCoord> required_update_neighborhood;
  for (auto const &clex : cluster_expansions) {
    unsigned int const *begin = clex.coefficients.index.data();
    unsigned int const *end = begin + clex.coefficients.index.size();
    std::set<xtal::UnitCellCoord> hood =
        clex.clexulator.site_neighborhood(begin, end);
    required_update_neighborhood.insert(hood.begin(), hood.end());
  }
  return required_update_neighborhood;
}

}  // namespace clexulator
}  // namespace CASM
