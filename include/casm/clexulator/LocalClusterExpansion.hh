#ifndef CASM_clexulator_LocalClusterExpansion
#define CASM_clexulator_LocalClusterExpansion

#include <set>
#include <vector>

#include "casm/clexulator/Clexulator.hh"
#include "casm/clexulator/LocalCorrelations.hh"
#include "casm/clexulator/SparseCoefficients.hh"
#include "casm/crystallography/UnitCellCoord.hh"

namespace CASM {
namespace clexulator {

/// \brief A local cluster expansion calculator
class LocalClusterExpansion {
 public:
  LocalClusterExpansion(LocalCorrelations const &_correlations,
                        SparseCoefficients const &_coefficients);

  /// \brief Reset pointer to configuration currently being calculated
  void reset(ConfigDoFValues const *dof_values);

  /// \brief Pointer to configuration currently being calculated
  ConfigDoFValues const *get() const;

  /// \brief Value at particular unit cell and phenomenal cluster
  double value(Index unitcell_index, Index equivalent_index);

  /// \brief Return the coordinates of sites (relative to the origin unit cell)
  ///     where a change in DoF values requires this calculators values to be
  ///     re-calculated.
  std::set<xtal::UnitCellCoord> required_update_neighborhood(
      Index equivalent_index) const;

 private:
  /// \brief Used to evaluate local correlations
  LocalCorrelations m_correlations;

  /// \brief Non-zero expansion coefficients
  SparseCoefficients m_coefficients;

  /// \brief Non-zero eci indices begin iterator
  unsigned int *m_corr_indices_begin;

  /// \brief Non-zero eci indices end iterator
  unsigned int *m_corr_indices_end;
};

}  // namespace clexulator
}  // namespace CASM

#endif
