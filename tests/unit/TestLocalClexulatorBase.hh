#ifndef CASM_unittest_TestLocalClexulatorBase
#define CASM_unittest_TestLocalClexulatorBase

#include <filesystem>

#include "autotools.hh"
#include "casm/casm_io/container/json_io.hh"
#include "casm/casm_io/json/jsonFile.hh"
#include "casm/casm_io/json/jsonParser.hh"
#include "casm/clexulator/BaseClexulator.hh"
#include "casm/clexulator/Clexulator.hh"
#include "casm/crystallography/BasicStructure.hh"
#include "casm/crystallography/io/BasicStructureIO.hh"
#include "casm/global/filesystem.hh"
#include "casm/system/RuntimeLibrary.hh"
#include "gtest/gtest.h"
#include "testdir.hh"

namespace test {

namespace {

clexulator::PrimNeighborList read_local_prim_neighbor_list(
    jsonParser const &json) {
  Eigen::Matrix3l weight_matrix;
  from_json(weight_matrix, json["weight_matrix"]);

  std::set<int> sublat_indices;
  from_json(sublat_indices, json["sublat_indices"]);

  int n_sublattices = json["n_sublattices"].get<int>();

  return clexulator::PrimNeighborList(weight_matrix, sublat_indices.begin(),
                                      sublat_indices.end(), n_sublattices);
}

void copy_local_clexulator(fs::path src_basis_sets_dir,
                           fs::path dest_basis_sets_dir, std::string bset_name,
                           std::string clexulator_name);

}  // namespace

class TestLocalClexulatorBase : public testing::Test {
 protected:
  TestLocalClexulatorBase(std::string _clexulator_name,
                          std::string _test_subdir,
                          std::vector<std::string> const &_bset_names)
      : clexulator_name(_clexulator_name),
        test_data_dir(test::data_dir("clexulator") / _test_subdir),
        meta(test_data_dir / "meta.json"),
        prim(std::make_shared<xtal::BasicStructure const>(
            read_prim(meta["prim"], TOL))),
        prim_neighbor_list(
            read_local_prim_neighbor_list(meta["neighbor_list"])),
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
        bset_names(_bset_names),
        clexulator() {
    make_clexulator();
  }

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

  // i.e. {"hop0", "hop1"} to read local clexulators from "bset.hop0",
  // "bset.hop1", etc.
  std::vector<std::string> bset_names;

  // clexulator[bset_name] ->
  //     std::shared_ptr<std::vector<clexulator::Clexulator> const>
  std::map<std::string,
           std::shared_ptr<std::vector<clexulator::Clexulator> const> >
      clexulator;

  void make_clexulator() {
    // copy files to tmpdir for use
    for (std::string const &bset_name : bset_names) {
      copy_local_clexulator(test_data_dir / "basis_sets",
                            tmpdir.path() / "basis_sets", bset_name,
                            clexulator_name);
    }

    // make Clexulator
    typedef std::vector<clexulator::Clexulator> clexvec;
    for (std::string const &bset_name : bset_names) {
      clexulator[bset_name] =
          std::make_shared<clexvec const>(clexulator::make_local_clexulator(
              clexulator_name,
              tmpdir.path() / "basis_sets" / ("bset." + bset_name),
              prim_neighbor_list, compile_opt, so_opt));
    }
  }
};

namespace {

void copy_local_clexulator(fs::path src_basis_sets_dir,
                           fs::path dest_basis_sets_dir, std::string bset_name,
                           std::string clexulator_name) {
  std::string src_filename = clexulator_name + ".cc";
  fs::path src_dir = src_basis_sets_dir / (std::string("bset.") + bset_name);
  fs::path dest_dir = dest_basis_sets_dir / (std::string("bset.") + bset_name);

  Index i = 0;
  fs::path equiv_dir = fs::path(std::to_string(i));
  while (fs::exists(src_dir / equiv_dir)) {
    if (!fs::exists(src_dir / equiv_dir / src_filename)) {
      break;
    }
    fs::create_directories(dest_dir / equiv_dir);
    fs::copy_file(src_dir / equiv_dir / src_filename,
                  dest_dir / equiv_dir / src_filename);
    ++i;
    equiv_dir = fs::path(std::to_string(i));
  }
}

}  // namespace
}  // namespace test

#endif
