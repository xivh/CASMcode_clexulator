#ifndef CASM_clexulator_LocalCorrelations
#define CASM_clexulator_LocalCorrelations

#include <vector>

#include "casm/crystallography/DoFDecl.hh"
#include "casm/global/definitions.hh"
#include "casm/global/eigen.hh"

namespace CASM {
namespace clexulator {

struct ConfigDoFValues;
class Clexulator;
class SuperNeighborList;

// --- LocalCorrelations ---

/// \brief Manages local correlations calculations
///
class LocalCorrelations {
 public:
  /// \brief Construct a Correlations object to calculate local correlations
  /// for the pointed-to ConfigDoFValues object
  LocalCorrelations(ConfigDoFValues const *dof_values,
                    SuperNeighborList const *supercell_neighbor_list,
                    std::vector<Clexulator> const *clexulator);

  /// \brief Set the internal correlations vector to zero
  void setZero();

  /// \brief Calculate and return local correlations
  Eigen::VectorXd const &local(Index unitcell_index, Index equivalent_index);

  /// \brief Calculate and return restricted local correlations
  Eigen::VectorXd const &restricted_local(
      Index unitcell_index, Index equivalent_index,
      unsigned int const *corr_indices_begin,
      unsigned int const *corr_indices_end);

 private:
  /// Holds all correlation indices
  std::vector<unsigned int> m_all_correlation_indices;

  unsigned int const *m_all_corr_indices_begin;
  unsigned int const *m_all_corr_indices_end;

  /// Holds last local correlation results
  Eigen::VectorXd m_local_corr;

  /// DoF values to use
  ConfigDoFValues const *m_dof_values;

  /// SuperNeighborList to use
  SuperNeighborList const *m_supercell_neighbor_list;

  /// Clexulators to use (one for each symmetrically equivalent phenomenal
  /// cluster per unit cell)
  std::vector<Clexulator> const *m_clexulator;
};

}  // namespace clexulator
}  // namespace CASM

#endif
