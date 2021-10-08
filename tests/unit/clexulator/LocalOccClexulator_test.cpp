// Note:
// - Requires environment variable CASM_PREFIX to specify `global` and
// `crystallography` CASM libraries install location
//   - CASM_PREFIX is recognized by
//   `RuntimeLibrary::default_casm_includedir()`
//     and `RuntimeLibrary::default_casm_libdir()`
// - To avoid re-compiling the Clexulator each time, tests are organized as
// member functions and then all called from a single TEST_F
//

#include "TestConfiguration.hh"
#include "TestLocalClexulatorBase.hh"
#include "casm/clexulator/ConfigDoFValues.hh"
#include "casm/clexulator/ConfigDoFValuesTools_impl.hh"
#include "casm/clexulator/LocalCorrelations.hh"

using namespace CASM;

namespace test {

namespace {

void run_local_correlations_checks(
    TestConfiguration &config,
    std::shared_ptr<std::vector<clexulator::Clexulator> const> &clexulator,
    std::vector<unsigned int> const &corr_indices);

}  // namespace

// Test using data/LocalOccClexulatorZrOTest, which is currently
// generated as part of the LocalOccClexulatorZrOTest in the main CASMcode repo
//
class LocalOccClexulatorZrOTest : public test::TestLocalClexulatorBase {
 protected:
  LocalOccClexulatorZrOTest()
      : TestLocalClexulatorBase("LocalOccClexulatorZrOTest_Clexulator",
                                "LocalOccClexulatorZrOTest", {"hop0", "hop1"}) {
    // can uncomment for debugging:
    // tmpdir.do_not_remove_on_destruction();
  }

  void MakeClexulator_tests() {
    // Check constructed clexulator
    EXPECT_EQ(this->clexulator.size(), 2);

    // loop over different basis sets
    for (auto const &bset_name : bset_names) {
      EXPECT_EQ(this->clexulator[bset_name]->size(), 2);

      // loop over clexulator for equivalent phenomenal clusters
      for (auto &equiv_clexulator : *this->clexulator[bset_name]) {
        EXPECT_EQ(equiv_clexulator.name(), clexulator_name);
        EXPECT_EQ(equiv_clexulator.nlist_size(), 53);
        EXPECT_EQ(equiv_clexulator.corr_size(), 33);
        EXPECT_EQ(equiv_clexulator.n_point_corr(), 53);
        EXPECT_EQ(equiv_clexulator.neighborhood().size(), 26);
      }
    }
  }

  void UseClexulator_tests() {
    // Check correlations (checks running without errors, not values)
    test::TestConfiguration config(prim, Eigen::Matrix3l::Identity() * 2,
                                   *prim_neighbor_list);

    // basis functions to evaluate for restricted calculations
    std::map<std::string, std::vector<unsigned int>> corr_indices;
    corr_indices["hop0"] = std::vector<unsigned int>({0, 1, 2, 3, 4});
    corr_indices["hop1"] = std::vector<unsigned int>({0, 1, 2, 3, 4});

    for (auto const &bset_name : bset_names) {
      auto const &indices = corr_indices.at(bset_name);
      run_local_correlations_checks(config, this->clexulator[bset_name],
                                    indices);
    }
  }
};

TEST_F(LocalOccClexulatorZrOTest, Tests) {
  MakeClexulator_tests();
  UseClexulator_tests();
}

namespace {

/// \param config TestConfiguration object used as input
/// \param clexulator Clexulators to test
/// \param begin,end Iterators over basis function indices to evaluate for
///     restricted correlations calculations
/// \param expected_has_point `expected_has_point[b]` is the expected result
///     for `Correlations::has_point(l)`, where `b` is the sublattice index for
///     site index `l`.
void run_local_correlations_checks(
    TestConfiguration &config,
    std::shared_ptr<std::vector<clexulator::Clexulator> const> &clexulator,
    std::vector<unsigned int> const &corr_indices) {
  clexulator::LocalCorrelations correlations(config.supercell_neighbor_list,
                                             clexulator, corr_indices,
                                             &config.dof_values);

  Index n_corr = (*clexulator)[0].corr_size();

  // -- local correlation checks --
  EXPECT_EQ(correlations.local(0, 0).size(), n_corr);
}

}  // namespace

}  // namespace test
