#ifndef CASM_clexulator_ClusterExpansion
#define CASM_clexulator_ClusterExpansion

#include <set>
#include <vector>

#include "casm/clexulator/Clexulator.hh"
#include "casm/clexulator/SparseCoefficients.hh"
#include "casm/crystallography/UnitCellCoord.hh"

namespace CASM {
namespace clexulator {

/// \brief Data needed to evaluate a cluster expansion (clex)
struct ClusterExpansion {
  /// \brief Clexulator used to evaluate correlations
  Clexulator clexulator;

  /// \brief Non-zero expansion coefficients
  SparseCoefficients coefficients;
};

/// \brief Return the set of sites for which a change in DoF results in a
///     change in any cluster expansion value
std::set<xtal::UnitCellCoord> make_required_update_neighborhood(
    std::vector<ClusterExpansion> const &cluster_expansions);

}  // namespace clexulator
}  // namespace CASM

#endif
