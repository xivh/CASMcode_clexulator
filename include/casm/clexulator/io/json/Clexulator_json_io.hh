#ifndef CASM_clexulator_Clexulator_json_io
#define CASM_clexulator_Clexulator_json_io

#include <memory>
#include <vector>

namespace CASM {
template <typename T>
class InputParser;

namespace clexulator {
class Clexulator;
class PrimNeighborList;

void parse(InputParser<Clexulator> &parser,
           std::shared_ptr<PrimNeighborList> &prim_neighbor_list);

void parse(InputParser<std::vector<Clexulator>> &parser,
           std::shared_ptr<PrimNeighborList> &prim_neighbor_list);

}  // namespace clexulator
}  // namespace CASM

#endif
