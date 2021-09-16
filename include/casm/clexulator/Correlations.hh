#ifndef CASM_clexulator_correlations
#define CASM_clexulator_correlations

#include <vector>

#include "casm/global/definitions.hh"
#include "casm/global/eigen.hh"

namespace CASM {
namespace clexulator {

struct ConfigDoFValues;
class Clexulator;
class SuperNeighborList;

// --- Correlations ---

/// \brief Manages correlations calculations
///
/// This is a bit higher level than direct use of Clexulator. It manages use of
/// the SuperNeighborList, and handles the looping and temporaries used in
/// typical calculations.
///
/// Notes:
/// - If the pointed-to ConfigDoFValues are modified, then Correlations member
/// functions can be called again to calculate and return correlations
/// - Use of `restricted` correlations calculations allows calculation of only
/// specified basis functions. In this case, the returned vector is still the
/// same size as the correlations vector and only elements at the specified
/// indices are defined. Other elements in the correlations vector are not
/// modified. The `setZero` method can be used to set all elements to zero
/// before calculation.
/// - As with direct use of Clexulator, the ConfigDoFValues object being used
/// as input may be modified between calls, but the pointers to the underlying
/// global and local DoF value vectors & matrices must remain valid (i.e. they
/// must not be erased) or a new ConfigDoFValues object should be used.
class Correlations {
 public:
  /// \brief Construct a Correlations object to calculate correlations for the
  /// pointed-to ConfigDoFValues object
  Correlations(ConfigDoFValues const *dof_values,
               SuperNeighborList const *supercell_neighbor_list,
               Clexulator const *clexulator);

  /// \brief Set the internal correlations vector to zero
  void setZero();

  /// \brief Calculate and return intensive correlations
  Eigen::VectorXd const &intensive();

  /// \brief Calculate and return restricted intensive correlations
  Eigen::VectorXd const &restricted_intensive(
      unsigned int const *corr_indices_begin,
      unsigned int const *corr_indices_end);

  /// \brief Calculate and return extensive correlations
  Eigen::VectorXd const &extensive();

  /// \brief Calculate and return restricted extensive correlations
  Eigen::VectorXd const &restricted_extensive(
      unsigned int const *corr_indices_begin,
      unsigned int const *corr_indices_end);

  /// \brief Calculate and return the contribution from a particular unit cell
  Eigen::VectorXd const &contribution(Index linear_unitcell_index);

  /// \brief Calculate and return the restricted contribution from a particular
  /// unit cell
  Eigen::VectorXd const &restricted_contribution(
      Index linear_unitcell_index, unsigned int const *corr_indices_begin,
      unsigned int const *corr_indices_end);

 private:
  /// Holds all correlation indices
  std::vector<unsigned int> m_all_correlation_indices;

  /// Temporary data structure
  Eigen::VectorXd m_tcorr;

  /// Holds results
  Eigen::VectorXd m_corr;

  /// DoF values to use
  ConfigDoFValues const *m_dof_values;

  /// SuperNeighborList to use
  SuperNeighborList const *m_supercell_neighbor_list;

  /// Clexulator to use
  Clexulator const *m_clexulator;
};

}  // namespace clexulator
}  // namespace CASM

#endif
