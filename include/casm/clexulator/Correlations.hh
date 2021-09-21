#ifndef CASM_clexulator_Correlations
#define CASM_clexulator_Correlations

#include <vector>

#include "casm/crystallography/DoFDecl.hh"
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
               Clexulator const *clexulator,
               bool always_recalculate_delta_reference = true);

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

  // --- Point correlations ---

  /// \brief Check if point correlations valid at specified point
  bool has_point(Index linear_site_index) const;

  /// \brief Calculate and return correlations at specified point
  Eigen::VectorXd const &point(Index linear_site_index);

  /// \brief Calculate and return restricted correlations at specified point
  Eigen::VectorXd const &restricted_point(
      Index linear_site_index, unsigned int const *corr_indices_begin,
      unsigned int const *corr_indices_end);

  /// \brief Calculate and return extensive correlations
  Eigen::MatrixXd all_points(bool include_all_sites = true);

  /// \brief Calculate and return restricted extensive correlations
  Eigen::MatrixXd restricted_all_points(unsigned int const *corr_indices_begin,
                                        unsigned int const *corr_indices_end,
                                        bool include_all_sites = true);

  /// \brief Return the site index corresponding to each row of the matrix
  /// returned by `all_points` or `restricted_all_points`
  std::vector<Index> all_points_site_indices(bool include_all_sites = true);

  // --- Delta correlations ---

  // --- Occupation ---

  /// \brief Calculate and return change in (extensive) correlations due to an
  /// occupation change, restricted to specified correlations
  Eigen::VectorXd const &restricted_occ_delta(
      Index linear_site_index, int new_occ,
      unsigned int const *corr_indices_begin,
      unsigned int const *corr_indices_end);

  // --- Local continuous ---

  /// \brief Calculate and return change in (extensive) correlations due to a
  /// local continuous DoF change, restricted to specified correlations
  Eigen::VectorXd const &restricted_local_delta(
      DoFKey const &key, Index linear_site_index,
      Eigen::VectorXd const &new_value, unsigned int const *corr_indices_begin,
      unsigned int const *corr_indices_end);

  // --- Global continuous ---

  /// \brief Calculate and return change in (extensive) correlations due to a
  /// global continuous DoF change, restricted to specified correlations
  Eigen::VectorXd const &restricted_global_delta(
      DoFKey const &key, Eigen::VectorXd const &new_value,
      unsigned int const *corr_indices_begin,
      unsigned int const *corr_indices_end);

 private:
  /// Holds all correlation indices
  std::vector<unsigned int> m_all_correlation_indices;

  unsigned int const *m_all_corr_indices_begin;
  unsigned int const *m_all_corr_indices_end;

  /// Holds temporary correlations used in calculations internally
  Eigen::VectorXd m_tcorr;

  /// Holds last point correlation results
  Eigen::VectorXd m_point_corr;

  /// Holds last extensive correlation results
  Eigen::VectorXd m_extensive_corr;

  /// Holds last intensive correlation results
  Eigen::VectorXd m_intensive_corr;

  /// Holds last delta correlation results
  Eigen::VectorXd m_delta_corr;

  /// DoF values to use
  ConfigDoFValues const *m_dof_values;

  /// SuperNeighborList to use
  SuperNeighborList const *m_supercell_neighbor_list;

  /// Clexulator to use
  Clexulator const *m_clexulator;

  /// If true, perform "safe" calculation of delta_corr values by always
  /// calculating the current correlations used as a reference for delta
  /// correlations. If false, do not re-calculate the current correlations used
  /// to calculate delta correlations, and instead use the extensive
  /// correlations calculated during the last call of `intensive`,
  /// `restricted_intensive`, `extensive`, or `restricted_extensive`.
  bool m_always_recalculate_delta_reference;
};

}  // namespace clexulator
}  // namespace CASM

#endif
