#include <pybind11/eigen.h>
#include <pybind11/operators.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

// nlohmann::json binding
#define JSON_USE_IMPLICIT_CONVERSIONS 0
#include "pybind11_json/pybind11_json.hpp"

// CASM
#include "casm/casm_io/Log.hh"
#include "casm/casm_io/json/InputParser_impl.hh"
#include "casm/casm_io/json/jsonParser.hh"
#include "casm/clexulator/BaseClexulator.hh"
#include "casm/clexulator/Clexulator.hh"
#include "casm/clexulator/ClusterExpansion.hh"
#include "casm/clexulator/ConfigDoFValuesTools_impl.hh"
#include "casm/clexulator/Correlations.hh"
#include "casm/clexulator/LocalCorrelations.hh"
#include "casm/clexulator/NeighborList.hh"
#include "casm/clexulator/SparseCoefficients.hh"
#include "casm/clexulator/io/json/Clexulator_json_io.hh"

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace py = pybind11;

/// CASM - Python binding code
namespace CASMpy {

using namespace CASM;

struct PrimDoFInfo {
  PrimDoFInfo(xtal::BasicStructure const &basic_structure)
      : n_sublat(basic_structure.basis().size()),
        global_dof_info(clexulator::make_global_dof_info(basic_structure)),
        local_dof_info(clexulator::make_local_dof_info(basic_structure)) {}

  Index n_sublat;
  std::map<DoFKey, xtal::DoFSet> global_dof_info;
  std::map<DoFKey, std::vector<xtal::SiteDoFSet>> local_dof_info;
};

// Need to allow constructing empty
// std::shared_ptr<clexulator::PrimNeighborList>, but PyBind11 won't allow it,
// so use this wrapper class
struct PrimNeighborListWrapper {
  std::shared_ptr<clexulator::PrimNeighborList> prim_neighbor_list;
};

std::shared_ptr<PrimNeighborListWrapper> make_prim_neighbor_list(
    std::optional<Eigen::Matrix3l> const &weight_matrix,
    std::optional<std::vector<int>> sublattice_indices,
    std::optional<int> total_n_sublattice) {
  auto wrapper = std::make_shared<PrimNeighborListWrapper>();
  if (!weight_matrix.has_value()) {
    return wrapper;
  }

  std::set<int> _sublattice_indices(sublattice_indices.value().begin(),
                                    sublattice_indices.value().end());
  wrapper->prim_neighbor_list = std::make_shared<clexulator::PrimNeighborList>(
      weight_matrix.value(), _sublattice_indices.begin(),
      _sublattice_indices.end(), total_n_sublattice.value());
  std::cout << wrapper->prim_neighbor_list->size() << "  size  " << std::endl;
  return wrapper;
}

std::shared_ptr<clexulator::SuperNeighborList> make_super_neighbor_list(
    Eigen::Matrix3l const &transformation_matrix_to_super,
    PrimNeighborListWrapper const &wrapper) {
  if (wrapper.prim_neighbor_list == nullptr) {
    throw std::runtime_error(
        "Error in make_super_neighbor_list: prim_neighbor_list is not "
        "initialized");
  }
  return std::make_shared<clexulator::SuperNeighborList>(
      transformation_matrix_to_super, *wrapper.prim_neighbor_list);
}

std::shared_ptr<clexulator::Clexulator> make_empty_clexulator() {
  return std::make_shared<clexulator::Clexulator>();
}

std::shared_ptr<clexulator::Clexulator> make_clexulator(
    std::string source, std::shared_ptr<PrimNeighborListWrapper> wrapper,
    std::optional<std::string> compile_options,
    std::optional<std::string> so_options) {
  // Use JSON parser to avoid duplication and give nice error messages
  jsonParser json;
  json["source"] = source;
  if (compile_options.has_value()) {
    json["compile_options"] = compile_options.value();
  }
  if (so_options.has_value()) {
    json["so_options"] = compile_options.value();
  }
  InputParser<clexulator::Clexulator> parser(json, wrapper->prim_neighbor_list);
  std::runtime_error error_if_invalid{
      "Error in libcasm.clexulator.make_clexulator"};
  report_and_throw_if_invalid(parser, CASM::log(), error_if_invalid);
  return std::make_shared<clexulator::Clexulator>(std::move(*parser.value));
}

struct LocalClexulatorWrapper {
  std::shared_ptr<std::vector<clexulator::Clexulator>> local_clexulator;
};

std::shared_ptr<LocalClexulatorWrapper> make_empty_local_clexulator() {
  auto lclex_wrapper = std::make_shared<LocalClexulatorWrapper>();
  lclex_wrapper->local_clexulator =
      std::make_shared<std::vector<clexulator::Clexulator>>();
  return lclex_wrapper;
}

std::shared_ptr<LocalClexulatorWrapper> make_local_clexulator(
    std::string source, std::shared_ptr<PrimNeighborListWrapper> wrapper,
    std::optional<std::string> compile_options,
    std::optional<std::string> so_options) {
  // Use JSON parser to avoid duplication and give nice error messages
  jsonParser json;
  json["source"] = source;
  if (compile_options.has_value()) {
    json["compile_options"] = compile_options.value();
  }
  if (so_options.has_value()) {
    json["so_options"] = compile_options.value();
  }
  InputParser<std::vector<clexulator::Clexulator>> parser(
      json, wrapper->prim_neighbor_list);
  std::runtime_error error_if_invalid{
      "Error in libcasm.clexulator.make_local_clexulator"};
  report_and_throw_if_invalid(parser, CASM::log(), error_if_invalid);

  auto lclex_wrapper = std::make_shared<LocalClexulatorWrapper>();
  lclex_wrapper->local_clexulator =
      std::make_shared<std::vector<clexulator::Clexulator>>(
          std::move(*parser.value));
  return lclex_wrapper;
}

std::shared_ptr<clexulator::ClusterExpansion> make_cluster_expansion(
    std::shared_ptr<clexulator::SuperNeighborList const> const
        &supercell_neighbor_list,
    std::shared_ptr<clexulator::Clexulator const> const &_clexulator,
    clexulator::SparseCoefficients const &_coefficients,
    clexulator::ConfigDoFValues const *_dof_values) {
  return std::make_shared<clexulator::ClusterExpansion>(
      clexulator::ClusterExpansion(supercell_neighbor_list, _clexulator,
                                   _coefficients, _dof_values));
}
}  // namespace CASMpy

PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);

PYBIND11_MODULE(_clexulator, m) {
  using namespace CASMpy;

  m.doc() = R"pbdoc(
        Methods for evaluating functions of configurations

        libcasm.clexulator
        ------------------

        The libcasm.clexulator package has a data structure for storing configuration degree of freedom (DoF) values, and methods for evaluating cluster expansion basis functions, order parameters, and other functions of a configuration.

    )pbdoc";
  py::module::import("libcasm.xtal");

  py::class_<clexulator::ConfigDoFValues>(m, "ConfigDoFValues", R"pbdoc(
      Data structure holding occupation, local, and global degree of freedom (DoF) values.

      Notes
      -----

      - ConfigDoFValues may be copied with `copy.copy` or `copy.deepcopy`.

      )pbdoc")
      .def(py::init<>(),
           R"pbdoc(
          Construct uninitialized ConfigDoFValues
          )pbdoc")
      .def(
          "occupation",
          [](clexulator::ConfigDoFValues const &dof_values) {
            return dof_values.occupation;
          },
          "Returns the site occupation values, as indices into the allowed "
          "occupants on the corresponding basis site.")
      .def(
          "set_occupation",
          [](clexulator::ConfigDoFValues &dof_values,
             Eigen::VectorXi const &occupation) {
            return dof_values.occupation = occupation;
          },
          "Sets the site occupation values.")
      .def(
          "occ",
          [](clexulator::ConfigDoFValues const &dof_values, Index l) {
            return dof_values.occupation(l);
          },
          py::arg("l"),
          "Returns the site occupation value on the specified site.")
      .def(
          "set_occ",
          [](clexulator::ConfigDoFValues &dof_values, Index l, int s) {
            dof_values.occupation(l) = s;
          },
          py::arg("l"), py::arg("s"),
          "Set the site occupation value on site `l` to value `s`. Values are "
          "not checked for validity.")
      .def(
          "global_dof_keys",
          [](clexulator::ConfigDoFValues const &dof_values) {
            std::vector<std::string> keys;
            for (auto const &dof : dof_values.global_dof_values) {
              keys.push_back(dof.first);
            }
            return keys;
          },
          "Returns global DoF keys.")
      .def(
          "global_dof_values",
          [](clexulator::ConfigDoFValues const &dof_values, std::string key) {
            return dof_values.global_dof_values.at(key);
          },
          py::arg("key"), "Returns global DoF values of type `key`.")
      .def(
          "set_global_dof_values",
          [](clexulator::ConfigDoFValues &dof_values, std::string key,
             Eigen::VectorXd const &value) {
            dof_values.global_dof_values.at(key) = value;
          },
          py::arg("key"), py::arg("value"),
          "Set global DoF values of type `key`. Key must already exist.")
      .def(
          "insert_or_assign_global_dof_values",
          [](clexulator::ConfigDoFValues &dof_values, std::string key,
             Eigen::VectorXd const &value) {
            dof_values.global_dof_values.insert_or_assign(key, value);
          },
          py::arg("key"), py::arg("value"),
          "Insert or assign global DoF values of type `key`.")
      .def(
          "local_dof_keys",
          [](clexulator::ConfigDoFValues const &dof_values) {
            std::vector<std::string> keys;
            for (auto const &dof : dof_values.local_dof_values) {
              keys.push_back(dof.first);
            }
            return keys;
          },
          "Returns local DoF keys.")
      .def(
          "local_dof_values",
          [](clexulator::ConfigDoFValues const &dof_values, std::string key) {
            return dof_values.local_dof_values.at(key);
          },
          py::arg("key"), "Returns local DoF values of type `key`.")
      .def(
          "set_local_dof_values",
          [](clexulator::ConfigDoFValues &dof_values, std::string key,
             Eigen::MatrixXd const &value) {
            dof_values.local_dof_values.at(key) = value;
          },
          py::arg("key"), py::arg("value"),
          "Set local DoF values of type `key`. Key must already exist.")
      .def(
          "insert_or_assign_local_dof_values",
          [](clexulator::ConfigDoFValues &dof_values, std::string key,
             Eigen::MatrixXd const &value) {
            dof_values.local_dof_values.insert_or_assign(key, value);
          },
          py::arg("key"), py::arg("value"),
          "Insert or assign local DoF values of type `key`.")
      .def(
          "local_dof_site_value",
          [](clexulator::ConfigDoFValues const &dof_values, std::string key,
             Index l) { return dof_values.local_dof_values.at(key).col(l); },
          py::arg("key"), py::arg("l"),
          "Returns local DoF values of type `key` on site `l`.")
      .def(
          "set_local_dof_site_value",
          [](clexulator::ConfigDoFValues &dof_values, std::string key, Index l,
             Eigen::VectorXd const &site_dof_value) {
            dof_values.local_dof_values.at(key).col(l) = site_dof_value;
          },
          py::arg("key"), py::arg("l"), py::arg("site_dof_value"),
          "Set the local DoF values of type `key` on site `l`. Key must "
          "already exist.")
      .def(
          "set",
          [](clexulator::ConfigDoFValues &self,
             clexulator::ConfigDoFValues const &other) { self = other; },
          "Assign all values from other", py::arg("other"))
      .def("__copy__",
           [](clexulator::ConfigDoFValues const &self) {
             return clexulator::ConfigDoFValues(self);
           })
      .def("__deepcopy__", [](clexulator::ConfigDoFValues const &self) {
        return clexulator::ConfigDoFValues(self);
      });

  m.def(
      "make_default_standard_config_dof_values",
      [](xtal::BasicStructure const &xtal_prim, Index n_unitcells) {
        PrimDoFInfo dof_info(xtal_prim);
        return clexulator::make_default_standard_config_dof_values(
            dof_info.n_sublat, n_unitcells, dof_info.global_dof_info,
            dof_info.local_dof_info);
      },
      "Make ConfigDoFValues, expressed in the standard basis, initialized with "
      "value zero.",
      py::arg("xtal_prim"), py::arg("n_unitcells"));

  m.def(
      "make_default_config_dof_values",
      [](xtal::BasicStructure const &xtal_prim, Index n_unitcells) {
        PrimDoFInfo dof_info(xtal_prim);
        return clexulator::make_default_config_dof_values(
            dof_info.n_sublat, n_unitcells, dof_info.global_dof_info,
            dof_info.local_dof_info);
      },
      "Make ConfigDoFValues, expressed in the prim basis, initialized with "
      "value zero.",
      py::arg("xtal_prim"), py::arg("n_unitcells"));

  m.def(
      "to_standard_values",
      [](clexulator::ConfigDoFValues const &dof_values,
         xtal::BasicStructure const &xtal_prim, Index n_unitcells) {
        PrimDoFInfo dof_info(xtal_prim);
        return clexulator::to_standard_values(
            dof_values, dof_info.n_sublat, n_unitcells,
            dof_info.global_dof_info, dof_info.local_dof_info);
      },
      "Copy of ConfigDoFValues and convert from the prim basis to the standard "
      "basis.",
      py::arg("dof_values"), py::arg("xtal_prim"), py::arg("n_unitcells"));

  m.def(
      "from_standard_values",
      [](clexulator::ConfigDoFValues const &dof_values,
         xtal::BasicStructure const &xtal_prim, Index n_unitcells) {
        PrimDoFInfo dof_info(xtal_prim);
        return clexulator::from_standard_values(
            dof_values, dof_info.n_sublat, n_unitcells,
            dof_info.global_dof_info, dof_info.local_dof_info);
      },
      "Copy of ConfigDoFValues and convert from the standard basis to the prim "
      "basis.",
      py::arg("dof_values"), py::arg("xtal_prim"), py::arg("n_unitcells"));

  py::class_<PrimNeighborListWrapper, std::shared_ptr<PrimNeighborListWrapper>>(
      m, "PrimNeighborList", R"pbdoc(
      A neighbor list, generated for a Prim, relative to the origin unit cell.

      The PrimNeighborList defines indices to use to reference a site relative
      to a particular unit cell. These can be used to write functions of site
      degrees of freedom (DoF) in terms of a local environment that do not
      depend on the choice of supercell. The PrimNeighborList is then used to
      construct a SuperNeighborList, which defines a neighbor list for a
      particular supercell in terms of linear site indices in that supercell.
      )pbdoc")
      .def(py::init(&make_prim_neighbor_list),
           R"pbdoc(
          Constructor

          Parameters
          ----------
          lattice_weight_matrix : Optional[array_like] = None
              If `lattice_weight_matrix` is None (default), then an
              empty PrimNeighborList is constructed, which will be
              populated appropriately when the first Clexulator is
              constructed. Otherwise, the `lattice_weight_matrix`
              can be specified explicitly.

              In the neighbor list, unit cells are ordered by the distance,
              :math:`x^{\mathsf{T} W x`, where :math:`x` is the integer
              unit cell coordinates, and :math:`W` is the lattice weight
              matrix.

              An appropriate value for the weight matrix of a given lattice
              can be generated using
              :func:`~libcasm.clexulator.PrimNeighborList.make_weight_matrix`.

              In a Clexulator, cluster expansion basis functions are written
              using a particular choice of neighbor list and are incorrect
              if a different lattice weight matrix is used. Therefore,
              the value of the lattice weight matrix is stored in the
              Clexulator file and can be obtained using
              :func:`~libcasm.clexulator.Clexulator.weight_matrix`.
          sublattice_indices: Optional[list[int]] = None
              Sublattice indices of sites that are included in the neighbor
              list. Allows skipping sublattices that have no degrees of
              freedom (DoF). Required when `lattice_weight_matrix` is provided.
          total_n_sublattice: Optional[int] = None
              The total number of sublattices in the relevant Prim.
              Required when `lattice_weight_matrix` is provided.

          )pbdoc",
           py::arg("lattice_weight_matrix") = std::nullopt,
           py::arg("sublattice_indices") = std::nullopt,
           py::arg("total_n_sublattice") = std::nullopt)
      .def_static("make_weight_matrix",
                  &clexulator::PrimNeighborList::make_weight_matrix,
                  R"pbdoc(
          Make a PrimNeighborList weighting matrix appropriate for a
          particular lattice

          Parameters
          ----------
          lattice_column_vector_matrix : array_like, shape=(3,3)
              Lattice vectors as columns of a matrix
          max_element_value: int = 10
              Maximum weight matrix element value
          tol: float = libcasm.xtal.TOL
              Floating point tolerance

          Returns
          -------
          lattice_weight_matrix: array_like, shape=(3,3), dtype=int
              Weight matrix, that defines the shape of neighborhood that
              orders neighbors. In the
              :class:`~libcasm.clexulator.PrimNeighborList`, unit cells
              are ordered by the distance, :math:`x^{\mathsf{T} W x`,
              where :math:`x` is the integer unit cell coordinates. The
              weight matrix is constructed such that
              :math:`x^{\mathsf{T} W x` is approximately spherical in
              Cartesian coordinates, subject to the `max_element_value`.
          )pbdoc",
                  py::arg("lattice_column_vector_matrix"),
                  py::arg("max_element_value") = 10,
                  py::arg("tol") = CASM::TOL);

  //
  py::class_<clexulator::SuperNeighborList,
             std::shared_ptr<clexulator::SuperNeighborList>>(
      m, "SuperNeighborList", R"pbdoc(
      A supercell-specific neighbor list

      Given a PrimNeighborList, the SuperNeighborList gives the associated
      linear site indices for a particular supercell, for each unit cell in
      the supercell.
      )pbdoc")
      .def(py::init(&make_super_neighbor_list),
           R"pbdoc(
          Constructor

          Parameters
          ----------
          transformation_matrix_to_super: numpy.ndarray[numpy.int64[3, 3]]
              The integer tranformation matrix T such that S = L @ T, where
              S and L are the lattice vectors, as columns of a matrix, of
              the superlattice and prim lattice, respectively.

          prim_neighbor_list: PrimNeighborList
              The PrimNeighborList used to determine the SuperNeighborList
              linear site indices.

          )pbdoc",
           py::arg("transformation_matrix_to_super"),
           py::arg("prim_neighbor_list"));

  //
  py::class_<clexulator::Clexulator, std::shared_ptr<clexulator::Clexulator>>(
      m, "Clexulator", R"pbdoc(
      Evaluate basis set functions

      CASM generates code for very efficient calculation of basis functions.
      This source code may be compiled, linked, and used at runtime via Clexulator.
      )pbdoc")
      .def(py::init(&make_empty_clexulator),
           R"pbdoc(
          Construct an empty Clexulator

          Use the factory functions :func:`~libcasm.clexulator.make_clexulator` or :func:`~libcasm.clexulator.make_local_clexulator` to construct Clexulator from source code.
          )pbdoc")
      .def(
          "n_functions",
          [](clexulator::Clexulator const &clexulator) {
            return clexulator.corr_size();
          },
          "Return the number of basis functions")
      .def(
          "n_point_corr",
          [](clexulator::Clexulator const &clexulator) {
            return clexulator.n_point_corr();
          },
          "Return point correlations")
      .def(
          "weight_matrix",
          [](clexulator::Clexulator const &clexulator) {
            return clexulator.weight_matrix();
          },
          "Weight matrix used for ordering the neighbor list")
      .def(
          "n_sublattices",
          [](clexulator::Clexulator const &clexulator) {
            return clexulator.n_sublattices();
          },
          "Total number of sublattices in the Prim")
      .def(
          "sublat_indices",
          [](clexulator::Clexulator const &clexulator) {
            return clexulator.sublat_indices();
          },
          "Sublat indices in the Prim");
  //
  py::class_<LocalClexulatorWrapper, std::shared_ptr<LocalClexulatorWrapper>>(
      m, "LocalClexulator", R"pbdoc(
      Evaluate local basis set functions

      CASM generates code for very efficient calculation of basis functions.
      This source code may be compiled, linked, and used at runtime via Clexulator.
      The LocalClexulator contains one Clexulator for each equivalent local basis set.
      )pbdoc")
      .def(py::init(&make_empty_local_clexulator),
           R"pbdoc(
          Construct an empty LocalClexulator

          Use the factory functions :func:`~libcasm.clexulator.make_clexulator` or :func:`~libcasm.clexulator.make_local_clexulator` to construct Clexulator from source code.
          )pbdoc")
      .def(
          "n_functions",
          [](LocalClexulatorWrapper const &wrapper) {
            return wrapper.local_clexulator->at(0).corr_size();
          },
          "Return the number of basis functions")
      .def(
          "n_equivalents",
          [](LocalClexulatorWrapper const &wrapper) {
            return wrapper.local_clexulator->size();
          },
          "Return the number of equivalent local basis sets");

  m.def("make_clexulator", &make_clexulator,
        R"pbdoc(
      Construct a Clexulator, if necessary compiling from source code

      Parameters
      ----------
      source: str
          Path to a Clexulator source file implementing a basis set.

      prim_neighbor_list: PrimNeighborList
          The PrimNeighborList is expanded as necessary for use with
          the Clexulator.

      compile_options: str = None
          Options used to compile the Clexulator source file, if it is not yet
          compiled. Example: "g++ -O3 -Wall -fPIC --std=c++17 -I/path/to/include".
          The default values can be configured with:

              CASM_CXX:
                  Set compiler; default="g++"
              CASM_CXXFLAGS:
                  Set compiler flags; default="-O3 -Wall -fPIC --std=c++17"
              CASM_INCLUDEDIR:
                  Set include search path, overriding CASM_PREFIX
              CASM_PREFIX:
                  Set include search path to -I$CASM_PREFIX/include; default
                  tries to find "ccasm" or "casm" executables on PATH and
                  checks relative locations

      so_options: str = None
          Options used to compile the Clexulator shared object file, if it is not
          yet compiled. Example: "g++ -shared -L/path/to/lib -lcasm_clexulator "

          The default values can be configured with:

              CASM_CXX:
                  Set compiler; default="g++"
              CASM_SOFLAGS:
                  Set shared object compilation flags; default="-shared"
              CASM_LIBDIR:
                  Set link search path, overriding CASM_PREFIX
              CASM_PREFIX:
                  Set include search path to -L$CASM_PREFIX/lib; default
                  tries to find "ccasm" or "casm" executables on PATH and
                  checks relative locations

      Returns
      -------
      clexulator: Clexulator
          The Clexulator.

      )pbdoc",
        py::arg("source"), py::arg("prim_neighbor_list"),
        py::arg("compile_options") = std::nullopt,
        py::arg("so_options") = std::nullopt);

  m.def("make_local_clexulator", &make_local_clexulator,
        R"pbdoc(
      Construct local Clexulators, if necessary compiling from source code

      Parameters
      ----------
      source: str
          Path to a prototype local Clexulator source file.

      prim_neighbor_list: PrimNeighborList
          The PrimNeighborList is expanded as necessary for use with
          the Clexulator.

      compile_options: str = None
          Options used to compile the Clexulator source file, if it is not yet
          compiled. Example: "g++ -O3 -Wall -fPIC --std=c++17 -I/path/to/include".
          The default values can be configured with:

              CASM_CXX:
                  Set compiler; default="g++"
              CASM_CXXFLAGS:
                  Set compiler flags; default="-O3 -Wall -fPIC --std=c++17"
              CASM_INCLUDEDIR:
                  Set include search path, overriding CASM_PREFIX
              CASM_PREFIX:
                  Set include search path to -I$CASM_PREFIX/include; default
                  tries to find "ccasm" or "casm" executables on PATH and
                  checks relative locations

      so_options: str = None
          Options used to compile the Clexulator shared object file, if it is not
          yet compiled. Example: "g++ -shared -L/path/to/lib -lcasm_clexulator "

          The default values can be configured with:

              CASM_CXX:
                  Set compiler; default="g++"
              CASM_SOFLAGS:
                  Set shared object compilation flags; default="-shared"
              CASM_LIBDIR:
                  Set link search path, overriding CASM_PREFIX
              CASM_PREFIX:
                  Set include search path to -L$CASM_PREFIX/lib; default
                  tries to find "ccasm" or "casm" executables on PATH and
                  checks relative locations

      Returns
      -------
      local_clexulator: LocalClexulator
          A list containing the local Clexulator, one for each
          symmetrically equivalent local basis set.

      )pbdoc",
        py::arg("source"), py::arg("prim_neighbor_list"),
        py::arg("compile_options") = std::nullopt,
        py::arg("so_options") = std::nullopt);

  m.def(
      "calc_intensive_correlations",
      [](std::shared_ptr<clexulator::Clexulator> const &clexulator,
         clexulator::ConfigDoFValues const &config_dof_values,
         std::shared_ptr<clexulator::SuperNeighborList const> const
             &supercell_neighbor_list,
         std::optional<std::vector<unsigned int>> indices) {
        if (!clexulator->initialized()) {
          throw std::runtime_error(
              "Error in calc_intensive_correlations: clexulator is not "
              "initialized");
        }
        if (indices.has_value()) {
          clexulator::Correlations f(supercell_neighbor_list, clexulator,
                                     *indices, &config_dof_values);
          return f.intensive(f.extensive());
        } else {
          clexulator::Correlations f(supercell_neighbor_list, clexulator,
                                     &config_dof_values);
          return f.intensive(f.extensive());
        }
      },
      R"pbdoc(
      Calculate intensive correlations

      This method is safe and easy to use, but may be slower than using
      the :class:`~libcasm.clexulator.Correlations` class directly.

      Parameters
      ----------
      clexulator: Clexulator
          The Clexulator used to evaluate basis functions
      config_dof_values: ConfigDoFValues
          Configuration degree of freedom (DoF) values input to the basis functions.
      supercell_neighbor_list: SuperNeighborList
          The SuperNeighborList for the supercell consistent with `config_dof_values`.
      indices: Optional[list[int]] = None
          If provided, only calculate the basis functions with corresponding
          indices. The same size correlation array is always returned, but other
          values will be of undefined value.
      Returns
      -------
      intensive_correlations: np.ndarray
          The correlations, normalized per unit cell.

      )pbdoc",
      py::arg("supercell_neighbor_list"), py::arg("clexulator"),
      py::arg("config_dof_values"), py::arg("indices") = std::nullopt);

  m.def(
      "calc_local_correlations",
      [](LocalClexulatorWrapper const &wrapper,
         clexulator::ConfigDoFValues const &config_dof_values,
         std::shared_ptr<clexulator::SuperNeighborList const> const
             &supercell_neighbor_list,
         Index unitcell_index, Index equivalent_index,
         std::optional<std::vector<unsigned int>> indices) {
        if (wrapper.local_clexulator->size() == 0) {
          throw std::runtime_error(
              "Error in calc_local_correlations: local_clexulator is not "
              "initialized");
        }
        if (indices.has_value()) {
          clexulator::LocalCorrelations f(supercell_neighbor_list,
                                          wrapper.local_clexulator, *indices,
                                          &config_dof_values);
          return f.local(unitcell_index, equivalent_index);
        } else {
          clexulator::LocalCorrelations f(supercell_neighbor_list,
                                          wrapper.local_clexulator,
                                          &config_dof_values);
          return f.local(unitcell_index, equivalent_index);
        }
      },
      R"pbdoc(
      Calculate local correlations

      This method is safe and easy to use, but may be slower than using
      the :class:`~libcasm.clexulator.LocalCorrelations` class directly.

      Parameters
      ----------
      local_clexulator: LocalClexulator
          The LocalClexulator used to evaluate local basis functions
      config_dof_values: ConfigDoFValues
          Configuration degree of freedom (DoF) values input to the basis functions.
      supercell_neighbor_list: SuperNeighborList
          The SuperNeighborList for the supercell consistent with `config_dof_values`.
      unitcell_index: int
          Linear unit cell index specifying in which unit cell to evaluate the
          local correlations.
      equivalent_index: int
          Index indicating which of the symmetrically local cluster basis sets
          to evaluate.
      indices: Optional[list[int]] = None
          If provided, only calculate the basis functions with corresponding
          indices. The same size correlation array is always returned, but other
          values will be of undefined value.
      Returns
      -------
      local_correlations: np.ndarray
          The local correlations.

      )pbdoc",
      py::arg("supercell_neighbor_list"), py::arg("local_clexulator"),
      py::arg("config_dof_values"), py::arg("unitcell_index"),
      py::arg("equivalent_index"), py::arg("indices") = std::nullopt);

  py::class_<clexulator::SparseCoefficients>(m, "SparseCoefficients", R"pbdoc(
 	Container for non-zero expansion coefficientts
  )pbdoc")
      .def(py::init<>())
      .def_readwrite("index", &clexulator::SparseCoefficients::index)
      .def_readwrite("value", &clexulator::SparseCoefficients::value);

  py::class_<clexulator::ClusterExpansion,
             std::shared_ptr<clexulator::ClusterExpansion>>(m,
                                                            "ClusterExpansion")
      .def(py::init<>(&make_cluster_expansion))
      .def("intensive_value", &clexulator::ClusterExpansion::intensive_value)
      .def("extensive_value", &clexulator::ClusterExpansion::extensive_value);

#ifdef VERSION_INFO
  m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
  m.attr("__version__") = "dev";
#endif
}
