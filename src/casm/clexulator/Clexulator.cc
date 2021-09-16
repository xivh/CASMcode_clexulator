#include "casm/clexulator/Clexulator.hh"

#include <filesystem>

#include "casm/casm_io/Log.hh"
#include "casm/clexulator/ClexParamPack.hh"
#include "casm/system/RuntimeLibrary.hh"

namespace CASM {
namespace clexulator {

/// \brief Construct a Clexulator
Clexulator::Clexulator(std::string _name,
                       std::unique_ptr<clexulator::BaseClexulator> _clex,
                       std::shared_ptr<RuntimeLibrary> _lib)
    : m_name(_name), m_clex(std::move(_clex)), m_lib(_lib) {}

Clexulator::~Clexulator() {
  // ensure Clexulator is deleted before library
  m_clex.reset();
}

namespace Clexulator_impl {

void print_runtime_lib_options_help(std::ostream &sout) {
  sout << "Error compiling clexulator. To fix: \n";
  sout << "  - Check compiler error messages.\n";
  sout << "  - Check compiler options with 'casm settings -l'\n";
  sout << "    - Update compiler options with 'casm settings "
          "--set-compile-options '...options...'\n";
  sout << "    - Make sure the casm headers can be found by including "
          "'-I/path/to/casm'\n";
};

/// Make shared_ptr<RuntimeLibrary>, logging progress and errors
std::shared_ptr<RuntimeLibrary> make_shared_runtime_lib(
    std::string filename_base, std::string compile_options,
    std::string so_options, std::string compile_msg) {
  log().compiling<Log::standard>(filename_base + ".cc");
  log().begin_lap();
  log() << compile_msg << std::endl;
  try {
    std::shared_ptr<RuntimeLibrary> result = std::make_shared<RuntimeLibrary>(
        filename_base, compile_options, so_options);
    log() << "compile time: " << log().lap_time() << " (s)\n" << std::endl;
    return result;
  } catch (runtime_lib_compile_error &e) {
    e.print(err_log());
    print_runtime_lib_options_help(log());
    throw;
  } catch (runtime_lib_shared_error &e) {
    e.print(err_log());
    print_runtime_lib_options_help(log());
    throw;
  } catch (std::exception &e) {
    print_runtime_lib_options_help(log());
    throw;
  }
}

}  // namespace Clexulator_impl

/// \brief Construct a Clexulator
///
/// \param name Class name for the Clexulator, typically 'X_Clexulator', with X
///             referring to the system of interest (i.e. 'NiAl_Clexulator')
/// \param dirpath Directory containing the source code and compiled object
/// file. \param nlist, A PrimNeighborList to be updated to include the
/// neighborhood
///        of this Clexulator
/// \param compile_options Compilation options
/// \param so_options Shared library compilation options
///
/// If 'name' is 'X_Clexulator', and 'dirpath' is '/path/to':
/// - Looks for '/path/to/X_Clexulator.so' and tries to load it.
/// - If not found, looks for 'path/to/X_Clexulator.cc' and tries to compile and
/// load it.
/// - If unsuccesful, will throw std::runtime_error.
///
/// The Clexulator has shared ownership of the loaded library,
/// so it is preferrable to duplicate the Clexulator using it's copy constructor
/// rather than construct another using this constructor which will re-load the
/// library.
///
/// \brief Clexulator factor function
Clexulator make_clexulator(std::string name, fs::path dirpath,
                           PrimNeighborList &nlist, std::string compile_options,
                           std::string so_options) {
  // Construct the RuntimeLibrary that will store the loaded clexulator library
  std::shared_ptr<RuntimeLibrary> lib;
  try {
    lib = Clexulator_impl::make_shared_runtime_lib(
        (dirpath / name).string(), compile_options, so_options,
        "compile time depends on how many basis functions are included");
  } catch (std::exception &e) {
    log() << "Clexulator construction failed: could not construct runtime "
             "library."
          << std::endl;
    throw;
  }

  // Get the Clexulator factory function
  std::function<clexulator::BaseClexulator *(void)> factory;
  factory =
      lib->get_function<clexulator::BaseClexulator *(void)>("make_" + name);

  // Use the factory to construct the clexulator and store it in m_clex
  std::unique_ptr<clexulator::BaseClexulator> clex(factory());

  // Check nlist has the right weight_matrix
  if (nlist.weight_matrix() != clex->weight_matrix()) {
    err_log() << "Error in Clexulator constructor: weight matrix of neighbor "
                 "list does not match the weight matrix used to print the "
                 "clexulator."
              << std::endl;
    err_log() << "nlist weight matrix: \n"
              << nlist.weight_matrix() << std::endl;
    err_log() << "clexulator weight matrix: \n"
              << clex->weight_matrix() << std::endl;
    throw std::runtime_error(
        "Error in Clexulator constructor: weight matrix of neighbor list does "
        "not match the weight matrix used to print the clexulator. Try 'casm "
        "bset -uf'.");
  }

  // Expand the given neighbor list as necessary
  nlist.expand(clex->neighborhood().begin(), clex->neighborhood().end());

  return Clexulator(name, std::move(clex), lib);
}

}  // namespace clexulator
}  // namespace CASM
