#ifndef CASM_clexulator_SparseCoefficients
#define CASM_clexulator_SparseCoefficients

#include <cstddef>
#include <stdexcept>
#include <string>
#include <vector>

#include "casm/global/eigen.hh"

namespace CASM {
namespace clexulator {

/// \brief Container for non-zero expansion coefficients
struct SparseCoefficients {
  /// \brief Indices of basis functions with non-zero coefficients to evaluate
  std::vector<unsigned int> index;

  /// \brief Expansion coefficients, for the basis functions specified by
  /// `index`
  std::vector<double> value;
};

/// \brief Throw if `coeff.index` and `coeff.value` have different sizes
void throw_if_invalid(SparseCoefficients const &coeff);

/// \brief Throw if any `coeff.index` is out of range for correlations of size
///     `corr_size`
void throw_if_out_of_range(SparseCoefficients const &coeff,
                           std::size_t corr_size);

/// \brief Evaluate cluster expansion value given coefficients and correlations
double operator*(SparseCoefficients const &coeff,
                 Eigen::VectorXd const &correlations);

/// \brief Evaluate cluster expansion value given coefficients and correlations
double operator*(SparseCoefficients const &coeff,
                 double const *correlations_begin);

// -- Inline definitions --

/// \brief Throw if `coeff.index` and `coeff.value` have different sizes
///
/// `coeff.index` and `coeff.value` can be updated after construction,
/// so this should be checked both during construction and before usage.
///
/// \param coeff The expansion coefficients
///
/// \throws std::runtime_error If `coeff.index.size() != coeff.value.size()`
inline void throw_if_invalid(SparseCoefficients const &coeff) {
  if (coeff.index.size() != coeff.value.size()) {
    throw std::runtime_error(
        "Error: SparseCoefficients index and value sizes do not match "
        "(index.size()=" +
        std::to_string(coeff.index.size()) +
        ", value.size()=" + std::to_string(coeff.value.size()) + ")");
  }
}

/// \brief Throw if any `coeff.index` is out of range for correlations of size
///     `corr_size`
///
/// Coefficient multiplication does not check the size of the correlations,
/// so it can go out of bounds if any `coeff.index` >= `corr_size`. For a
/// fixed correlation input shape, this only has to be checked once.
///
/// \param coeff The expansion coefficients
/// \param corr_size The size of the correlations array, which is the total
///     number of basis functions
///
/// \throws std::runtime_error If any `coeff.index` is >= `corr_size`
inline void throw_if_out_of_range(SparseCoefficients const &coeff,
                                  std::size_t corr_size) {
  for (unsigned int i : coeff.index) {
    if (i >= corr_size) {
      throw std::runtime_error(
          "Error: SparseCoefficients index " + std::to_string(i) +
          " is out of range for correlations of size " +
          std::to_string(corr_size));
    }
  }
}

/// \brief Evaluate cluster expansion value given coefficients and correlations
inline double operator*(SparseCoefficients const &coeff,
                        Eigen::VectorXd const &correlations) {
  return coeff * correlations.data();
}

/// \brief Evaluate cluster expansion value given coefficients and correlations
inline double operator*(SparseCoefficients const &coeff,
                        double const *correlations_begin) {
  double result(0);
  auto index_it = coeff.index.data();
  auto index_end = index_it + coeff.index.size();
  auto value_it = coeff.value.data();
  while (index_it != index_end) {
    result += (*value_it) * (*(correlations_begin + *index_it));
    ++index_it;
    ++value_it;
  }
  return result;
}

}  // namespace clexulator
}  // namespace CASM

#endif
