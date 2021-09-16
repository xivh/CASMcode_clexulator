#ifndef CASM_unittest_TestClexulatorBase
#define CASM_unittest_TestClexulatorBase

#include <filesystem>

#include "autotools.hh"
#include "casm/casm_io/container/json_io.hh"
#include "casm/casm_io/json/jsonFile.hh"
#include "casm/casm_io/json/jsonParser.hh"
#include "casm/clexulator/BaseClexulator.hh"
#include "casm/clexulator/Clexulator.hh"
#include "casm/clexulator/Correlations.hh"
#include "casm/crystallography/BasicStructure.hh"
#include "casm/crystallography/io/BasicStructureIO.hh"
#include "casm/global/filesystem.hh"
#include "casm/system/RuntimeLibrary.hh"
#include "gtest/gtest.h"
#include "testdir.hh"

namespace test {

namespace {
clexulator::PrimNeighborList read_prim_neighbor_list(jsonParser const &json) {
  Eigen::Matrix3l weight_matrix;
  from_json(weight_matrix, json["weight_matrix"]);

  std::set<int> sublat_indices;
  from_json(sublat_indices, json["sublat_indices"]);

  int n_sublattices = json["n_sublattices"].get<int>();

  return clexulator::PrimNeighborList(weight_matrix, sublat_indices.begin(),
                                      sublat_indices.end(), n_sublattices);
}
}  // namespace

class TestClexulatorBase : public testing::Test {
 protected:
  TestClexulatorBase(std::string _clexulator_name, std::string _test_subdir)
      : clexulator_name(_clexulator_name),
        test_data_dir(test::data_dir("clexulator") / _test_subdir),
        meta(test_data_dir / "meta.json"),
        prim(std::make_shared<xtal::BasicStructure const>(
            read_prim(meta["prim"], TOL))),
        prim_neighbor_list(read_prim_neighbor_list(meta["neighbor_list"])),
        compile_opt(
            RuntimeLibrary::default_cxx().first + " " +
            RuntimeLibrary::default_cxxflags().first + " " +
            include_path(RuntimeLibrary::default_casm_includedir().first) +
            " " + include_path(autotools::abs_includedir())),
        so_opt(RuntimeLibrary::default_cxx().first + " " +
               RuntimeLibrary::default_soflags().first + " " +
               link_path(RuntimeLibrary::default_casm_libdir().first) + " " +
               link_path(autotools::abs_libdir()) + " " + "-lcasm_clexulator "),
        tmpdir(),
        clexulator(make_clexulator()) {}

  std::string clexulator_name;
  fs::path test_data_dir;
  jsonFile meta;
  std::shared_ptr<xtal::BasicStructure const> prim;
  clexulator::PrimNeighborList prim_neighbor_list;

  // configure with (in order of priority):
  // - CASM_CXX, CXX, default="c++"
  // - CASM_CXXFLAGS, default="-O3 -Wall -fPIC --std=c++17"
  // - CASM_SOFLAGS, default="-shared"

  std::string compile_opt;
  std::string so_opt;
  TmpDir tmpdir;
  clexulator::Clexulator clexulator;

  clexulator::Clexulator make_clexulator() {
    // tmpdir.do_not_remove_on_destruction();

    std::string src_filename = clexulator_name + ".cc";
    fs::copy_file(test_data_dir / "basis_sets" / "bset.default" / src_filename,
                  tmpdir.path() / src_filename);

    return clexulator::make_clexulator(clexulator_name, tmpdir.path(),
                                       prim_neighbor_list, compile_opt, so_opt);
  }
};

}  // namespace test

#endif
