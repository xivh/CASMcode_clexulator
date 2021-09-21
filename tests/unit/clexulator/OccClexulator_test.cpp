// Note:
// - Requires environment variable CASM_PREFIX to specify `global` and
// `crystallography` CASM libraries install location
//   - CASM_PREFIX is recognized by
//   `RuntimeLibrary::default_casm_includedir()`
//     and `RuntimeLibrary::default_casm_libdir()`
// - To avoid re-compiling the Clexulator each time, tests are organized as
// member functions and then all called from a single TEST_F
//

#include "TestClexulatorBase.hh"
#include "TestConfiguration.hh"
#include "casm/clexulator/ConfigDoFValues.hh"
#include "casm/clexulator/ConfigDoFValuesTools_impl.hh"
#include "casm/clexulator/Correlations.hh"

using namespace CASM;

namespace test {

namespace {

Eigen::Matrix3l _fcc_conventional_transf_mat() {
  Eigen::Matrix3l transf_mat;
  transf_mat << -1, 1, 1, 1, -1, 1, 1, 1, -1;
  return transf_mat;
}

void run_correlations_checks(TestConfiguration &config,
                             clexulator::Clexulator &clexulator,
                             unsigned int const *begin, unsigned int const *end,
                             std::vector<bool> expected_has_point);

}  // namespace

// Test using data/OccClexulatorFCCTernaryTest, which is currently
// generated as part of the OccClexulatorFCCTest in the main CASMcode repo
//
class OccClexulatorFCCTernaryTest : public test::TestClexulatorBase {
 protected:
  OccClexulatorFCCTernaryTest()
      : TestClexulatorBase("OccClexulatorTest_Clexulator",
                           "OccClexulatorFCCTernaryTest") {
    // can uncomment for debugging:
    // tmpdir.do_not_remove_on_destruction();
  }

  void MakeClexulator_tests() {
    // Check constructed clexulator
    EXPECT_EQ(clexulator.name(), clexulator_name);
    EXPECT_EQ(clexulator.nlist_size(), 176);
    EXPECT_EQ(clexulator.corr_size(), 75);
    EXPECT_EQ(clexulator.n_point_corr(), 1);
    EXPECT_EQ(clexulator.neighborhood().size(), 75);
  }

  void UseClexulator_tests() {
    // Check constructing, executing correlations calculations (does not check
    // accuracy of values, just execution without error)

    test::TestConfiguration config(prim, _fcc_conventional_transf_mat(),
                                   prim_neighbor_list);

    // basis functions to evaluate for restricted calculations
    std::vector<unsigned int> corr_indices({0, 1, 2, 3, 4, 5});
    auto begin = corr_indices.data();
    auto end = corr_indices.data() + corr_indices.size();

    // sublattices that have point correlations
    std::vector<bool> expected_has_point({true});
    run_correlations_checks(config, clexulator, begin, end, expected_has_point);
  }
};

TEST_F(OccClexulatorFCCTernaryTest, Tests) {
  MakeClexulator_tests();
  UseClexulator_tests();
}

// Test using data/OccClexulatorZrOTest, which is currently
// generated as part of the OccClexulatorZrOTest in the main CASMcode repo
//
class OccClexulatorZrOTest : public test::TestClexulatorBase {
 protected:
  OccClexulatorZrOTest()
      : TestClexulatorBase("OccClexulatorZrOTest_Clexulator",
                           "OccClexulatorZrOTest") {
    // can uncomment for debugging:
    // tmpdir.do_not_remove_on_destruction();
  }

  void MakeClexulator_tests() {
    // Check constructed clexulator
    EXPECT_EQ(clexulator.name(), clexulator_name);
    EXPECT_EQ(clexulator.nlist_size(), 53);
    EXPECT_EQ(clexulator.corr_size(), 16);
    EXPECT_EQ(clexulator.n_point_corr(), 2);
    EXPECT_EQ(clexulator.neighborhood().size(), 27);
  }

  void UseClexulator_tests() {
    // Check correlations (checks running without errors, not values)
    test::TestConfiguration config(prim, Eigen::Matrix3l::Identity() * 2,
                                   prim_neighbor_list);

    // basis functions to evaluate for restricted calculations
    std::vector<unsigned int> corr_indices({0, 1, 2, 3, 4, 5});
    auto begin = corr_indices.data();
    auto end = corr_indices.data() + corr_indices.size();

    // sublattices that have point correlations
    std::vector<bool> expected_has_point({false, false, true, true});
    run_correlations_checks(config, clexulator, begin, end, expected_has_point);
  }
};

TEST_F(OccClexulatorZrOTest, Tests) {
  MakeClexulator_tests();
  UseClexulator_tests();
}

namespace {

/// \param config TestConfiguration object used as input
/// \param clexulator Clexulator to test
/// \param begin,end Iterators over basis function indices to evaluate for
///     restricted correlations calculations
/// \param expected_has_point `expected_has_point[b]` is the expected result
///     for `Correlations::has_point(l)`, where `b` is the sublattice index for
///     site index `l`.
void run_correlations_checks(TestConfiguration &config,
                             clexulator::Clexulator &clexulator,
                             unsigned int const *begin, unsigned int const *end,
                             std::vector<bool> expected_has_point) {
  clexulator::Correlations correlations(
      &config.dof_values, &config.supercell_neighbor_list, &clexulator);

  Index n_corr = clexulator.corr_size();
  Index n_sites = config.supercell_neighbor_list.n_sites();

  // -- intensive, extensive, contribution checks --
  EXPECT_EQ(correlations.intensive().size(), n_corr);
  EXPECT_EQ(correlations.restricted_intensive(begin, end).size(), n_corr);
  EXPECT_EQ(correlations.intensive().size(), n_corr);
  EXPECT_EQ(correlations.restricted_intensive(begin, end).size(), n_corr);
  EXPECT_EQ(correlations.contribution(0).size(), n_corr);
  EXPECT_EQ(correlations.restricted_contribution(0, begin, end).size(), n_corr);

  // -- single point corr checks --
  Index expected_n_rows = 0;
  for (Index l = 0; l < n_sites; ++l) {
    Index b = config.supercell_neighbor_list.sublat_index(l);
    EXPECT_EQ(correlations.has_point(l), expected_has_point[b]);
    if (correlations.has_point(l)) {
      ++expected_n_rows;
      EXPECT_EQ(correlations.point(l).size(), n_corr);
      EXPECT_EQ(correlations.restricted_point(l, begin, end).size(), n_corr);
    }
  }

  // -- "all points" checks --
  bool include_all_sites;
  Eigen::MatrixXd all_point_corr;

  include_all_sites = true;
  auto all_site_indices =
      correlations.all_points_site_indices(include_all_sites);
  EXPECT_EQ(all_site_indices.size(), n_sites);
  for (Index l = 0; l < n_sites; ++l) {
    EXPECT_EQ(all_site_indices[l], l);
  }

  include_all_sites = false;
  auto point_corr_site_indices =
      correlations.all_points_site_indices(include_all_sites);
  EXPECT_EQ(point_corr_site_indices.size(), expected_n_rows);
  Index i = 0;
  for (Index l = 0; l < n_sites; ++l) {
    if (!correlations.has_point(l)) {
      continue;
    }
    EXPECT_EQ(point_corr_site_indices[i], l);
    ++i;
  }

  include_all_sites = true;
  all_point_corr = correlations.all_points(include_all_sites);
  EXPECT_EQ(all_point_corr.cols(), n_corr);
  EXPECT_EQ(all_point_corr.rows(), n_sites);

  include_all_sites = false;
  all_point_corr = correlations.all_points(include_all_sites);
  EXPECT_EQ(all_point_corr.cols(), n_corr);
  EXPECT_EQ(all_point_corr.rows(), point_corr_site_indices.size());

  include_all_sites = true;
  all_point_corr =
      correlations.restricted_all_points(begin, end, include_all_sites);
  EXPECT_EQ(all_point_corr.cols(), n_corr);
  EXPECT_EQ(all_point_corr.rows(), n_sites);

  include_all_sites = false;
  all_point_corr =
      correlations.restricted_all_points(begin, end, include_all_sites);
  EXPECT_EQ(all_point_corr.cols(), n_corr);
  EXPECT_EQ(all_point_corr.rows(), point_corr_site_indices.size());

  // -- delta correlations checks --
  Eigen::VectorXd delta_corr;

  if (config.dof_values.occupation.size()) {
    for (Index l = 0; l < n_sites; ++l) {
      Index b = config.supercell_neighbor_list.sublat_index(l);
      for (int s = 0; s < config.prim->basis()[b].occupant_dof().size(); ++s) {
        delta_corr = correlations.restricted_occ_delta(l, s, begin, end);
        EXPECT_EQ(delta_corr.size(), n_corr);
      }
    }
  }
}

}  // namespace

}  // namespace test
