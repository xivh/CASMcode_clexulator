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
    // Check correlations (checks running without errors, not values)
    test::TestConfiguration config(prim, _fcc_conventional_transf_mat(),
                                   prim_neighbor_list);
    clexulator::Correlations correlations(
        &config.dof_values, &config.supercell_neighbor_list, &clexulator);

    std::vector<unsigned int> corr_indices({0, 2, 4});
    auto begin = corr_indices.data();
    auto end = corr_indices.data() + corr_indices.size();

    EXPECT_EQ(correlations.intensive().size(), 75);
    EXPECT_EQ(correlations.restricted_intensive(begin, end).size(), 75);
    EXPECT_EQ(correlations.intensive().size(), 75);
    EXPECT_EQ(correlations.restricted_intensive(begin, end).size(), 75);
    EXPECT_EQ(correlations.contribution(0).size(), 75);
    EXPECT_EQ(correlations.restricted_contribution(0, begin, end).size(), 75);
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
    test::TestConfiguration config(prim, _fcc_conventional_transf_mat(),
                                   prim_neighbor_list);
    clexulator::Correlations correlations(
        &config.dof_values, &config.supercell_neighbor_list, &clexulator);

    std::vector<unsigned int> corr_indices({0, 2, 4});
    auto begin = corr_indices.data();
    auto end = corr_indices.data() + corr_indices.size();

    EXPECT_EQ(correlations.intensive().size(), 16);
    EXPECT_EQ(correlations.restricted_intensive(begin, end).size(), 16);
    EXPECT_EQ(correlations.intensive().size(), 16);
    EXPECT_EQ(correlations.restricted_intensive(begin, end).size(), 16);
    EXPECT_EQ(correlations.contribution(0).size(), 16);
    EXPECT_EQ(correlations.restricted_contribution(0, begin, end).size(), 16);
  }
};

TEST_F(OccClexulatorZrOTest, Tests) {
  MakeClexulator_tests();
  UseClexulator_tests();
}

// Test using data/LocalOccClexulatorZrOTest, which is currently
// generated as part of the LocalOccClexulatorZrOTest in the main CASMcode repo
//
class LocalOccClexulatorZrOTest : public test::TestClexulatorBase {
 protected:
  LocalOccClexulatorZrOTest()
      : TestClexulatorBase("LocalOccClexulatorZrOTest_Clexulator",
                           "LocalOccClexulatorZrOTest") {
    // can uncomment for debugging:
    // tmpdir.do_not_remove_on_destruction();
  }

  void MakeClexulator_tests() {
    // Check constructed clexulator
    EXPECT_EQ(clexulator.name(), clexulator_name);
    EXPECT_EQ(clexulator.nlist_size(), 53);
    EXPECT_EQ(clexulator.corr_size(), 33);
    EXPECT_EQ(clexulator.n_point_corr(), 53);
    EXPECT_EQ(clexulator.neighborhood().size(), 26);
  }

  void UseClexulator_tests() {
    // Check correlations (checks running without errors, not values)
    test::TestConfiguration config(prim, _fcc_conventional_transf_mat(),
                                   prim_neighbor_list);
    clexulator::Correlations correlations(
        &config.dof_values, &config.supercell_neighbor_list, &clexulator);

    std::vector<unsigned int> corr_indices({0, 2, 4});
    auto begin = corr_indices.data();
    auto end = corr_indices.data() + corr_indices.size();

    EXPECT_EQ(correlations.intensive().size(), 33);
    EXPECT_EQ(correlations.restricted_intensive(begin, end).size(), 33);
    EXPECT_EQ(correlations.intensive().size(), 33);
    EXPECT_EQ(correlations.restricted_intensive(begin, end).size(), 33);
    EXPECT_EQ(correlations.contribution(0).size(), 33);
    EXPECT_EQ(correlations.restricted_contribution(0, begin, end).size(), 33);
  }
};

TEST_F(LocalOccClexulatorZrOTest, Tests) {
  MakeClexulator_tests();
  UseClexulator_tests();
}

}  // namespace test
