#include <cstddef>

#include "casm/clexulator/BaseClexulator.hh"
#include "casm/clexulator/BasicClexParamPack.hh"
#include "casm/global/eigen.hh"

/****** PROJECT SPECIFICATIONS ******

         ****** prim.json ******

{
  "basis" : [
    {
      "coordinate" : [ 0.000000000000, 0.000000000000, 0.000000000000 ],
      "occupants" : [ "A", "B", "C" ]
    }
  ],
  "coordinate_mode" : "Fractional",
  "lattice_vectors" : [
    [ 0.000000000000, 2.000000000000, 2.000000000000 ],
    [ 2.000000000000, 0.000000000000, 2.000000000000 ],
    [ 2.000000000000, 2.000000000000, 0.000000000000 ]
  ],
  "title" : "FCC_ternary"
}

        ****** bspecs.json ******

{
  "basis_function_specs" : {
    "dof_specs" : {
      "occ" : {
        "site_basis_functions" : "OCCUPATION"
      }
    },
    "dofs" : [ "occ" ],
    "global_max_poly_order" : -1,
    "param_pack_type" : "DEFAULT"
  },
  "cluster_specs" : {
    "method" : "periodic_max_length",
    "params" : {
      "generating_group" : [ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47 ], "orbit_branch_specs" : {
        "0" : {
          "max_length" : 0.000000000000
        },
        "1" : {
          "max_length" : 0.000000000000
        },
        "2" : {
          "max_length" : 4.010000000000
        },
        "3" : {
          "max_length" : 3.010000000000
        }
      },
      "orbit_specs" : [
        {
          "include_subclusters" : true,
          "max_length" : 8.485281374239,
          "min_length" : 2.828427124746,
          "sites" : [
            [ 0, 0, 0, 0 ],
            [ 0, 1, 0, 0 ],
            [ 0, 2, 0, 0 ],
            [ 0, 3, 0, 0 ]
          ]
        },
        {
          "include_subclusters" : true,
          "max_length" : 6.928203230276,
          "min_length" : 2.828427124746,
          "sites" : [
            [ 0, 0, 0, 0 ],
            [ 0, 0, 1, 0 ],
            [ 0, 0, 0, 1 ],
            [ 0, 1, 1, 1 ]
          ]
        }
      ]
    }
  }
}

**/

/// \brief Returns a clexulator::BaseClexulator* owning a
/// OccClexulatorTest_Clexulator_default
extern "C" CASM::clexulator::BaseClexulator *
make_OccClexulatorTest_Clexulator_default();

namespace CASM {
namespace clexulator {

/****** GENERATED CLEXPARAMPACK DEFINITION ******/

typedef BasicClexParamPack ParamPack;

/****** GENERATED CLEXULATOR DEFINITION ******/

class OccClexulatorTest_Clexulator_default : public clexulator::BaseClexulator {
 public:
  OccClexulatorTest_Clexulator_default();

  ~OccClexulatorTest_Clexulator_default();

  ClexParamPack const &param_pack() const override { return m_params; }

  ClexParamPack &param_pack() override { return m_params; }

  template <typename Scalar>
  Scalar eval_bfunc_0_0() const;

  template <typename Scalar>
  Scalar eval_bfunc_1_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_1_1() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_1_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_1_1_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_1_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_1_1_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_2_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_2_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_2_2() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_2_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_2_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_2_2_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_2_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_2_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_2_2_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_3_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_3_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_3_2() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_2_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_3_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_3_2_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_4_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_4_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_4_2() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_2_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_4_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_4_2_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_5_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_5_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_5_2() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_5_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_5_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_5_2_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_5_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_5_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_5_2_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_6_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_6_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_6_2() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_6_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_6_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_6_2_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_6_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_6_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_6_2_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_7_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_7_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_7_2() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_7_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_7_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_7_2_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_7_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_7_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_7_2_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_8_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_8_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_8_2() const;
  template <typename Scalar>
  Scalar eval_bfunc_8_3() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_2_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_3_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_8_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_8_2_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_8_3_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_9_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_9_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_9_2() const;
  template <typename Scalar>
  Scalar eval_bfunc_9_3() const;
  template <typename Scalar>
  Scalar eval_bfunc_9_4() const;
  template <typename Scalar>
  Scalar eval_bfunc_9_5() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_2_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_3_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_4_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_5_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_9_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_9_2_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_9_3_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_9_4_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_9_5_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_10_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_10_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_10_2() const;
  template <typename Scalar>
  Scalar eval_bfunc_10_3() const;
  template <typename Scalar>
  Scalar eval_bfunc_10_4() const;
  template <typename Scalar>
  Scalar eval_bfunc_10_5() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_10_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_10_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_10_2_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_10_3_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_10_4_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_10_5_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_10_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_10_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_10_2_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_10_3_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_10_4_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_10_5_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_11_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_11_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_11_2() const;
  template <typename Scalar>
  Scalar eval_bfunc_11_3() const;
  template <typename Scalar>
  Scalar eval_bfunc_11_4() const;
  template <typename Scalar>
  Scalar eval_bfunc_11_5() const;
  template <typename Scalar>
  Scalar eval_bfunc_11_6() const;
  template <typename Scalar>
  Scalar eval_bfunc_11_7() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_11_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_2_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_3_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_4_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_5_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_6_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_7_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_11_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_11_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_11_2_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_11_3_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_11_4_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_11_5_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_11_6_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_11_7_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_12_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_12_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_12_2() const;
  template <typename Scalar>
  Scalar eval_bfunc_12_3() const;
  template <typename Scalar>
  Scalar eval_bfunc_12_4() const;
  template <typename Scalar>
  Scalar eval_bfunc_12_5() const;
  template <typename Scalar>
  Scalar eval_bfunc_12_6() const;
  template <typename Scalar>
  Scalar eval_bfunc_12_7() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_2_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_3_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_4_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_5_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_6_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_7_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_12_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_12_2_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_12_3_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_12_4_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_12_5_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_12_6_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_12_7_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_13_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_2() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_3() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_4() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_5() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_6() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_7() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_8() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_9() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_10() const;
  template <typename Scalar>
  Scalar eval_bfunc_13_11() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_2_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_3_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_4_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_5_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_6_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_7_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_8_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_9_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_10_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_11_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_2_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_3_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_4_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_5_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_6_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_7_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_8_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_9_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_10_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_11_at_0(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_14_0() const;
  template <typename Scalar>
  Scalar eval_bfunc_14_1() const;
  template <typename Scalar>
  Scalar eval_bfunc_14_2() const;
  template <typename Scalar>
  Scalar eval_bfunc_14_3() const;
  template <typename Scalar>
  Scalar eval_bfunc_14_4() const;
  template <typename Scalar>
  Scalar eval_bfunc_14_5() const;
  template <typename Scalar>
  Scalar eval_bfunc_14_6() const;
  template <typename Scalar>
  Scalar eval_bfunc_14_7() const;
  template <typename Scalar>
  Scalar eval_bfunc_14_8() const;
  template <typename Scalar>
  Scalar eval_bfunc_14_9() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_1_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_2_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_3_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_4_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_5_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_6_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_7_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_8_at_0() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_9_at_0() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_14_1_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_14_2_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_14_3_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_14_4_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_14_5_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_14_6_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_14_7_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_14_8_at_0(int occ_i, int occ_f) const;
  template <typename Scalar>
  Scalar site_deval_bfunc_14_9_at_0(int occ_i, int occ_f) const;

 private:
  // ParamPack object, which stores temporary data for calculations
  mutable ParamPack m_params;

  // typedef for method pointers of scalar type double
  typedef double (
      OccClexulatorTest_Clexulator_default::*BasisFuncPtr_0)() const;

  // typedef for method pointers
  typedef double (OccClexulatorTest_Clexulator_default::*DeltaBasisFuncPtr_0)(
      int, int) const;

  // array of pointers to member functions for calculating basis functions of
  // scalar type double
  BasisFuncPtr_0 m_orbit_func_table_0[75];

  // array of pointers to member functions for calculating flower functions of
  // scalar type double
  BasisFuncPtr_0 m_flower_func_table_0[1][75];

  // array of pointers to member functions for calculating DELTA flower
  // functions of scalar type double
  DeltaBasisFuncPtr_0 m_delta_func_table_0[1][75];

  // Occupation Function tables for basis sites in asymmetric unit 0:
  //   - basis site 0:
  double m_occ_func_0_0[3];
  double m_occ_func_0_1[3];

  // ClexParamPack allocation for evaluated correlations
  ParamPack::Key m_corr_param_key;
  // ClexParamPack allocation for DoF occ
  ParamPack::Key m_occ_site_func_param_key;

  /// \brief Clone the OccClexulatorTest_Clexulator_default
  BaseClexulator *_clone() const override {
    return new OccClexulatorTest_Clexulator_default(*this);
  }

  /// \brief Calculate contribution to global correlations from one unit cell
  /// Result is recorded in ClexParamPack
  void _calc_global_corr_contribution() const override;

  /// \brief Calculate contribution to global correlations from one unit cell
  /// /// Result is recorded in double array starting at corr_begin
  void _calc_global_corr_contribution(double *corr_begin) const override;

  /// \brief Calculate contribution to select global correlations from one unit
  /// cell into ClexParamPack Result is recorded in ClexParamPack
  void _calc_restricted_global_corr_contribution(
      size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  /// \brief Calculate contribution to select global correlations from one unit
  /// cell Result is recorded in double array starting at corr_begin
  void _calc_restricted_global_corr_contribution(
      double *corr_begin, size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  /// \brief Calculate point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the
  /// neighborhood Result is recorded in ClexParamPack
  void _calc_point_corr(int nlist_ind) const override;

  /// \brief Calculate point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the
  /// neighborhood Result is recorded in double array starting at corr_begin
  void _calc_point_corr(int nlist_ind, double *corr_begin) const override;

  /// \brief Calculate select point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the
  /// neighborhood Result is recorded in ClexParamPack
  void _calc_restricted_point_corr(
      int nlist_ind, size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  /// \brief Calculate select point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the
  /// neighborhood Result is recorded in double array starting at corr_begin
  void _calc_restricted_point_corr(
      int nlist_ind, double *corr_begin, size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  /// \brief Calculate the change in point correlations due to changing an
  /// occupant at neighbor site 'nlist_ind' For global clexulators, 'nlist_ind'
  /// only ranges over sites in the cell For local clexulators, 'nlist_ind'
  /// ranges over all sites in the neighborhood Result is recorded in
  /// ClexParamPack
  void _calc_delta_point_corr(int nlist_ind, int occ_i,
                              int occ_f) const override;

  /// \brief Calculate the change in point correlations due to changing an
  /// occupant at neighbor site 'nlist_ind' For global clexulators, 'nlist_ind'
  /// only ranges over sites in the cell For local clexulators, 'nlist_ind'
  /// ranges over all sites in the neighborhood Result is recorded in double
  /// array starting at corr_begin
  void _calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f,
                              double *corr_begin) const override;

  /// \brief Calculate the change in select point correlations due to changing
  /// an occupant at neighbor site 'nlist_ind' For global clexulators,
  /// 'nlist_ind' only ranges over sites in the cell For local clexulators,
  /// 'nlist_ind' ranges over all sites in the neighborhood Result is recorded
  /// in ClexParamPack
  void _calc_restricted_delta_point_corr(
      int nlist_ind, int occ_i, int occ_f, size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  /// \brief Calculate the change in select point correlations due to changing
  /// an occupant at neighbor site 'nlist_ind' For global clexulators,
  /// 'nlist_ind' only ranges over sites in the cell For local clexulators,
  /// 'nlist_ind' ranges over all sites in the neighborhood Result is recorded
  /// in double array starting at corr_begin
  void _calc_restricted_delta_point_corr(
      int nlist_ind, int occ_i, int occ_f, double *corr_begin,
      size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  template <typename Scalar>
  void _global_prepare() const;

  template <typename Scalar>
  void _point_prepare(int nlist_ind) const;

  // Occupation Function evaluators and accessors for basis site 0:
  double const &eval_occ_func_0_0(const int &nlist_ind) const {
    return m_occ_func_0_0[_occ(nlist_ind)];
  }

  double const &occ_func_0_0(const int &nlist_ind) const {
    return m_params.read(m_occ_site_func_param_key, 0, nlist_ind);
  }
  double const &eval_occ_func_0_1(const int &nlist_ind) const {
    return m_occ_func_0_1[_occ(nlist_ind)];
  }

  double const &occ_func_0_1(const int &nlist_ind) const {
    return m_params.read(m_occ_site_func_param_key, 1, nlist_ind);
  }

  // default functions for basis function evaluation
  template <typename Scalar>
  Scalar zero_func() const {
    return Scalar(0.0);
  }

  template <typename Scalar>
  Scalar zero_func(int, int) const {
    return Scalar(0.0);
  }
};

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

OccClexulatorTest_Clexulator_default::OccClexulatorTest_Clexulator_default()
    : BaseClexulator(176, 75, 1) {
  m_occ_func_0_0[0] = 0.0000000000, m_occ_func_0_0[1] = 1.0000000000,
  m_occ_func_0_0[2] = 0.0000000000;

  m_occ_func_0_1[0] = 0.0000000000, m_occ_func_0_1[1] = 0.0000000000,
  m_occ_func_0_1[2] = 1.0000000000;

  m_occ_site_func_param_key = m_params.allocate("occ_site_func", 2, 176, true);

  m_corr_param_key = m_params.allocate("corr", corr_size(), 1, false);

  m_orbit_func_table_0[0] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_0_0<double>;
  m_orbit_func_table_0[1] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_1_0<double>;
  m_orbit_func_table_0[2] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_1_1<double>;
  m_orbit_func_table_0[3] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_2_0<double>;
  m_orbit_func_table_0[4] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_2_1<double>;
  m_orbit_func_table_0[5] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_2_2<double>;
  m_orbit_func_table_0[6] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_3_0<double>;
  m_orbit_func_table_0[7] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_3_1<double>;
  m_orbit_func_table_0[8] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_3_2<double>;
  m_orbit_func_table_0[9] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_4_0<double>;
  m_orbit_func_table_0[10] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_4_1<double>;
  m_orbit_func_table_0[11] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_4_2<double>;
  m_orbit_func_table_0[12] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_5_0<double>;
  m_orbit_func_table_0[13] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_5_1<double>;
  m_orbit_func_table_0[14] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_5_2<double>;
  m_orbit_func_table_0[15] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_6_0<double>;
  m_orbit_func_table_0[16] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_6_1<double>;
  m_orbit_func_table_0[17] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_6_2<double>;
  m_orbit_func_table_0[18] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_7_0<double>;
  m_orbit_func_table_0[19] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_7_1<double>;
  m_orbit_func_table_0[20] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_7_2<double>;
  m_orbit_func_table_0[21] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_8_0<double>;
  m_orbit_func_table_0[22] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_8_1<double>;
  m_orbit_func_table_0[23] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_8_2<double>;
  m_orbit_func_table_0[24] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_8_3<double>;
  m_orbit_func_table_0[25] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_9_0<double>;
  m_orbit_func_table_0[26] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_9_1<double>;
  m_orbit_func_table_0[27] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_9_2<double>;
  m_orbit_func_table_0[28] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_9_3<double>;
  m_orbit_func_table_0[29] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_9_4<double>;
  m_orbit_func_table_0[30] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_9_5<double>;
  m_orbit_func_table_0[31] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_10_0<double>;
  m_orbit_func_table_0[32] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_10_1<double>;
  m_orbit_func_table_0[33] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_10_2<double>;
  m_orbit_func_table_0[34] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_10_3<double>;
  m_orbit_func_table_0[35] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_10_4<double>;
  m_orbit_func_table_0[36] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_10_5<double>;
  m_orbit_func_table_0[37] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_11_0<double>;
  m_orbit_func_table_0[38] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_11_1<double>;
  m_orbit_func_table_0[39] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_11_2<double>;
  m_orbit_func_table_0[40] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_11_3<double>;
  m_orbit_func_table_0[41] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_11_4<double>;
  m_orbit_func_table_0[42] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_11_5<double>;
  m_orbit_func_table_0[43] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_11_6<double>;
  m_orbit_func_table_0[44] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_11_7<double>;
  m_orbit_func_table_0[45] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_12_0<double>;
  m_orbit_func_table_0[46] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_12_1<double>;
  m_orbit_func_table_0[47] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_12_2<double>;
  m_orbit_func_table_0[48] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_12_3<double>;
  m_orbit_func_table_0[49] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_12_4<double>;
  m_orbit_func_table_0[50] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_12_5<double>;
  m_orbit_func_table_0[51] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_12_6<double>;
  m_orbit_func_table_0[52] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_12_7<double>;
  m_orbit_func_table_0[53] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_0<double>;
  m_orbit_func_table_0[54] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_1<double>;
  m_orbit_func_table_0[55] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_2<double>;
  m_orbit_func_table_0[56] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_3<double>;
  m_orbit_func_table_0[57] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_4<double>;
  m_orbit_func_table_0[58] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_5<double>;
  m_orbit_func_table_0[59] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_6<double>;
  m_orbit_func_table_0[60] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_7<double>;
  m_orbit_func_table_0[61] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_8<double>;
  m_orbit_func_table_0[62] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_9<double>;
  m_orbit_func_table_0[63] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_10<double>;
  m_orbit_func_table_0[64] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_13_11<double>;
  m_orbit_func_table_0[65] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_14_0<double>;
  m_orbit_func_table_0[66] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_14_1<double>;
  m_orbit_func_table_0[67] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_14_2<double>;
  m_orbit_func_table_0[68] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_14_3<double>;
  m_orbit_func_table_0[69] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_14_4<double>;
  m_orbit_func_table_0[70] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_14_5<double>;
  m_orbit_func_table_0[71] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_14_6<double>;
  m_orbit_func_table_0[72] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_14_7<double>;
  m_orbit_func_table_0[73] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_14_8<double>;
  m_orbit_func_table_0[74] =
      &OccClexulatorTest_Clexulator_default::eval_bfunc_14_9<double>;

  m_flower_func_table_0[0][0] =
      &OccClexulatorTest_Clexulator_default::zero_func<double>;
  m_flower_func_table_0[0][1] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_1_0_at_0<double>;
  m_flower_func_table_0[0][2] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_1_1_at_0<double>;
  m_flower_func_table_0[0][3] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_2_0_at_0<double>;
  m_flower_func_table_0[0][4] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_2_1_at_0<double>;
  m_flower_func_table_0[0][5] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_2_2_at_0<double>;
  m_flower_func_table_0[0][6] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_3_0_at_0<double>;
  m_flower_func_table_0[0][7] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_3_1_at_0<double>;
  m_flower_func_table_0[0][8] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_3_2_at_0<double>;
  m_flower_func_table_0[0][9] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_4_0_at_0<double>;
  m_flower_func_table_0[0][10] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_4_1_at_0<double>;
  m_flower_func_table_0[0][11] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_4_2_at_0<double>;
  m_flower_func_table_0[0][12] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_5_0_at_0<double>;
  m_flower_func_table_0[0][13] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_5_1_at_0<double>;
  m_flower_func_table_0[0][14] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_5_2_at_0<double>;
  m_flower_func_table_0[0][15] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_6_0_at_0<double>;
  m_flower_func_table_0[0][16] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_6_1_at_0<double>;
  m_flower_func_table_0[0][17] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_6_2_at_0<double>;
  m_flower_func_table_0[0][18] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_7_0_at_0<double>;
  m_flower_func_table_0[0][19] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_7_1_at_0<double>;
  m_flower_func_table_0[0][20] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_7_2_at_0<double>;
  m_flower_func_table_0[0][21] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_8_0_at_0<double>;
  m_flower_func_table_0[0][22] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_8_1_at_0<double>;
  m_flower_func_table_0[0][23] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_8_2_at_0<double>;
  m_flower_func_table_0[0][24] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_8_3_at_0<double>;
  m_flower_func_table_0[0][25] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_0_at_0<double>;
  m_flower_func_table_0[0][26] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_1_at_0<double>;
  m_flower_func_table_0[0][27] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_2_at_0<double>;
  m_flower_func_table_0[0][28] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_3_at_0<double>;
  m_flower_func_table_0[0][29] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_4_at_0<double>;
  m_flower_func_table_0[0][30] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_5_at_0<double>;
  m_flower_func_table_0[0][31] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_0_at_0<double>;
  m_flower_func_table_0[0][32] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_1_at_0<double>;
  m_flower_func_table_0[0][33] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_2_at_0<double>;
  m_flower_func_table_0[0][34] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_3_at_0<double>;
  m_flower_func_table_0[0][35] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_4_at_0<double>;
  m_flower_func_table_0[0][36] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_5_at_0<double>;
  m_flower_func_table_0[0][37] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_0_at_0<double>;
  m_flower_func_table_0[0][38] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_1_at_0<double>;
  m_flower_func_table_0[0][39] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_2_at_0<double>;
  m_flower_func_table_0[0][40] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_3_at_0<double>;
  m_flower_func_table_0[0][41] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_4_at_0<double>;
  m_flower_func_table_0[0][42] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_5_at_0<double>;
  m_flower_func_table_0[0][43] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_6_at_0<double>;
  m_flower_func_table_0[0][44] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_7_at_0<double>;
  m_flower_func_table_0[0][45] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_0_at_0<double>;
  m_flower_func_table_0[0][46] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_1_at_0<double>;
  m_flower_func_table_0[0][47] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_2_at_0<double>;
  m_flower_func_table_0[0][48] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_3_at_0<double>;
  m_flower_func_table_0[0][49] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_4_at_0<double>;
  m_flower_func_table_0[0][50] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_5_at_0<double>;
  m_flower_func_table_0[0][51] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_6_at_0<double>;
  m_flower_func_table_0[0][52] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_7_at_0<double>;
  m_flower_func_table_0[0][53] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_0_at_0<double>;
  m_flower_func_table_0[0][54] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_1_at_0<double>;
  m_flower_func_table_0[0][55] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_2_at_0<double>;
  m_flower_func_table_0[0][56] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_3_at_0<double>;
  m_flower_func_table_0[0][57] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_4_at_0<double>;
  m_flower_func_table_0[0][58] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_5_at_0<double>;
  m_flower_func_table_0[0][59] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_6_at_0<double>;
  m_flower_func_table_0[0][60] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_7_at_0<double>;
  m_flower_func_table_0[0][61] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_8_at_0<double>;
  m_flower_func_table_0[0][62] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_9_at_0<double>;
  m_flower_func_table_0[0][63] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_10_at_0<double>;
  m_flower_func_table_0[0][64] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_11_at_0<double>;
  m_flower_func_table_0[0][65] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_0_at_0<double>;
  m_flower_func_table_0[0][66] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_1_at_0<double>;
  m_flower_func_table_0[0][67] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_2_at_0<double>;
  m_flower_func_table_0[0][68] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_3_at_0<double>;
  m_flower_func_table_0[0][69] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_4_at_0<double>;
  m_flower_func_table_0[0][70] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_5_at_0<double>;
  m_flower_func_table_0[0][71] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_6_at_0<double>;
  m_flower_func_table_0[0][72] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_7_at_0<double>;
  m_flower_func_table_0[0][73] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_8_at_0<double>;
  m_flower_func_table_0[0][74] =
      &OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_9_at_0<double>;

  m_delta_func_table_0[0][0] =
      &OccClexulatorTest_Clexulator_default::zero_func<double>;
  m_delta_func_table_0[0][1] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_1_0_at_0<double>;
  m_delta_func_table_0[0][2] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_1_1_at_0<double>;
  m_delta_func_table_0[0][3] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_2_0_at_0<double>;
  m_delta_func_table_0[0][4] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_2_1_at_0<double>;
  m_delta_func_table_0[0][5] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_2_2_at_0<double>;
  m_delta_func_table_0[0][6] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_3_0_at_0<double>;
  m_delta_func_table_0[0][7] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_3_1_at_0<double>;
  m_delta_func_table_0[0][8] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_3_2_at_0<double>;
  m_delta_func_table_0[0][9] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_4_0_at_0<double>;
  m_delta_func_table_0[0][10] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_4_1_at_0<double>;
  m_delta_func_table_0[0][11] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_4_2_at_0<double>;
  m_delta_func_table_0[0][12] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_5_0_at_0<double>;
  m_delta_func_table_0[0][13] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_5_1_at_0<double>;
  m_delta_func_table_0[0][14] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_5_2_at_0<double>;
  m_delta_func_table_0[0][15] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_6_0_at_0<double>;
  m_delta_func_table_0[0][16] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_6_1_at_0<double>;
  m_delta_func_table_0[0][17] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_6_2_at_0<double>;
  m_delta_func_table_0[0][18] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_7_0_at_0<double>;
  m_delta_func_table_0[0][19] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_7_1_at_0<double>;
  m_delta_func_table_0[0][20] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_7_2_at_0<double>;
  m_delta_func_table_0[0][21] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_8_0_at_0<double>;
  m_delta_func_table_0[0][22] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_8_1_at_0<double>;
  m_delta_func_table_0[0][23] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_8_2_at_0<double>;
  m_delta_func_table_0[0][24] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_8_3_at_0<double>;
  m_delta_func_table_0[0][25] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_0_at_0<double>;
  m_delta_func_table_0[0][26] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_1_at_0<double>;
  m_delta_func_table_0[0][27] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_2_at_0<double>;
  m_delta_func_table_0[0][28] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_3_at_0<double>;
  m_delta_func_table_0[0][29] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_4_at_0<double>;
  m_delta_func_table_0[0][30] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_5_at_0<double>;
  m_delta_func_table_0[0][31] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_0_at_0<double>;
  m_delta_func_table_0[0][32] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_1_at_0<double>;
  m_delta_func_table_0[0][33] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_2_at_0<double>;
  m_delta_func_table_0[0][34] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_3_at_0<double>;
  m_delta_func_table_0[0][35] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_4_at_0<double>;
  m_delta_func_table_0[0][36] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_5_at_0<double>;
  m_delta_func_table_0[0][37] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_0_at_0<double>;
  m_delta_func_table_0[0][38] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_1_at_0<double>;
  m_delta_func_table_0[0][39] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_2_at_0<double>;
  m_delta_func_table_0[0][40] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_3_at_0<double>;
  m_delta_func_table_0[0][41] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_4_at_0<double>;
  m_delta_func_table_0[0][42] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_5_at_0<double>;
  m_delta_func_table_0[0][43] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_6_at_0<double>;
  m_delta_func_table_0[0][44] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_7_at_0<double>;
  m_delta_func_table_0[0][45] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_0_at_0<double>;
  m_delta_func_table_0[0][46] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_1_at_0<double>;
  m_delta_func_table_0[0][47] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_2_at_0<double>;
  m_delta_func_table_0[0][48] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_3_at_0<double>;
  m_delta_func_table_0[0][49] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_4_at_0<double>;
  m_delta_func_table_0[0][50] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_5_at_0<double>;
  m_delta_func_table_0[0][51] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_6_at_0<double>;
  m_delta_func_table_0[0][52] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_7_at_0<double>;
  m_delta_func_table_0[0][53] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_0_at_0<double>;
  m_delta_func_table_0[0][54] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_1_at_0<double>;
  m_delta_func_table_0[0][55] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_2_at_0<double>;
  m_delta_func_table_0[0][56] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_3_at_0<double>;
  m_delta_func_table_0[0][57] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_4_at_0<double>;
  m_delta_func_table_0[0][58] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_5_at_0<double>;
  m_delta_func_table_0[0][59] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_6_at_0<double>;
  m_delta_func_table_0[0][60] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_7_at_0<double>;
  m_delta_func_table_0[0][61] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_8_at_0<double>;
  m_delta_func_table_0[0][62] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_9_at_0<double>;
  m_delta_func_table_0[0][63] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_10_at_0<
          double>;
  m_delta_func_table_0[0][64] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_11_at_0<
          double>;
  m_delta_func_table_0[0][65] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_0_at_0<double>;
  m_delta_func_table_0[0][66] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_1_at_0<double>;
  m_delta_func_table_0[0][67] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_2_at_0<double>;
  m_delta_func_table_0[0][68] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_3_at_0<double>;
  m_delta_func_table_0[0][69] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_4_at_0<double>;
  m_delta_func_table_0[0][70] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_5_at_0<double>;
  m_delta_func_table_0[0][71] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_6_at_0<double>;
  m_delta_func_table_0[0][72] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_7_at_0<double>;
  m_delta_func_table_0[0][73] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_8_at_0<double>;
  m_delta_func_table_0[0][74] =
      &OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_9_at_0<double>;

  m_weight_matrix.row(0) << 2, 1, 1;
  m_weight_matrix.row(1) << 1, 2, 1;
  m_weight_matrix.row(2) << 1, 1, 2;

  m_sublat_indices = std::set<int>{0};

  m_n_sublattices = 1;

  m_neighborhood = std::set<xtal::UnitCell>{
      xtal::UnitCell(-3, 0, 0),   xtal::UnitCell(-3, 0, 3),
      xtal::UnitCell(-3, 1, 1),   xtal::UnitCell(-3, 3, 0),
      xtal::UnitCell(-2, 0, 0),   xtal::UnitCell(-2, 0, 1),
      xtal::UnitCell(-2, 0, 2),   xtal::UnitCell(-2, 1, 0),
      xtal::UnitCell(-2, 1, 1),   xtal::UnitCell(-2, 2, 0),
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, -1, 1),  xtal::UnitCell(-1, -1, 2),
      xtal::UnitCell(-1, -1, 3),  xtal::UnitCell(-1, 0, -1),
      xtal::UnitCell(-1, 0, 0),   xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(-1, 0, 2),   xtal::UnitCell(-1, 1, -1),
      xtal::UnitCell(-1, 1, 0),   xtal::UnitCell(-1, 1, 1),
      xtal::UnitCell(-1, 2, -1),  xtal::UnitCell(-1, 2, 0),
      xtal::UnitCell(-1, 3, -1),  xtal::UnitCell(0, -3, 0),
      xtal::UnitCell(0, -3, 3),   xtal::UnitCell(0, -2, 0),
      xtal::UnitCell(0, -2, 1),   xtal::UnitCell(0, -2, 2),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, -1, 1),   xtal::UnitCell(0, -1, 2),
      xtal::UnitCell(0, 0, -3),   xtal::UnitCell(0, 0, -2),
      xtal::UnitCell(0, 0, -1),   xtal::UnitCell(0, 0, 0),
      xtal::UnitCell(0, 0, 1),    xtal::UnitCell(0, 0, 2),
      xtal::UnitCell(0, 0, 3),    xtal::UnitCell(0, 1, -2),
      xtal::UnitCell(0, 1, -1),   xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(0, 1, 1),    xtal::UnitCell(0, 2, -2),
      xtal::UnitCell(0, 2, -1),   xtal::UnitCell(0, 2, 0),
      xtal::UnitCell(0, 3, -3),   xtal::UnitCell(0, 3, 0),
      xtal::UnitCell(1, -3, 1),   xtal::UnitCell(1, -2, 0),
      xtal::UnitCell(1, -2, 1),   xtal::UnitCell(1, -1, -1),
      xtal::UnitCell(1, -1, 0),   xtal::UnitCell(1, -1, 1),
      xtal::UnitCell(1, 0, -2),   xtal::UnitCell(1, 0, -1),
      xtal::UnitCell(1, 0, 0),    xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -3),   xtal::UnitCell(1, 1, -2),
      xtal::UnitCell(1, 1, -1),   xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(1, 1, 1),    xtal::UnitCell(2, -2, 0),
      xtal::UnitCell(2, -1, -1),  xtal::UnitCell(2, -1, 0),
      xtal::UnitCell(2, 0, -2),   xtal::UnitCell(2, 0, -1),
      xtal::UnitCell(2, 0, 0),    xtal::UnitCell(3, -3, 0),
      xtal::UnitCell(3, -1, -1),  xtal::UnitCell(3, 0, -3),
      xtal::UnitCell(3, 0, 0)};

  m_orbit_neighborhood.resize(corr_size());
  m_orbit_site_neighborhood.resize(corr_size());
  m_orbit_neighborhood[1] = std::set<xtal::UnitCell>{xtal::UnitCell(0, 0, 0)};
  m_orbit_neighborhood[2] = m_orbit_neighborhood[1];

  m_orbit_site_neighborhood[1] =
      std::set<xtal::UnitCellCoord>{xtal::UnitCellCoord(0, 0, 0, 0)};
  m_orbit_site_neighborhood[2] = m_orbit_site_neighborhood[1];

  m_orbit_neighborhood[3] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, 0, 0), xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(-1, 1, 0), xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, -1, 1), xtal::UnitCell(0, 0, -1),
      xtal::UnitCell(0, 0, 0),  xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 1, -1), xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, -1, 0), xtal::UnitCell(1, 0, -1),
      xtal::UnitCell(1, 0, 0)};
  m_orbit_neighborhood[4] = m_orbit_neighborhood[3];
  m_orbit_neighborhood[5] = m_orbit_neighborhood[3];

  m_orbit_site_neighborhood[3] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -1, 0, 0), xtal::UnitCellCoord(0, -1, 0, 1),
      xtal::UnitCellCoord(0, -1, 1, 0), xtal::UnitCellCoord(0, 0, -1, 0),
      xtal::UnitCellCoord(0, 0, -1, 1), xtal::UnitCellCoord(0, 0, 0, -1),
      xtal::UnitCellCoord(0, 0, 0, 0),  xtal::UnitCellCoord(0, 0, 0, 1),
      xtal::UnitCellCoord(0, 0, 1, -1), xtal::UnitCellCoord(0, 0, 1, 0),
      xtal::UnitCellCoord(0, 1, -1, 0), xtal::UnitCellCoord(0, 1, 0, -1),
      xtal::UnitCellCoord(0, 1, 0, 0)};
  m_orbit_site_neighborhood[4] = m_orbit_site_neighborhood[3];
  m_orbit_site_neighborhood[5] = m_orbit_site_neighborhood[3];

  m_orbit_neighborhood[6] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, 1), xtal::UnitCell(-1, 1, -1),
      xtal::UnitCell(-1, 1, 1),  xtal::UnitCell(0, 0, 0),
      xtal::UnitCell(1, -1, -1), xtal::UnitCell(1, -1, 1),
      xtal::UnitCell(1, 1, -1)};
  m_orbit_neighborhood[7] = m_orbit_neighborhood[6];
  m_orbit_neighborhood[8] = m_orbit_neighborhood[6];

  m_orbit_site_neighborhood[6] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -1, -1, 1), xtal::UnitCellCoord(0, -1, 1, -1),
      xtal::UnitCellCoord(0, -1, 1, 1),  xtal::UnitCellCoord(0, 0, 0, 0),
      xtal::UnitCellCoord(0, 1, -1, -1), xtal::UnitCellCoord(0, 1, -1, 1),
      xtal::UnitCellCoord(0, 1, 1, -1)};
  m_orbit_site_neighborhood[7] = m_orbit_site_neighborhood[6];
  m_orbit_site_neighborhood[8] = m_orbit_site_neighborhood[6];

  m_orbit_neighborhood[9] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-2, 0, 1),  xtal::UnitCell(-2, 1, 0),
      xtal::UnitCell(-2, 1, 1),  xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, -1, 2), xtal::UnitCell(-1, 0, -1),
      xtal::UnitCell(-1, 0, 2),  xtal::UnitCell(-1, 2, -1),
      xtal::UnitCell(-1, 2, 0),  xtal::UnitCell(0, -2, 1),
      xtal::UnitCell(0, -1, -1), xtal::UnitCell(0, -1, 2),
      xtal::UnitCell(0, 0, 0),   xtal::UnitCell(0, 1, -2),
      xtal::UnitCell(0, 1, 1),   xtal::UnitCell(0, 2, -1),
      xtal::UnitCell(1, -2, 0),  xtal::UnitCell(1, -2, 1),
      xtal::UnitCell(1, 0, -2),  xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -2),  xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(2, -1, -1), xtal::UnitCell(2, -1, 0),
      xtal::UnitCell(2, 0, -1)};
  m_orbit_neighborhood[10] = m_orbit_neighborhood[9];
  m_orbit_neighborhood[11] = m_orbit_neighborhood[9];

  m_orbit_site_neighborhood[9] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -2, 0, 1),  xtal::UnitCellCoord(0, -2, 1, 0),
      xtal::UnitCellCoord(0, -2, 1, 1),  xtal::UnitCellCoord(0, -1, -1, 0),
      xtal::UnitCellCoord(0, -1, -1, 2), xtal::UnitCellCoord(0, -1, 0, -1),
      xtal::UnitCellCoord(0, -1, 0, 2),  xtal::UnitCellCoord(0, -1, 2, -1),
      xtal::UnitCellCoord(0, -1, 2, 0),  xtal::UnitCellCoord(0, 0, -2, 1),
      xtal::UnitCellCoord(0, 0, -1, -1), xtal::UnitCellCoord(0, 0, -1, 2),
      xtal::UnitCellCoord(0, 0, 0, 0),   xtal::UnitCellCoord(0, 0, 1, -2),
      xtal::UnitCellCoord(0, 0, 1, 1),   xtal::UnitCellCoord(0, 0, 2, -1),
      xtal::UnitCellCoord(0, 1, -2, 0),  xtal::UnitCellCoord(0, 1, -2, 1),
      xtal::UnitCellCoord(0, 1, 0, -2),  xtal::UnitCellCoord(0, 1, 0, 1),
      xtal::UnitCellCoord(0, 1, 1, -2),  xtal::UnitCellCoord(0, 1, 1, 0),
      xtal::UnitCellCoord(0, 2, -1, -1), xtal::UnitCellCoord(0, 2, -1, 0),
      xtal::UnitCellCoord(0, 2, 0, -1)};
  m_orbit_site_neighborhood[10] = m_orbit_site_neighborhood[9];
  m_orbit_site_neighborhood[11] = m_orbit_site_neighborhood[9];

  m_orbit_neighborhood[12] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-2, 0, 0), xtal::UnitCell(-2, 0, 2),
      xtal::UnitCell(-2, 2, 0), xtal::UnitCell(0, -2, 0),
      xtal::UnitCell(0, -2, 2), xtal::UnitCell(0, 0, -2),
      xtal::UnitCell(0, 0, 0),  xtal::UnitCell(0, 0, 2),
      xtal::UnitCell(0, 2, -2), xtal::UnitCell(0, 2, 0),
      xtal::UnitCell(2, -2, 0), xtal::UnitCell(2, 0, -2),
      xtal::UnitCell(2, 0, 0)};
  m_orbit_neighborhood[13] = m_orbit_neighborhood[12];
  m_orbit_neighborhood[14] = m_orbit_neighborhood[12];

  m_orbit_site_neighborhood[12] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -2, 0, 0), xtal::UnitCellCoord(0, -2, 0, 2),
      xtal::UnitCellCoord(0, -2, 2, 0), xtal::UnitCellCoord(0, 0, -2, 0),
      xtal::UnitCellCoord(0, 0, -2, 2), xtal::UnitCellCoord(0, 0, 0, -2),
      xtal::UnitCellCoord(0, 0, 0, 0),  xtal::UnitCellCoord(0, 0, 0, 2),
      xtal::UnitCellCoord(0, 0, 2, -2), xtal::UnitCellCoord(0, 0, 2, 0),
      xtal::UnitCellCoord(0, 2, -2, 0), xtal::UnitCellCoord(0, 2, 0, -2),
      xtal::UnitCellCoord(0, 2, 0, 0)};
  m_orbit_site_neighborhood[13] = m_orbit_site_neighborhood[12];
  m_orbit_site_neighborhood[14] = m_orbit_site_neighborhood[12];

  m_orbit_neighborhood[15] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-3, 1, 1),  xtal::UnitCell(-1, -1, -1),
      xtal::UnitCell(-1, -1, 3), xtal::UnitCell(-1, 3, -1),
      xtal::UnitCell(0, 0, 0),   xtal::UnitCell(1, -3, 1),
      xtal::UnitCell(1, 1, -3),  xtal::UnitCell(1, 1, 1),
      xtal::UnitCell(3, -1, -1)};
  m_orbit_neighborhood[16] = m_orbit_neighborhood[15];
  m_orbit_neighborhood[17] = m_orbit_neighborhood[15];

  m_orbit_site_neighborhood[15] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -3, 1, 1),  xtal::UnitCellCoord(0, -1, -1, -1),
      xtal::UnitCellCoord(0, -1, -1, 3), xtal::UnitCellCoord(0, -1, 3, -1),
      xtal::UnitCellCoord(0, 0, 0, 0),   xtal::UnitCellCoord(0, 1, -3, 1),
      xtal::UnitCellCoord(0, 1, 1, -3),  xtal::UnitCellCoord(0, 1, 1, 1),
      xtal::UnitCellCoord(0, 3, -1, -1)};
  m_orbit_site_neighborhood[16] = m_orbit_site_neighborhood[15];
  m_orbit_site_neighborhood[17] = m_orbit_site_neighborhood[15];

  m_orbit_neighborhood[18] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-3, 0, 0), xtal::UnitCell(-3, 0, 3),
      xtal::UnitCell(-3, 3, 0), xtal::UnitCell(0, -3, 0),
      xtal::UnitCell(0, -3, 3), xtal::UnitCell(0, 0, -3),
      xtal::UnitCell(0, 0, 0),  xtal::UnitCell(0, 0, 3),
      xtal::UnitCell(0, 3, -3), xtal::UnitCell(0, 3, 0),
      xtal::UnitCell(3, -3, 0), xtal::UnitCell(3, 0, -3),
      xtal::UnitCell(3, 0, 0)};
  m_orbit_neighborhood[19] = m_orbit_neighborhood[18];
  m_orbit_neighborhood[20] = m_orbit_neighborhood[18];

  m_orbit_site_neighborhood[18] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -3, 0, 0), xtal::UnitCellCoord(0, -3, 0, 3),
      xtal::UnitCellCoord(0, -3, 3, 0), xtal::UnitCellCoord(0, 0, -3, 0),
      xtal::UnitCellCoord(0, 0, -3, 3), xtal::UnitCellCoord(0, 0, 0, -3),
      xtal::UnitCellCoord(0, 0, 0, 0),  xtal::UnitCellCoord(0, 0, 0, 3),
      xtal::UnitCellCoord(0, 0, 3, -3), xtal::UnitCellCoord(0, 0, 3, 0),
      xtal::UnitCellCoord(0, 3, -3, 0), xtal::UnitCellCoord(0, 3, 0, -3),
      xtal::UnitCellCoord(0, 3, 0, 0)};
  m_orbit_site_neighborhood[19] = m_orbit_site_neighborhood[18];
  m_orbit_site_neighborhood[20] = m_orbit_site_neighborhood[18];

  m_orbit_neighborhood[21] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, 0, 0), xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(-1, 1, 0), xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, -1, 1), xtal::UnitCell(0, 0, -1),
      xtal::UnitCell(0, 0, 0),  xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 1, -1), xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, -1, 0), xtal::UnitCell(1, 0, -1),
      xtal::UnitCell(1, 0, 0)};
  m_orbit_neighborhood[22] = m_orbit_neighborhood[21];
  m_orbit_neighborhood[23] = m_orbit_neighborhood[21];
  m_orbit_neighborhood[24] = m_orbit_neighborhood[21];

  m_orbit_site_neighborhood[21] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -1, 0, 0), xtal::UnitCellCoord(0, -1, 0, 1),
      xtal::UnitCellCoord(0, -1, 1, 0), xtal::UnitCellCoord(0, 0, -1, 0),
      xtal::UnitCellCoord(0, 0, -1, 1), xtal::UnitCellCoord(0, 0, 0, -1),
      xtal::UnitCellCoord(0, 0, 0, 0),  xtal::UnitCellCoord(0, 0, 0, 1),
      xtal::UnitCellCoord(0, 0, 1, -1), xtal::UnitCellCoord(0, 0, 1, 0),
      xtal::UnitCellCoord(0, 1, -1, 0), xtal::UnitCellCoord(0, 1, 0, -1),
      xtal::UnitCellCoord(0, 1, 0, 0)};
  m_orbit_site_neighborhood[22] = m_orbit_site_neighborhood[21];
  m_orbit_site_neighborhood[23] = m_orbit_site_neighborhood[21];
  m_orbit_site_neighborhood[24] = m_orbit_site_neighborhood[21];

  m_orbit_neighborhood[25] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-2, 0, 1),  xtal::UnitCell(-2, 1, 0),
      xtal::UnitCell(-2, 1, 1),  xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, -1, 2), xtal::UnitCell(-1, 0, -1),
      xtal::UnitCell(-1, 0, 0),  xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(-1, 0, 2),  xtal::UnitCell(-1, 1, 0),
      xtal::UnitCell(-1, 2, -1), xtal::UnitCell(-1, 2, 0),
      xtal::UnitCell(0, -2, 1),  xtal::UnitCell(0, -1, -1),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, -1, 2),  xtal::UnitCell(0, 0, -1),
      xtal::UnitCell(0, 0, 0),   xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 1, -2),  xtal::UnitCell(0, 1, -1),
      xtal::UnitCell(0, 1, 0),   xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(0, 2, -1),  xtal::UnitCell(1, -2, 0),
      xtal::UnitCell(1, -2, 1),  xtal::UnitCell(1, -1, 0),
      xtal::UnitCell(1, 0, -2),  xtal::UnitCell(1, 0, -1),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -2),  xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(2, -1, -1), xtal::UnitCell(2, -1, 0),
      xtal::UnitCell(2, 0, -1)};
  m_orbit_neighborhood[26] = m_orbit_neighborhood[25];
  m_orbit_neighborhood[27] = m_orbit_neighborhood[25];
  m_orbit_neighborhood[28] = m_orbit_neighborhood[25];
  m_orbit_neighborhood[29] = m_orbit_neighborhood[25];
  m_orbit_neighborhood[30] = m_orbit_neighborhood[25];

  m_orbit_site_neighborhood[25] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -2, 0, 1),  xtal::UnitCellCoord(0, -2, 1, 0),
      xtal::UnitCellCoord(0, -2, 1, 1),  xtal::UnitCellCoord(0, -1, -1, 0),
      xtal::UnitCellCoord(0, -1, -1, 2), xtal::UnitCellCoord(0, -1, 0, -1),
      xtal::UnitCellCoord(0, -1, 0, 0),  xtal::UnitCellCoord(0, -1, 0, 1),
      xtal::UnitCellCoord(0, -1, 0, 2),  xtal::UnitCellCoord(0, -1, 1, 0),
      xtal::UnitCellCoord(0, -1, 2, -1), xtal::UnitCellCoord(0, -1, 2, 0),
      xtal::UnitCellCoord(0, 0, -2, 1),  xtal::UnitCellCoord(0, 0, -1, -1),
      xtal::UnitCellCoord(0, 0, -1, 0),  xtal::UnitCellCoord(0, 0, -1, 1),
      xtal::UnitCellCoord(0, 0, -1, 2),  xtal::UnitCellCoord(0, 0, 0, -1),
      xtal::UnitCellCoord(0, 0, 0, 0),   xtal::UnitCellCoord(0, 0, 0, 1),
      xtal::UnitCellCoord(0, 0, 1, -2),  xtal::UnitCellCoord(0, 0, 1, -1),
      xtal::UnitCellCoord(0, 0, 1, 0),   xtal::UnitCellCoord(0, 0, 1, 1),
      xtal::UnitCellCoord(0, 0, 2, -1),  xtal::UnitCellCoord(0, 1, -2, 0),
      xtal::UnitCellCoord(0, 1, -2, 1),  xtal::UnitCellCoord(0, 1, -1, 0),
      xtal::UnitCellCoord(0, 1, 0, -2),  xtal::UnitCellCoord(0, 1, 0, -1),
      xtal::UnitCellCoord(0, 1, 0, 0),   xtal::UnitCellCoord(0, 1, 0, 1),
      xtal::UnitCellCoord(0, 1, 1, -2),  xtal::UnitCellCoord(0, 1, 1, 0),
      xtal::UnitCellCoord(0, 2, -1, -1), xtal::UnitCellCoord(0, 2, -1, 0),
      xtal::UnitCellCoord(0, 2, 0, -1)};
  m_orbit_site_neighborhood[26] = m_orbit_site_neighborhood[25];
  m_orbit_site_neighborhood[27] = m_orbit_site_neighborhood[25];
  m_orbit_site_neighborhood[28] = m_orbit_site_neighborhood[25];
  m_orbit_site_neighborhood[29] = m_orbit_site_neighborhood[25];
  m_orbit_site_neighborhood[30] = m_orbit_site_neighborhood[25];

  m_orbit_neighborhood[31] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-2, 0, 0), xtal::UnitCell(-2, 0, 2),
      xtal::UnitCell(-2, 2, 0), xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(-1, 0, 1), xtal::UnitCell(-1, 1, 0),
      xtal::UnitCell(0, -2, 0), xtal::UnitCell(0, -2, 2),
      xtal::UnitCell(0, -1, 0), xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, 0, -2), xtal::UnitCell(0, 0, -1),
      xtal::UnitCell(0, 0, 0),  xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 0, 2),  xtal::UnitCell(0, 1, -1),
      xtal::UnitCell(0, 1, 0),  xtal::UnitCell(0, 2, -2),
      xtal::UnitCell(0, 2, 0),  xtal::UnitCell(1, -1, 0),
      xtal::UnitCell(1, 0, -1), xtal::UnitCell(1, 0, 0),
      xtal::UnitCell(2, -2, 0), xtal::UnitCell(2, 0, -2),
      xtal::UnitCell(2, 0, 0)};
  m_orbit_neighborhood[32] = m_orbit_neighborhood[31];
  m_orbit_neighborhood[33] = m_orbit_neighborhood[31];
  m_orbit_neighborhood[34] = m_orbit_neighborhood[31];
  m_orbit_neighborhood[35] = m_orbit_neighborhood[31];
  m_orbit_neighborhood[36] = m_orbit_neighborhood[31];

  m_orbit_site_neighborhood[31] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -2, 0, 0), xtal::UnitCellCoord(0, -2, 0, 2),
      xtal::UnitCellCoord(0, -2, 2, 0), xtal::UnitCellCoord(0, -1, 0, 0),
      xtal::UnitCellCoord(0, -1, 0, 1), xtal::UnitCellCoord(0, -1, 1, 0),
      xtal::UnitCellCoord(0, 0, -2, 0), xtal::UnitCellCoord(0, 0, -2, 2),
      xtal::UnitCellCoord(0, 0, -1, 0), xtal::UnitCellCoord(0, 0, -1, 1),
      xtal::UnitCellCoord(0, 0, 0, -2), xtal::UnitCellCoord(0, 0, 0, -1),
      xtal::UnitCellCoord(0, 0, 0, 0),  xtal::UnitCellCoord(0, 0, 0, 1),
      xtal::UnitCellCoord(0, 0, 0, 2),  xtal::UnitCellCoord(0, 0, 1, -1),
      xtal::UnitCellCoord(0, 0, 1, 0),  xtal::UnitCellCoord(0, 0, 2, -2),
      xtal::UnitCellCoord(0, 0, 2, 0),  xtal::UnitCellCoord(0, 1, -1, 0),
      xtal::UnitCellCoord(0, 1, 0, -1), xtal::UnitCellCoord(0, 1, 0, 0),
      xtal::UnitCellCoord(0, 2, -2, 0), xtal::UnitCellCoord(0, 2, 0, -2),
      xtal::UnitCellCoord(0, 2, 0, 0)};
  m_orbit_site_neighborhood[32] = m_orbit_site_neighborhood[31];
  m_orbit_site_neighborhood[33] = m_orbit_site_neighborhood[31];
  m_orbit_site_neighborhood[34] = m_orbit_site_neighborhood[31];
  m_orbit_site_neighborhood[35] = m_orbit_site_neighborhood[31];
  m_orbit_site_neighborhood[36] = m_orbit_site_neighborhood[31];

  m_orbit_neighborhood[37] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-3, 1, 1),   xtal::UnitCell(-2, 0, 1),
      xtal::UnitCell(-2, 1, 0),   xtal::UnitCell(-2, 1, 1),
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, -1, 2),  xtal::UnitCell(-1, -1, 3),
      xtal::UnitCell(-1, 0, -1),  xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(-1, 0, 1),   xtal::UnitCell(-1, 0, 2),
      xtal::UnitCell(-1, 1, 0),   xtal::UnitCell(-1, 2, -1),
      xtal::UnitCell(-1, 2, 0),   xtal::UnitCell(-1, 3, -1),
      xtal::UnitCell(0, -2, 1),   xtal::UnitCell(0, -1, -1),
      xtal::UnitCell(0, -1, 0),   xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, -1, 2),   xtal::UnitCell(0, 0, -1),
      xtal::UnitCell(0, 0, 0),    xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 1, -2),   xtal::UnitCell(0, 1, -1),
      xtal::UnitCell(0, 1, 0),    xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(0, 2, -1),   xtal::UnitCell(1, -3, 1),
      xtal::UnitCell(1, -2, 0),   xtal::UnitCell(1, -2, 1),
      xtal::UnitCell(1, -1, 0),   xtal::UnitCell(1, 0, -2),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 0),
      xtal::UnitCell(1, 0, 1),    xtal::UnitCell(1, 1, -3),
      xtal::UnitCell(1, 1, -2),   xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(1, 1, 1),    xtal::UnitCell(2, -1, -1),
      xtal::UnitCell(2, -1, 0),   xtal::UnitCell(2, 0, -1),
      xtal::UnitCell(3, -1, -1)};
  m_orbit_neighborhood[38] = m_orbit_neighborhood[37];
  m_orbit_neighborhood[39] = m_orbit_neighborhood[37];
  m_orbit_neighborhood[40] = m_orbit_neighborhood[37];
  m_orbit_neighborhood[41] = m_orbit_neighborhood[37];
  m_orbit_neighborhood[42] = m_orbit_neighborhood[37];
  m_orbit_neighborhood[43] = m_orbit_neighborhood[37];
  m_orbit_neighborhood[44] = m_orbit_neighborhood[37];

  m_orbit_site_neighborhood[37] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -3, 1, 1),   xtal::UnitCellCoord(0, -2, 0, 1),
      xtal::UnitCellCoord(0, -2, 1, 0),   xtal::UnitCellCoord(0, -2, 1, 1),
      xtal::UnitCellCoord(0, -1, -1, -1), xtal::UnitCellCoord(0, -1, -1, 0),
      xtal::UnitCellCoord(0, -1, -1, 2),  xtal::UnitCellCoord(0, -1, -1, 3),
      xtal::UnitCellCoord(0, -1, 0, -1),  xtal::UnitCellCoord(0, -1, 0, 0),
      xtal::UnitCellCoord(0, -1, 0, 1),   xtal::UnitCellCoord(0, -1, 0, 2),
      xtal::UnitCellCoord(0, -1, 1, 0),   xtal::UnitCellCoord(0, -1, 2, -1),
      xtal::UnitCellCoord(0, -1, 2, 0),   xtal::UnitCellCoord(0, -1, 3, -1),
      xtal::UnitCellCoord(0, 0, -2, 1),   xtal::UnitCellCoord(0, 0, -1, -1),
      xtal::UnitCellCoord(0, 0, -1, 0),   xtal::UnitCellCoord(0, 0, -1, 1),
      xtal::UnitCellCoord(0, 0, -1, 2),   xtal::UnitCellCoord(0, 0, 0, -1),
      xtal::UnitCellCoord(0, 0, 0, 0),    xtal::UnitCellCoord(0, 0, 0, 1),
      xtal::UnitCellCoord(0, 0, 1, -2),   xtal::UnitCellCoord(0, 0, 1, -1),
      xtal::UnitCellCoord(0, 0, 1, 0),    xtal::UnitCellCoord(0, 0, 1, 1),
      xtal::UnitCellCoord(0, 0, 2, -1),   xtal::UnitCellCoord(0, 1, -3, 1),
      xtal::UnitCellCoord(0, 1, -2, 0),   xtal::UnitCellCoord(0, 1, -2, 1),
      xtal::UnitCellCoord(0, 1, -1, 0),   xtal::UnitCellCoord(0, 1, 0, -2),
      xtal::UnitCellCoord(0, 1, 0, -1),   xtal::UnitCellCoord(0, 1, 0, 0),
      xtal::UnitCellCoord(0, 1, 0, 1),    xtal::UnitCellCoord(0, 1, 1, -3),
      xtal::UnitCellCoord(0, 1, 1, -2),   xtal::UnitCellCoord(0, 1, 1, 0),
      xtal::UnitCellCoord(0, 1, 1, 1),    xtal::UnitCellCoord(0, 2, -1, -1),
      xtal::UnitCellCoord(0, 2, -1, 0),   xtal::UnitCellCoord(0, 2, 0, -1),
      xtal::UnitCellCoord(0, 3, -1, -1)};
  m_orbit_site_neighborhood[38] = m_orbit_site_neighborhood[37];
  m_orbit_site_neighborhood[39] = m_orbit_site_neighborhood[37];
  m_orbit_site_neighborhood[40] = m_orbit_site_neighborhood[37];
  m_orbit_site_neighborhood[41] = m_orbit_site_neighborhood[37];
  m_orbit_site_neighborhood[42] = m_orbit_site_neighborhood[37];
  m_orbit_site_neighborhood[43] = m_orbit_site_neighborhood[37];
  m_orbit_site_neighborhood[44] = m_orbit_site_neighborhood[37];

  m_orbit_neighborhood[45] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-3, 0, 0), xtal::UnitCell(-3, 0, 3),
      xtal::UnitCell(-3, 3, 0), xtal::UnitCell(-2, 0, 0),
      xtal::UnitCell(-2, 0, 2), xtal::UnitCell(-2, 2, 0),
      xtal::UnitCell(-1, 0, 0), xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(-1, 1, 0), xtal::UnitCell(0, -3, 0),
      xtal::UnitCell(0, -3, 3), xtal::UnitCell(0, -2, 0),
      xtal::UnitCell(0, -2, 2), xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, -1, 1), xtal::UnitCell(0, 0, -3),
      xtal::UnitCell(0, 0, -2), xtal::UnitCell(0, 0, -1),
      xtal::UnitCell(0, 0, 0),  xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 0, 2),  xtal::UnitCell(0, 0, 3),
      xtal::UnitCell(0, 1, -1), xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(0, 2, -2), xtal::UnitCell(0, 2, 0),
      xtal::UnitCell(0, 3, -3), xtal::UnitCell(0, 3, 0),
      xtal::UnitCell(1, -1, 0), xtal::UnitCell(1, 0, -1),
      xtal::UnitCell(1, 0, 0),  xtal::UnitCell(2, -2, 0),
      xtal::UnitCell(2, 0, -2), xtal::UnitCell(2, 0, 0),
      xtal::UnitCell(3, -3, 0), xtal::UnitCell(3, 0, -3),
      xtal::UnitCell(3, 0, 0)};
  m_orbit_neighborhood[46] = m_orbit_neighborhood[45];
  m_orbit_neighborhood[47] = m_orbit_neighborhood[45];
  m_orbit_neighborhood[48] = m_orbit_neighborhood[45];
  m_orbit_neighborhood[49] = m_orbit_neighborhood[45];
  m_orbit_neighborhood[50] = m_orbit_neighborhood[45];
  m_orbit_neighborhood[51] = m_orbit_neighborhood[45];
  m_orbit_neighborhood[52] = m_orbit_neighborhood[45];

  m_orbit_site_neighborhood[45] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -3, 0, 0), xtal::UnitCellCoord(0, -3, 0, 3),
      xtal::UnitCellCoord(0, -3, 3, 0), xtal::UnitCellCoord(0, -2, 0, 0),
      xtal::UnitCellCoord(0, -2, 0, 2), xtal::UnitCellCoord(0, -2, 2, 0),
      xtal::UnitCellCoord(0, -1, 0, 0), xtal::UnitCellCoord(0, -1, 0, 1),
      xtal::UnitCellCoord(0, -1, 1, 0), xtal::UnitCellCoord(0, 0, -3, 0),
      xtal::UnitCellCoord(0, 0, -3, 3), xtal::UnitCellCoord(0, 0, -2, 0),
      xtal::UnitCellCoord(0, 0, -2, 2), xtal::UnitCellCoord(0, 0, -1, 0),
      xtal::UnitCellCoord(0, 0, -1, 1), xtal::UnitCellCoord(0, 0, 0, -3),
      xtal::UnitCellCoord(0, 0, 0, -2), xtal::UnitCellCoord(0, 0, 0, -1),
      xtal::UnitCellCoord(0, 0, 0, 0),  xtal::UnitCellCoord(0, 0, 0, 1),
      xtal::UnitCellCoord(0, 0, 0, 2),  xtal::UnitCellCoord(0, 0, 0, 3),
      xtal::UnitCellCoord(0, 0, 1, -1), xtal::UnitCellCoord(0, 0, 1, 0),
      xtal::UnitCellCoord(0, 0, 2, -2), xtal::UnitCellCoord(0, 0, 2, 0),
      xtal::UnitCellCoord(0, 0, 3, -3), xtal::UnitCellCoord(0, 0, 3, 0),
      xtal::UnitCellCoord(0, 1, -1, 0), xtal::UnitCellCoord(0, 1, 0, -1),
      xtal::UnitCellCoord(0, 1, 0, 0),  xtal::UnitCellCoord(0, 2, -2, 0),
      xtal::UnitCellCoord(0, 2, 0, -2), xtal::UnitCellCoord(0, 2, 0, 0),
      xtal::UnitCellCoord(0, 3, -3, 0), xtal::UnitCellCoord(0, 3, 0, -3),
      xtal::UnitCellCoord(0, 3, 0, 0)};
  m_orbit_site_neighborhood[46] = m_orbit_site_neighborhood[45];
  m_orbit_site_neighborhood[47] = m_orbit_site_neighborhood[45];
  m_orbit_site_neighborhood[48] = m_orbit_site_neighborhood[45];
  m_orbit_site_neighborhood[49] = m_orbit_site_neighborhood[45];
  m_orbit_site_neighborhood[50] = m_orbit_site_neighborhood[45];
  m_orbit_site_neighborhood[51] = m_orbit_site_neighborhood[45];
  m_orbit_site_neighborhood[52] = m_orbit_site_neighborhood[45];

  m_orbit_neighborhood[53] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-3, 1, 1),   xtal::UnitCell(-2, 0, 1),
      xtal::UnitCell(-2, 1, 0),   xtal::UnitCell(-2, 1, 1),
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, -1, 2),  xtal::UnitCell(-1, -1, 3),
      xtal::UnitCell(-1, 0, -1),  xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(-1, 0, 1),   xtal::UnitCell(-1, 0, 2),
      xtal::UnitCell(-1, 1, 0),   xtal::UnitCell(-1, 2, -1),
      xtal::UnitCell(-1, 2, 0),   xtal::UnitCell(-1, 3, -1),
      xtal::UnitCell(0, -2, 1),   xtal::UnitCell(0, -1, -1),
      xtal::UnitCell(0, -1, 0),   xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, -1, 2),   xtal::UnitCell(0, 0, -1),
      xtal::UnitCell(0, 0, 0),    xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 1, -2),   xtal::UnitCell(0, 1, -1),
      xtal::UnitCell(0, 1, 0),    xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(0, 2, -1),   xtal::UnitCell(1, -3, 1),
      xtal::UnitCell(1, -2, 0),   xtal::UnitCell(1, -2, 1),
      xtal::UnitCell(1, -1, 0),   xtal::UnitCell(1, 0, -2),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 0),
      xtal::UnitCell(1, 0, 1),    xtal::UnitCell(1, 1, -3),
      xtal::UnitCell(1, 1, -2),   xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(1, 1, 1),    xtal::UnitCell(2, -1, -1),
      xtal::UnitCell(2, -1, 0),   xtal::UnitCell(2, 0, -1),
      xtal::UnitCell(3, -1, -1)};
  m_orbit_neighborhood[54] = m_orbit_neighborhood[53];
  m_orbit_neighborhood[55] = m_orbit_neighborhood[53];
  m_orbit_neighborhood[56] = m_orbit_neighborhood[53];
  m_orbit_neighborhood[57] = m_orbit_neighborhood[53];
  m_orbit_neighborhood[58] = m_orbit_neighborhood[53];
  m_orbit_neighborhood[59] = m_orbit_neighborhood[53];
  m_orbit_neighborhood[60] = m_orbit_neighborhood[53];
  m_orbit_neighborhood[61] = m_orbit_neighborhood[53];
  m_orbit_neighborhood[62] = m_orbit_neighborhood[53];
  m_orbit_neighborhood[63] = m_orbit_neighborhood[53];
  m_orbit_neighborhood[64] = m_orbit_neighborhood[53];

  m_orbit_site_neighborhood[53] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -3, 1, 1),   xtal::UnitCellCoord(0, -2, 0, 1),
      xtal::UnitCellCoord(0, -2, 1, 0),   xtal::UnitCellCoord(0, -2, 1, 1),
      xtal::UnitCellCoord(0, -1, -1, -1), xtal::UnitCellCoord(0, -1, -1, 0),
      xtal::UnitCellCoord(0, -1, -1, 2),  xtal::UnitCellCoord(0, -1, -1, 3),
      xtal::UnitCellCoord(0, -1, 0, -1),  xtal::UnitCellCoord(0, -1, 0, 0),
      xtal::UnitCellCoord(0, -1, 0, 1),   xtal::UnitCellCoord(0, -1, 0, 2),
      xtal::UnitCellCoord(0, -1, 1, 0),   xtal::UnitCellCoord(0, -1, 2, -1),
      xtal::UnitCellCoord(0, -1, 2, 0),   xtal::UnitCellCoord(0, -1, 3, -1),
      xtal::UnitCellCoord(0, 0, -2, 1),   xtal::UnitCellCoord(0, 0, -1, -1),
      xtal::UnitCellCoord(0, 0, -1, 0),   xtal::UnitCellCoord(0, 0, -1, 1),
      xtal::UnitCellCoord(0, 0, -1, 2),   xtal::UnitCellCoord(0, 0, 0, -1),
      xtal::UnitCellCoord(0, 0, 0, 0),    xtal::UnitCellCoord(0, 0, 0, 1),
      xtal::UnitCellCoord(0, 0, 1, -2),   xtal::UnitCellCoord(0, 0, 1, -1),
      xtal::UnitCellCoord(0, 0, 1, 0),    xtal::UnitCellCoord(0, 0, 1, 1),
      xtal::UnitCellCoord(0, 0, 2, -1),   xtal::UnitCellCoord(0, 1, -3, 1),
      xtal::UnitCellCoord(0, 1, -2, 0),   xtal::UnitCellCoord(0, 1, -2, 1),
      xtal::UnitCellCoord(0, 1, -1, 0),   xtal::UnitCellCoord(0, 1, 0, -2),
      xtal::UnitCellCoord(0, 1, 0, -1),   xtal::UnitCellCoord(0, 1, 0, 0),
      xtal::UnitCellCoord(0, 1, 0, 1),    xtal::UnitCellCoord(0, 1, 1, -3),
      xtal::UnitCellCoord(0, 1, 1, -2),   xtal::UnitCellCoord(0, 1, 1, 0),
      xtal::UnitCellCoord(0, 1, 1, 1),    xtal::UnitCellCoord(0, 2, -1, -1),
      xtal::UnitCellCoord(0, 2, -1, 0),   xtal::UnitCellCoord(0, 2, 0, -1),
      xtal::UnitCellCoord(0, 3, -1, -1)};
  m_orbit_site_neighborhood[54] = m_orbit_site_neighborhood[53];
  m_orbit_site_neighborhood[55] = m_orbit_site_neighborhood[53];
  m_orbit_site_neighborhood[56] = m_orbit_site_neighborhood[53];
  m_orbit_site_neighborhood[57] = m_orbit_site_neighborhood[53];
  m_orbit_site_neighborhood[58] = m_orbit_site_neighborhood[53];
  m_orbit_site_neighborhood[59] = m_orbit_site_neighborhood[53];
  m_orbit_site_neighborhood[60] = m_orbit_site_neighborhood[53];
  m_orbit_site_neighborhood[61] = m_orbit_site_neighborhood[53];
  m_orbit_site_neighborhood[62] = m_orbit_site_neighborhood[53];
  m_orbit_site_neighborhood[63] = m_orbit_site_neighborhood[53];
  m_orbit_site_neighborhood[64] = m_orbit_site_neighborhood[53];

  m_orbit_neighborhood[65] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-3, 0, 0), xtal::UnitCell(-3, 0, 3),
      xtal::UnitCell(-3, 3, 0), xtal::UnitCell(-2, 0, 0),
      xtal::UnitCell(-2, 0, 2), xtal::UnitCell(-2, 2, 0),
      xtal::UnitCell(-1, 0, 0), xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(-1, 1, 0), xtal::UnitCell(0, -3, 0),
      xtal::UnitCell(0, -3, 3), xtal::UnitCell(0, -2, 0),
      xtal::UnitCell(0, -2, 2), xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, -1, 1), xtal::UnitCell(0, 0, -3),
      xtal::UnitCell(0, 0, -2), xtal::UnitCell(0, 0, -1),
      xtal::UnitCell(0, 0, 0),  xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 0, 2),  xtal::UnitCell(0, 0, 3),
      xtal::UnitCell(0, 1, -1), xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(0, 2, -2), xtal::UnitCell(0, 2, 0),
      xtal::UnitCell(0, 3, -3), xtal::UnitCell(0, 3, 0),
      xtal::UnitCell(1, -1, 0), xtal::UnitCell(1, 0, -1),
      xtal::UnitCell(1, 0, 0),  xtal::UnitCell(2, -2, 0),
      xtal::UnitCell(2, 0, -2), xtal::UnitCell(2, 0, 0),
      xtal::UnitCell(3, -3, 0), xtal::UnitCell(3, 0, -3),
      xtal::UnitCell(3, 0, 0)};
  m_orbit_neighborhood[66] = m_orbit_neighborhood[65];
  m_orbit_neighborhood[67] = m_orbit_neighborhood[65];
  m_orbit_neighborhood[68] = m_orbit_neighborhood[65];
  m_orbit_neighborhood[69] = m_orbit_neighborhood[65];
  m_orbit_neighborhood[70] = m_orbit_neighborhood[65];
  m_orbit_neighborhood[71] = m_orbit_neighborhood[65];
  m_orbit_neighborhood[72] = m_orbit_neighborhood[65];
  m_orbit_neighborhood[73] = m_orbit_neighborhood[65];
  m_orbit_neighborhood[74] = m_orbit_neighborhood[65];

  m_orbit_site_neighborhood[65] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(0, -3, 0, 0), xtal::UnitCellCoord(0, -3, 0, 3),
      xtal::UnitCellCoord(0, -3, 3, 0), xtal::UnitCellCoord(0, -2, 0, 0),
      xtal::UnitCellCoord(0, -2, 0, 2), xtal::UnitCellCoord(0, -2, 2, 0),
      xtal::UnitCellCoord(0, -1, 0, 0), xtal::UnitCellCoord(0, -1, 0, 1),
      xtal::UnitCellCoord(0, -1, 1, 0), xtal::UnitCellCoord(0, 0, -3, 0),
      xtal::UnitCellCoord(0, 0, -3, 3), xtal::UnitCellCoord(0, 0, -2, 0),
      xtal::UnitCellCoord(0, 0, -2, 2), xtal::UnitCellCoord(0, 0, -1, 0),
      xtal::UnitCellCoord(0, 0, -1, 1), xtal::UnitCellCoord(0, 0, 0, -3),
      xtal::UnitCellCoord(0, 0, 0, -2), xtal::UnitCellCoord(0, 0, 0, -1),
      xtal::UnitCellCoord(0, 0, 0, 0),  xtal::UnitCellCoord(0, 0, 0, 1),
      xtal::UnitCellCoord(0, 0, 0, 2),  xtal::UnitCellCoord(0, 0, 0, 3),
      xtal::UnitCellCoord(0, 0, 1, -1), xtal::UnitCellCoord(0, 0, 1, 0),
      xtal::UnitCellCoord(0, 0, 2, -2), xtal::UnitCellCoord(0, 0, 2, 0),
      xtal::UnitCellCoord(0, 0, 3, -3), xtal::UnitCellCoord(0, 0, 3, 0),
      xtal::UnitCellCoord(0, 1, -1, 0), xtal::UnitCellCoord(0, 1, 0, -1),
      xtal::UnitCellCoord(0, 1, 0, 0),  xtal::UnitCellCoord(0, 2, -2, 0),
      xtal::UnitCellCoord(0, 2, 0, -2), xtal::UnitCellCoord(0, 2, 0, 0),
      xtal::UnitCellCoord(0, 3, -3, 0), xtal::UnitCellCoord(0, 3, 0, -3),
      xtal::UnitCellCoord(0, 3, 0, 0)};
  m_orbit_site_neighborhood[66] = m_orbit_site_neighborhood[65];
  m_orbit_site_neighborhood[67] = m_orbit_site_neighborhood[65];
  m_orbit_site_neighborhood[68] = m_orbit_site_neighborhood[65];
  m_orbit_site_neighborhood[69] = m_orbit_site_neighborhood[65];
  m_orbit_site_neighborhood[70] = m_orbit_site_neighborhood[65];
  m_orbit_site_neighborhood[71] = m_orbit_site_neighborhood[65];
  m_orbit_site_neighborhood[72] = m_orbit_site_neighborhood[65];
  m_orbit_site_neighborhood[73] = m_orbit_site_neighborhood[65];
  m_orbit_site_neighborhood[74] = m_orbit_site_neighborhood[65];
}

OccClexulatorTest_Clexulator_default::~OccClexulatorTest_Clexulator_default() {
  // nothing here for now
}

/// \brief Calculate contribution to global correlations from one unit cell
void OccClexulatorTest_Clexulator_default::_calc_global_corr_contribution(
    double *corr_begin) const {
  _calc_global_corr_contribution();
  for (size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) =
        ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate contribution to global correlations from one unit cell
void OccClexulatorTest_Clexulator_default::_calc_global_corr_contribution()
    const {
  m_params.pre_eval();
  {
    _global_prepare<double>();
    for (size_type i = 0; i < corr_size(); i++) {
      ParamPack::Val<double>::set(m_params, m_corr_param_key, i,
                                  (this->*m_orbit_func_table_0[i])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate contribution to select global correlations from one unit
/// cell
void OccClexulatorTest_Clexulator_default::
    _calc_restricted_global_corr_contribution(
        double *corr_begin, size_type const *ind_list_begin,
        size_type const *ind_list_end) const {
  _calc_restricted_global_corr_contribution(ind_list_begin, ind_list_end);
  for (; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(
        m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate contribution to select global correlations from one unit
/// cell
void OccClexulatorTest_Clexulator_default::
    _calc_restricted_global_corr_contribution(
        size_type const *ind_list_begin, size_type const *ind_list_end) const {
  m_params.pre_eval();
  {
    _global_prepare<double>();
    for (; ind_list_begin < ind_list_end; ind_list_begin++) {
      ParamPack::Val<double>::set(
          m_params, m_corr_param_key, *ind_list_begin,
          (this->*m_orbit_func_table_0[*ind_list_begin])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate point correlations about basis site 'nlist_ind'
void OccClexulatorTest_Clexulator_default::_calc_point_corr(
    int nlist_ind, double *corr_begin) const {
  _calc_point_corr(nlist_ind);
  for (size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) =
        ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate point correlations about basis site 'nlist_ind'
void OccClexulatorTest_Clexulator_default::_calc_point_corr(
    int nlist_ind) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for (size_type i = 0; i < corr_size(); i++) {
      ParamPack::Val<double>::set(
          m_params, m_corr_param_key, i,
          (this->*m_flower_func_table_0[nlist_ind][i])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate select point correlations about basis site 'nlist_ind'
void OccClexulatorTest_Clexulator_default::_calc_restricted_point_corr(
    int nlist_ind, double *corr_begin, size_type const *ind_list_begin,
    size_type const *ind_list_end) const {
  _calc_restricted_point_corr(nlist_ind, ind_list_begin, ind_list_end);
  for (; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(
        m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate select point correlations about basis site 'nlist_ind'
void OccClexulatorTest_Clexulator_default::_calc_restricted_point_corr(
    int nlist_ind, size_type const *ind_list_begin,
    size_type const *ind_list_end) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for (; ind_list_begin < ind_list_end; ind_list_begin++) {
      ParamPack::Val<double>::set(
          m_params, m_corr_param_key, *ind_list_begin,
          (this->*m_flower_func_table_0[nlist_ind][*ind_list_begin])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate the change in point correlations due to changing an
/// occupant
void OccClexulatorTest_Clexulator_default::_calc_delta_point_corr(
    int nlist_ind, int occ_i, int occ_f, double *corr_begin) const {
  _calc_delta_point_corr(nlist_ind, occ_i, occ_f);
  for (size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) =
        ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate the change in point correlations due to changing an
/// occupant
void OccClexulatorTest_Clexulator_default::_calc_delta_point_corr(
    int nlist_ind, int occ_i, int occ_f) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for (size_type i = 0; i < corr_size(); i++) {
      ParamPack::Val<double>::set(
          m_params, m_corr_param_key, i,
          (this->*m_delta_func_table_0[nlist_ind][i])(occ_i, occ_f));
    }
  }
  m_params.post_eval();
}

/// \brief Calculate the change in select point correlations due to changing an
/// occupant
void OccClexulatorTest_Clexulator_default::_calc_restricted_delta_point_corr(
    int nlist_ind, int occ_i, int occ_f, double *corr_begin,
    size_type const *ind_list_begin, size_type const *ind_list_end) const {
  _calc_restricted_delta_point_corr(nlist_ind, occ_i, occ_f, ind_list_begin,
                                    ind_list_end);
  for (; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(
        m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate the change in select point correlations due to changing an
/// occupant
void OccClexulatorTest_Clexulator_default::_calc_restricted_delta_point_corr(
    int nlist_ind, int occ_i, int occ_f, size_type const *ind_list_begin,
    size_type const *ind_list_end) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for (; ind_list_begin < ind_list_end; ind_list_begin++) {
      ParamPack::Val<double>::set(
          m_params, m_corr_param_key, *ind_list_begin,
          (this->*m_delta_func_table_0[nlist_ind][*ind_list_begin])(occ_i,
                                                                    occ_f));
    }
  }
  m_params.post_eval();
}

template <typename Scalar>
void OccClexulatorTest_Clexulator_default::_point_prepare(int nlist_ind) const {
  switch (nlist_ind) {
    case 0:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 0,
                                    eval_occ_func_0_0(0));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 0,
                                    eval_occ_func_0_1(0));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 1,
                                    eval_occ_func_0_0(1));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 1,
                                    eval_occ_func_0_1(1));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_0_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 2,
                                    eval_occ_func_0_1(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_0_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 3,
                                    eval_occ_func_0_1(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_0_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 4,
                                    eval_occ_func_0_1(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_0_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 5,
                                    eval_occ_func_0_1(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_0_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 6,
                                    eval_occ_func_0_1(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_0_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 7,
                                    eval_occ_func_0_1(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_0_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 8,
                                    eval_occ_func_0_1(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_0_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 9,
                                    eval_occ_func_0_1(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_0_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 10,
                                    eval_occ_func_0_1(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_0_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 11,
                                    eval_occ_func_0_1(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_0_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 12,
                                    eval_occ_func_0_1(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_0_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 13,
                                    eval_occ_func_0_1(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                    eval_occ_func_0_0(14));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 14,
                                    eval_occ_func_0_1(14));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_0_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 15,
                                    eval_occ_func_0_1(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_0_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 16,
                                    eval_occ_func_0_1(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                    eval_occ_func_0_0(17));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 17,
                                    eval_occ_func_0_1(17));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_0_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 18,
                                    eval_occ_func_0_1(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_0_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 19,
                                    eval_occ_func_0_1(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_0_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 20,
                                    eval_occ_func_0_1(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_0_0(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 21,
                                    eval_occ_func_0_1(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_0_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 22,
                                    eval_occ_func_0_1(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_0_0(23));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 23,
                                    eval_occ_func_0_1(23));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_0_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 24,
                                    eval_occ_func_0_1(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_0_0(25));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 25,
                                    eval_occ_func_0_1(25));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_0_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 26,
                                    eval_occ_func_0_1(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_0_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 27,
                                    eval_occ_func_0_1(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_0_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 28,
                                    eval_occ_func_0_1(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_0_0(29));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 29,
                                    eval_occ_func_0_1(29));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 30,
                                    eval_occ_func_0_0(30));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 30,
                                    eval_occ_func_0_1(30));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_0_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 31,
                                    eval_occ_func_0_1(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_0_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 32,
                                    eval_occ_func_0_1(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 33,
                                    eval_occ_func_0_0(33));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 33,
                                    eval_occ_func_0_1(33));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 34,
                                    eval_occ_func_0_0(34));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 34,
                                    eval_occ_func_0_1(34));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_0_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 35,
                                    eval_occ_func_0_1(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_0_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 36,
                                    eval_occ_func_0_1(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 37,
                                    eval_occ_func_0_0(37));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 37,
                                    eval_occ_func_0_1(37));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 38,
                                    eval_occ_func_0_0(38));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 38,
                                    eval_occ_func_0_1(38));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_0_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 39,
                                    eval_occ_func_0_1(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_0_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 40,
                                    eval_occ_func_0_1(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 41,
                                    eval_occ_func_0_0(41));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 41,
                                    eval_occ_func_0_1(41));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 42,
                                    eval_occ_func_0_0(42));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 42,
                                    eval_occ_func_0_1(42));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_0_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 43,
                                    eval_occ_func_0_1(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_0_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 44,
                                    eval_occ_func_0_1(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 45,
                                    eval_occ_func_0_0(45));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 45,
                                    eval_occ_func_0_1(45));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 46,
                                    eval_occ_func_0_0(46));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 46,
                                    eval_occ_func_0_1(46));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_0_0(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 47,
                                    eval_occ_func_0_1(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_0_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 48,
                                    eval_occ_func_0_1(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 49,
                                    eval_occ_func_0_0(49));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 49,
                                    eval_occ_func_0_1(49));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 50,
                                    eval_occ_func_0_0(50));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 50,
                                    eval_occ_func_0_1(50));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_0_0(51));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 51,
                                    eval_occ_func_0_1(51));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_0_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 52,
                                    eval_occ_func_0_1(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 53,
                                    eval_occ_func_0_0(53));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 53,
                                    eval_occ_func_0_1(53));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 54,
                                    eval_occ_func_0_0(54));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 54,
                                    eval_occ_func_0_1(54));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 79,
                                    eval_occ_func_0_0(79));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 79,
                                    eval_occ_func_0_1(79));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 80,
                                    eval_occ_func_0_0(80));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 80,
                                    eval_occ_func_0_1(80));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 81,
                                    eval_occ_func_0_0(81));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 81,
                                    eval_occ_func_0_1(81));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 82,
                                    eval_occ_func_0_0(82));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 82,
                                    eval_occ_func_0_1(82));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 83,
                                    eval_occ_func_0_0(83));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 83,
                                    eval_occ_func_0_1(83));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 84,
                                    eval_occ_func_0_0(84));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 84,
                                    eval_occ_func_0_1(84));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 85,
                                    eval_occ_func_0_0(85));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 85,
                                    eval_occ_func_0_1(85));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 86,
                                    eval_occ_func_0_0(86));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 86,
                                    eval_occ_func_0_1(86));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 142,
                                    eval_occ_func_0_0(142));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 142,
                                    eval_occ_func_0_1(142));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 143,
                                    eval_occ_func_0_0(143));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 143,
                                    eval_occ_func_0_1(143));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 146,
                                    eval_occ_func_0_0(146));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 146,
                                    eval_occ_func_0_1(146));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 156,
                                    eval_occ_func_0_0(156));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 156,
                                    eval_occ_func_0_1(156));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 157,
                                    eval_occ_func_0_0(157));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 157,
                                    eval_occ_func_0_1(157));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 158,
                                    eval_occ_func_0_0(158));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 158,
                                    eval_occ_func_0_1(158));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 159,
                                    eval_occ_func_0_0(159));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 159,
                                    eval_occ_func_0_1(159));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 160,
                                    eval_occ_func_0_0(160));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 160,
                                    eval_occ_func_0_1(160));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 161,
                                    eval_occ_func_0_0(161));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 161,
                                    eval_occ_func_0_1(161));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 171,
                                    eval_occ_func_0_0(171));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 171,
                                    eval_occ_func_0_1(171));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 174,
                                    eval_occ_func_0_0(174));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 174,
                                    eval_occ_func_0_1(174));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 175,
                                    eval_occ_func_0_0(175));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 175,
                                    eval_occ_func_0_1(175));
      }
      break;
  }
}
template <typename Scalar>
void OccClexulatorTest_Clexulator_default::_global_prepare() const {
  if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 0,
                                eval_occ_func_0_0(0));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 0,
                                eval_occ_func_0_1(0));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 1,
                                eval_occ_func_0_0(1));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 1,
                                eval_occ_func_0_1(1));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                eval_occ_func_0_0(2));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 2,
                                eval_occ_func_0_1(2));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                eval_occ_func_0_0(3));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 3,
                                eval_occ_func_0_1(3));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                eval_occ_func_0_0(4));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 4,
                                eval_occ_func_0_1(4));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                eval_occ_func_0_0(5));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 5,
                                eval_occ_func_0_1(5));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                eval_occ_func_0_0(6));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 6,
                                eval_occ_func_0_1(6));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                eval_occ_func_0_0(7));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 7,
                                eval_occ_func_0_1(7));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                eval_occ_func_0_0(8));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 8,
                                eval_occ_func_0_1(8));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                eval_occ_func_0_0(9));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 9,
                                eval_occ_func_0_1(9));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                eval_occ_func_0_0(10));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 10,
                                eval_occ_func_0_1(10));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                eval_occ_func_0_0(11));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 11,
                                eval_occ_func_0_1(11));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                eval_occ_func_0_0(12));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 12,
                                eval_occ_func_0_1(12));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                eval_occ_func_0_0(13));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 13,
                                eval_occ_func_0_1(13));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                eval_occ_func_0_0(14));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 14,
                                eval_occ_func_0_1(14));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                eval_occ_func_0_0(15));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 15,
                                eval_occ_func_0_1(15));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                eval_occ_func_0_0(16));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 16,
                                eval_occ_func_0_1(16));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                eval_occ_func_0_0(17));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 17,
                                eval_occ_func_0_1(17));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                eval_occ_func_0_0(18));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 18,
                                eval_occ_func_0_1(18));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                eval_occ_func_0_0(19));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 19,
                                eval_occ_func_0_1(19));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                eval_occ_func_0_0(20));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 20,
                                eval_occ_func_0_1(20));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                eval_occ_func_0_0(21));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 21,
                                eval_occ_func_0_1(21));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                eval_occ_func_0_0(22));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 22,
                                eval_occ_func_0_1(22));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                eval_occ_func_0_0(23));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 23,
                                eval_occ_func_0_1(23));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                eval_occ_func_0_0(24));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 24,
                                eval_occ_func_0_1(24));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                eval_occ_func_0_0(25));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 25,
                                eval_occ_func_0_1(25));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                eval_occ_func_0_0(26));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 26,
                                eval_occ_func_0_1(26));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                eval_occ_func_0_0(27));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 27,
                                eval_occ_func_0_1(27));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                eval_occ_func_0_0(28));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 28,
                                eval_occ_func_0_1(28));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                eval_occ_func_0_0(29));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 29,
                                eval_occ_func_0_1(29));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 30,
                                eval_occ_func_0_0(30));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 30,
                                eval_occ_func_0_1(30));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                eval_occ_func_0_0(31));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 31,
                                eval_occ_func_0_1(31));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                eval_occ_func_0_0(32));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 32,
                                eval_occ_func_0_1(32));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 33,
                                eval_occ_func_0_0(33));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 33,
                                eval_occ_func_0_1(33));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 34,
                                eval_occ_func_0_0(34));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 34,
                                eval_occ_func_0_1(34));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                eval_occ_func_0_0(35));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 35,
                                eval_occ_func_0_1(35));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                eval_occ_func_0_0(36));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 36,
                                eval_occ_func_0_1(36));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 37,
                                eval_occ_func_0_0(37));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 37,
                                eval_occ_func_0_1(37));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 38,
                                eval_occ_func_0_0(38));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 38,
                                eval_occ_func_0_1(38));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                eval_occ_func_0_0(39));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 39,
                                eval_occ_func_0_1(39));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                eval_occ_func_0_0(40));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 40,
                                eval_occ_func_0_1(40));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 41,
                                eval_occ_func_0_0(41));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 41,
                                eval_occ_func_0_1(41));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 42,
                                eval_occ_func_0_0(42));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 42,
                                eval_occ_func_0_1(42));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                eval_occ_func_0_0(43));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 43,
                                eval_occ_func_0_1(43));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                eval_occ_func_0_0(44));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 44,
                                eval_occ_func_0_1(44));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 45,
                                eval_occ_func_0_0(45));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 45,
                                eval_occ_func_0_1(45));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 46,
                                eval_occ_func_0_0(46));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 46,
                                eval_occ_func_0_1(46));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                eval_occ_func_0_0(47));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 47,
                                eval_occ_func_0_1(47));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                eval_occ_func_0_0(48));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 48,
                                eval_occ_func_0_1(48));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 49,
                                eval_occ_func_0_0(49));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 49,
                                eval_occ_func_0_1(49));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 50,
                                eval_occ_func_0_0(50));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 50,
                                eval_occ_func_0_1(50));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                eval_occ_func_0_0(51));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 51,
                                eval_occ_func_0_1(51));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                eval_occ_func_0_0(52));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 52,
                                eval_occ_func_0_1(52));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 53,
                                eval_occ_func_0_0(53));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 53,
                                eval_occ_func_0_1(53));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 54,
                                eval_occ_func_0_0(54));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 54,
                                eval_occ_func_0_1(54));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 79,
                                eval_occ_func_0_0(79));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 79,
                                eval_occ_func_0_1(79));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 80,
                                eval_occ_func_0_0(80));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 80,
                                eval_occ_func_0_1(80));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 81,
                                eval_occ_func_0_0(81));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 81,
                                eval_occ_func_0_1(81));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 82,
                                eval_occ_func_0_0(82));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 82,
                                eval_occ_func_0_1(82));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 83,
                                eval_occ_func_0_0(83));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 83,
                                eval_occ_func_0_1(83));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 84,
                                eval_occ_func_0_0(84));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 84,
                                eval_occ_func_0_1(84));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 85,
                                eval_occ_func_0_0(85));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 85,
                                eval_occ_func_0_1(85));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 86,
                                eval_occ_func_0_0(86));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 86,
                                eval_occ_func_0_1(86));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 142,
                                eval_occ_func_0_0(142));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 142,
                                eval_occ_func_0_1(142));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 143,
                                eval_occ_func_0_0(143));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 143,
                                eval_occ_func_0_1(143));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 146,
                                eval_occ_func_0_0(146));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 146,
                                eval_occ_func_0_1(146));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 156,
                                eval_occ_func_0_0(156));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 156,
                                eval_occ_func_0_1(156));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 157,
                                eval_occ_func_0_0(157));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 157,
                                eval_occ_func_0_1(157));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 158,
                                eval_occ_func_0_0(158));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 158,
                                eval_occ_func_0_1(158));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 159,
                                eval_occ_func_0_0(159));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 159,
                                eval_occ_func_0_1(159));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 160,
                                eval_occ_func_0_0(160));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 160,
                                eval_occ_func_0_1(160));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 161,
                                eval_occ_func_0_0(161));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 161,
                                eval_occ_func_0_1(161));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 171,
                                eval_occ_func_0_0(171));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 171,
                                eval_occ_func_0_1(171));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 174,
                                eval_occ_func_0_0(174));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 174,
                                eval_occ_func_0_1(174));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 175,
                                eval_occ_func_0_0(175));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 175,
                                eval_occ_func_0_1(175));
  }
}

// Basis functions for empty cluster:
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_0_0() const {
  return 1;
}

/**** Basis functions for orbit 1****
0.0000000 0.0000000 0.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_1_0() const {
  return occ_func_0_0(0);
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_1_1() const {
  return occ_func_0_1(0);
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_1_0_at_0() const {
  return occ_func_0_0(0);
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_1_1_at_0() const {
  return occ_func_0_1(0);
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_1_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]);
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_1_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]);
}

/**** Basis functions for orbit 2****
0.0000000 0.0000000 0.0000000 A  B  C

0.0000000 1.0000000 0.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_2_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(9) +
          occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(12) +
          occ_func_0_0(0) * occ_func_0_0(7) +
          occ_func_0_0(0) * occ_func_0_0(8)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_2_1() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(9) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(11) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(7) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(8) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(8))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_2_2() const {
  return (occ_func_0_1(0) * occ_func_0_1(9) +
          occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(12) +
          occ_func_0_1(0) * occ_func_0_1(7) +
          occ_func_0_1(0) * occ_func_0_1(8)) /
         6.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_2_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(9) +
          occ_func_0_0(4) * occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(3) +
          occ_func_0_0(11) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(2) +
          occ_func_0_0(0) * occ_func_0_0(12) +
          occ_func_0_0(1) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(7) +
          occ_func_0_0(6) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(8) +
          occ_func_0_0(5) * occ_func_0_0(0)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_2_1_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(9) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(4) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(3) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(11) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(2) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(2)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(1) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(7) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(6) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(8) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(5) * occ_func_0_0(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_2_2_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(9) +
          occ_func_0_1(4) * occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(3) +
          occ_func_0_1(11) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(2) +
          occ_func_0_1(0) * occ_func_0_1(12) +
          occ_func_0_1(1) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(7) +
          occ_func_0_1(6) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(8) +
          occ_func_0_1(5) * occ_func_0_1(0)) /
         6.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_2_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(9) + occ_func_0_0(4) + occ_func_0_0(10) +
          occ_func_0_0(3) + occ_func_0_0(11) + occ_func_0_0(2) +
          occ_func_0_0(12) + occ_func_0_0(1) + occ_func_0_0(7) +
          occ_func_0_0(6) + occ_func_0_0(8) + occ_func_0_0(5)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_2_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(9) + 0.707107 * occ_func_0_1(4) +
              0.707107 * occ_func_0_1(10) + 0.707107 * occ_func_0_1(3) +
              0.707107 * occ_func_0_1(11) + 0.707107 * occ_func_0_1(2) +
              0.707107 * occ_func_0_1(12) + 0.707107 * occ_func_0_1(1) +
              0.707107 * occ_func_0_1(7) + 0.707107 * occ_func_0_1(6) +
              0.707107 * occ_func_0_1(8) + 0.707107 * occ_func_0_1(5)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(9) + 0.707107 * occ_func_0_0(4) +
              0.707107 * occ_func_0_0(10) + 0.707107 * occ_func_0_0(3) +
              0.707107 * occ_func_0_0(11) + 0.707107 * occ_func_0_0(2) +
              0.707107 * occ_func_0_0(12) + 0.707107 * occ_func_0_0(1) +
              0.707107 * occ_func_0_0(7) + 0.707107 * occ_func_0_0(6) +
              0.707107 * occ_func_0_0(8) + 0.707107 * occ_func_0_0(5)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_2_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(9) + occ_func_0_1(4) + occ_func_0_1(10) +
          occ_func_0_1(3) + occ_func_0_1(11) + occ_func_0_1(2) +
          occ_func_0_1(12) + occ_func_0_1(1) + occ_func_0_1(7) +
          occ_func_0_1(6) + occ_func_0_1(8) + occ_func_0_1(5)) /
         6.;
}

/**** Basis functions for orbit 3****
0.0000000 0.0000000 0.0000000 A  B  C

1.0000000 -1.0000000 -1.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_3_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(16) +
          occ_func_0_0(0) * occ_func_0_0(18) +
          occ_func_0_0(17) * occ_func_0_0(0)) /
         3.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_3_1() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(16) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(16)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(18) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(18)) +
          (0.707107 * occ_func_0_0(17) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(17) * occ_func_0_0(0))) /
         3.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_3_2() const {
  return (occ_func_0_1(0) * occ_func_0_1(16) +
          occ_func_0_1(0) * occ_func_0_1(18) +
          occ_func_0_1(17) * occ_func_0_1(0)) /
         3.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_3_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(16) +
          occ_func_0_0(15) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(18) +
          occ_func_0_0(13) * occ_func_0_0(0) +
          occ_func_0_0(17) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(14)) /
         3.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_3_1_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(16) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(16)) +
          (0.707107 * occ_func_0_0(15) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(15) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(18) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(18)) +
          (0.707107 * occ_func_0_0(13) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(13) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(17) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(17) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(14) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(14))) /
         3.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_3_2_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(16) +
          occ_func_0_1(15) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(18) +
          occ_func_0_1(13) * occ_func_0_1(0) +
          occ_func_0_1(17) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(14)) /
         3.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_3_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(16) + occ_func_0_0(15) + occ_func_0_0(18) +
          occ_func_0_0(13) + occ_func_0_0(17) + occ_func_0_0(14)) /
         3.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_3_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(16) + 0.707107 * occ_func_0_1(15) +
              0.707107 * occ_func_0_1(18) + 0.707107 * occ_func_0_1(13) +
              0.707107 * occ_func_0_1(17) + 0.707107 * occ_func_0_1(14)) /
             3. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(16) + 0.707107 * occ_func_0_0(15) +
              0.707107 * occ_func_0_0(18) + 0.707107 * occ_func_0_0(13) +
              0.707107 * occ_func_0_0(17) + 0.707107 * occ_func_0_0(14)) /
             3.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_3_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(16) + occ_func_0_1(15) + occ_func_0_1(18) +
          occ_func_0_1(13) + occ_func_0_1(17) + occ_func_0_1(14)) /
         3.;
}

/**** Basis functions for orbit 4****
0.0000000 0.0000000 0.0000000 A  B  C

1.0000000 -2.0000000 1.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_4_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(35) +
          occ_func_0_0(0) * occ_func_0_0(42) +
          occ_func_0_0(0) * occ_func_0_0(41) +
          occ_func_0_0(32) * occ_func_0_0(0) +
          occ_func_0_0(39) * occ_func_0_0(0) +
          occ_func_0_0(31) * occ_func_0_0(0) +
          occ_func_0_0(36) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(34) +
          occ_func_0_0(0) * occ_func_0_0(38) +
          occ_func_0_0(33) * occ_func_0_0(0) +
          occ_func_0_0(40) * occ_func_0_0(0) +
          occ_func_0_0(37) * occ_func_0_0(0)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_4_1() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(35) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(42) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(42)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(41) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(41)) +
          (0.707107 * occ_func_0_0(32) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(32) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(39) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(39) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(31) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(31) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(36) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(36) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(34) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(38) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(38)) +
          (0.707107 * occ_func_0_0(33) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(33) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(40) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(40) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(37) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(37) * occ_func_0_0(0))) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_4_2() const {
  return (occ_func_0_1(0) * occ_func_0_1(35) +
          occ_func_0_1(0) * occ_func_0_1(42) +
          occ_func_0_1(0) * occ_func_0_1(41) +
          occ_func_0_1(32) * occ_func_0_1(0) +
          occ_func_0_1(39) * occ_func_0_1(0) +
          occ_func_0_1(31) * occ_func_0_1(0) +
          occ_func_0_1(36) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(34) +
          occ_func_0_1(0) * occ_func_0_1(38) +
          occ_func_0_1(33) * occ_func_0_1(0) +
          occ_func_0_1(40) * occ_func_0_1(0) +
          occ_func_0_1(37) * occ_func_0_1(0)) /
         12.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_4_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(35) +
          occ_func_0_0(26) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(42) +
          occ_func_0_0(19) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(41) +
          occ_func_0_0(20) * occ_func_0_0(0) +
          occ_func_0_0(32) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(29) +
          occ_func_0_0(39) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(22) +
          occ_func_0_0(31) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(30) +
          occ_func_0_0(36) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(25) +
          occ_func_0_0(0) * occ_func_0_0(34) +
          occ_func_0_0(27) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(38) +
          occ_func_0_0(23) * occ_func_0_0(0) +
          occ_func_0_0(33) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(28) +
          occ_func_0_0(40) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(21) +
          occ_func_0_0(37) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(24)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_4_1_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(35) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(26) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(26) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(42) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(42)) +
          (0.707107 * occ_func_0_0(19) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(19) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(41) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(41)) +
          (0.707107 * occ_func_0_0(20) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(20) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(32) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(32) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(29) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(29)) +
          (0.707107 * occ_func_0_0(39) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(39) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(22) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(22)) +
          (0.707107 * occ_func_0_0(31) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(31) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(30) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(30)) +
          (0.707107 * occ_func_0_0(36) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(36) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(25) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(25)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(34) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(27) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(27) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(38) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(38)) +
          (0.707107 * occ_func_0_0(23) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(23) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(33) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(33) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(28) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(28)) +
          (0.707107 * occ_func_0_0(40) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(40) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(21) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(21)) +
          (0.707107 * occ_func_0_0(37) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(37) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(24) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(24))) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_4_2_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(35) +
          occ_func_0_1(26) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(42) +
          occ_func_0_1(19) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(41) +
          occ_func_0_1(20) * occ_func_0_1(0) +
          occ_func_0_1(32) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(29) +
          occ_func_0_1(39) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(22) +
          occ_func_0_1(31) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(30) +
          occ_func_0_1(36) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(25) +
          occ_func_0_1(0) * occ_func_0_1(34) +
          occ_func_0_1(27) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(38) +
          occ_func_0_1(23) * occ_func_0_1(0) +
          occ_func_0_1(33) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(28) +
          occ_func_0_1(40) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(21) +
          occ_func_0_1(37) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(24)) /
         12.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_4_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(35) + occ_func_0_0(26) + occ_func_0_0(42) +
          occ_func_0_0(19) + occ_func_0_0(41) + occ_func_0_0(20) +
          occ_func_0_0(32) + occ_func_0_0(29) + occ_func_0_0(39) +
          occ_func_0_0(22) + occ_func_0_0(31) + occ_func_0_0(30) +
          occ_func_0_0(36) + occ_func_0_0(25) + occ_func_0_0(34) +
          occ_func_0_0(27) + occ_func_0_0(38) + occ_func_0_0(23) +
          occ_func_0_0(33) + occ_func_0_0(28) + occ_func_0_0(40) +
          occ_func_0_0(21) + occ_func_0_0(37) + occ_func_0_0(24)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_4_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(35) + 0.707107 * occ_func_0_1(26) +
              0.707107 * occ_func_0_1(42) + 0.707107 * occ_func_0_1(19) +
              0.707107 * occ_func_0_1(41) + 0.707107 * occ_func_0_1(20) +
              0.707107 * occ_func_0_1(32) + 0.707107 * occ_func_0_1(29) +
              0.707107 * occ_func_0_1(39) + 0.707107 * occ_func_0_1(22) +
              0.707107 * occ_func_0_1(31) + 0.707107 * occ_func_0_1(30) +
              0.707107 * occ_func_0_1(36) + 0.707107 * occ_func_0_1(25) +
              0.707107 * occ_func_0_1(34) + 0.707107 * occ_func_0_1(27) +
              0.707107 * occ_func_0_1(38) + 0.707107 * occ_func_0_1(23) +
              0.707107 * occ_func_0_1(33) + 0.707107 * occ_func_0_1(28) +
              0.707107 * occ_func_0_1(40) + 0.707107 * occ_func_0_1(21) +
              0.707107 * occ_func_0_1(37) + 0.707107 * occ_func_0_1(24)) /
             12. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(35) + 0.707107 * occ_func_0_0(26) +
              0.707107 * occ_func_0_0(42) + 0.707107 * occ_func_0_0(19) +
              0.707107 * occ_func_0_0(41) + 0.707107 * occ_func_0_0(20) +
              0.707107 * occ_func_0_0(32) + 0.707107 * occ_func_0_0(29) +
              0.707107 * occ_func_0_0(39) + 0.707107 * occ_func_0_0(22) +
              0.707107 * occ_func_0_0(31) + 0.707107 * occ_func_0_0(30) +
              0.707107 * occ_func_0_0(36) + 0.707107 * occ_func_0_0(25) +
              0.707107 * occ_func_0_0(34) + 0.707107 * occ_func_0_0(27) +
              0.707107 * occ_func_0_0(38) + 0.707107 * occ_func_0_0(23) +
              0.707107 * occ_func_0_0(33) + 0.707107 * occ_func_0_0(28) +
              0.707107 * occ_func_0_0(40) + 0.707107 * occ_func_0_0(21) +
              0.707107 * occ_func_0_0(37) + 0.707107 * occ_func_0_0(24)) /
             12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_4_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(35) + occ_func_0_1(26) + occ_func_0_1(42) +
          occ_func_0_1(19) + occ_func_0_1(41) + occ_func_0_1(20) +
          occ_func_0_1(32) + occ_func_0_1(29) + occ_func_0_1(39) +
          occ_func_0_1(22) + occ_func_0_1(31) + occ_func_0_1(30) +
          occ_func_0_1(36) + occ_func_0_1(25) + occ_func_0_1(34) +
          occ_func_0_1(27) + occ_func_0_1(38) + occ_func_0_1(23) +
          occ_func_0_1(33) + occ_func_0_1(28) + occ_func_0_1(40) +
          occ_func_0_1(21) + occ_func_0_1(37) + occ_func_0_1(24)) /
         12.;
}

/**** Basis functions for orbit 5****
0.0000000 0.0000000 0.0000000 A  B  C

0.0000000 2.0000000 0.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_5_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(51) +
          occ_func_0_0(52) * occ_func_0_0(0) +
          occ_func_0_0(53) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(54) +
          occ_func_0_0(0) * occ_func_0_0(49) +
          occ_func_0_0(0) * occ_func_0_0(50)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_5_1() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(51) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(52) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(53) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(54) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(49) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(50) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(50))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_5_2() const {
  return (occ_func_0_1(0) * occ_func_0_1(51) +
          occ_func_0_1(52) * occ_func_0_1(0) +
          occ_func_0_1(53) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(54) +
          occ_func_0_1(0) * occ_func_0_1(49) +
          occ_func_0_1(0) * occ_func_0_1(50)) /
         6.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_5_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(51) +
          occ_func_0_0(46) * occ_func_0_0(0) +
          occ_func_0_0(52) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(45) +
          occ_func_0_0(53) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(44) +
          occ_func_0_0(0) * occ_func_0_0(54) +
          occ_func_0_0(43) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(49) +
          occ_func_0_0(48) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(50) +
          occ_func_0_0(47) * occ_func_0_0(0)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_5_1_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(51) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(46) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(46) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(52) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(45) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(45)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(53) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(44) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(44)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(54) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(43) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(43) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(49) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(48) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(48) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(50) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(50)) +
          (0.707107 * occ_func_0_0(47) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(47) * occ_func_0_0(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_5_2_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(51) +
          occ_func_0_1(46) * occ_func_0_1(0) +
          occ_func_0_1(52) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(45) +
          occ_func_0_1(53) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(44) +
          occ_func_0_1(0) * occ_func_0_1(54) +
          occ_func_0_1(43) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(49) +
          occ_func_0_1(48) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(50) +
          occ_func_0_1(47) * occ_func_0_1(0)) /
         6.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_5_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(51) + occ_func_0_0(46) + occ_func_0_0(52) +
          occ_func_0_0(45) + occ_func_0_0(53) + occ_func_0_0(44) +
          occ_func_0_0(54) + occ_func_0_0(43) + occ_func_0_0(49) +
          occ_func_0_0(48) + occ_func_0_0(50) + occ_func_0_0(47)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_5_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(51) + 0.707107 * occ_func_0_1(46) +
              0.707107 * occ_func_0_1(52) + 0.707107 * occ_func_0_1(45) +
              0.707107 * occ_func_0_1(53) + 0.707107 * occ_func_0_1(44) +
              0.707107 * occ_func_0_1(54) + 0.707107 * occ_func_0_1(43) +
              0.707107 * occ_func_0_1(49) + 0.707107 * occ_func_0_1(48) +
              0.707107 * occ_func_0_1(50) + 0.707107 * occ_func_0_1(47)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(51) + 0.707107 * occ_func_0_0(46) +
              0.707107 * occ_func_0_0(52) + 0.707107 * occ_func_0_0(45) +
              0.707107 * occ_func_0_0(53) + 0.707107 * occ_func_0_0(44) +
              0.707107 * occ_func_0_0(54) + 0.707107 * occ_func_0_0(43) +
              0.707107 * occ_func_0_0(49) + 0.707107 * occ_func_0_0(48) +
              0.707107 * occ_func_0_0(50) + 0.707107 * occ_func_0_0(47)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_5_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(51) + occ_func_0_1(46) + occ_func_0_1(52) +
          occ_func_0_1(45) + occ_func_0_1(53) + occ_func_0_1(44) +
          occ_func_0_1(54) + occ_func_0_1(43) + occ_func_0_1(49) +
          occ_func_0_1(48) + occ_func_0_1(50) + occ_func_0_1(47)) /
         6.;
}

/**** Basis functions for orbit 6****
0.0000000 0.0000000 0.0000000 A  B  C

3.0000000 -1.0000000 -1.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_6_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_0(0) * occ_func_0_0(83)) /
         4.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_6_1() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(84)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(83))) /
         4.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_6_2() const {
  return (occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_1(0) * occ_func_0_1(83)) /
         4.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_6_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_0(79) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_0(81) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_0(80) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_0(0)) /
         4.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_6_1_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(79) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(79) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(84)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(80) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(80) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_0(0))) /
         4.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_6_2_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_1(79) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_1(81) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_1(80) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_1(0)) /
         4.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_6_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(86) + occ_func_0_0(79) + occ_func_0_0(84) +
          occ_func_0_0(81) + occ_func_0_0(85) + occ_func_0_0(80) +
          occ_func_0_0(83) + occ_func_0_0(82)) /
         4.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_6_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(86) + 0.707107 * occ_func_0_1(79) +
              0.707107 * occ_func_0_1(84) + 0.707107 * occ_func_0_1(81) +
              0.707107 * occ_func_0_1(85) + 0.707107 * occ_func_0_1(80) +
              0.707107 * occ_func_0_1(83) + 0.707107 * occ_func_0_1(82)) /
             4. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(86) + 0.707107 * occ_func_0_0(79) +
              0.707107 * occ_func_0_0(84) + 0.707107 * occ_func_0_0(81) +
              0.707107 * occ_func_0_0(85) + 0.707107 * occ_func_0_0(80) +
              0.707107 * occ_func_0_0(83) + 0.707107 * occ_func_0_0(82)) /
             4.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_6_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(86) + occ_func_0_1(79) + occ_func_0_1(84) +
          occ_func_0_1(81) + occ_func_0_1(85) + occ_func_0_1(80) +
          occ_func_0_1(83) + occ_func_0_1(82)) /
         4.;
}

/**** Basis functions for orbit 7****
0.0000000 0.0000000 0.0000000 A  B  C

0.0000000 3.0000000 0.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_7_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(161) +
          occ_func_0_0(171) * occ_func_0_0(0) +
          occ_func_0_0(174) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(175) +
          occ_func_0_0(0) * occ_func_0_0(159) +
          occ_func_0_0(0) * occ_func_0_0(160)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_7_1() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(160))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_7_2() const {
  return (occ_func_0_1(0) * occ_func_0_1(161) +
          occ_func_0_1(171) * occ_func_0_1(0) +
          occ_func_0_1(174) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(175) +
          occ_func_0_1(0) * occ_func_0_1(159) +
          occ_func_0_1(0) * occ_func_0_1(160)) /
         6.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_7_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(161) +
          occ_func_0_0(156) * occ_func_0_0(0) +
          occ_func_0_0(171) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(146) +
          occ_func_0_0(174) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(143) +
          occ_func_0_0(0) * occ_func_0_0(175) +
          occ_func_0_0(142) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(159) +
          occ_func_0_0(158) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(160) +
          occ_func_0_0(157) * occ_func_0_0(0)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_7_1_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(156) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(156) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(146) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(146)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(143) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(143)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(142) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(142) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(158) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(158) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(160)) +
          (0.707107 * occ_func_0_0(157) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(157) * occ_func_0_0(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_7_2_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(161) +
          occ_func_0_1(156) * occ_func_0_1(0) +
          occ_func_0_1(171) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(146) +
          occ_func_0_1(174) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(143) +
          occ_func_0_1(0) * occ_func_0_1(175) +
          occ_func_0_1(142) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(159) +
          occ_func_0_1(158) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(160) +
          occ_func_0_1(157) * occ_func_0_1(0)) /
         6.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_7_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(161) + occ_func_0_0(156) + occ_func_0_0(171) +
          occ_func_0_0(146) + occ_func_0_0(174) + occ_func_0_0(143) +
          occ_func_0_0(175) + occ_func_0_0(142) + occ_func_0_0(159) +
          occ_func_0_0(158) + occ_func_0_0(160) + occ_func_0_0(157)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_7_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(161) + 0.707107 * occ_func_0_1(156) +
              0.707107 * occ_func_0_1(171) + 0.707107 * occ_func_0_1(146) +
              0.707107 * occ_func_0_1(174) + 0.707107 * occ_func_0_1(143) +
              0.707107 * occ_func_0_1(175) + 0.707107 * occ_func_0_1(142) +
              0.707107 * occ_func_0_1(159) + 0.707107 * occ_func_0_1(158) +
              0.707107 * occ_func_0_1(160) + 0.707107 * occ_func_0_1(157)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(161) + 0.707107 * occ_func_0_0(156) +
              0.707107 * occ_func_0_0(171) + 0.707107 * occ_func_0_0(146) +
              0.707107 * occ_func_0_0(174) + 0.707107 * occ_func_0_0(143) +
              0.707107 * occ_func_0_0(175) + 0.707107 * occ_func_0_0(142) +
              0.707107 * occ_func_0_0(159) + 0.707107 * occ_func_0_0(158) +
              0.707107 * occ_func_0_0(160) + 0.707107 * occ_func_0_0(157)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_7_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(161) + occ_func_0_1(156) + occ_func_0_1(171) +
          occ_func_0_1(146) + occ_func_0_1(174) + occ_func_0_1(143) +
          occ_func_0_1(175) + occ_func_0_1(142) + occ_func_0_1(159) +
          occ_func_0_1(158) + occ_func_0_1(160) + occ_func_0_1(157)) /
         6.;
}

/**** Basis functions for orbit 8****
0.0000000 0.0000000 0.0000000 A  B  C

0.0000000 0.0000000 1.0000000 A  B  C

0.0000000 1.0000000 0.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_8_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(9) +
          occ_func_0_0(10) * occ_func_0_0(12) * occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(12) +
          occ_func_0_0(12) * occ_func_0_0(7) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(8) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(9) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(8)) /
         8.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_8_1() const {
  return ((0.57735 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(9) +
           0.57735 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(9) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(9)) +
          (0.57735 * occ_func_0_0(10) * occ_func_0_0(12) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(10) * occ_func_0_1(12) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(10) * occ_func_0_0(12) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(11) * occ_func_0_0(10) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(11) * occ_func_0_1(10) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(11) * occ_func_0_0(10) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(12) +
           0.57735 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(12) +
           0.57735 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(12)) +
          (0.57735 * occ_func_0_0(12) * occ_func_0_0(7) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(12) * occ_func_0_1(7) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(12) * occ_func_0_0(7) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(8) +
           0.57735 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(8) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(8)) +
          (0.57735 * occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(9) +
           0.57735 * occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(9) +
           0.57735 * occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(9)) +
          (0.57735 * occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.57735 * occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(8) +
           0.57735 * occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(8))) /
         8.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_8_2() const {
  return ((0.57735 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(9) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(9) +
           0.57735 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(9)) +
          (0.57735 * occ_func_0_0(10) * occ_func_0_1(12) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(10) * occ_func_0_0(12) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(10) * occ_func_0_1(12) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(11) * occ_func_0_1(10) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(11) * occ_func_0_0(10) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(11) * occ_func_0_1(10) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(12) +
           0.57735 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(12) +
           0.57735 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(12)) +
          (0.57735 * occ_func_0_0(12) * occ_func_0_1(7) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(12) * occ_func_0_0(7) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(12) * occ_func_0_1(7) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(8) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(8) +
           0.57735 * occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(8)) +
          (0.57735 * occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(9) +
           0.57735 * occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(9) +
           0.57735 * occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(9)) +
          (0.57735 * occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(8) +
           0.57735 * occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.57735 * occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(8))) /
         8.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_8_3() const {
  return (occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(9) +
          occ_func_0_1(10) * occ_func_0_1(12) * occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(12) +
          occ_func_0_1(12) * occ_func_0_1(7) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(8) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(9) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(8)) /
         8.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_8_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(9) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(8) +
          occ_func_0_0(4) * occ_func_0_0(5) * occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_0(12) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(3) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(1) +
          occ_func_0_0(11) * occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_0(3) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_0(2) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(12) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(7) +
          occ_func_0_0(6) * occ_func_0_0(1) * occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_0(7) * occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(6) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(1) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(8) +
          occ_func_0_0(5) * occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_0(3) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(9) +
          occ_func_0_0(10) * occ_func_0_0(4) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_0(3) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(8) +
          occ_func_0_0(7) * occ_func_0_0(5) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_0(6)) /
         8.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_8_1_at_0() const {
  return ((0.57735 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(9) +
           0.57735 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(9) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(9)) +
          (0.57735 * occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.57735 * occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(8) +
           0.57735 * occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(8)) +
          (0.57735 * occ_func_0_0(4) * occ_func_0_0(5) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(4) * occ_func_0_1(5) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(4) * occ_func_0_0(5) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(10) * occ_func_0_0(12) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(10) * occ_func_0_1(12) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(10) * occ_func_0_0(12) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(3) +
           0.57735 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(3) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(3)) +
          (0.57735 * occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(1) +
           0.57735 * occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(1) +
           0.57735 * occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(1)) +
          (0.57735 * occ_func_0_0(11) * occ_func_0_0(10) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(11) * occ_func_0_1(10) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(11) * occ_func_0_0(10) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_1(3) +
           0.57735 * occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_0(3) +
           0.57735 * occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_0(3)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_1(2) +
           0.57735 * occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_0(2) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_0(2)) +
          (0.57735 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(12) +
           0.57735 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(12) +
           0.57735 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(12)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(7) +
           0.57735 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(7) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(7)) +
          (0.57735 * occ_func_0_0(6) * occ_func_0_0(1) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(6) * occ_func_0_1(1) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(6) * occ_func_0_0(1) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(12) * occ_func_0_0(7) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(12) * occ_func_0_1(7) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(12) * occ_func_0_0(7) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(6) +
           0.57735 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(6) +
           0.57735 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(6)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(1) +
           0.57735 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(1) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(1)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(8) +
           0.57735 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(8) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(8)) +
          (0.57735 * occ_func_0_0(5) * occ_func_0_0(10) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(5) * occ_func_0_1(10) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(5) * occ_func_0_0(10) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_1(3) +
           0.57735 * occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_0(3) +
           0.57735 * occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_0(3)) +
          (0.57735 * occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(9) +
           0.57735 * occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(9) +
           0.57735 * occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(9)) +
          (0.57735 * occ_func_0_0(10) * occ_func_0_0(4) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(10) * occ_func_0_1(4) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(10) * occ_func_0_0(4) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_1(3) +
           0.57735 * occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_0(3) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_0(3)) +
          (0.57735 * occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.57735 * occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(8) +
           0.57735 * occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(8)) +
          (0.57735 * occ_func_0_0(7) * occ_func_0_0(5) * occ_func_0_1(0) +
           0.57735 * occ_func_0_0(7) * occ_func_0_1(5) * occ_func_0_0(0) +
           0.57735 * occ_func_0_1(7) * occ_func_0_0(5) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_1(6) +
           0.57735 * occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_0(6) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_0(6))) /
         8.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_8_2_at_0() const {
  return ((0.57735 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(9) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(9) +
           0.57735 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(9)) +
          (0.57735 * occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(8) +
           0.57735 * occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.57735 * occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(8)) +
          (0.57735 * occ_func_0_0(4) * occ_func_0_1(5) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(4) * occ_func_0_0(5) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(4) * occ_func_0_1(5) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(10) * occ_func_0_1(12) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(10) * occ_func_0_0(12) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(10) * occ_func_0_1(12) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(3) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(3) +
           0.57735 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(3)) +
          (0.57735 * occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(1) +
           0.57735 * occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(1) +
           0.57735 * occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(1)) +
          (0.57735 * occ_func_0_0(11) * occ_func_0_1(10) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(11) * occ_func_0_0(10) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(11) * occ_func_0_1(10) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_1(3) +
           0.57735 * occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_1(3) +
           0.57735 * occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_0(3)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_1(2) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_1(2) +
           0.57735 * occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_0(2)) +
          (0.57735 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(12) +
           0.57735 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(12) +
           0.57735 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(12)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(7) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(7) +
           0.57735 * occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(7)) +
          (0.57735 * occ_func_0_0(6) * occ_func_0_1(1) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(6) * occ_func_0_0(1) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(6) * occ_func_0_1(1) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(12) * occ_func_0_1(7) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(12) * occ_func_0_0(7) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(12) * occ_func_0_1(7) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(6) +
           0.57735 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(6) +
           0.57735 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(6)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(1) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(1) +
           0.57735 * occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(1)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(8) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(8) +
           0.57735 * occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(8)) +
          (0.57735 * occ_func_0_0(5) * occ_func_0_1(10) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(5) * occ_func_0_0(10) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(5) * occ_func_0_1(10) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_1(3) +
           0.57735 * occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_1(3) +
           0.57735 * occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_0(3)) +
          (0.57735 * occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(9) +
           0.57735 * occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(9) +
           0.57735 * occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(9)) +
          (0.57735 * occ_func_0_0(10) * occ_func_0_1(4) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(10) * occ_func_0_0(4) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(10) * occ_func_0_1(4) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_1(3) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_1(3) +
           0.57735 * occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_0(3)) +
          (0.57735 * occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(8) +
           0.57735 * occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.57735 * occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(8)) +
          (0.57735 * occ_func_0_0(7) * occ_func_0_1(5) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(7) * occ_func_0_0(5) * occ_func_0_1(0) +
           0.57735 * occ_func_0_1(7) * occ_func_0_1(5) * occ_func_0_0(0)) +
          (0.57735 * occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_1(6) +
           0.57735 * occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_1(6) +
           0.57735 * occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_0(6))) /
         8.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_8_3_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(9) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(8) +
          occ_func_0_1(4) * occ_func_0_1(5) * occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_1(12) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(3) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(1) +
          occ_func_0_1(11) * occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_1(3) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_1(2) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(12) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(7) +
          occ_func_0_1(6) * occ_func_0_1(1) * occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_1(7) * occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(6) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(1) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(8) +
          occ_func_0_1(5) * occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_1(3) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(9) +
          occ_func_0_1(10) * occ_func_0_1(4) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_1(3) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(8) +
          occ_func_0_1(7) * occ_func_0_1(5) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_1(6)) /
         8.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_8_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(7) * occ_func_0_0(9) +
          occ_func_0_0(6) * occ_func_0_0(8) +
          occ_func_0_0(4) * occ_func_0_0(5) +
          occ_func_0_0(10) * occ_func_0_0(12) +
          occ_func_0_0(9) * occ_func_0_0(3) +
          occ_func_0_0(4) * occ_func_0_0(1) +
          occ_func_0_0(11) * occ_func_0_0(10) +
          occ_func_0_0(8) * occ_func_0_0(3) +
          occ_func_0_0(5) * occ_func_0_0(2) +
          occ_func_0_0(11) * occ_func_0_0(12) +
          occ_func_0_0(2) * occ_func_0_0(7) +
          occ_func_0_0(6) * occ_func_0_0(1) +
          occ_func_0_0(12) * occ_func_0_0(7) +
          occ_func_0_0(11) * occ_func_0_0(6) +
          occ_func_0_0(2) * occ_func_0_0(1) +
          occ_func_0_0(11) * occ_func_0_0(8) +
          occ_func_0_0(5) * occ_func_0_0(10) +
          occ_func_0_0(2) * occ_func_0_0(3) +
          occ_func_0_0(12) * occ_func_0_0(9) +
          occ_func_0_0(10) * occ_func_0_0(4) +
          occ_func_0_0(1) * occ_func_0_0(3) +
          occ_func_0_0(9) * occ_func_0_0(8) +
          occ_func_0_0(7) * occ_func_0_0(5) +
          occ_func_0_0(4) * occ_func_0_0(6)) /
         8.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_8_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             ((0.57735 * occ_func_0_0(7) * occ_func_0_1(9) +
               0.57735 * occ_func_0_1(7) * occ_func_0_0(9)) +
              (0.57735 * occ_func_0_0(6) * occ_func_0_1(8) +
               0.57735 * occ_func_0_1(6) * occ_func_0_0(8)) +
              (0.57735 * occ_func_0_0(4) * occ_func_0_1(5) +
               0.57735 * occ_func_0_1(4) * occ_func_0_0(5)) +
              (0.57735 * occ_func_0_0(10) * occ_func_0_1(12) +
               0.57735 * occ_func_0_1(10) * occ_func_0_0(12)) +
              (0.57735 * occ_func_0_0(9) * occ_func_0_1(3) +
               0.57735 * occ_func_0_1(9) * occ_func_0_0(3)) +
              (0.57735 * occ_func_0_0(4) * occ_func_0_1(1) +
               0.57735 * occ_func_0_1(4) * occ_func_0_0(1)) +
              (0.57735 * occ_func_0_0(11) * occ_func_0_1(10) +
               0.57735 * occ_func_0_1(11) * occ_func_0_0(10)) +
              (0.57735 * occ_func_0_0(8) * occ_func_0_1(3) +
               0.57735 * occ_func_0_1(8) * occ_func_0_0(3)) +
              (0.57735 * occ_func_0_0(5) * occ_func_0_1(2) +
               0.57735 * occ_func_0_1(5) * occ_func_0_0(2)) +
              (0.57735 * occ_func_0_0(11) * occ_func_0_1(12) +
               0.57735 * occ_func_0_1(11) * occ_func_0_0(12)) +
              (0.57735 * occ_func_0_0(2) * occ_func_0_1(7) +
               0.57735 * occ_func_0_1(2) * occ_func_0_0(7)) +
              (0.57735 * occ_func_0_0(6) * occ_func_0_1(1) +
               0.57735 * occ_func_0_1(6) * occ_func_0_0(1)) +
              (0.57735 * occ_func_0_0(12) * occ_func_0_1(7) +
               0.57735 * occ_func_0_1(12) * occ_func_0_0(7)) +
              (0.57735 * occ_func_0_0(11) * occ_func_0_1(6) +
               0.57735 * occ_func_0_1(11) * occ_func_0_0(6)) +
              (0.57735 * occ_func_0_0(2) * occ_func_0_1(1) +
               0.57735 * occ_func_0_1(2) * occ_func_0_0(1)) +
              (0.57735 * occ_func_0_0(11) * occ_func_0_1(8) +
               0.57735 * occ_func_0_1(11) * occ_func_0_0(8)) +
              (0.57735 * occ_func_0_0(5) * occ_func_0_1(10) +
               0.57735 * occ_func_0_1(5) * occ_func_0_0(10)) +
              (0.57735 * occ_func_0_0(2) * occ_func_0_1(3) +
               0.57735 * occ_func_0_1(2) * occ_func_0_0(3)) +
              (0.57735 * occ_func_0_0(12) * occ_func_0_1(9) +
               0.57735 * occ_func_0_1(12) * occ_func_0_0(9)) +
              (0.57735 * occ_func_0_0(10) * occ_func_0_1(4) +
               0.57735 * occ_func_0_1(10) * occ_func_0_0(4)) +
              (0.57735 * occ_func_0_0(1) * occ_func_0_1(3) +
               0.57735 * occ_func_0_1(1) * occ_func_0_0(3)) +
              (0.57735 * occ_func_0_0(9) * occ_func_0_1(8) +
               0.57735 * occ_func_0_1(9) * occ_func_0_0(8)) +
              (0.57735 * occ_func_0_0(7) * occ_func_0_1(5) +
               0.57735 * occ_func_0_1(7) * occ_func_0_0(5)) +
              (0.57735 * occ_func_0_0(4) * occ_func_0_1(6) +
               0.57735 * occ_func_0_1(4) * occ_func_0_0(6))) /
             8. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.57735 * occ_func_0_0(7) * occ_func_0_0(9) +
              0.57735 * occ_func_0_0(6) * occ_func_0_0(8) +
              0.57735 * occ_func_0_0(4) * occ_func_0_0(5) +
              0.57735 * occ_func_0_0(10) * occ_func_0_0(12) +
              0.57735 * occ_func_0_0(9) * occ_func_0_0(3) +
              0.57735 * occ_func_0_0(4) * occ_func_0_0(1) +
              0.57735 * occ_func_0_0(11) * occ_func_0_0(10) +
              0.57735 * occ_func_0_0(8) * occ_func_0_0(3) +
              0.57735 * occ_func_0_0(5) * occ_func_0_0(2) +
              0.57735 * occ_func_0_0(11) * occ_func_0_0(12) +
              0.57735 * occ_func_0_0(2) * occ_func_0_0(7) +
              0.57735 * occ_func_0_0(6) * occ_func_0_0(1) +
              0.57735 * occ_func_0_0(12) * occ_func_0_0(7) +
              0.57735 * occ_func_0_0(11) * occ_func_0_0(6) +
              0.57735 * occ_func_0_0(2) * occ_func_0_0(1) +
              0.57735 * occ_func_0_0(11) * occ_func_0_0(8) +
              0.57735 * occ_func_0_0(5) * occ_func_0_0(10) +
              0.57735 * occ_func_0_0(2) * occ_func_0_0(3) +
              0.57735 * occ_func_0_0(12) * occ_func_0_0(9) +
              0.57735 * occ_func_0_0(10) * occ_func_0_0(4) +
              0.57735 * occ_func_0_0(1) * occ_func_0_0(3) +
              0.57735 * occ_func_0_0(9) * occ_func_0_0(8) +
              0.57735 * occ_func_0_0(7) * occ_func_0_0(5) +
              0.57735 * occ_func_0_0(4) * occ_func_0_0(6)) /
             8.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_8_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.57735 * occ_func_0_1(7) * occ_func_0_1(9) +
              0.57735 * occ_func_0_1(6) * occ_func_0_1(8) +
              0.57735 * occ_func_0_1(4) * occ_func_0_1(5) +
              0.57735 * occ_func_0_1(10) * occ_func_0_1(12) +
              0.57735 * occ_func_0_1(9) * occ_func_0_1(3) +
              0.57735 * occ_func_0_1(4) * occ_func_0_1(1) +
              0.57735 * occ_func_0_1(11) * occ_func_0_1(10) +
              0.57735 * occ_func_0_1(8) * occ_func_0_1(3) +
              0.57735 * occ_func_0_1(5) * occ_func_0_1(2) +
              0.57735 * occ_func_0_1(11) * occ_func_0_1(12) +
              0.57735 * occ_func_0_1(2) * occ_func_0_1(7) +
              0.57735 * occ_func_0_1(6) * occ_func_0_1(1) +
              0.57735 * occ_func_0_1(12) * occ_func_0_1(7) +
              0.57735 * occ_func_0_1(11) * occ_func_0_1(6) +
              0.57735 * occ_func_0_1(2) * occ_func_0_1(1) +
              0.57735 * occ_func_0_1(11) * occ_func_0_1(8) +
              0.57735 * occ_func_0_1(5) * occ_func_0_1(10) +
              0.57735 * occ_func_0_1(2) * occ_func_0_1(3) +
              0.57735 * occ_func_0_1(12) * occ_func_0_1(9) +
              0.57735 * occ_func_0_1(10) * occ_func_0_1(4) +
              0.57735 * occ_func_0_1(1) * occ_func_0_1(3) +
              0.57735 * occ_func_0_1(9) * occ_func_0_1(8) +
              0.57735 * occ_func_0_1(7) * occ_func_0_1(5) +
              0.57735 * occ_func_0_1(4) * occ_func_0_1(6)) /
             8. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             ((0.57735 * occ_func_0_0(7) * occ_func_0_1(9) +
               0.57735 * occ_func_0_1(7) * occ_func_0_0(9)) +
              (0.57735 * occ_func_0_0(6) * occ_func_0_1(8) +
               0.57735 * occ_func_0_1(6) * occ_func_0_0(8)) +
              (0.57735 * occ_func_0_0(4) * occ_func_0_1(5) +
               0.57735 * occ_func_0_1(4) * occ_func_0_0(5)) +
              (0.57735 * occ_func_0_0(10) * occ_func_0_1(12) +
               0.57735 * occ_func_0_1(10) * occ_func_0_0(12)) +
              (0.57735 * occ_func_0_0(9) * occ_func_0_1(3) +
               0.57735 * occ_func_0_1(9) * occ_func_0_0(3)) +
              (0.57735 * occ_func_0_0(4) * occ_func_0_1(1) +
               0.57735 * occ_func_0_1(4) * occ_func_0_0(1)) +
              (0.57735 * occ_func_0_0(11) * occ_func_0_1(10) +
               0.57735 * occ_func_0_1(11) * occ_func_0_0(10)) +
              (0.57735 * occ_func_0_0(8) * occ_func_0_1(3) +
               0.57735 * occ_func_0_1(8) * occ_func_0_0(3)) +
              (0.57735 * occ_func_0_0(5) * occ_func_0_1(2) +
               0.57735 * occ_func_0_1(5) * occ_func_0_0(2)) +
              (0.57735 * occ_func_0_0(11) * occ_func_0_1(12) +
               0.57735 * occ_func_0_1(11) * occ_func_0_0(12)) +
              (0.57735 * occ_func_0_0(2) * occ_func_0_1(7) +
               0.57735 * occ_func_0_1(2) * occ_func_0_0(7)) +
              (0.57735 * occ_func_0_0(6) * occ_func_0_1(1) +
               0.57735 * occ_func_0_1(6) * occ_func_0_0(1)) +
              (0.57735 * occ_func_0_0(12) * occ_func_0_1(7) +
               0.57735 * occ_func_0_1(12) * occ_func_0_0(7)) +
              (0.57735 * occ_func_0_0(11) * occ_func_0_1(6) +
               0.57735 * occ_func_0_1(11) * occ_func_0_0(6)) +
              (0.57735 * occ_func_0_0(2) * occ_func_0_1(1) +
               0.57735 * occ_func_0_1(2) * occ_func_0_0(1)) +
              (0.57735 * occ_func_0_0(11) * occ_func_0_1(8) +
               0.57735 * occ_func_0_1(11) * occ_func_0_0(8)) +
              (0.57735 * occ_func_0_0(5) * occ_func_0_1(10) +
               0.57735 * occ_func_0_1(5) * occ_func_0_0(10)) +
              (0.57735 * occ_func_0_0(2) * occ_func_0_1(3) +
               0.57735 * occ_func_0_1(2) * occ_func_0_0(3)) +
              (0.57735 * occ_func_0_0(12) * occ_func_0_1(9) +
               0.57735 * occ_func_0_1(12) * occ_func_0_0(9)) +
              (0.57735 * occ_func_0_0(10) * occ_func_0_1(4) +
               0.57735 * occ_func_0_1(10) * occ_func_0_0(4)) +
              (0.57735 * occ_func_0_0(1) * occ_func_0_1(3) +
               0.57735 * occ_func_0_1(1) * occ_func_0_0(3)) +
              (0.57735 * occ_func_0_0(9) * occ_func_0_1(8) +
               0.57735 * occ_func_0_1(9) * occ_func_0_0(8)) +
              (0.57735 * occ_func_0_0(7) * occ_func_0_1(5) +
               0.57735 * occ_func_0_1(7) * occ_func_0_0(5)) +
              (0.57735 * occ_func_0_0(4) * occ_func_0_1(6) +
               0.57735 * occ_func_0_1(4) * occ_func_0_0(6))) /
             8.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_8_3_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(7) * occ_func_0_1(9) +
          occ_func_0_1(6) * occ_func_0_1(8) +
          occ_func_0_1(4) * occ_func_0_1(5) +
          occ_func_0_1(10) * occ_func_0_1(12) +
          occ_func_0_1(9) * occ_func_0_1(3) +
          occ_func_0_1(4) * occ_func_0_1(1) +
          occ_func_0_1(11) * occ_func_0_1(10) +
          occ_func_0_1(8) * occ_func_0_1(3) +
          occ_func_0_1(5) * occ_func_0_1(2) +
          occ_func_0_1(11) * occ_func_0_1(12) +
          occ_func_0_1(2) * occ_func_0_1(7) +
          occ_func_0_1(6) * occ_func_0_1(1) +
          occ_func_0_1(12) * occ_func_0_1(7) +
          occ_func_0_1(11) * occ_func_0_1(6) +
          occ_func_0_1(2) * occ_func_0_1(1) +
          occ_func_0_1(11) * occ_func_0_1(8) +
          occ_func_0_1(5) * occ_func_0_1(10) +
          occ_func_0_1(2) * occ_func_0_1(3) +
          occ_func_0_1(12) * occ_func_0_1(9) +
          occ_func_0_1(10) * occ_func_0_1(4) +
          occ_func_0_1(1) * occ_func_0_1(3) +
          occ_func_0_1(9) * occ_func_0_1(8) +
          occ_func_0_1(7) * occ_func_0_1(5) +
          occ_func_0_1(4) * occ_func_0_1(6)) /
         8.;
}

/**** Basis functions for orbit 9****
0.0000000 0.0000000 0.0000000 A  B  C

0.0000000 1.0000000 1.0000000 A  B  C

1.0000000 1.0000000 0.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_9_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(32) * occ_func_0_0(39) +
          occ_func_0_0(35) * occ_func_0_0(7) * occ_func_0_0(0) +
          occ_func_0_0(38) * occ_func_0_0(0) * occ_func_0_0(9) +
          occ_func_0_0(0) * occ_func_0_0(41) * occ_func_0_0(42) +
          occ_func_0_0(36) * occ_func_0_0(0) * occ_func_0_0(10) +
          occ_func_0_0(0) * occ_func_0_0(42) * occ_func_0_0(40) +
          occ_func_0_0(35) * occ_func_0_0(0) * occ_func_0_0(12) +
          occ_func_0_0(0) * occ_func_0_0(31) * occ_func_0_0(36) +
          occ_func_0_0(42) * occ_func_0_0(0) * occ_func_0_0(8) +
          occ_func_0_0(0) * occ_func_0_0(38) * occ_func_0_0(31) +
          occ_func_0_0(0) * occ_func_0_0(37) * occ_func_0_0(32) +
          occ_func_0_0(33) * occ_func_0_0(0) * occ_func_0_0(12) +
          occ_func_0_0(0) * occ_func_0_0(35) * occ_func_0_0(34) +
          occ_func_0_0(41) * occ_func_0_0(0) * occ_func_0_0(7) +
          occ_func_0_0(0) * occ_func_0_0(39) * occ_func_0_0(37) +
          occ_func_0_0(39) * occ_func_0_0(0) * occ_func_0_0(11) +
          occ_func_0_0(39) * occ_func_0_0(8) * occ_func_0_0(0) +
          occ_func_0_0(37) * occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_0(38) * occ_func_0_0(12) * occ_func_0_0(0) +
          occ_func_0_0(34) * occ_func_0_0(11) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(40) * occ_func_0_0(41) +
          occ_func_0_0(42) * occ_func_0_0(9) * occ_func_0_0(0) +
          occ_func_0_0(33) * occ_func_0_0(11) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(36) * occ_func_0_0(38)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_9_1() const {
  return (occ_func_0_1(0) * occ_func_0_0(32) * occ_func_0_0(39) +
          occ_func_0_0(35) * occ_func_0_0(7) * occ_func_0_1(0) +
          occ_func_0_0(38) * occ_func_0_1(0) * occ_func_0_0(9) +
          occ_func_0_1(0) * occ_func_0_0(41) * occ_func_0_0(42) +
          occ_func_0_0(36) * occ_func_0_1(0) * occ_func_0_0(10) +
          occ_func_0_1(0) * occ_func_0_0(42) * occ_func_0_0(40) +
          occ_func_0_0(35) * occ_func_0_1(0) * occ_func_0_0(12) +
          occ_func_0_1(0) * occ_func_0_0(31) * occ_func_0_0(36) +
          occ_func_0_0(42) * occ_func_0_1(0) * occ_func_0_0(8) +
          occ_func_0_1(0) * occ_func_0_0(38) * occ_func_0_0(31) +
          occ_func_0_1(0) * occ_func_0_0(37) * occ_func_0_0(32) +
          occ_func_0_0(33) * occ_func_0_1(0) * occ_func_0_0(12) +
          occ_func_0_1(0) * occ_func_0_0(35) * occ_func_0_0(34) +
          occ_func_0_0(41) * occ_func_0_1(0) * occ_func_0_0(7) +
          occ_func_0_1(0) * occ_func_0_0(39) * occ_func_0_0(37) +
          occ_func_0_0(39) * occ_func_0_1(0) * occ_func_0_0(11) +
          occ_func_0_0(39) * occ_func_0_0(8) * occ_func_0_1(0) +
          occ_func_0_0(37) * occ_func_0_0(10) * occ_func_0_1(0) +
          occ_func_0_0(38) * occ_func_0_0(12) * occ_func_0_1(0) +
          occ_func_0_0(34) * occ_func_0_0(11) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(40) * occ_func_0_0(41) +
          occ_func_0_0(42) * occ_func_0_0(9) * occ_func_0_1(0) +
          occ_func_0_0(33) * occ_func_0_0(11) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(36) * occ_func_0_0(38)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_9_2() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(32) * occ_func_0_1(39) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(32) * occ_func_0_0(39)) +
          (0.707107 * occ_func_0_0(35) * occ_func_0_1(7) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(35) * occ_func_0_0(7) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(38) * occ_func_0_0(0) * occ_func_0_1(9) +
           0.707107 * occ_func_0_1(38) * occ_func_0_0(0) * occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(41) * occ_func_0_1(42) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(41) * occ_func_0_0(42)) +
          (0.707107 * occ_func_0_0(36) * occ_func_0_0(0) * occ_func_0_1(10) +
           0.707107 * occ_func_0_1(36) * occ_func_0_0(0) * occ_func_0_0(10)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(42) * occ_func_0_1(40) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(42) * occ_func_0_0(40)) +
          (0.707107 * occ_func_0_0(35) * occ_func_0_0(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(35) * occ_func_0_0(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(31) * occ_func_0_1(36) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(31) * occ_func_0_0(36)) +
          (0.707107 * occ_func_0_0(42) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.707107 * occ_func_0_1(42) * occ_func_0_0(0) * occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(38) * occ_func_0_1(31) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(38) * occ_func_0_0(31)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(37) * occ_func_0_1(32) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(37) * occ_func_0_0(32)) +
          (0.707107 * occ_func_0_0(33) * occ_func_0_0(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(33) * occ_func_0_0(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(35) * occ_func_0_1(34) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(35) * occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(41) * occ_func_0_0(0) * occ_func_0_1(7) +
           0.707107 * occ_func_0_1(41) * occ_func_0_0(0) * occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(39) * occ_func_0_1(37) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(39) * occ_func_0_0(37)) +
          (0.707107 * occ_func_0_0(39) * occ_func_0_0(0) * occ_func_0_1(11) +
           0.707107 * occ_func_0_1(39) * occ_func_0_0(0) * occ_func_0_0(11)) +
          (0.707107 * occ_func_0_0(39) * occ_func_0_1(8) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(39) * occ_func_0_0(8) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(37) * occ_func_0_1(10) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(37) * occ_func_0_0(10) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(38) * occ_func_0_1(12) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(38) * occ_func_0_0(12) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(34) * occ_func_0_1(11) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(34) * occ_func_0_0(11) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(40) * occ_func_0_1(41) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(40) * occ_func_0_0(41)) +
          (0.707107 * occ_func_0_0(42) * occ_func_0_1(9) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(42) * occ_func_0_0(9) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(33) * occ_func_0_1(11) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(33) * occ_func_0_0(11) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(36) * occ_func_0_1(38) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(36) * occ_func_0_0(38))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_9_3() const {
  return ((0.707107 * occ_func_0_1(0) * occ_func_0_0(32) * occ_func_0_1(39) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(32) * occ_func_0_0(39)) +
          (0.707107 * occ_func_0_0(35) * occ_func_0_1(7) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(35) * occ_func_0_0(7) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(38) * occ_func_0_1(0) * occ_func_0_1(9) +
           0.707107 * occ_func_0_1(38) * occ_func_0_1(0) * occ_func_0_0(9)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(41) * occ_func_0_1(42) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(41) * occ_func_0_0(42)) +
          (0.707107 * occ_func_0_0(36) * occ_func_0_1(0) * occ_func_0_1(10) +
           0.707107 * occ_func_0_1(36) * occ_func_0_1(0) * occ_func_0_0(10)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(42) * occ_func_0_1(40) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(42) * occ_func_0_0(40)) +
          (0.707107 * occ_func_0_0(35) * occ_func_0_1(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(35) * occ_func_0_1(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(31) * occ_func_0_1(36) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(31) * occ_func_0_0(36)) +
          (0.707107 * occ_func_0_0(42) * occ_func_0_1(0) * occ_func_0_1(8) +
           0.707107 * occ_func_0_1(42) * occ_func_0_1(0) * occ_func_0_0(8)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(38) * occ_func_0_1(31) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(38) * occ_func_0_0(31)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(37) * occ_func_0_1(32) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(37) * occ_func_0_0(32)) +
          (0.707107 * occ_func_0_0(33) * occ_func_0_1(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(33) * occ_func_0_1(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(35) * occ_func_0_1(34) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(35) * occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(41) * occ_func_0_1(0) * occ_func_0_1(7) +
           0.707107 * occ_func_0_1(41) * occ_func_0_1(0) * occ_func_0_0(7)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(39) * occ_func_0_1(37) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(39) * occ_func_0_0(37)) +
          (0.707107 * occ_func_0_0(39) * occ_func_0_1(0) * occ_func_0_1(11) +
           0.707107 * occ_func_0_1(39) * occ_func_0_1(0) * occ_func_0_0(11)) +
          (0.707107 * occ_func_0_0(39) * occ_func_0_1(8) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(39) * occ_func_0_0(8) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(37) * occ_func_0_1(10) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(37) * occ_func_0_0(10) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(38) * occ_func_0_1(12) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(38) * occ_func_0_0(12) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(34) * occ_func_0_1(11) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(34) * occ_func_0_0(11) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(40) * occ_func_0_1(41) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(40) * occ_func_0_0(41)) +
          (0.707107 * occ_func_0_0(42) * occ_func_0_1(9) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(42) * occ_func_0_0(9) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(33) * occ_func_0_1(11) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(33) * occ_func_0_0(11) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(36) * occ_func_0_1(38) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(36) * occ_func_0_0(38))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_9_4() const {
  return (occ_func_0_0(0) * occ_func_0_1(32) * occ_func_0_1(39) +
          occ_func_0_1(35) * occ_func_0_1(7) * occ_func_0_0(0) +
          occ_func_0_1(38) * occ_func_0_0(0) * occ_func_0_1(9) +
          occ_func_0_0(0) * occ_func_0_1(41) * occ_func_0_1(42) +
          occ_func_0_1(36) * occ_func_0_0(0) * occ_func_0_1(10) +
          occ_func_0_0(0) * occ_func_0_1(42) * occ_func_0_1(40) +
          occ_func_0_1(35) * occ_func_0_0(0) * occ_func_0_1(12) +
          occ_func_0_0(0) * occ_func_0_1(31) * occ_func_0_1(36) +
          occ_func_0_1(42) * occ_func_0_0(0) * occ_func_0_1(8) +
          occ_func_0_0(0) * occ_func_0_1(38) * occ_func_0_1(31) +
          occ_func_0_0(0) * occ_func_0_1(37) * occ_func_0_1(32) +
          occ_func_0_1(33) * occ_func_0_0(0) * occ_func_0_1(12) +
          occ_func_0_0(0) * occ_func_0_1(35) * occ_func_0_1(34) +
          occ_func_0_1(41) * occ_func_0_0(0) * occ_func_0_1(7) +
          occ_func_0_0(0) * occ_func_0_1(39) * occ_func_0_1(37) +
          occ_func_0_1(39) * occ_func_0_0(0) * occ_func_0_1(11) +
          occ_func_0_1(39) * occ_func_0_1(8) * occ_func_0_0(0) +
          occ_func_0_1(37) * occ_func_0_1(10) * occ_func_0_0(0) +
          occ_func_0_1(38) * occ_func_0_1(12) * occ_func_0_0(0) +
          occ_func_0_1(34) * occ_func_0_1(11) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(40) * occ_func_0_1(41) +
          occ_func_0_1(42) * occ_func_0_1(9) * occ_func_0_0(0) +
          occ_func_0_1(33) * occ_func_0_1(11) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(36) * occ_func_0_1(38)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_9_5() const {
  return (occ_func_0_1(0) * occ_func_0_1(32) * occ_func_0_1(39) +
          occ_func_0_1(35) * occ_func_0_1(7) * occ_func_0_1(0) +
          occ_func_0_1(38) * occ_func_0_1(0) * occ_func_0_1(9) +
          occ_func_0_1(0) * occ_func_0_1(41) * occ_func_0_1(42) +
          occ_func_0_1(36) * occ_func_0_1(0) * occ_func_0_1(10) +
          occ_func_0_1(0) * occ_func_0_1(42) * occ_func_0_1(40) +
          occ_func_0_1(35) * occ_func_0_1(0) * occ_func_0_1(12) +
          occ_func_0_1(0) * occ_func_0_1(31) * occ_func_0_1(36) +
          occ_func_0_1(42) * occ_func_0_1(0) * occ_func_0_1(8) +
          occ_func_0_1(0) * occ_func_0_1(38) * occ_func_0_1(31) +
          occ_func_0_1(0) * occ_func_0_1(37) * occ_func_0_1(32) +
          occ_func_0_1(33) * occ_func_0_1(0) * occ_func_0_1(12) +
          occ_func_0_1(0) * occ_func_0_1(35) * occ_func_0_1(34) +
          occ_func_0_1(41) * occ_func_0_1(0) * occ_func_0_1(7) +
          occ_func_0_1(0) * occ_func_0_1(39) * occ_func_0_1(37) +
          occ_func_0_1(39) * occ_func_0_1(0) * occ_func_0_1(11) +
          occ_func_0_1(39) * occ_func_0_1(8) * occ_func_0_1(0) +
          occ_func_0_1(37) * occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_1(38) * occ_func_0_1(12) * occ_func_0_1(0) +
          occ_func_0_1(34) * occ_func_0_1(11) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(40) * occ_func_0_1(41) +
          occ_func_0_1(42) * occ_func_0_1(9) * occ_func_0_1(0) +
          occ_func_0_1(33) * occ_func_0_1(11) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(36) * occ_func_0_1(38)) /
         24.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(32) * occ_func_0_0(39) +
          occ_func_0_0(29) * occ_func_0_0(0) * occ_func_0_0(11) +
          occ_func_0_0(22) * occ_func_0_0(2) * occ_func_0_0(0) +
          occ_func_0_0(35) * occ_func_0_0(7) * occ_func_0_0(0) +
          occ_func_0_0(34) * occ_func_0_0(0) * occ_func_0_0(6) +
          occ_func_0_0(0) * occ_func_0_0(27) * occ_func_0_0(26) +
          occ_func_0_0(38) * occ_func_0_0(0) * occ_func_0_0(9) +
          occ_func_0_0(36) * occ_func_0_0(4) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(23) * occ_func_0_0(25) +
          occ_func_0_0(0) * occ_func_0_0(41) * occ_func_0_0(42) +
          occ_func_0_0(20) * occ_func_0_0(0) * occ_func_0_0(8) +
          occ_func_0_0(19) * occ_func_0_0(5) * occ_func_0_0(0) +
          occ_func_0_0(36) * occ_func_0_0(0) * occ_func_0_0(10) +
          occ_func_0_0(31) * occ_func_0_0(3) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(25) * occ_func_0_0(30) +
          occ_func_0_0(0) * occ_func_0_0(42) * occ_func_0_0(40) +
          occ_func_0_0(21) * occ_func_0_0(9) * occ_func_0_0(0) +
          occ_func_0_0(19) * occ_func_0_0(0) * occ_func_0_0(4) +
          occ_func_0_0(35) * occ_func_0_0(0) * occ_func_0_0(12) +
          occ_func_0_0(0) * occ_func_0_0(26) * occ_func_0_0(33) +
          occ_func_0_0(28) * occ_func_0_0(1) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(31) * occ_func_0_0(36) +
          occ_func_0_0(30) * occ_func_0_0(0) * occ_func_0_0(10) +
          occ_func_0_0(25) * occ_func_0_0(3) * occ_func_0_0(0) +
          occ_func_0_0(42) * occ_func_0_0(0) * occ_func_0_0(8) +
          occ_func_0_0(41) * occ_func_0_0(5) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(19) * occ_func_0_0(20) +
          occ_func_0_0(0) * occ_func_0_0(38) * occ_func_0_0(31) +
          occ_func_0_0(30) * occ_func_0_0(12) * occ_func_0_0(0) +
          occ_func_0_0(23) * occ_func_0_0(0) * occ_func_0_0(1) +
          occ_func_0_0(0) * occ_func_0_0(37) * occ_func_0_0(32) +
          occ_func_0_0(29) * occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_0(24) * occ_func_0_0(0) * occ_func_0_0(3) +
          occ_func_0_0(33) * occ_func_0_0(0) * occ_func_0_0(12) +
          occ_func_0_0(0) * occ_func_0_0(28) * occ_func_0_0(35) +
          occ_func_0_0(26) * occ_func_0_0(1) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(35) * occ_func_0_0(34) +
          occ_func_0_0(27) * occ_func_0_0(7) * occ_func_0_0(0) +
          occ_func_0_0(26) * occ_func_0_0(0) * occ_func_0_0(6) +
          occ_func_0_0(41) * occ_func_0_0(0) * occ_func_0_0(7) +
          occ_func_0_0(40) * occ_func_0_0(6) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(20) * occ_func_0_0(21) +
          occ_func_0_0(0) * occ_func_0_0(39) * occ_func_0_0(37) +
          occ_func_0_0(24) * occ_func_0_0(8) * occ_func_0_0(0) +
          occ_func_0_0(22) * occ_func_0_0(0) * occ_func_0_0(5) +
          occ_func_0_0(39) * occ_func_0_0(0) * occ_func_0_0(11) +
          occ_func_0_0(32) * occ_func_0_0(2) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(22) * occ_func_0_0(29) +
          occ_func_0_0(39) * occ_func_0_0(8) * occ_func_0_0(0) +
          occ_func_0_0(37) * occ_func_0_0(0) * occ_func_0_0(5) +
          occ_func_0_0(0) * occ_func_0_0(24) * occ_func_0_0(22) +
          occ_func_0_0(37) * occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_0(32) * occ_func_0_0(0) * occ_func_0_0(3) +
          occ_func_0_0(0) * occ_func_0_0(29) * occ_func_0_0(24) +
          occ_func_0_0(38) * occ_func_0_0(12) * occ_func_0_0(0) +
          occ_func_0_0(31) * occ_func_0_0(0) * occ_func_0_0(1) +
          occ_func_0_0(0) * occ_func_0_0(30) * occ_func_0_0(23) +
          occ_func_0_0(34) * occ_func_0_0(11) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(33) * occ_func_0_0(27) +
          occ_func_0_0(28) * occ_func_0_0(0) * occ_func_0_0(2) +
          occ_func_0_0(0) * occ_func_0_0(40) * occ_func_0_0(41) +
          occ_func_0_0(21) * occ_func_0_0(0) * occ_func_0_0(7) +
          occ_func_0_0(20) * occ_func_0_0(6) * occ_func_0_0(0) +
          occ_func_0_0(42) * occ_func_0_0(9) * occ_func_0_0(0) +
          occ_func_0_0(40) * occ_func_0_0(0) * occ_func_0_0(4) +
          occ_func_0_0(0) * occ_func_0_0(21) * occ_func_0_0(19) +
          occ_func_0_0(33) * occ_func_0_0(11) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(34) * occ_func_0_0(28) +
          occ_func_0_0(27) * occ_func_0_0(0) * occ_func_0_0(2) +
          occ_func_0_0(0) * occ_func_0_0(36) * occ_func_0_0(38) +
          occ_func_0_0(25) * occ_func_0_0(0) * occ_func_0_0(9) +
          occ_func_0_0(23) * occ_func_0_0(4) * occ_func_0_0(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_1_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_0(32) * occ_func_0_0(39) +
          occ_func_0_1(29) * occ_func_0_0(0) * occ_func_0_0(11) +
          occ_func_0_1(22) * occ_func_0_0(2) * occ_func_0_0(0) +
          occ_func_0_0(35) * occ_func_0_0(7) * occ_func_0_1(0) +
          occ_func_0_0(34) * occ_func_0_0(0) * occ_func_0_1(6) +
          occ_func_0_0(0) * occ_func_0_0(27) * occ_func_0_1(26) +
          occ_func_0_0(38) * occ_func_0_1(0) * occ_func_0_0(9) +
          occ_func_0_0(36) * occ_func_0_1(4) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(23) * occ_func_0_0(25) +
          occ_func_0_1(0) * occ_func_0_0(41) * occ_func_0_0(42) +
          occ_func_0_1(20) * occ_func_0_0(0) * occ_func_0_0(8) +
          occ_func_0_1(19) * occ_func_0_0(5) * occ_func_0_0(0) +
          occ_func_0_0(36) * occ_func_0_1(0) * occ_func_0_0(10) +
          occ_func_0_0(31) * occ_func_0_1(3) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(25) * occ_func_0_0(30) +
          occ_func_0_1(0) * occ_func_0_0(42) * occ_func_0_0(40) +
          occ_func_0_1(21) * occ_func_0_0(9) * occ_func_0_0(0) +
          occ_func_0_1(19) * occ_func_0_0(0) * occ_func_0_0(4) +
          occ_func_0_0(35) * occ_func_0_1(0) * occ_func_0_0(12) +
          occ_func_0_0(0) * occ_func_0_1(26) * occ_func_0_0(33) +
          occ_func_0_0(28) * occ_func_0_1(1) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(31) * occ_func_0_0(36) +
          occ_func_0_1(30) * occ_func_0_0(0) * occ_func_0_0(10) +
          occ_func_0_1(25) * occ_func_0_0(3) * occ_func_0_0(0) +
          occ_func_0_0(42) * occ_func_0_1(0) * occ_func_0_0(8) +
          occ_func_0_0(41) * occ_func_0_1(5) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(19) * occ_func_0_0(20) +
          occ_func_0_1(0) * occ_func_0_0(38) * occ_func_0_0(31) +
          occ_func_0_1(30) * occ_func_0_0(12) * occ_func_0_0(0) +
          occ_func_0_1(23) * occ_func_0_0(0) * occ_func_0_0(1) +
          occ_func_0_1(0) * occ_func_0_0(37) * occ_func_0_0(32) +
          occ_func_0_1(29) * occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_1(24) * occ_func_0_0(0) * occ_func_0_0(3) +
          occ_func_0_0(33) * occ_func_0_1(0) * occ_func_0_0(12) +
          occ_func_0_0(0) * occ_func_0_1(28) * occ_func_0_0(35) +
          occ_func_0_0(26) * occ_func_0_1(1) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(35) * occ_func_0_0(34) +
          occ_func_0_1(27) * occ_func_0_0(7) * occ_func_0_0(0) +
          occ_func_0_1(26) * occ_func_0_0(0) * occ_func_0_0(6) +
          occ_func_0_0(41) * occ_func_0_1(0) * occ_func_0_0(7) +
          occ_func_0_0(40) * occ_func_0_1(6) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(20) * occ_func_0_0(21) +
          occ_func_0_1(0) * occ_func_0_0(39) * occ_func_0_0(37) +
          occ_func_0_1(24) * occ_func_0_0(8) * occ_func_0_0(0) +
          occ_func_0_1(22) * occ_func_0_0(0) * occ_func_0_0(5) +
          occ_func_0_0(39) * occ_func_0_1(0) * occ_func_0_0(11) +
          occ_func_0_0(32) * occ_func_0_1(2) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(22) * occ_func_0_0(29) +
          occ_func_0_0(39) * occ_func_0_0(8) * occ_func_0_1(0) +
          occ_func_0_0(37) * occ_func_0_0(0) * occ_func_0_1(5) +
          occ_func_0_0(0) * occ_func_0_0(24) * occ_func_0_1(22) +
          occ_func_0_0(37) * occ_func_0_0(10) * occ_func_0_1(0) +
          occ_func_0_0(32) * occ_func_0_0(0) * occ_func_0_1(3) +
          occ_func_0_0(0) * occ_func_0_0(29) * occ_func_0_1(24) +
          occ_func_0_0(38) * occ_func_0_0(12) * occ_func_0_1(0) +
          occ_func_0_0(31) * occ_func_0_0(0) * occ_func_0_1(1) +
          occ_func_0_0(0) * occ_func_0_0(30) * occ_func_0_1(23) +
          occ_func_0_0(34) * occ_func_0_0(11) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(33) * occ_func_0_1(27) +
          occ_func_0_0(28) * occ_func_0_0(0) * occ_func_0_1(2) +
          occ_func_0_1(0) * occ_func_0_0(40) * occ_func_0_0(41) +
          occ_func_0_1(21) * occ_func_0_0(0) * occ_func_0_0(7) +
          occ_func_0_1(20) * occ_func_0_0(6) * occ_func_0_0(0) +
          occ_func_0_0(42) * occ_func_0_0(9) * occ_func_0_1(0) +
          occ_func_0_0(40) * occ_func_0_0(0) * occ_func_0_1(4) +
          occ_func_0_0(0) * occ_func_0_0(21) * occ_func_0_1(19) +
          occ_func_0_0(33) * occ_func_0_0(11) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(34) * occ_func_0_1(28) +
          occ_func_0_0(27) * occ_func_0_0(0) * occ_func_0_1(2) +
          occ_func_0_1(0) * occ_func_0_0(36) * occ_func_0_0(38) +
          occ_func_0_1(25) * occ_func_0_0(0) * occ_func_0_0(9) +
          occ_func_0_1(23) * occ_func_0_0(4) * occ_func_0_0(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_2_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(32) * occ_func_0_1(39) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(32) * occ_func_0_0(39)) +
          (0.707107 * occ_func_0_0(29) * occ_func_0_0(0) * occ_func_0_1(11) +
           0.707107 * occ_func_0_0(29) * occ_func_0_1(0) * occ_func_0_0(11)) +
          (0.707107 * occ_func_0_0(22) * occ_func_0_0(2) * occ_func_0_1(0) +
           0.707107 * occ_func_0_0(22) * occ_func_0_1(2) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(35) * occ_func_0_1(7) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(35) * occ_func_0_0(7) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(34) * occ_func_0_1(0) * occ_func_0_0(6) +
           0.707107 * occ_func_0_1(34) * occ_func_0_0(0) * occ_func_0_0(6)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(27) * occ_func_0_0(26) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(27) * occ_func_0_0(26)) +
          (0.707107 * occ_func_0_0(38) * occ_func_0_0(0) * occ_func_0_1(9) +
           0.707107 * occ_func_0_1(38) * occ_func_0_0(0) * occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(36) * occ_func_0_0(4) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(36) * occ_func_0_0(4) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(23) * occ_func_0_1(25) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(23) * occ_func_0_0(25)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(41) * occ_func_0_1(42) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(41) * occ_func_0_0(42)) +
          (0.707107 * occ_func_0_0(20) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.707107 * occ_func_0_0(20) * occ_func_0_1(0) * occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(19) * occ_func_0_0(5) * occ_func_0_1(0) +
           0.707107 * occ_func_0_0(19) * occ_func_0_1(5) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(36) * occ_func_0_0(0) * occ_func_0_1(10) +
           0.707107 * occ_func_0_1(36) * occ_func_0_0(0) * occ_func_0_0(10)) +
          (0.707107 * occ_func_0_0(31) * occ_func_0_0(3) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(31) * occ_func_0_0(3) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(25) * occ_func_0_1(30) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(25) * occ_func_0_0(30)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(42) * occ_func_0_1(40) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(42) * occ_func_0_0(40)) +
          (0.707107 * occ_func_0_0(21) * occ_func_0_0(9) * occ_func_0_1(0) +
           0.707107 * occ_func_0_0(21) * occ_func_0_1(9) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(19) * occ_func_0_0(0) * occ_func_0_1(4) +
           0.707107 * occ_func_0_0(19) * occ_func_0_1(0) * occ_func_0_0(4)) +
          (0.707107 * occ_func_0_0(35) * occ_func_0_0(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(35) * occ_func_0_0(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(26) * occ_func_0_1(33) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(26) * occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(28) * occ_func_0_0(1) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(28) * occ_func_0_0(1) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(31) * occ_func_0_1(36) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(31) * occ_func_0_0(36)) +
          (0.707107 * occ_func_0_0(30) * occ_func_0_0(0) * occ_func_0_1(10) +
           0.707107 * occ_func_0_0(30) * occ_func_0_1(0) * occ_func_0_0(10)) +
          (0.707107 * occ_func_0_0(25) * occ_func_0_0(3) * occ_func_0_1(0) +
           0.707107 * occ_func_0_0(25) * occ_func_0_1(3) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(42) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.707107 * occ_func_0_1(42) * occ_func_0_0(0) * occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(41) * occ_func_0_0(5) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(41) * occ_func_0_0(5) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(19) * occ_func_0_1(20) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(19) * occ_func_0_0(20)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(38) * occ_func_0_1(31) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(38) * occ_func_0_0(31)) +
          (0.707107 * occ_func_0_0(30) * occ_func_0_0(12) * occ_func_0_1(0) +
           0.707107 * occ_func_0_0(30) * occ_func_0_1(12) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(23) * occ_func_0_0(0) * occ_func_0_1(1) +
           0.707107 * occ_func_0_0(23) * occ_func_0_1(0) * occ_func_0_0(1)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(37) * occ_func_0_1(32) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(37) * occ_func_0_0(32)) +
          (0.707107 * occ_func_0_0(29) * occ_func_0_0(10) * occ_func_0_1(0) +
           0.707107 * occ_func_0_0(29) * occ_func_0_1(10) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(24) * occ_func_0_0(0) * occ_func_0_1(3) +
           0.707107 * occ_func_0_0(24) * occ_func_0_1(0) * occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(33) * occ_func_0_0(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(33) * occ_func_0_0(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(28) * occ_func_0_1(35) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(28) * occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(26) * occ_func_0_0(1) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(26) * occ_func_0_0(1) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(35) * occ_func_0_1(34) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(35) * occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(27) * occ_func_0_0(7) * occ_func_0_1(0) +
           0.707107 * occ_func_0_0(27) * occ_func_0_1(7) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(26) * occ_func_0_0(0) * occ_func_0_1(6) +
           0.707107 * occ_func_0_0(26) * occ_func_0_1(0) * occ_func_0_0(6)) +
          (0.707107 * occ_func_0_0(41) * occ_func_0_0(0) * occ_func_0_1(7) +
           0.707107 * occ_func_0_1(41) * occ_func_0_0(0) * occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(40) * occ_func_0_0(6) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(40) * occ_func_0_0(6) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(20) * occ_func_0_1(21) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(20) * occ_func_0_0(21)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(39) * occ_func_0_1(37) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(39) * occ_func_0_0(37)) +
          (0.707107 * occ_func_0_0(24) * occ_func_0_0(8) * occ_func_0_1(0) +
           0.707107 * occ_func_0_0(24) * occ_func_0_1(8) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(22) * occ_func_0_0(0) * occ_func_0_1(5) +
           0.707107 * occ_func_0_0(22) * occ_func_0_1(0) * occ_func_0_0(5)) +
          (0.707107 * occ_func_0_0(39) * occ_func_0_0(0) * occ_func_0_1(11) +
           0.707107 * occ_func_0_1(39) * occ_func_0_0(0) * occ_func_0_0(11)) +
          (0.707107 * occ_func_0_0(32) * occ_func_0_0(2) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(32) * occ_func_0_0(2) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(22) * occ_func_0_1(29) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(22) * occ_func_0_0(29)) +
          (0.707107 * occ_func_0_0(39) * occ_func_0_1(8) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(39) * occ_func_0_0(8) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(37) * occ_func_0_1(0) * occ_func_0_0(5) +
           0.707107 * occ_func_0_1(37) * occ_func_0_0(0) * occ_func_0_0(5)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(24) * occ_func_0_0(22) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(24) * occ_func_0_0(22)) +
          (0.707107 * occ_func_0_0(37) * occ_func_0_1(10) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(37) * occ_func_0_0(10) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(32) * occ_func_0_1(0) * occ_func_0_0(3) +
           0.707107 * occ_func_0_1(32) * occ_func_0_0(0) * occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(29) * occ_func_0_0(24) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(29) * occ_func_0_0(24)) +
          (0.707107 * occ_func_0_0(38) * occ_func_0_1(12) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(38) * occ_func_0_0(12) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(31) * occ_func_0_1(0) * occ_func_0_0(1) +
           0.707107 * occ_func_0_1(31) * occ_func_0_0(0) * occ_func_0_0(1)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(30) * occ_func_0_0(23) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(30) * occ_func_0_0(23)) +
          (0.707107 * occ_func_0_0(34) * occ_func_0_1(11) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(34) * occ_func_0_0(11) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(33) * occ_func_0_0(27) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(33) * occ_func_0_0(27)) +
          (0.707107 * occ_func_0_0(28) * occ_func_0_1(0) * occ_func_0_0(2) +
           0.707107 * occ_func_0_1(28) * occ_func_0_0(0) * occ_func_0_0(2)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(40) * occ_func_0_1(41) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(40) * occ_func_0_0(41)) +
          (0.707107 * occ_func_0_0(21) * occ_func_0_0(0) * occ_func_0_1(7) +
           0.707107 * occ_func_0_0(21) * occ_func_0_1(0) * occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(20) * occ_func_0_0(6) * occ_func_0_1(0) +
           0.707107 * occ_func_0_0(20) * occ_func_0_1(6) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(42) * occ_func_0_1(9) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(42) * occ_func_0_0(9) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(40) * occ_func_0_1(0) * occ_func_0_0(4) +
           0.707107 * occ_func_0_1(40) * occ_func_0_0(0) * occ_func_0_0(4)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(21) * occ_func_0_0(19) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(21) * occ_func_0_0(19)) +
          (0.707107 * occ_func_0_0(33) * occ_func_0_1(11) * occ_func_0_0(0) +
           0.707107 * occ_func_0_1(33) * occ_func_0_0(11) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(34) * occ_func_0_0(28) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(34) * occ_func_0_0(28)) +
          (0.707107 * occ_func_0_0(27) * occ_func_0_1(0) * occ_func_0_0(2) +
           0.707107 * occ_func_0_1(27) * occ_func_0_0(0) * occ_func_0_0(2)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(36) * occ_func_0_1(38) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(36) * occ_func_0_0(38)) +
          (0.707107 * occ_func_0_0(25) * occ_func_0_0(0) * occ_func_0_1(9) +
           0.707107 * occ_func_0_0(25) * occ_func_0_1(0) * occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(23) * occ_func_0_0(4) * occ_func_0_1(0) +
           0.707107 * occ_func_0_0(23) * occ_func_0_1(4) * occ_func_0_0(0))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_3_at_0() const {
  return ((0.707107 * occ_func_0_1(0) * occ_func_0_0(32) * occ_func_0_1(39) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(32) * occ_func_0_0(39)) +
          (0.707107 * occ_func_0_1(29) * occ_func_0_0(0) * occ_func_0_1(11) +
           0.707107 * occ_func_0_1(29) * occ_func_0_1(0) * occ_func_0_0(11)) +
          (0.707107 * occ_func_0_1(22) * occ_func_0_0(2) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(22) * occ_func_0_1(2) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(35) * occ_func_0_1(7) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(35) * occ_func_0_0(7) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(34) * occ_func_0_1(0) * occ_func_0_1(6) +
           0.707107 * occ_func_0_1(34) * occ_func_0_0(0) * occ_func_0_1(6)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(27) * occ_func_0_1(26) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(27) * occ_func_0_1(26)) +
          (0.707107 * occ_func_0_0(38) * occ_func_0_1(0) * occ_func_0_1(9) +
           0.707107 * occ_func_0_1(38) * occ_func_0_1(0) * occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(36) * occ_func_0_1(4) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(36) * occ_func_0_1(4) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(23) * occ_func_0_1(25) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(23) * occ_func_0_0(25)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(41) * occ_func_0_1(42) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(41) * occ_func_0_0(42)) +
          (0.707107 * occ_func_0_1(20) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.707107 * occ_func_0_1(20) * occ_func_0_1(0) * occ_func_0_0(8)) +
          (0.707107 * occ_func_0_1(19) * occ_func_0_0(5) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(19) * occ_func_0_1(5) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(36) * occ_func_0_1(0) * occ_func_0_1(10) +
           0.707107 * occ_func_0_1(36) * occ_func_0_1(0) * occ_func_0_0(10)) +
          (0.707107 * occ_func_0_0(31) * occ_func_0_1(3) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(31) * occ_func_0_1(3) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(25) * occ_func_0_1(30) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(25) * occ_func_0_0(30)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(42) * occ_func_0_1(40) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(42) * occ_func_0_0(40)) +
          (0.707107 * occ_func_0_1(21) * occ_func_0_0(9) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(21) * occ_func_0_1(9) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(19) * occ_func_0_0(0) * occ_func_0_1(4) +
           0.707107 * occ_func_0_1(19) * occ_func_0_1(0) * occ_func_0_0(4)) +
          (0.707107 * occ_func_0_0(35) * occ_func_0_1(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(35) * occ_func_0_1(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(26) * occ_func_0_1(33) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(26) * occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(28) * occ_func_0_1(1) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(28) * occ_func_0_1(1) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(31) * occ_func_0_1(36) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(31) * occ_func_0_0(36)) +
          (0.707107 * occ_func_0_1(30) * occ_func_0_0(0) * occ_func_0_1(10) +
           0.707107 * occ_func_0_1(30) * occ_func_0_1(0) * occ_func_0_0(10)) +
          (0.707107 * occ_func_0_1(25) * occ_func_0_0(3) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(25) * occ_func_0_1(3) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(42) * occ_func_0_1(0) * occ_func_0_1(8) +
           0.707107 * occ_func_0_1(42) * occ_func_0_1(0) * occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(41) * occ_func_0_1(5) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(41) * occ_func_0_1(5) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(19) * occ_func_0_1(20) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(19) * occ_func_0_0(20)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(38) * occ_func_0_1(31) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(38) * occ_func_0_0(31)) +
          (0.707107 * occ_func_0_1(30) * occ_func_0_0(12) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(30) * occ_func_0_1(12) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(23) * occ_func_0_0(0) * occ_func_0_1(1) +
           0.707107 * occ_func_0_1(23) * occ_func_0_1(0) * occ_func_0_0(1)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(37) * occ_func_0_1(32) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(37) * occ_func_0_0(32)) +
          (0.707107 * occ_func_0_1(29) * occ_func_0_0(10) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(29) * occ_func_0_1(10) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(24) * occ_func_0_0(0) * occ_func_0_1(3) +
           0.707107 * occ_func_0_1(24) * occ_func_0_1(0) * occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(33) * occ_func_0_1(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(33) * occ_func_0_1(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(28) * occ_func_0_1(35) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(28) * occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(26) * occ_func_0_1(1) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(26) * occ_func_0_1(1) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(35) * occ_func_0_1(34) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(35) * occ_func_0_0(34)) +
          (0.707107 * occ_func_0_1(27) * occ_func_0_0(7) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(27) * occ_func_0_1(7) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(26) * occ_func_0_0(0) * occ_func_0_1(6) +
           0.707107 * occ_func_0_1(26) * occ_func_0_1(0) * occ_func_0_0(6)) +
          (0.707107 * occ_func_0_0(41) * occ_func_0_1(0) * occ_func_0_1(7) +
           0.707107 * occ_func_0_1(41) * occ_func_0_1(0) * occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(40) * occ_func_0_1(6) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(40) * occ_func_0_1(6) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(20) * occ_func_0_1(21) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(20) * occ_func_0_0(21)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(39) * occ_func_0_1(37) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(39) * occ_func_0_0(37)) +
          (0.707107 * occ_func_0_1(24) * occ_func_0_0(8) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(24) * occ_func_0_1(8) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(22) * occ_func_0_0(0) * occ_func_0_1(5) +
           0.707107 * occ_func_0_1(22) * occ_func_0_1(0) * occ_func_0_0(5)) +
          (0.707107 * occ_func_0_0(39) * occ_func_0_1(0) * occ_func_0_1(11) +
           0.707107 * occ_func_0_1(39) * occ_func_0_1(0) * occ_func_0_0(11)) +
          (0.707107 * occ_func_0_0(32) * occ_func_0_1(2) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(32) * occ_func_0_1(2) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(22) * occ_func_0_1(29) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(22) * occ_func_0_0(29)) +
          (0.707107 * occ_func_0_0(39) * occ_func_0_1(8) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(39) * occ_func_0_0(8) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(37) * occ_func_0_1(0) * occ_func_0_1(5) +
           0.707107 * occ_func_0_1(37) * occ_func_0_0(0) * occ_func_0_1(5)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(24) * occ_func_0_1(22) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(24) * occ_func_0_1(22)) +
          (0.707107 * occ_func_0_0(37) * occ_func_0_1(10) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(37) * occ_func_0_0(10) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(32) * occ_func_0_1(0) * occ_func_0_1(3) +
           0.707107 * occ_func_0_1(32) * occ_func_0_0(0) * occ_func_0_1(3)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(29) * occ_func_0_1(24) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(29) * occ_func_0_1(24)) +
          (0.707107 * occ_func_0_0(38) * occ_func_0_1(12) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(38) * occ_func_0_0(12) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(31) * occ_func_0_1(0) * occ_func_0_1(1) +
           0.707107 * occ_func_0_1(31) * occ_func_0_0(0) * occ_func_0_1(1)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(30) * occ_func_0_1(23) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(30) * occ_func_0_1(23)) +
          (0.707107 * occ_func_0_0(34) * occ_func_0_1(11) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(34) * occ_func_0_0(11) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(33) * occ_func_0_1(27) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(33) * occ_func_0_1(27)) +
          (0.707107 * occ_func_0_0(28) * occ_func_0_1(0) * occ_func_0_1(2) +
           0.707107 * occ_func_0_1(28) * occ_func_0_0(0) * occ_func_0_1(2)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(40) * occ_func_0_1(41) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(40) * occ_func_0_0(41)) +
          (0.707107 * occ_func_0_1(21) * occ_func_0_0(0) * occ_func_0_1(7) +
           0.707107 * occ_func_0_1(21) * occ_func_0_1(0) * occ_func_0_0(7)) +
          (0.707107 * occ_func_0_1(20) * occ_func_0_0(6) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(20) * occ_func_0_1(6) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(42) * occ_func_0_1(9) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(42) * occ_func_0_0(9) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(40) * occ_func_0_1(0) * occ_func_0_1(4) +
           0.707107 * occ_func_0_1(40) * occ_func_0_0(0) * occ_func_0_1(4)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(21) * occ_func_0_1(19) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(21) * occ_func_0_1(19)) +
          (0.707107 * occ_func_0_0(33) * occ_func_0_1(11) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(33) * occ_func_0_0(11) * occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(34) * occ_func_0_1(28) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(34) * occ_func_0_1(28)) +
          (0.707107 * occ_func_0_0(27) * occ_func_0_1(0) * occ_func_0_1(2) +
           0.707107 * occ_func_0_1(27) * occ_func_0_0(0) * occ_func_0_1(2)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(36) * occ_func_0_1(38) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(36) * occ_func_0_0(38)) +
          (0.707107 * occ_func_0_1(25) * occ_func_0_0(0) * occ_func_0_1(9) +
           0.707107 * occ_func_0_1(25) * occ_func_0_1(0) * occ_func_0_0(9)) +
          (0.707107 * occ_func_0_1(23) * occ_func_0_0(4) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(23) * occ_func_0_1(4) * occ_func_0_0(0))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_4_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_1(32) * occ_func_0_1(39) +
          occ_func_0_0(29) * occ_func_0_1(0) * occ_func_0_1(11) +
          occ_func_0_0(22) * occ_func_0_1(2) * occ_func_0_1(0) +
          occ_func_0_1(35) * occ_func_0_1(7) * occ_func_0_0(0) +
          occ_func_0_1(34) * occ_func_0_1(0) * occ_func_0_0(6) +
          occ_func_0_1(0) * occ_func_0_1(27) * occ_func_0_0(26) +
          occ_func_0_1(38) * occ_func_0_0(0) * occ_func_0_1(9) +
          occ_func_0_1(36) * occ_func_0_0(4) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(23) * occ_func_0_1(25) +
          occ_func_0_0(0) * occ_func_0_1(41) * occ_func_0_1(42) +
          occ_func_0_0(20) * occ_func_0_1(0) * occ_func_0_1(8) +
          occ_func_0_0(19) * occ_func_0_1(5) * occ_func_0_1(0) +
          occ_func_0_1(36) * occ_func_0_0(0) * occ_func_0_1(10) +
          occ_func_0_1(31) * occ_func_0_0(3) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(25) * occ_func_0_1(30) +
          occ_func_0_0(0) * occ_func_0_1(42) * occ_func_0_1(40) +
          occ_func_0_0(21) * occ_func_0_1(9) * occ_func_0_1(0) +
          occ_func_0_0(19) * occ_func_0_1(0) * occ_func_0_1(4) +
          occ_func_0_1(35) * occ_func_0_0(0) * occ_func_0_1(12) +
          occ_func_0_1(0) * occ_func_0_0(26) * occ_func_0_1(33) +
          occ_func_0_1(28) * occ_func_0_0(1) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(31) * occ_func_0_1(36) +
          occ_func_0_0(30) * occ_func_0_1(0) * occ_func_0_1(10) +
          occ_func_0_0(25) * occ_func_0_1(3) * occ_func_0_1(0) +
          occ_func_0_1(42) * occ_func_0_0(0) * occ_func_0_1(8) +
          occ_func_0_1(41) * occ_func_0_0(5) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(19) * occ_func_0_1(20) +
          occ_func_0_0(0) * occ_func_0_1(38) * occ_func_0_1(31) +
          occ_func_0_0(30) * occ_func_0_1(12) * occ_func_0_1(0) +
          occ_func_0_0(23) * occ_func_0_1(0) * occ_func_0_1(1) +
          occ_func_0_0(0) * occ_func_0_1(37) * occ_func_0_1(32) +
          occ_func_0_0(29) * occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_0(24) * occ_func_0_1(0) * occ_func_0_1(3) +
          occ_func_0_1(33) * occ_func_0_0(0) * occ_func_0_1(12) +
          occ_func_0_1(0) * occ_func_0_0(28) * occ_func_0_1(35) +
          occ_func_0_1(26) * occ_func_0_0(1) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(35) * occ_func_0_1(34) +
          occ_func_0_0(27) * occ_func_0_1(7) * occ_func_0_1(0) +
          occ_func_0_0(26) * occ_func_0_1(0) * occ_func_0_1(6) +
          occ_func_0_1(41) * occ_func_0_0(0) * occ_func_0_1(7) +
          occ_func_0_1(40) * occ_func_0_0(6) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(20) * occ_func_0_1(21) +
          occ_func_0_0(0) * occ_func_0_1(39) * occ_func_0_1(37) +
          occ_func_0_0(24) * occ_func_0_1(8) * occ_func_0_1(0) +
          occ_func_0_0(22) * occ_func_0_1(0) * occ_func_0_1(5) +
          occ_func_0_1(39) * occ_func_0_0(0) * occ_func_0_1(11) +
          occ_func_0_1(32) * occ_func_0_0(2) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(22) * occ_func_0_1(29) +
          occ_func_0_1(39) * occ_func_0_1(8) * occ_func_0_0(0) +
          occ_func_0_1(37) * occ_func_0_1(0) * occ_func_0_0(5) +
          occ_func_0_1(0) * occ_func_0_1(24) * occ_func_0_0(22) +
          occ_func_0_1(37) * occ_func_0_1(10) * occ_func_0_0(0) +
          occ_func_0_1(32) * occ_func_0_1(0) * occ_func_0_0(3) +
          occ_func_0_1(0) * occ_func_0_1(29) * occ_func_0_0(24) +
          occ_func_0_1(38) * occ_func_0_1(12) * occ_func_0_0(0) +
          occ_func_0_1(31) * occ_func_0_1(0) * occ_func_0_0(1) +
          occ_func_0_1(0) * occ_func_0_1(30) * occ_func_0_0(23) +
          occ_func_0_1(34) * occ_func_0_1(11) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(33) * occ_func_0_0(27) +
          occ_func_0_1(28) * occ_func_0_1(0) * occ_func_0_0(2) +
          occ_func_0_0(0) * occ_func_0_1(40) * occ_func_0_1(41) +
          occ_func_0_0(21) * occ_func_0_1(0) * occ_func_0_1(7) +
          occ_func_0_0(20) * occ_func_0_1(6) * occ_func_0_1(0) +
          occ_func_0_1(42) * occ_func_0_1(9) * occ_func_0_0(0) +
          occ_func_0_1(40) * occ_func_0_1(0) * occ_func_0_0(4) +
          occ_func_0_1(0) * occ_func_0_1(21) * occ_func_0_0(19) +
          occ_func_0_1(33) * occ_func_0_1(11) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(34) * occ_func_0_0(28) +
          occ_func_0_1(27) * occ_func_0_1(0) * occ_func_0_0(2) +
          occ_func_0_0(0) * occ_func_0_1(36) * occ_func_0_1(38) +
          occ_func_0_0(25) * occ_func_0_1(0) * occ_func_0_1(9) +
          occ_func_0_0(23) * occ_func_0_1(4) * occ_func_0_1(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_9_5_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(32) * occ_func_0_1(39) +
          occ_func_0_1(29) * occ_func_0_1(0) * occ_func_0_1(11) +
          occ_func_0_1(22) * occ_func_0_1(2) * occ_func_0_1(0) +
          occ_func_0_1(35) * occ_func_0_1(7) * occ_func_0_1(0) +
          occ_func_0_1(34) * occ_func_0_1(0) * occ_func_0_1(6) +
          occ_func_0_1(0) * occ_func_0_1(27) * occ_func_0_1(26) +
          occ_func_0_1(38) * occ_func_0_1(0) * occ_func_0_1(9) +
          occ_func_0_1(36) * occ_func_0_1(4) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(23) * occ_func_0_1(25) +
          occ_func_0_1(0) * occ_func_0_1(41) * occ_func_0_1(42) +
          occ_func_0_1(20) * occ_func_0_1(0) * occ_func_0_1(8) +
          occ_func_0_1(19) * occ_func_0_1(5) * occ_func_0_1(0) +
          occ_func_0_1(36) * occ_func_0_1(0) * occ_func_0_1(10) +
          occ_func_0_1(31) * occ_func_0_1(3) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(25) * occ_func_0_1(30) +
          occ_func_0_1(0) * occ_func_0_1(42) * occ_func_0_1(40) +
          occ_func_0_1(21) * occ_func_0_1(9) * occ_func_0_1(0) +
          occ_func_0_1(19) * occ_func_0_1(0) * occ_func_0_1(4) +
          occ_func_0_1(35) * occ_func_0_1(0) * occ_func_0_1(12) +
          occ_func_0_1(0) * occ_func_0_1(26) * occ_func_0_1(33) +
          occ_func_0_1(28) * occ_func_0_1(1) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(31) * occ_func_0_1(36) +
          occ_func_0_1(30) * occ_func_0_1(0) * occ_func_0_1(10) +
          occ_func_0_1(25) * occ_func_0_1(3) * occ_func_0_1(0) +
          occ_func_0_1(42) * occ_func_0_1(0) * occ_func_0_1(8) +
          occ_func_0_1(41) * occ_func_0_1(5) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(19) * occ_func_0_1(20) +
          occ_func_0_1(0) * occ_func_0_1(38) * occ_func_0_1(31) +
          occ_func_0_1(30) * occ_func_0_1(12) * occ_func_0_1(0) +
          occ_func_0_1(23) * occ_func_0_1(0) * occ_func_0_1(1) +
          occ_func_0_1(0) * occ_func_0_1(37) * occ_func_0_1(32) +
          occ_func_0_1(29) * occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_1(24) * occ_func_0_1(0) * occ_func_0_1(3) +
          occ_func_0_1(33) * occ_func_0_1(0) * occ_func_0_1(12) +
          occ_func_0_1(0) * occ_func_0_1(28) * occ_func_0_1(35) +
          occ_func_0_1(26) * occ_func_0_1(1) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(35) * occ_func_0_1(34) +
          occ_func_0_1(27) * occ_func_0_1(7) * occ_func_0_1(0) +
          occ_func_0_1(26) * occ_func_0_1(0) * occ_func_0_1(6) +
          occ_func_0_1(41) * occ_func_0_1(0) * occ_func_0_1(7) +
          occ_func_0_1(40) * occ_func_0_1(6) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(20) * occ_func_0_1(21) +
          occ_func_0_1(0) * occ_func_0_1(39) * occ_func_0_1(37) +
          occ_func_0_1(24) * occ_func_0_1(8) * occ_func_0_1(0) +
          occ_func_0_1(22) * occ_func_0_1(0) * occ_func_0_1(5) +
          occ_func_0_1(39) * occ_func_0_1(0) * occ_func_0_1(11) +
          occ_func_0_1(32) * occ_func_0_1(2) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(22) * occ_func_0_1(29) +
          occ_func_0_1(39) * occ_func_0_1(8) * occ_func_0_1(0) +
          occ_func_0_1(37) * occ_func_0_1(0) * occ_func_0_1(5) +
          occ_func_0_1(0) * occ_func_0_1(24) * occ_func_0_1(22) +
          occ_func_0_1(37) * occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_1(32) * occ_func_0_1(0) * occ_func_0_1(3) +
          occ_func_0_1(0) * occ_func_0_1(29) * occ_func_0_1(24) +
          occ_func_0_1(38) * occ_func_0_1(12) * occ_func_0_1(0) +
          occ_func_0_1(31) * occ_func_0_1(0) * occ_func_0_1(1) +
          occ_func_0_1(0) * occ_func_0_1(30) * occ_func_0_1(23) +
          occ_func_0_1(34) * occ_func_0_1(11) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(33) * occ_func_0_1(27) +
          occ_func_0_1(28) * occ_func_0_1(0) * occ_func_0_1(2) +
          occ_func_0_1(0) * occ_func_0_1(40) * occ_func_0_1(41) +
          occ_func_0_1(21) * occ_func_0_1(0) * occ_func_0_1(7) +
          occ_func_0_1(20) * occ_func_0_1(6) * occ_func_0_1(0) +
          occ_func_0_1(42) * occ_func_0_1(9) * occ_func_0_1(0) +
          occ_func_0_1(40) * occ_func_0_1(0) * occ_func_0_1(4) +
          occ_func_0_1(0) * occ_func_0_1(21) * occ_func_0_1(19) +
          occ_func_0_1(33) * occ_func_0_1(11) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(34) * occ_func_0_1(28) +
          occ_func_0_1(27) * occ_func_0_1(0) * occ_func_0_1(2) +
          occ_func_0_1(0) * occ_func_0_1(36) * occ_func_0_1(38) +
          occ_func_0_1(25) * occ_func_0_1(0) * occ_func_0_1(9) +
          occ_func_0_1(23) * occ_func_0_1(4) * occ_func_0_1(0)) /
         24.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(32) * occ_func_0_0(39) +
          occ_func_0_0(29) * occ_func_0_0(11) +
          occ_func_0_0(22) * occ_func_0_0(2) +
          occ_func_0_0(35) * occ_func_0_0(7) +
          occ_func_0_0(34) * occ_func_0_0(6) +
          occ_func_0_0(27) * occ_func_0_0(26) +
          occ_func_0_0(38) * occ_func_0_0(9) +
          occ_func_0_0(36) * occ_func_0_0(4) +
          occ_func_0_0(23) * occ_func_0_0(25) +
          occ_func_0_0(41) * occ_func_0_0(42) +
          occ_func_0_0(20) * occ_func_0_0(8) +
          occ_func_0_0(19) * occ_func_0_0(5) +
          occ_func_0_0(36) * occ_func_0_0(10) +
          occ_func_0_0(31) * occ_func_0_0(3) +
          occ_func_0_0(25) * occ_func_0_0(30) +
          occ_func_0_0(42) * occ_func_0_0(40) +
          occ_func_0_0(21) * occ_func_0_0(9) +
          occ_func_0_0(19) * occ_func_0_0(4) +
          occ_func_0_0(35) * occ_func_0_0(12) +
          occ_func_0_0(26) * occ_func_0_0(33) +
          occ_func_0_0(28) * occ_func_0_0(1) +
          occ_func_0_0(31) * occ_func_0_0(36) +
          occ_func_0_0(30) * occ_func_0_0(10) +
          occ_func_0_0(25) * occ_func_0_0(3) +
          occ_func_0_0(42) * occ_func_0_0(8) +
          occ_func_0_0(41) * occ_func_0_0(5) +
          occ_func_0_0(19) * occ_func_0_0(20) +
          occ_func_0_0(38) * occ_func_0_0(31) +
          occ_func_0_0(30) * occ_func_0_0(12) +
          occ_func_0_0(23) * occ_func_0_0(1) +
          occ_func_0_0(37) * occ_func_0_0(32) +
          occ_func_0_0(29) * occ_func_0_0(10) +
          occ_func_0_0(24) * occ_func_0_0(3) +
          occ_func_0_0(33) * occ_func_0_0(12) +
          occ_func_0_0(28) * occ_func_0_0(35) +
          occ_func_0_0(26) * occ_func_0_0(1) +
          occ_func_0_0(35) * occ_func_0_0(34) +
          occ_func_0_0(27) * occ_func_0_0(7) +
          occ_func_0_0(26) * occ_func_0_0(6) +
          occ_func_0_0(41) * occ_func_0_0(7) +
          occ_func_0_0(40) * occ_func_0_0(6) +
          occ_func_0_0(20) * occ_func_0_0(21) +
          occ_func_0_0(39) * occ_func_0_0(37) +
          occ_func_0_0(24) * occ_func_0_0(8) +
          occ_func_0_0(22) * occ_func_0_0(5) +
          occ_func_0_0(39) * occ_func_0_0(11) +
          occ_func_0_0(32) * occ_func_0_0(2) +
          occ_func_0_0(22) * occ_func_0_0(29) +
          occ_func_0_0(39) * occ_func_0_0(8) +
          occ_func_0_0(37) * occ_func_0_0(5) +
          occ_func_0_0(24) * occ_func_0_0(22) +
          occ_func_0_0(37) * occ_func_0_0(10) +
          occ_func_0_0(32) * occ_func_0_0(3) +
          occ_func_0_0(29) * occ_func_0_0(24) +
          occ_func_0_0(38) * occ_func_0_0(12) +
          occ_func_0_0(31) * occ_func_0_0(1) +
          occ_func_0_0(30) * occ_func_0_0(23) +
          occ_func_0_0(34) * occ_func_0_0(11) +
          occ_func_0_0(33) * occ_func_0_0(27) +
          occ_func_0_0(28) * occ_func_0_0(2) +
          occ_func_0_0(40) * occ_func_0_0(41) +
          occ_func_0_0(21) * occ_func_0_0(7) +
          occ_func_0_0(20) * occ_func_0_0(6) +
          occ_func_0_0(42) * occ_func_0_0(9) +
          occ_func_0_0(40) * occ_func_0_0(4) +
          occ_func_0_0(21) * occ_func_0_0(19) +
          occ_func_0_0(33) * occ_func_0_0(11) +
          occ_func_0_0(34) * occ_func_0_0(28) +
          occ_func_0_0(27) * occ_func_0_0(2) +
          occ_func_0_0(36) * occ_func_0_0(38) +
          occ_func_0_0(25) * occ_func_0_0(9) +
          occ_func_0_0(23) * occ_func_0_0(4)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(29) * occ_func_0_0(11) +
              occ_func_0_1(22) * occ_func_0_0(2) +
              occ_func_0_0(34) * occ_func_0_1(6) +
              occ_func_0_0(27) * occ_func_0_1(26) +
              occ_func_0_0(36) * occ_func_0_1(4) +
              occ_func_0_1(23) * occ_func_0_0(25) +
              occ_func_0_1(20) * occ_func_0_0(8) +
              occ_func_0_1(19) * occ_func_0_0(5) +
              occ_func_0_0(31) * occ_func_0_1(3) +
              occ_func_0_1(25) * occ_func_0_0(30) +
              occ_func_0_1(21) * occ_func_0_0(9) +
              occ_func_0_1(19) * occ_func_0_0(4) +
              occ_func_0_1(26) * occ_func_0_0(33) +
              occ_func_0_0(28) * occ_func_0_1(1) +
              occ_func_0_1(30) * occ_func_0_0(10) +
              occ_func_0_1(25) * occ_func_0_0(3) +
              occ_func_0_0(41) * occ_func_0_1(5) +
              occ_func_0_1(19) * occ_func_0_0(20) +
              occ_func_0_1(30) * occ_func_0_0(12) +
              occ_func_0_1(23) * occ_func_0_0(1) +
              occ_func_0_1(29) * occ_func_0_0(10) +
              occ_func_0_1(24) * occ_func_0_0(3) +
              occ_func_0_1(28) * occ_func_0_0(35) +
              occ_func_0_0(26) * occ_func_0_1(1) +
              occ_func_0_1(27) * occ_func_0_0(7) +
              occ_func_0_1(26) * occ_func_0_0(6) +
              occ_func_0_0(40) * occ_func_0_1(6) +
              occ_func_0_1(20) * occ_func_0_0(21) +
              occ_func_0_1(24) * occ_func_0_0(8) +
              occ_func_0_1(22) * occ_func_0_0(5) +
              occ_func_0_0(32) * occ_func_0_1(2) +
              occ_func_0_1(22) * occ_func_0_0(29) +
              occ_func_0_0(37) * occ_func_0_1(5) +
              occ_func_0_0(24) * occ_func_0_1(22) +
              occ_func_0_0(32) * occ_func_0_1(3) +
              occ_func_0_0(29) * occ_func_0_1(24) +
              occ_func_0_0(31) * occ_func_0_1(1) +
              occ_func_0_0(30) * occ_func_0_1(23) +
              occ_func_0_0(33) * occ_func_0_1(27) +
              occ_func_0_0(28) * occ_func_0_1(2) +
              occ_func_0_1(21) * occ_func_0_0(7) +
              occ_func_0_1(20) * occ_func_0_0(6) +
              occ_func_0_0(40) * occ_func_0_1(4) +
              occ_func_0_0(21) * occ_func_0_1(19) +
              occ_func_0_0(34) * occ_func_0_1(28) +
              occ_func_0_0(27) * occ_func_0_1(2) +
              occ_func_0_1(25) * occ_func_0_0(9) +
              occ_func_0_1(23) * occ_func_0_0(4)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(32) * occ_func_0_0(39) +
              occ_func_0_0(35) * occ_func_0_0(7) +
              occ_func_0_0(38) * occ_func_0_0(9) +
              occ_func_0_0(41) * occ_func_0_0(42) +
              occ_func_0_0(36) * occ_func_0_0(10) +
              occ_func_0_0(42) * occ_func_0_0(40) +
              occ_func_0_0(35) * occ_func_0_0(12) +
              occ_func_0_0(31) * occ_func_0_0(36) +
              occ_func_0_0(42) * occ_func_0_0(8) +
              occ_func_0_0(38) * occ_func_0_0(31) +
              occ_func_0_0(37) * occ_func_0_0(32) +
              occ_func_0_0(33) * occ_func_0_0(12) +
              occ_func_0_0(35) * occ_func_0_0(34) +
              occ_func_0_0(41) * occ_func_0_0(7) +
              occ_func_0_0(39) * occ_func_0_0(37) +
              occ_func_0_0(39) * occ_func_0_0(11) +
              occ_func_0_0(39) * occ_func_0_0(8) +
              occ_func_0_0(37) * occ_func_0_0(10) +
              occ_func_0_0(38) * occ_func_0_0(12) +
              occ_func_0_0(34) * occ_func_0_0(11) +
              occ_func_0_0(40) * occ_func_0_0(41) +
              occ_func_0_0(42) * occ_func_0_0(9) +
              occ_func_0_0(33) * occ_func_0_0(11) +
              occ_func_0_0(36) * occ_func_0_0(38)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             ((0.707107 * occ_func_0_0(32) * occ_func_0_1(39) +
               0.707107 * occ_func_0_1(32) * occ_func_0_0(39)) +
              0.707107 * occ_func_0_0(29) * occ_func_0_1(11) +
              0.707107 * occ_func_0_0(22) * occ_func_0_1(2) +
              (0.707107 * occ_func_0_0(35) * occ_func_0_1(7) +
               0.707107 * occ_func_0_1(35) * occ_func_0_0(7)) +
              0.707107 * occ_func_0_1(34) * occ_func_0_0(6) +
              0.707107 * occ_func_0_1(27) * occ_func_0_0(26) +
              (0.707107 * occ_func_0_0(38) * occ_func_0_1(9) +
               0.707107 * occ_func_0_1(38) * occ_func_0_0(9)) +
              0.707107 * occ_func_0_1(36) * occ_func_0_0(4) +
              0.707107 * occ_func_0_0(23) * occ_func_0_1(25) +
              (0.707107 * occ_func_0_0(41) * occ_func_0_1(42) +
               0.707107 * occ_func_0_1(41) * occ_func_0_0(42)) +
              0.707107 * occ_func_0_0(20) * occ_func_0_1(8) +
              0.707107 * occ_func_0_0(19) * occ_func_0_1(5) +
              (0.707107 * occ_func_0_0(36) * occ_func_0_1(10) +
               0.707107 * occ_func_0_1(36) * occ_func_0_0(10)) +
              0.707107 * occ_func_0_1(31) * occ_func_0_0(3) +
              0.707107 * occ_func_0_0(25) * occ_func_0_1(30) +
              (0.707107 * occ_func_0_0(42) * occ_func_0_1(40) +
               0.707107 * occ_func_0_1(42) * occ_func_0_0(40)) +
              0.707107 * occ_func_0_0(21) * occ_func_0_1(9) +
              0.707107 * occ_func_0_0(19) * occ_func_0_1(4) +
              (0.707107 * occ_func_0_0(35) * occ_func_0_1(12) +
               0.707107 * occ_func_0_1(35) * occ_func_0_0(12)) +
              0.707107 * occ_func_0_0(26) * occ_func_0_1(33) +
              0.707107 * occ_func_0_1(28) * occ_func_0_0(1) +
              (0.707107 * occ_func_0_0(31) * occ_func_0_1(36) +
               0.707107 * occ_func_0_1(31) * occ_func_0_0(36)) +
              0.707107 * occ_func_0_0(30) * occ_func_0_1(10) +
              0.707107 * occ_func_0_0(25) * occ_func_0_1(3) +
              (0.707107 * occ_func_0_0(42) * occ_func_0_1(8) +
               0.707107 * occ_func_0_1(42) * occ_func_0_0(8)) +
              0.707107 * occ_func_0_1(41) * occ_func_0_0(5) +
              0.707107 * occ_func_0_0(19) * occ_func_0_1(20) +
              (0.707107 * occ_func_0_0(38) * occ_func_0_1(31) +
               0.707107 * occ_func_0_1(38) * occ_func_0_0(31)) +
              0.707107 * occ_func_0_0(30) * occ_func_0_1(12) +
              0.707107 * occ_func_0_0(23) * occ_func_0_1(1) +
              (0.707107 * occ_func_0_0(37) * occ_func_0_1(32) +
               0.707107 * occ_func_0_1(37) * occ_func_0_0(32)) +
              0.707107 * occ_func_0_0(29) * occ_func_0_1(10) +
              0.707107 * occ_func_0_0(24) * occ_func_0_1(3) +
              (0.707107 * occ_func_0_0(33) * occ_func_0_1(12) +
               0.707107 * occ_func_0_1(33) * occ_func_0_0(12)) +
              0.707107 * occ_func_0_0(28) * occ_func_0_1(35) +
              0.707107 * occ_func_0_1(26) * occ_func_0_0(1) +
              (0.707107 * occ_func_0_0(35) * occ_func_0_1(34) +
               0.707107 * occ_func_0_1(35) * occ_func_0_0(34)) +
              0.707107 * occ_func_0_0(27) * occ_func_0_1(7) +
              0.707107 * occ_func_0_0(26) * occ_func_0_1(6) +
              (0.707107 * occ_func_0_0(41) * occ_func_0_1(7) +
               0.707107 * occ_func_0_1(41) * occ_func_0_0(7)) +
              0.707107 * occ_func_0_1(40) * occ_func_0_0(6) +
              0.707107 * occ_func_0_0(20) * occ_func_0_1(21) +
              (0.707107 * occ_func_0_0(39) * occ_func_0_1(37) +
               0.707107 * occ_func_0_1(39) * occ_func_0_0(37)) +
              0.707107 * occ_func_0_0(24) * occ_func_0_1(8) +
              0.707107 * occ_func_0_0(22) * occ_func_0_1(5) +
              (0.707107 * occ_func_0_0(39) * occ_func_0_1(11) +
               0.707107 * occ_func_0_1(39) * occ_func_0_0(11)) +
              0.707107 * occ_func_0_1(32) * occ_func_0_0(2) +
              0.707107 * occ_func_0_0(22) * occ_func_0_1(29) +
              (0.707107 * occ_func_0_0(39) * occ_func_0_1(8) +
               0.707107 * occ_func_0_1(39) * occ_func_0_0(8)) +
              0.707107 * occ_func_0_1(37) * occ_func_0_0(5) +
              0.707107 * occ_func_0_1(24) * occ_func_0_0(22) +
              (0.707107 * occ_func_0_0(37) * occ_func_0_1(10) +
               0.707107 * occ_func_0_1(37) * occ_func_0_0(10)) +
              0.707107 * occ_func_0_1(32) * occ_func_0_0(3) +
              0.707107 * occ_func_0_1(29) * occ_func_0_0(24) +
              (0.707107 * occ_func_0_0(38) * occ_func_0_1(12) +
               0.707107 * occ_func_0_1(38) * occ_func_0_0(12)) +
              0.707107 * occ_func_0_1(31) * occ_func_0_0(1) +
              0.707107 * occ_func_0_1(30) * occ_func_0_0(23) +
              (0.707107 * occ_func_0_0(34) * occ_func_0_1(11) +
               0.707107 * occ_func_0_1(34) * occ_func_0_0(11)) +
              0.707107 * occ_func_0_1(33) * occ_func_0_0(27) +
              0.707107 * occ_func_0_1(28) * occ_func_0_0(2) +
              (0.707107 * occ_func_0_0(40) * occ_func_0_1(41) +
               0.707107 * occ_func_0_1(40) * occ_func_0_0(41)) +
              0.707107 * occ_func_0_0(21) * occ_func_0_1(7) +
              0.707107 * occ_func_0_0(20) * occ_func_0_1(6) +
              (0.707107 * occ_func_0_0(42) * occ_func_0_1(9) +
               0.707107 * occ_func_0_1(42) * occ_func_0_0(9)) +
              0.707107 * occ_func_0_1(40) * occ_func_0_0(4) +
              0.707107 * occ_func_0_1(21) * occ_func_0_0(19) +
              (0.707107 * occ_func_0_0(33) * occ_func_0_1(11) +
               0.707107 * occ_func_0_1(33) * occ_func_0_0(11)) +
              0.707107 * occ_func_0_1(34) * occ_func_0_0(28) +
              0.707107 * occ_func_0_1(27) * occ_func_0_0(2) +
              (0.707107 * occ_func_0_0(36) * occ_func_0_1(38) +
               0.707107 * occ_func_0_1(36) * occ_func_0_0(38)) +
              0.707107 * occ_func_0_0(25) * occ_func_0_1(9) +
              0.707107 * occ_func_0_0(23) * occ_func_0_1(4)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(29) * occ_func_0_0(11) +
              0.707107 * occ_func_0_0(22) * occ_func_0_0(2) +
              0.707107 * occ_func_0_0(34) * occ_func_0_0(6) +
              0.707107 * occ_func_0_0(27) * occ_func_0_0(26) +
              0.707107 * occ_func_0_0(36) * occ_func_0_0(4) +
              0.707107 * occ_func_0_0(23) * occ_func_0_0(25) +
              0.707107 * occ_func_0_0(20) * occ_func_0_0(8) +
              0.707107 * occ_func_0_0(19) * occ_func_0_0(5) +
              0.707107 * occ_func_0_0(31) * occ_func_0_0(3) +
              0.707107 * occ_func_0_0(25) * occ_func_0_0(30) +
              0.707107 * occ_func_0_0(21) * occ_func_0_0(9) +
              0.707107 * occ_func_0_0(19) * occ_func_0_0(4) +
              0.707107 * occ_func_0_0(26) * occ_func_0_0(33) +
              0.707107 * occ_func_0_0(28) * occ_func_0_0(1) +
              0.707107 * occ_func_0_0(30) * occ_func_0_0(10) +
              0.707107 * occ_func_0_0(25) * occ_func_0_0(3) +
              0.707107 * occ_func_0_0(41) * occ_func_0_0(5) +
              0.707107 * occ_func_0_0(19) * occ_func_0_0(20) +
              0.707107 * occ_func_0_0(30) * occ_func_0_0(12) +
              0.707107 * occ_func_0_0(23) * occ_func_0_0(1) +
              0.707107 * occ_func_0_0(29) * occ_func_0_0(10) +
              0.707107 * occ_func_0_0(24) * occ_func_0_0(3) +
              0.707107 * occ_func_0_0(28) * occ_func_0_0(35) +
              0.707107 * occ_func_0_0(26) * occ_func_0_0(1) +
              0.707107 * occ_func_0_0(27) * occ_func_0_0(7) +
              0.707107 * occ_func_0_0(26) * occ_func_0_0(6) +
              0.707107 * occ_func_0_0(40) * occ_func_0_0(6) +
              0.707107 * occ_func_0_0(20) * occ_func_0_0(21) +
              0.707107 * occ_func_0_0(24) * occ_func_0_0(8) +
              0.707107 * occ_func_0_0(22) * occ_func_0_0(5) +
              0.707107 * occ_func_0_0(32) * occ_func_0_0(2) +
              0.707107 * occ_func_0_0(22) * occ_func_0_0(29) +
              0.707107 * occ_func_0_0(37) * occ_func_0_0(5) +
              0.707107 * occ_func_0_0(24) * occ_func_0_0(22) +
              0.707107 * occ_func_0_0(32) * occ_func_0_0(3) +
              0.707107 * occ_func_0_0(29) * occ_func_0_0(24) +
              0.707107 * occ_func_0_0(31) * occ_func_0_0(1) +
              0.707107 * occ_func_0_0(30) * occ_func_0_0(23) +
              0.707107 * occ_func_0_0(33) * occ_func_0_0(27) +
              0.707107 * occ_func_0_0(28) * occ_func_0_0(2) +
              0.707107 * occ_func_0_0(21) * occ_func_0_0(7) +
              0.707107 * occ_func_0_0(20) * occ_func_0_0(6) +
              0.707107 * occ_func_0_0(40) * occ_func_0_0(4) +
              0.707107 * occ_func_0_0(21) * occ_func_0_0(19) +
              0.707107 * occ_func_0_0(34) * occ_func_0_0(28) +
              0.707107 * occ_func_0_0(27) * occ_func_0_0(2) +
              0.707107 * occ_func_0_0(25) * occ_func_0_0(9) +
              0.707107 * occ_func_0_0(23) * occ_func_0_0(4)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_3_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(29) * occ_func_0_1(11) +
              0.707107 * occ_func_0_1(22) * occ_func_0_1(2) +
              0.707107 * occ_func_0_1(34) * occ_func_0_1(6) +
              0.707107 * occ_func_0_1(27) * occ_func_0_1(26) +
              0.707107 * occ_func_0_1(36) * occ_func_0_1(4) +
              0.707107 * occ_func_0_1(23) * occ_func_0_1(25) +
              0.707107 * occ_func_0_1(20) * occ_func_0_1(8) +
              0.707107 * occ_func_0_1(19) * occ_func_0_1(5) +
              0.707107 * occ_func_0_1(31) * occ_func_0_1(3) +
              0.707107 * occ_func_0_1(25) * occ_func_0_1(30) +
              0.707107 * occ_func_0_1(21) * occ_func_0_1(9) +
              0.707107 * occ_func_0_1(19) * occ_func_0_1(4) +
              0.707107 * occ_func_0_1(26) * occ_func_0_1(33) +
              0.707107 * occ_func_0_1(28) * occ_func_0_1(1) +
              0.707107 * occ_func_0_1(30) * occ_func_0_1(10) +
              0.707107 * occ_func_0_1(25) * occ_func_0_1(3) +
              0.707107 * occ_func_0_1(41) * occ_func_0_1(5) +
              0.707107 * occ_func_0_1(19) * occ_func_0_1(20) +
              0.707107 * occ_func_0_1(30) * occ_func_0_1(12) +
              0.707107 * occ_func_0_1(23) * occ_func_0_1(1) +
              0.707107 * occ_func_0_1(29) * occ_func_0_1(10) +
              0.707107 * occ_func_0_1(24) * occ_func_0_1(3) +
              0.707107 * occ_func_0_1(28) * occ_func_0_1(35) +
              0.707107 * occ_func_0_1(26) * occ_func_0_1(1) +
              0.707107 * occ_func_0_1(27) * occ_func_0_1(7) +
              0.707107 * occ_func_0_1(26) * occ_func_0_1(6) +
              0.707107 * occ_func_0_1(40) * occ_func_0_1(6) +
              0.707107 * occ_func_0_1(20) * occ_func_0_1(21) +
              0.707107 * occ_func_0_1(24) * occ_func_0_1(8) +
              0.707107 * occ_func_0_1(22) * occ_func_0_1(5) +
              0.707107 * occ_func_0_1(32) * occ_func_0_1(2) +
              0.707107 * occ_func_0_1(22) * occ_func_0_1(29) +
              0.707107 * occ_func_0_1(37) * occ_func_0_1(5) +
              0.707107 * occ_func_0_1(24) * occ_func_0_1(22) +
              0.707107 * occ_func_0_1(32) * occ_func_0_1(3) +
              0.707107 * occ_func_0_1(29) * occ_func_0_1(24) +
              0.707107 * occ_func_0_1(31) * occ_func_0_1(1) +
              0.707107 * occ_func_0_1(30) * occ_func_0_1(23) +
              0.707107 * occ_func_0_1(33) * occ_func_0_1(27) +
              0.707107 * occ_func_0_1(28) * occ_func_0_1(2) +
              0.707107 * occ_func_0_1(21) * occ_func_0_1(7) +
              0.707107 * occ_func_0_1(20) * occ_func_0_1(6) +
              0.707107 * occ_func_0_1(40) * occ_func_0_1(4) +
              0.707107 * occ_func_0_1(21) * occ_func_0_1(19) +
              0.707107 * occ_func_0_1(34) * occ_func_0_1(28) +
              0.707107 * occ_func_0_1(27) * occ_func_0_1(2) +
              0.707107 * occ_func_0_1(25) * occ_func_0_1(9) +
              0.707107 * occ_func_0_1(23) * occ_func_0_1(4)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             ((0.707107 * occ_func_0_0(32) * occ_func_0_1(39) +
               0.707107 * occ_func_0_1(32) * occ_func_0_0(39)) +
              0.707107 * occ_func_0_1(29) * occ_func_0_0(11) +
              0.707107 * occ_func_0_1(22) * occ_func_0_0(2) +
              (0.707107 * occ_func_0_0(35) * occ_func_0_1(7) +
               0.707107 * occ_func_0_1(35) * occ_func_0_0(7)) +
              0.707107 * occ_func_0_0(34) * occ_func_0_1(6) +
              0.707107 * occ_func_0_0(27) * occ_func_0_1(26) +
              (0.707107 * occ_func_0_0(38) * occ_func_0_1(9) +
               0.707107 * occ_func_0_1(38) * occ_func_0_0(9)) +
              0.707107 * occ_func_0_0(36) * occ_func_0_1(4) +
              0.707107 * occ_func_0_1(23) * occ_func_0_0(25) +
              (0.707107 * occ_func_0_0(41) * occ_func_0_1(42) +
               0.707107 * occ_func_0_1(41) * occ_func_0_0(42)) +
              0.707107 * occ_func_0_1(20) * occ_func_0_0(8) +
              0.707107 * occ_func_0_1(19) * occ_func_0_0(5) +
              (0.707107 * occ_func_0_0(36) * occ_func_0_1(10) +
               0.707107 * occ_func_0_1(36) * occ_func_0_0(10)) +
              0.707107 * occ_func_0_0(31) * occ_func_0_1(3) +
              0.707107 * occ_func_0_1(25) * occ_func_0_0(30) +
              (0.707107 * occ_func_0_0(42) * occ_func_0_1(40) +
               0.707107 * occ_func_0_1(42) * occ_func_0_0(40)) +
              0.707107 * occ_func_0_1(21) * occ_func_0_0(9) +
              0.707107 * occ_func_0_1(19) * occ_func_0_0(4) +
              (0.707107 * occ_func_0_0(35) * occ_func_0_1(12) +
               0.707107 * occ_func_0_1(35) * occ_func_0_0(12)) +
              0.707107 * occ_func_0_1(26) * occ_func_0_0(33) +
              0.707107 * occ_func_0_0(28) * occ_func_0_1(1) +
              (0.707107 * occ_func_0_0(31) * occ_func_0_1(36) +
               0.707107 * occ_func_0_1(31) * occ_func_0_0(36)) +
              0.707107 * occ_func_0_1(30) * occ_func_0_0(10) +
              0.707107 * occ_func_0_1(25) * occ_func_0_0(3) +
              (0.707107 * occ_func_0_0(42) * occ_func_0_1(8) +
               0.707107 * occ_func_0_1(42) * occ_func_0_0(8)) +
              0.707107 * occ_func_0_0(41) * occ_func_0_1(5) +
              0.707107 * occ_func_0_1(19) * occ_func_0_0(20) +
              (0.707107 * occ_func_0_0(38) * occ_func_0_1(31) +
               0.707107 * occ_func_0_1(38) * occ_func_0_0(31)) +
              0.707107 * occ_func_0_1(30) * occ_func_0_0(12) +
              0.707107 * occ_func_0_1(23) * occ_func_0_0(1) +
              (0.707107 * occ_func_0_0(37) * occ_func_0_1(32) +
               0.707107 * occ_func_0_1(37) * occ_func_0_0(32)) +
              0.707107 * occ_func_0_1(29) * occ_func_0_0(10) +
              0.707107 * occ_func_0_1(24) * occ_func_0_0(3) +
              (0.707107 * occ_func_0_0(33) * occ_func_0_1(12) +
               0.707107 * occ_func_0_1(33) * occ_func_0_0(12)) +
              0.707107 * occ_func_0_1(28) * occ_func_0_0(35) +
              0.707107 * occ_func_0_0(26) * occ_func_0_1(1) +
              (0.707107 * occ_func_0_0(35) * occ_func_0_1(34) +
               0.707107 * occ_func_0_1(35) * occ_func_0_0(34)) +
              0.707107 * occ_func_0_1(27) * occ_func_0_0(7) +
              0.707107 * occ_func_0_1(26) * occ_func_0_0(6) +
              (0.707107 * occ_func_0_0(41) * occ_func_0_1(7) +
               0.707107 * occ_func_0_1(41) * occ_func_0_0(7)) +
              0.707107 * occ_func_0_0(40) * occ_func_0_1(6) +
              0.707107 * occ_func_0_1(20) * occ_func_0_0(21) +
              (0.707107 * occ_func_0_0(39) * occ_func_0_1(37) +
               0.707107 * occ_func_0_1(39) * occ_func_0_0(37)) +
              0.707107 * occ_func_0_1(24) * occ_func_0_0(8) +
              0.707107 * occ_func_0_1(22) * occ_func_0_0(5) +
              (0.707107 * occ_func_0_0(39) * occ_func_0_1(11) +
               0.707107 * occ_func_0_1(39) * occ_func_0_0(11)) +
              0.707107 * occ_func_0_0(32) * occ_func_0_1(2) +
              0.707107 * occ_func_0_1(22) * occ_func_0_0(29) +
              (0.707107 * occ_func_0_0(39) * occ_func_0_1(8) +
               0.707107 * occ_func_0_1(39) * occ_func_0_0(8)) +
              0.707107 * occ_func_0_0(37) * occ_func_0_1(5) +
              0.707107 * occ_func_0_0(24) * occ_func_0_1(22) +
              (0.707107 * occ_func_0_0(37) * occ_func_0_1(10) +
               0.707107 * occ_func_0_1(37) * occ_func_0_0(10)) +
              0.707107 * occ_func_0_0(32) * occ_func_0_1(3) +
              0.707107 * occ_func_0_0(29) * occ_func_0_1(24) +
              (0.707107 * occ_func_0_0(38) * occ_func_0_1(12) +
               0.707107 * occ_func_0_1(38) * occ_func_0_0(12)) +
              0.707107 * occ_func_0_0(31) * occ_func_0_1(1) +
              0.707107 * occ_func_0_0(30) * occ_func_0_1(23) +
              (0.707107 * occ_func_0_0(34) * occ_func_0_1(11) +
               0.707107 * occ_func_0_1(34) * occ_func_0_0(11)) +
              0.707107 * occ_func_0_0(33) * occ_func_0_1(27) +
              0.707107 * occ_func_0_0(28) * occ_func_0_1(2) +
              (0.707107 * occ_func_0_0(40) * occ_func_0_1(41) +
               0.707107 * occ_func_0_1(40) * occ_func_0_0(41)) +
              0.707107 * occ_func_0_1(21) * occ_func_0_0(7) +
              0.707107 * occ_func_0_1(20) * occ_func_0_0(6) +
              (0.707107 * occ_func_0_0(42) * occ_func_0_1(9) +
               0.707107 * occ_func_0_1(42) * occ_func_0_0(9)) +
              0.707107 * occ_func_0_0(40) * occ_func_0_1(4) +
              0.707107 * occ_func_0_0(21) * occ_func_0_1(19) +
              (0.707107 * occ_func_0_0(33) * occ_func_0_1(11) +
               0.707107 * occ_func_0_1(33) * occ_func_0_0(11)) +
              0.707107 * occ_func_0_0(34) * occ_func_0_1(28) +
              0.707107 * occ_func_0_0(27) * occ_func_0_1(2) +
              (0.707107 * occ_func_0_0(36) * occ_func_0_1(38) +
               0.707107 * occ_func_0_1(36) * occ_func_0_0(38)) +
              0.707107 * occ_func_0_1(25) * occ_func_0_0(9) +
              0.707107 * occ_func_0_1(23) * occ_func_0_0(4)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_4_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(32) * occ_func_0_1(39) +
              occ_func_0_1(35) * occ_func_0_1(7) +
              occ_func_0_1(38) * occ_func_0_1(9) +
              occ_func_0_1(41) * occ_func_0_1(42) +
              occ_func_0_1(36) * occ_func_0_1(10) +
              occ_func_0_1(42) * occ_func_0_1(40) +
              occ_func_0_1(35) * occ_func_0_1(12) +
              occ_func_0_1(31) * occ_func_0_1(36) +
              occ_func_0_1(42) * occ_func_0_1(8) +
              occ_func_0_1(38) * occ_func_0_1(31) +
              occ_func_0_1(37) * occ_func_0_1(32) +
              occ_func_0_1(33) * occ_func_0_1(12) +
              occ_func_0_1(35) * occ_func_0_1(34) +
              occ_func_0_1(41) * occ_func_0_1(7) +
              occ_func_0_1(39) * occ_func_0_1(37) +
              occ_func_0_1(39) * occ_func_0_1(11) +
              occ_func_0_1(39) * occ_func_0_1(8) +
              occ_func_0_1(37) * occ_func_0_1(10) +
              occ_func_0_1(38) * occ_func_0_1(12) +
              occ_func_0_1(34) * occ_func_0_1(11) +
              occ_func_0_1(40) * occ_func_0_1(41) +
              occ_func_0_1(42) * occ_func_0_1(9) +
              occ_func_0_1(33) * occ_func_0_1(11) +
              occ_func_0_1(36) * occ_func_0_1(38)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(29) * occ_func_0_1(11) +
              occ_func_0_0(22) * occ_func_0_1(2) +
              occ_func_0_1(34) * occ_func_0_0(6) +
              occ_func_0_1(27) * occ_func_0_0(26) +
              occ_func_0_1(36) * occ_func_0_0(4) +
              occ_func_0_0(23) * occ_func_0_1(25) +
              occ_func_0_0(20) * occ_func_0_1(8) +
              occ_func_0_0(19) * occ_func_0_1(5) +
              occ_func_0_1(31) * occ_func_0_0(3) +
              occ_func_0_0(25) * occ_func_0_1(30) +
              occ_func_0_0(21) * occ_func_0_1(9) +
              occ_func_0_0(19) * occ_func_0_1(4) +
              occ_func_0_0(26) * occ_func_0_1(33) +
              occ_func_0_1(28) * occ_func_0_0(1) +
              occ_func_0_0(30) * occ_func_0_1(10) +
              occ_func_0_0(25) * occ_func_0_1(3) +
              occ_func_0_1(41) * occ_func_0_0(5) +
              occ_func_0_0(19) * occ_func_0_1(20) +
              occ_func_0_0(30) * occ_func_0_1(12) +
              occ_func_0_0(23) * occ_func_0_1(1) +
              occ_func_0_0(29) * occ_func_0_1(10) +
              occ_func_0_0(24) * occ_func_0_1(3) +
              occ_func_0_0(28) * occ_func_0_1(35) +
              occ_func_0_1(26) * occ_func_0_0(1) +
              occ_func_0_0(27) * occ_func_0_1(7) +
              occ_func_0_0(26) * occ_func_0_1(6) +
              occ_func_0_1(40) * occ_func_0_0(6) +
              occ_func_0_0(20) * occ_func_0_1(21) +
              occ_func_0_0(24) * occ_func_0_1(8) +
              occ_func_0_0(22) * occ_func_0_1(5) +
              occ_func_0_1(32) * occ_func_0_0(2) +
              occ_func_0_0(22) * occ_func_0_1(29) +
              occ_func_0_1(37) * occ_func_0_0(5) +
              occ_func_0_1(24) * occ_func_0_0(22) +
              occ_func_0_1(32) * occ_func_0_0(3) +
              occ_func_0_1(29) * occ_func_0_0(24) +
              occ_func_0_1(31) * occ_func_0_0(1) +
              occ_func_0_1(30) * occ_func_0_0(23) +
              occ_func_0_1(33) * occ_func_0_0(27) +
              occ_func_0_1(28) * occ_func_0_0(2) +
              occ_func_0_0(21) * occ_func_0_1(7) +
              occ_func_0_0(20) * occ_func_0_1(6) +
              occ_func_0_1(40) * occ_func_0_0(4) +
              occ_func_0_1(21) * occ_func_0_0(19) +
              occ_func_0_1(34) * occ_func_0_0(28) +
              occ_func_0_1(27) * occ_func_0_0(2) +
              occ_func_0_0(25) * occ_func_0_1(9) +
              occ_func_0_0(23) * occ_func_0_1(4)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_9_5_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(32) * occ_func_0_1(39) +
          occ_func_0_1(29) * occ_func_0_1(11) +
          occ_func_0_1(22) * occ_func_0_1(2) +
          occ_func_0_1(35) * occ_func_0_1(7) +
          occ_func_0_1(34) * occ_func_0_1(6) +
          occ_func_0_1(27) * occ_func_0_1(26) +
          occ_func_0_1(38) * occ_func_0_1(9) +
          occ_func_0_1(36) * occ_func_0_1(4) +
          occ_func_0_1(23) * occ_func_0_1(25) +
          occ_func_0_1(41) * occ_func_0_1(42) +
          occ_func_0_1(20) * occ_func_0_1(8) +
          occ_func_0_1(19) * occ_func_0_1(5) +
          occ_func_0_1(36) * occ_func_0_1(10) +
          occ_func_0_1(31) * occ_func_0_1(3) +
          occ_func_0_1(25) * occ_func_0_1(30) +
          occ_func_0_1(42) * occ_func_0_1(40) +
          occ_func_0_1(21) * occ_func_0_1(9) +
          occ_func_0_1(19) * occ_func_0_1(4) +
          occ_func_0_1(35) * occ_func_0_1(12) +
          occ_func_0_1(26) * occ_func_0_1(33) +
          occ_func_0_1(28) * occ_func_0_1(1) +
          occ_func_0_1(31) * occ_func_0_1(36) +
          occ_func_0_1(30) * occ_func_0_1(10) +
          occ_func_0_1(25) * occ_func_0_1(3) +
          occ_func_0_1(42) * occ_func_0_1(8) +
          occ_func_0_1(41) * occ_func_0_1(5) +
          occ_func_0_1(19) * occ_func_0_1(20) +
          occ_func_0_1(38) * occ_func_0_1(31) +
          occ_func_0_1(30) * occ_func_0_1(12) +
          occ_func_0_1(23) * occ_func_0_1(1) +
          occ_func_0_1(37) * occ_func_0_1(32) +
          occ_func_0_1(29) * occ_func_0_1(10) +
          occ_func_0_1(24) * occ_func_0_1(3) +
          occ_func_0_1(33) * occ_func_0_1(12) +
          occ_func_0_1(28) * occ_func_0_1(35) +
          occ_func_0_1(26) * occ_func_0_1(1) +
          occ_func_0_1(35) * occ_func_0_1(34) +
          occ_func_0_1(27) * occ_func_0_1(7) +
          occ_func_0_1(26) * occ_func_0_1(6) +
          occ_func_0_1(41) * occ_func_0_1(7) +
          occ_func_0_1(40) * occ_func_0_1(6) +
          occ_func_0_1(20) * occ_func_0_1(21) +
          occ_func_0_1(39) * occ_func_0_1(37) +
          occ_func_0_1(24) * occ_func_0_1(8) +
          occ_func_0_1(22) * occ_func_0_1(5) +
          occ_func_0_1(39) * occ_func_0_1(11) +
          occ_func_0_1(32) * occ_func_0_1(2) +
          occ_func_0_1(22) * occ_func_0_1(29) +
          occ_func_0_1(39) * occ_func_0_1(8) +
          occ_func_0_1(37) * occ_func_0_1(5) +
          occ_func_0_1(24) * occ_func_0_1(22) +
          occ_func_0_1(37) * occ_func_0_1(10) +
          occ_func_0_1(32) * occ_func_0_1(3) +
          occ_func_0_1(29) * occ_func_0_1(24) +
          occ_func_0_1(38) * occ_func_0_1(12) +
          occ_func_0_1(31) * occ_func_0_1(1) +
          occ_func_0_1(30) * occ_func_0_1(23) +
          occ_func_0_1(34) * occ_func_0_1(11) +
          occ_func_0_1(33) * occ_func_0_1(27) +
          occ_func_0_1(28) * occ_func_0_1(2) +
          occ_func_0_1(40) * occ_func_0_1(41) +
          occ_func_0_1(21) * occ_func_0_1(7) +
          occ_func_0_1(20) * occ_func_0_1(6) +
          occ_func_0_1(42) * occ_func_0_1(9) +
          occ_func_0_1(40) * occ_func_0_1(4) +
          occ_func_0_1(21) * occ_func_0_1(19) +
          occ_func_0_1(33) * occ_func_0_1(11) +
          occ_func_0_1(34) * occ_func_0_1(28) +
          occ_func_0_1(27) * occ_func_0_1(2) +
          occ_func_0_1(36) * occ_func_0_1(38) +
          occ_func_0_1(25) * occ_func_0_1(9) +
          occ_func_0_1(23) * occ_func_0_1(4)) /
         24.;
}

/**** Basis functions for orbit 10****
0.0000000 0.0000000 0.0000000 A  B  C

0.0000000 1.0000000 0.0000000 A  B  C

0.0000000 2.0000000 0.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_10_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(51) +
          occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(54) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(49) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(50)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_10_1() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(51) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(54) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(49) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(50) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(50))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_10_2() const {
  return (occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(51) +
          occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_0(0) +
          occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(54) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(49) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(50)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_10_3() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(51) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(54) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(49) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(50) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(50))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_10_4() const {
  return (occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(51) +
          occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_1(0) +
          occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(54) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(49) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(50)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_10_5() const {
  return (occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(51) +
          occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(54) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(49) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(50)) /
         6.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(51) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(9) +
          occ_func_0_0(46) * occ_func_0_0(4) * occ_func_0_0(0) +
          occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(3) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_0(45) +
          occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(2) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(44) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(54) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_0(12) +
          occ_func_0_0(43) * occ_func_0_0(1) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(49) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(7) +
          occ_func_0_0(48) * occ_func_0_0(6) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(50) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_0(8) +
          occ_func_0_0(47) * occ_func_0_0(5) * occ_func_0_0(0)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_1_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(51) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(9) +
           0.707107 * occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(46) * occ_func_0_0(4) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(46) * occ_func_0_0(4) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(3) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_1(45) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_0(45)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(2) +
           0.707107 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(2)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(44) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(44)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(54) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(43) * occ_func_0_0(1) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(43) * occ_func_0_0(1) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(49) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(7) +
           0.707107 * occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(48) * occ_func_0_0(6) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(48) * occ_func_0_0(6) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(50) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(50)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_1(8) +
           0.707107 * occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(47) * occ_func_0_0(5) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(47) * occ_func_0_0(5) * occ_func_0_0(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_2_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(51) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(9) +
          occ_func_0_0(46) * occ_func_0_1(4) * occ_func_0_0(0) +
          occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(3) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_0(45) +
          occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(2) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(44) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(54) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_0(12) +
          occ_func_0_0(43) * occ_func_0_1(1) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(49) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(7) +
          occ_func_0_0(48) * occ_func_0_1(6) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(50) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_0(8) +
          occ_func_0_0(47) * occ_func_0_1(5) * occ_func_0_0(0)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_3_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(51) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(9) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(46) * occ_func_0_1(4) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(46) * occ_func_0_1(4) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(3) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_1(45) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_0(45)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(2) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(2)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(44) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(44)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(54) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_1(12) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(43) * occ_func_0_1(1) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(43) * occ_func_0_1(1) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(49) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(7) +
           0.707107 * occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(48) * occ_func_0_1(6) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(48) * occ_func_0_1(6) * occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(50) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(50)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_1(8) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(47) * occ_func_0_1(5) * occ_func_0_1(0) +
           0.707107 * occ_func_0_1(47) * occ_func_0_1(5) * occ_func_0_0(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_4_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(51) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(9) +
          occ_func_0_1(46) * occ_func_0_0(4) * occ_func_0_1(0) +
          occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(3) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_1(45) +
          occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(2) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(44) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(54) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_1(12) +
          occ_func_0_1(43) * occ_func_0_0(1) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(49) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(7) +
          occ_func_0_1(48) * occ_func_0_0(6) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(50) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_1(8) +
          occ_func_0_1(47) * occ_func_0_0(5) * occ_func_0_1(0)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_10_5_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(51) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(9) +
          occ_func_0_1(46) * occ_func_0_1(4) * occ_func_0_1(0) +
          occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(3) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_1(45) +
          occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(2) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(44) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(54) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_1(12) +
          occ_func_0_1(43) * occ_func_0_1(1) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(49) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(7) +
          occ_func_0_1(48) * occ_func_0_1(6) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(50) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_1(8) +
          occ_func_0_1(47) * occ_func_0_1(5) * occ_func_0_1(0)) /
         6.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(9) * occ_func_0_0(51) +
          occ_func_0_0(4) * occ_func_0_0(9) +
          occ_func_0_0(46) * occ_func_0_0(4) +
          occ_func_0_0(52) * occ_func_0_0(10) +
          occ_func_0_0(10) * occ_func_0_0(3) +
          occ_func_0_0(3) * occ_func_0_0(45) +
          occ_func_0_0(53) * occ_func_0_0(11) +
          occ_func_0_0(11) * occ_func_0_0(2) +
          occ_func_0_0(2) * occ_func_0_0(44) +
          occ_func_0_0(12) * occ_func_0_0(54) +
          occ_func_0_0(1) * occ_func_0_0(12) +
          occ_func_0_0(43) * occ_func_0_0(1) +
          occ_func_0_0(7) * occ_func_0_0(49) +
          occ_func_0_0(6) * occ_func_0_0(7) +
          occ_func_0_0(48) * occ_func_0_0(6) +
          occ_func_0_0(8) * occ_func_0_0(50) +
          occ_func_0_0(5) * occ_func_0_0(8) +
          occ_func_0_0(47) * occ_func_0_0(5)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_0(9) * occ_func_0_1(51) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(9) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(9)) +
              0.707107 * occ_func_0_1(46) * occ_func_0_0(4) +
              0.707107 * occ_func_0_1(52) * occ_func_0_0(10) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(3) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(3)) +
              0.707107 * occ_func_0_0(3) * occ_func_0_1(45) +
              0.707107 * occ_func_0_1(53) * occ_func_0_0(11) +
              (0.707107 * occ_func_0_0(11) * occ_func_0_1(2) +
               0.707107 * occ_func_0_1(11) * occ_func_0_0(2)) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(44) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(54) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(12) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(12)) +
              0.707107 * occ_func_0_1(43) * occ_func_0_0(1) +
              0.707107 * occ_func_0_0(7) * occ_func_0_1(49) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(7) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(7)) +
              0.707107 * occ_func_0_1(48) * occ_func_0_0(6) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(50) +
              (0.707107 * occ_func_0_0(5) * occ_func_0_1(8) +
               0.707107 * occ_func_0_1(5) * occ_func_0_0(8)) +
              0.707107 * occ_func_0_1(47) * occ_func_0_0(5)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(9) * occ_func_0_0(51) +
              0.707107 * occ_func_0_0(46) * occ_func_0_0(4) +
              0.707107 * occ_func_0_0(52) * occ_func_0_0(10) +
              0.707107 * occ_func_0_0(3) * occ_func_0_0(45) +
              0.707107 * occ_func_0_0(53) * occ_func_0_0(11) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(44) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(54) +
              0.707107 * occ_func_0_0(43) * occ_func_0_0(1) +
              0.707107 * occ_func_0_0(7) * occ_func_0_0(49) +
              0.707107 * occ_func_0_0(48) * occ_func_0_0(6) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(50) +
              0.707107 * occ_func_0_0(47) * occ_func_0_0(5)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(9) * occ_func_0_0(51) +
              occ_func_0_0(46) * occ_func_0_1(4) +
              occ_func_0_0(52) * occ_func_0_1(10) +
              occ_func_0_1(3) * occ_func_0_0(45) +
              occ_func_0_0(53) * occ_func_0_1(11) +
              occ_func_0_1(2) * occ_func_0_0(44) +
              occ_func_0_1(12) * occ_func_0_0(54) +
              occ_func_0_0(43) * occ_func_0_1(1) +
              occ_func_0_1(7) * occ_func_0_0(49) +
              occ_func_0_0(48) * occ_func_0_1(6) +
              occ_func_0_1(8) * occ_func_0_0(50) +
              occ_func_0_0(47) * occ_func_0_1(5)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(4) * occ_func_0_0(9) +
              occ_func_0_0(10) * occ_func_0_0(3) +
              occ_func_0_0(11) * occ_func_0_0(2) +
              occ_func_0_0(1) * occ_func_0_0(12) +
              occ_func_0_0(6) * occ_func_0_0(7) +
              occ_func_0_0(5) * occ_func_0_0(8)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_3_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(9) * occ_func_0_1(51) +
              0.707107 * occ_func_0_1(46) * occ_func_0_1(4) +
              0.707107 * occ_func_0_1(52) * occ_func_0_1(10) +
              0.707107 * occ_func_0_1(3) * occ_func_0_1(45) +
              0.707107 * occ_func_0_1(53) * occ_func_0_1(11) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(44) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(54) +
              0.707107 * occ_func_0_1(43) * occ_func_0_1(1) +
              0.707107 * occ_func_0_1(7) * occ_func_0_1(49) +
              0.707107 * occ_func_0_1(48) * occ_func_0_1(6) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(50) +
              0.707107 * occ_func_0_1(47) * occ_func_0_1(5)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_1(9) * occ_func_0_0(51) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(9) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(9)) +
              0.707107 * occ_func_0_0(46) * occ_func_0_1(4) +
              0.707107 * occ_func_0_0(52) * occ_func_0_1(10) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(3) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(3)) +
              0.707107 * occ_func_0_1(3) * occ_func_0_0(45) +
              0.707107 * occ_func_0_0(53) * occ_func_0_1(11) +
              (0.707107 * occ_func_0_0(11) * occ_func_0_1(2) +
               0.707107 * occ_func_0_1(11) * occ_func_0_0(2)) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(44) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(54) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(12) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(12)) +
              0.707107 * occ_func_0_0(43) * occ_func_0_1(1) +
              0.707107 * occ_func_0_1(7) * occ_func_0_0(49) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(7) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(7)) +
              0.707107 * occ_func_0_0(48) * occ_func_0_1(6) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(50) +
              (0.707107 * occ_func_0_0(5) * occ_func_0_1(8) +
               0.707107 * occ_func_0_1(5) * occ_func_0_0(8)) +
              0.707107 * occ_func_0_0(47) * occ_func_0_1(5)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_4_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(4) * occ_func_0_1(9) +
              occ_func_0_1(10) * occ_func_0_1(3) +
              occ_func_0_1(11) * occ_func_0_1(2) +
              occ_func_0_1(1) * occ_func_0_1(12) +
              occ_func_0_1(6) * occ_func_0_1(7) +
              occ_func_0_1(5) * occ_func_0_1(8)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(9) * occ_func_0_1(51) +
              occ_func_0_1(46) * occ_func_0_0(4) +
              occ_func_0_1(52) * occ_func_0_0(10) +
              occ_func_0_0(3) * occ_func_0_1(45) +
              occ_func_0_1(53) * occ_func_0_0(11) +
              occ_func_0_0(2) * occ_func_0_1(44) +
              occ_func_0_0(12) * occ_func_0_1(54) +
              occ_func_0_1(43) * occ_func_0_0(1) +
              occ_func_0_0(7) * occ_func_0_1(49) +
              occ_func_0_1(48) * occ_func_0_0(6) +
              occ_func_0_0(8) * occ_func_0_1(50) +
              occ_func_0_1(47) * occ_func_0_0(5)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_10_5_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(9) * occ_func_0_1(51) +
          occ_func_0_1(4) * occ_func_0_1(9) +
          occ_func_0_1(46) * occ_func_0_1(4) +
          occ_func_0_1(52) * occ_func_0_1(10) +
          occ_func_0_1(10) * occ_func_0_1(3) +
          occ_func_0_1(3) * occ_func_0_1(45) +
          occ_func_0_1(53) * occ_func_0_1(11) +
          occ_func_0_1(11) * occ_func_0_1(2) +
          occ_func_0_1(2) * occ_func_0_1(44) +
          occ_func_0_1(12) * occ_func_0_1(54) +
          occ_func_0_1(1) * occ_func_0_1(12) +
          occ_func_0_1(43) * occ_func_0_1(1) +
          occ_func_0_1(7) * occ_func_0_1(49) +
          occ_func_0_1(6) * occ_func_0_1(7) +
          occ_func_0_1(48) * occ_func_0_1(6) +
          occ_func_0_1(8) * occ_func_0_1(50) +
          occ_func_0_1(5) * occ_func_0_1(8) +
          occ_func_0_1(47) * occ_func_0_1(5)) /
         6.;
}

/**** Basis functions for orbit 11****
0.0000000 0.0000000 0.0000000 A  B  C

0.0000000 1.0000000 0.0000000 A  B  C

1.0000000 -2.0000000 1.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_11_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(35) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_0(32) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_0(39) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_0(31) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_0(36) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(34) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(38) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_0(42) * occ_func_0_0(86) * occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(83) +
          occ_func_0_0(40) * occ_func_0_0(86) * occ_func_0_0(0) +
          occ_func_0_0(35) * occ_func_0_0(83) * occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_0(38) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_0(34) * occ_func_0_0(83) * occ_func_0_0(0) +
          occ_func_0_0(37) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(33) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_0(41) * occ_func_0_0(86) * occ_func_0_0(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_11_1() const {
  return (occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(35) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_0(32) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_0(39) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_0(31) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_0(36) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(34) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(38) +
          occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_0(84) +
          occ_func_0_0(42) * occ_func_0_0(86) * occ_func_0_1(0) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(83) +
          occ_func_0_0(40) * occ_func_0_0(86) * occ_func_0_1(0) +
          occ_func_0_0(35) * occ_func_0_0(83) * occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_0(38) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_0(34) * occ_func_0_0(83) * occ_func_0_1(0) +
          occ_func_0_0(37) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(33) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(84) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_0(41) * occ_func_0_0(86) * occ_func_0_1(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_11_2() const {
  return (occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(35) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_1(32) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_1(39) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_1(31) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_1(36) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(34) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(38) +
          occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_1(42) * occ_func_0_0(86) * occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(83) +
          occ_func_0_1(40) * occ_func_0_0(86) * occ_func_0_0(0) +
          occ_func_0_0(35) * occ_func_0_1(83) * occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_0(38) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_0(34) * occ_func_0_1(83) * occ_func_0_0(0) +
          occ_func_0_1(37) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(33) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_1(41) * occ_func_0_0(86) * occ_func_0_0(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_11_3() const {
  return (occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(35) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_1(32) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_1(39) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_1(31) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_1(36) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(34) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(38) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_0(84) +
          occ_func_0_1(42) * occ_func_0_0(86) * occ_func_0_1(0) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(83) +
          occ_func_0_1(40) * occ_func_0_0(86) * occ_func_0_1(0) +
          occ_func_0_0(35) * occ_func_0_1(83) * occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_0(38) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_0(34) * occ_func_0_1(83) * occ_func_0_1(0) +
          occ_func_0_1(37) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(33) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(84) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_1(41) * occ_func_0_0(86) * occ_func_0_1(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_11_4() const {
  return (occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(35) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_0(32) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_0(39) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_0(31) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_0(36) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(34) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(38) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_1(84) +
          occ_func_0_0(42) * occ_func_0_1(86) * occ_func_0_0(0) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(83) +
          occ_func_0_0(40) * occ_func_0_1(86) * occ_func_0_0(0) +
          occ_func_0_1(35) * occ_func_0_0(83) * occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_1(38) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_1(34) * occ_func_0_0(83) * occ_func_0_0(0) +
          occ_func_0_0(37) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(33) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(84) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_0(41) * occ_func_0_1(86) * occ_func_0_0(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_11_5() const {
  return (occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(35) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_0(32) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_0(39) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_0(31) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_0(36) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(34) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(38) +
          occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_0(42) * occ_func_0_1(86) * occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(83) +
          occ_func_0_0(40) * occ_func_0_1(86) * occ_func_0_1(0) +
          occ_func_0_1(35) * occ_func_0_0(83) * occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_1(38) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_1(34) * occ_func_0_0(83) * occ_func_0_1(0) +
          occ_func_0_0(37) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(33) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_0(41) * occ_func_0_1(86) * occ_func_0_1(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_11_6() const {
  return (occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(35) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_1(32) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_1(39) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_1(31) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_1(36) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(34) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(38) +
          occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_1(84) +
          occ_func_0_1(42) * occ_func_0_1(86) * occ_func_0_0(0) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(83) +
          occ_func_0_1(40) * occ_func_0_1(86) * occ_func_0_0(0) +
          occ_func_0_1(35) * occ_func_0_1(83) * occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_1(38) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_1(34) * occ_func_0_1(83) * occ_func_0_0(0) +
          occ_func_0_1(37) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(33) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(84) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_1(41) * occ_func_0_1(86) * occ_func_0_0(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_11_7() const {
  return (occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(35) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_1(32) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_1(39) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_1(31) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_1(36) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(34) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(38) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_1(42) * occ_func_0_1(86) * occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(83) +
          occ_func_0_1(40) * occ_func_0_1(86) * occ_func_0_1(0) +
          occ_func_0_1(35) * occ_func_0_1(83) * occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_1(38) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_1(34) * occ_func_0_1(83) * occ_func_0_1(0) +
          occ_func_0_1(37) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(33) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_1(41) * occ_func_0_1(86) * occ_func_0_1(0)) /
         24.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(35) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(83) +
          occ_func_0_0(26) * occ_func_0_0(82) * occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_0(42) +
          occ_func_0_0(19) * occ_func_0_0(79) * occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(41) +
          occ_func_0_0(20) * occ_func_0_0(79) * occ_func_0_0(0) +
          occ_func_0_0(32) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(29) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_0(80) +
          occ_func_0_0(39) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(22) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(80) +
          occ_func_0_0(31) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(30) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_0(81) +
          occ_func_0_0(36) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(25) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_0(81) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_0(39) +
          occ_func_0_0(22) * occ_func_0_0(80) * occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_0(32) +
          occ_func_0_0(29) * occ_func_0_0(80) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(34) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_0(83) +
          occ_func_0_0(27) * occ_func_0_0(82) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(38) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_0(23) * occ_func_0_0(81) * occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_0(36) +
          occ_func_0_0(25) * occ_func_0_0(81) * occ_func_0_0(0) +
          occ_func_0_0(42) * occ_func_0_0(86) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(19) +
          occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_0(79) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(83) +
          occ_func_0_0(33) * occ_func_0_0(82) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_0(28) +
          occ_func_0_0(40) * occ_func_0_0(86) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(21) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_0(79) +
          occ_func_0_0(35) * occ_func_0_0(83) * occ_func_0_0(0) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(82) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_0(26) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_0(40) +
          occ_func_0_0(21) * occ_func_0_0(79) * occ_func_0_0(0) +
          occ_func_0_0(38) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_0(81) +
          occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_0(23) +
          occ_func_0_0(34) * occ_func_0_0(83) * occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_0(82) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_0(27) +
          occ_func_0_0(37) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(24) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(80) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(33) +
          occ_func_0_0(28) * occ_func_0_0(83) * occ_func_0_0(0) +
          occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_0(82) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(31) +
          occ_func_0_0(30) * occ_func_0_0(81) * occ_func_0_0(0) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_0(37) +
          occ_func_0_0(24) * occ_func_0_0(80) * occ_func_0_0(0) +
          occ_func_0_0(41) * occ_func_0_0(86) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(20) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_0(79)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_1_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(35) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(83) +
          occ_func_0_1(26) * occ_func_0_0(82) * occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_0(42) +
          occ_func_0_0(19) * occ_func_0_1(79) * occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(41) +
          occ_func_0_0(20) * occ_func_0_1(79) * occ_func_0_0(0) +
          occ_func_0_0(32) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(29) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_1(80) +
          occ_func_0_0(39) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(22) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(80) +
          occ_func_0_0(31) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(30) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_1(81) +
          occ_func_0_0(36) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(25) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_1(81) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_0(39) +
          occ_func_0_0(22) * occ_func_0_1(80) * occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_0(32) +
          occ_func_0_0(29) * occ_func_0_1(80) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(34) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_0(83) +
          occ_func_0_1(27) * occ_func_0_0(82) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(38) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_1(23) * occ_func_0_0(81) * occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_0(84) +
          occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_0(36) +
          occ_func_0_0(25) * occ_func_0_1(81) * occ_func_0_0(0) +
          occ_func_0_0(42) * occ_func_0_0(86) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(19) +
          occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_1(79) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(83) +
          occ_func_0_0(33) * occ_func_0_1(82) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_0(28) +
          occ_func_0_0(40) * occ_func_0_0(86) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(21) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_1(79) +
          occ_func_0_0(35) * occ_func_0_0(83) * occ_func_0_1(0) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(82) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_1(26) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_0(40) +
          occ_func_0_0(21) * occ_func_0_1(79) * occ_func_0_0(0) +
          occ_func_0_0(38) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_1(81) +
          occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_1(23) +
          occ_func_0_0(34) * occ_func_0_0(83) * occ_func_0_1(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_1(82) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_1(27) +
          occ_func_0_0(37) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(24) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(80) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(33) +
          occ_func_0_1(28) * occ_func_0_0(83) * occ_func_0_0(0) +
          occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_0(82) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(84) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(31) +
          occ_func_0_0(30) * occ_func_0_1(81) * occ_func_0_0(0) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_0(37) +
          occ_func_0_0(24) * occ_func_0_1(80) * occ_func_0_0(0) +
          occ_func_0_0(41) * occ_func_0_0(86) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(20) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_1(79)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_2_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(35) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(83) +
          occ_func_0_0(26) * occ_func_0_1(82) * occ_func_0_0(0) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_0(42) +
          occ_func_0_1(19) * occ_func_0_0(79) * occ_func_0_0(0) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(41) +
          occ_func_0_1(20) * occ_func_0_0(79) * occ_func_0_0(0) +
          occ_func_0_1(32) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(29) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_0(80) +
          occ_func_0_1(39) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(22) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(80) +
          occ_func_0_1(31) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(30) +
          occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_0(81) +
          occ_func_0_1(36) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(25) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_0(81) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_0(39) +
          occ_func_0_1(22) * occ_func_0_0(80) * occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_0(32) +
          occ_func_0_1(29) * occ_func_0_0(80) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(34) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_0(83) +
          occ_func_0_0(27) * occ_func_0_1(82) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(38) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(84) +
          occ_func_0_0(23) * occ_func_0_1(81) * occ_func_0_0(0) +
          occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_0(36) +
          occ_func_0_1(25) * occ_func_0_0(81) * occ_func_0_0(0) +
          occ_func_0_1(42) * occ_func_0_0(86) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(19) +
          occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_0(79) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(83) +
          occ_func_0_0(33) * occ_func_0_0(82) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_1(28) +
          occ_func_0_1(40) * occ_func_0_0(86) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(21) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_0(79) +
          occ_func_0_0(35) * occ_func_0_1(83) * occ_func_0_0(0) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(82) +
          occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_0(26) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(86) +
          occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_0(40) +
          occ_func_0_1(21) * occ_func_0_0(79) * occ_func_0_0(0) +
          occ_func_0_0(38) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_0(81) +
          occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_0(23) +
          occ_func_0_0(34) * occ_func_0_1(83) * occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_0(82) +
          occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_0(27) +
          occ_func_0_1(37) * occ_func_0_0(85) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(24) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(80) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(33) +
          occ_func_0_0(28) * occ_func_0_0(83) * occ_func_0_1(0) +
          occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_1(82) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(84) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(31) +
          occ_func_0_1(30) * occ_func_0_0(81) * occ_func_0_0(0) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(85) +
          occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_0(37) +
          occ_func_0_1(24) * occ_func_0_0(80) * occ_func_0_0(0) +
          occ_func_0_1(41) * occ_func_0_0(86) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(20) +
          occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_0(79)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_3_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(35) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(83) +
          occ_func_0_1(26) * occ_func_0_1(82) * occ_func_0_0(0) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_0(42) +
          occ_func_0_1(19) * occ_func_0_1(79) * occ_func_0_0(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(41) +
          occ_func_0_1(20) * occ_func_0_1(79) * occ_func_0_0(0) +
          occ_func_0_1(32) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(29) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_1(80) +
          occ_func_0_1(39) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(22) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(80) +
          occ_func_0_1(31) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(30) +
          occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_1(81) +
          occ_func_0_1(36) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(25) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_1(81) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_0(39) +
          occ_func_0_1(22) * occ_func_0_1(80) * occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_0(32) +
          occ_func_0_1(29) * occ_func_0_1(80) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(34) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_0(83) +
          occ_func_0_1(27) * occ_func_0_1(82) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(38) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(84) +
          occ_func_0_1(23) * occ_func_0_1(81) * occ_func_0_0(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_0(84) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_0(36) +
          occ_func_0_1(25) * occ_func_0_1(81) * occ_func_0_0(0) +
          occ_func_0_1(42) * occ_func_0_0(86) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(19) +
          occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_1(79) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(83) +
          occ_func_0_0(33) * occ_func_0_1(82) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_1(28) +
          occ_func_0_1(40) * occ_func_0_0(86) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(21) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_1(79) +
          occ_func_0_0(35) * occ_func_0_1(83) * occ_func_0_1(0) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(82) +
          occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_1(26) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(86) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_0(40) +
          occ_func_0_1(21) * occ_func_0_1(79) * occ_func_0_0(0) +
          occ_func_0_0(38) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_1(81) +
          occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_1(23) +
          occ_func_0_0(34) * occ_func_0_1(83) * occ_func_0_1(0) +
          occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_1(82) +
          occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_1(27) +
          occ_func_0_1(37) * occ_func_0_0(85) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(24) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(80) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(33) +
          occ_func_0_1(28) * occ_func_0_0(83) * occ_func_0_1(0) +
          occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_1(82) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(84) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(31) +
          occ_func_0_1(30) * occ_func_0_1(81) * occ_func_0_0(0) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(85) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_0(37) +
          occ_func_0_1(24) * occ_func_0_1(80) * occ_func_0_0(0) +
          occ_func_0_1(41) * occ_func_0_0(86) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(20) +
          occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_1(79)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_4_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(35) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(83) +
          occ_func_0_0(26) * occ_func_0_0(82) * occ_func_0_1(0) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_1(42) +
          occ_func_0_0(19) * occ_func_0_0(79) * occ_func_0_1(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(41) +
          occ_func_0_0(20) * occ_func_0_0(79) * occ_func_0_1(0) +
          occ_func_0_0(32) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(29) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_0(80) +
          occ_func_0_0(39) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(22) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(80) +
          occ_func_0_0(31) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(30) +
          occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_0(81) +
          occ_func_0_0(36) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(25) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_0(81) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_1(39) +
          occ_func_0_0(22) * occ_func_0_0(80) * occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_1(32) +
          occ_func_0_0(29) * occ_func_0_0(80) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(34) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_1(83) +
          occ_func_0_0(27) * occ_func_0_0(82) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(38) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(84) +
          occ_func_0_0(23) * occ_func_0_0(81) * occ_func_0_1(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_1(84) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_1(36) +
          occ_func_0_0(25) * occ_func_0_0(81) * occ_func_0_1(0) +
          occ_func_0_0(42) * occ_func_0_1(86) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(19) +
          occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_0(79) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(83) +
          occ_func_0_1(33) * occ_func_0_0(82) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_0(28) +
          occ_func_0_0(40) * occ_func_0_1(86) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(21) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_0(79) +
          occ_func_0_1(35) * occ_func_0_0(83) * occ_func_0_0(0) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(82) +
          occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_0(26) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_1(40) +
          occ_func_0_0(21) * occ_func_0_0(79) * occ_func_0_1(0) +
          occ_func_0_1(38) * occ_func_0_0(84) * occ_func_0_0(0) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_0(81) +
          occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_0(23) +
          occ_func_0_1(34) * occ_func_0_0(83) * occ_func_0_0(0) +
          occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_0(82) +
          occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_0(27) +
          occ_func_0_0(37) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(24) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(80) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(33) +
          occ_func_0_0(28) * occ_func_0_1(83) * occ_func_0_0(0) +
          occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_0(82) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(84) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(31) +
          occ_func_0_0(30) * occ_func_0_0(81) * occ_func_0_1(0) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_1(37) +
          occ_func_0_0(24) * occ_func_0_0(80) * occ_func_0_1(0) +
          occ_func_0_0(41) * occ_func_0_1(86) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(20) +
          occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_0(79)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_5_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(35) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(83) +
          occ_func_0_1(26) * occ_func_0_0(82) * occ_func_0_1(0) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_1(42) +
          occ_func_0_0(19) * occ_func_0_1(79) * occ_func_0_1(0) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(41) +
          occ_func_0_0(20) * occ_func_0_1(79) * occ_func_0_1(0) +
          occ_func_0_0(32) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(29) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_1(80) +
          occ_func_0_0(39) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(22) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(80) +
          occ_func_0_0(31) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(30) +
          occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_1(81) +
          occ_func_0_0(36) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(25) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_1(81) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_1(39) +
          occ_func_0_0(22) * occ_func_0_1(80) * occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_1(32) +
          occ_func_0_0(29) * occ_func_0_1(80) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(34) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_1(83) +
          occ_func_0_1(27) * occ_func_0_0(82) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(38) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(84) +
          occ_func_0_1(23) * occ_func_0_0(81) * occ_func_0_1(0) +
          occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_1(36) +
          occ_func_0_0(25) * occ_func_0_1(81) * occ_func_0_1(0) +
          occ_func_0_0(42) * occ_func_0_1(86) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(19) +
          occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_1(79) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(83) +
          occ_func_0_1(33) * occ_func_0_1(82) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_0(28) +
          occ_func_0_0(40) * occ_func_0_1(86) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(21) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_1(79) +
          occ_func_0_1(35) * occ_func_0_0(83) * occ_func_0_1(0) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(82) +
          occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_1(26) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_1(40) +
          occ_func_0_0(21) * occ_func_0_1(79) * occ_func_0_1(0) +
          occ_func_0_1(38) * occ_func_0_0(84) * occ_func_0_1(0) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_1(81) +
          occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_1(23) +
          occ_func_0_1(34) * occ_func_0_0(83) * occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_1(82) +
          occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_1(27) +
          occ_func_0_0(37) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(24) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(80) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(33) +
          occ_func_0_1(28) * occ_func_0_1(83) * occ_func_0_0(0) +
          occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_0(82) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(31) +
          occ_func_0_0(30) * occ_func_0_1(81) * occ_func_0_1(0) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_1(37) +
          occ_func_0_0(24) * occ_func_0_1(80) * occ_func_0_1(0) +
          occ_func_0_0(41) * occ_func_0_1(86) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(20) +
          occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_1(79)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_6_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(35) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(83) +
          occ_func_0_0(26) * occ_func_0_1(82) * occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_1(42) +
          occ_func_0_1(19) * occ_func_0_0(79) * occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(41) +
          occ_func_0_1(20) * occ_func_0_0(79) * occ_func_0_1(0) +
          occ_func_0_1(32) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(29) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_0(80) +
          occ_func_0_1(39) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(22) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(80) +
          occ_func_0_1(31) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(30) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_0(81) +
          occ_func_0_1(36) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(25) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_0(81) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_1(39) +
          occ_func_0_1(22) * occ_func_0_0(80) * occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_1(32) +
          occ_func_0_1(29) * occ_func_0_0(80) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(34) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_1(83) +
          occ_func_0_0(27) * occ_func_0_1(82) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(38) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_0(23) * occ_func_0_1(81) * occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_1(84) +
          occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_1(36) +
          occ_func_0_1(25) * occ_func_0_0(81) * occ_func_0_1(0) +
          occ_func_0_1(42) * occ_func_0_1(86) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(19) +
          occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_0(79) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(83) +
          occ_func_0_1(33) * occ_func_0_0(82) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_1(28) +
          occ_func_0_1(40) * occ_func_0_1(86) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(21) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_0(79) +
          occ_func_0_1(35) * occ_func_0_1(83) * occ_func_0_0(0) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(82) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_0(26) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(86) +
          occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_1(40) +
          occ_func_0_1(21) * occ_func_0_0(79) * occ_func_0_1(0) +
          occ_func_0_1(38) * occ_func_0_1(84) * occ_func_0_0(0) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_0(81) +
          occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_0(23) +
          occ_func_0_1(34) * occ_func_0_1(83) * occ_func_0_0(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_0(82) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_0(27) +
          occ_func_0_1(37) * occ_func_0_1(85) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(24) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(80) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(33) +
          occ_func_0_0(28) * occ_func_0_1(83) * occ_func_0_1(0) +
          occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_1(82) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(84) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(31) +
          occ_func_0_1(30) * occ_func_0_0(81) * occ_func_0_1(0) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(85) +
          occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_1(37) +
          occ_func_0_1(24) * occ_func_0_0(80) * occ_func_0_1(0) +
          occ_func_0_1(41) * occ_func_0_1(86) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(20) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_0(79)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_11_7_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(35) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(83) +
          occ_func_0_1(26) * occ_func_0_1(82) * occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_1(42) +
          occ_func_0_1(19) * occ_func_0_1(79) * occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(41) +
          occ_func_0_1(20) * occ_func_0_1(79) * occ_func_0_1(0) +
          occ_func_0_1(32) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(29) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_1(80) +
          occ_func_0_1(39) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(22) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(80) +
          occ_func_0_1(31) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(30) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_1(81) +
          occ_func_0_1(36) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(25) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_1(81) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_1(39) +
          occ_func_0_1(22) * occ_func_0_1(80) * occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_1(32) +
          occ_func_0_1(29) * occ_func_0_1(80) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(34) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_1(83) +
          occ_func_0_1(27) * occ_func_0_1(82) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(38) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_1(23) * occ_func_0_1(81) * occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_1(36) +
          occ_func_0_1(25) * occ_func_0_1(81) * occ_func_0_1(0) +
          occ_func_0_1(42) * occ_func_0_1(86) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(19) +
          occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_1(79) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(83) +
          occ_func_0_1(33) * occ_func_0_1(82) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_1(28) +
          occ_func_0_1(40) * occ_func_0_1(86) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(21) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_1(79) +
          occ_func_0_1(35) * occ_func_0_1(83) * occ_func_0_1(0) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(82) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_1(26) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(86) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_1(40) +
          occ_func_0_1(21) * occ_func_0_1(79) * occ_func_0_1(0) +
          occ_func_0_1(38) * occ_func_0_1(84) * occ_func_0_1(0) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_1(81) +
          occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_1(23) +
          occ_func_0_1(34) * occ_func_0_1(83) * occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_1(82) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_1(27) +
          occ_func_0_1(37) * occ_func_0_1(85) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(24) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(80) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(33) +
          occ_func_0_1(28) * occ_func_0_1(83) * occ_func_0_1(0) +
          occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_1(82) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(84) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(31) +
          occ_func_0_1(30) * occ_func_0_1(81) * occ_func_0_1(0) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(85) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_1(37) +
          occ_func_0_1(24) * occ_func_0_1(80) * occ_func_0_1(0) +
          occ_func_0_1(41) * occ_func_0_1(86) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(20) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_1(79)) /
         24.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(9) * occ_func_0_0(35) +
          occ_func_0_0(4) * occ_func_0_0(83) +
          occ_func_0_0(26) * occ_func_0_0(82) +
          occ_func_0_0(10) * occ_func_0_0(86) +
          occ_func_0_0(3) * occ_func_0_0(42) +
          occ_func_0_0(19) * occ_func_0_0(79) +
          occ_func_0_0(11) * occ_func_0_0(86) +
          occ_func_0_0(2) * occ_func_0_0(41) +
          occ_func_0_0(20) * occ_func_0_0(79) +
          occ_func_0_0(32) * occ_func_0_0(85) +
          occ_func_0_0(12) * occ_func_0_0(29) +
          occ_func_0_0(1) * occ_func_0_0(80) +
          occ_func_0_0(39) * occ_func_0_0(85) +
          occ_func_0_0(7) * occ_func_0_0(22) +
          occ_func_0_0(6) * occ_func_0_0(80) +
          occ_func_0_0(31) * occ_func_0_0(84) +
          occ_func_0_0(11) * occ_func_0_0(30) +
          occ_func_0_0(2) * occ_func_0_0(81) +
          occ_func_0_0(36) * occ_func_0_0(84) +
          occ_func_0_0(8) * occ_func_0_0(25) +
          occ_func_0_0(5) * occ_func_0_0(81) +
          occ_func_0_0(7) * occ_func_0_0(85) +
          occ_func_0_0(6) * occ_func_0_0(39) +
          occ_func_0_0(22) * occ_func_0_0(80) +
          occ_func_0_0(12) * occ_func_0_0(85) +
          occ_func_0_0(1) * occ_func_0_0(32) +
          occ_func_0_0(29) * occ_func_0_0(80) +
          occ_func_0_0(8) * occ_func_0_0(34) +
          occ_func_0_0(5) * occ_func_0_0(83) +
          occ_func_0_0(27) * occ_func_0_0(82) +
          occ_func_0_0(7) * occ_func_0_0(38) +
          occ_func_0_0(6) * occ_func_0_0(84) +
          occ_func_0_0(23) * occ_func_0_0(81) +
          occ_func_0_0(8) * occ_func_0_0(84) +
          occ_func_0_0(5) * occ_func_0_0(36) +
          occ_func_0_0(25) * occ_func_0_0(81) +
          occ_func_0_0(42) * occ_func_0_0(86) +
          occ_func_0_0(10) * occ_func_0_0(19) +
          occ_func_0_0(3) * occ_func_0_0(79) +
          occ_func_0_0(10) * occ_func_0_0(83) +
          occ_func_0_0(33) * occ_func_0_0(82) +
          occ_func_0_0(3) * occ_func_0_0(28) +
          occ_func_0_0(40) * occ_func_0_0(86) +
          occ_func_0_0(12) * occ_func_0_0(21) +
          occ_func_0_0(1) * occ_func_0_0(79) +
          occ_func_0_0(35) * occ_func_0_0(83) +
          occ_func_0_0(9) * occ_func_0_0(82) +
          occ_func_0_0(4) * occ_func_0_0(26) +
          occ_func_0_0(12) * occ_func_0_0(86) +
          occ_func_0_0(1) * occ_func_0_0(40) +
          occ_func_0_0(21) * occ_func_0_0(79) +
          occ_func_0_0(38) * occ_func_0_0(84) +
          occ_func_0_0(7) * occ_func_0_0(81) +
          occ_func_0_0(6) * occ_func_0_0(23) +
          occ_func_0_0(34) * occ_func_0_0(83) +
          occ_func_0_0(8) * occ_func_0_0(82) +
          occ_func_0_0(5) * occ_func_0_0(27) +
          occ_func_0_0(37) * occ_func_0_0(85) +
          occ_func_0_0(9) * occ_func_0_0(24) +
          occ_func_0_0(4) * occ_func_0_0(80) +
          occ_func_0_0(10) * occ_func_0_0(33) +
          occ_func_0_0(28) * occ_func_0_0(83) +
          occ_func_0_0(3) * occ_func_0_0(82) +
          occ_func_0_0(11) * occ_func_0_0(84) +
          occ_func_0_0(2) * occ_func_0_0(31) +
          occ_func_0_0(30) * occ_func_0_0(81) +
          occ_func_0_0(9) * occ_func_0_0(85) +
          occ_func_0_0(4) * occ_func_0_0(37) +
          occ_func_0_0(24) * occ_func_0_0(80) +
          occ_func_0_0(41) * occ_func_0_0(86) +
          occ_func_0_0(11) * occ_func_0_0(20) +
          occ_func_0_0(2) * occ_func_0_0(79)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(4) * occ_func_0_0(83) +
              occ_func_0_1(26) * occ_func_0_0(82) +
              occ_func_0_1(3) * occ_func_0_0(42) +
              occ_func_0_0(19) * occ_func_0_1(79) +
              occ_func_0_1(2) * occ_func_0_0(41) +
              occ_func_0_0(20) * occ_func_0_1(79) +
              occ_func_0_0(12) * occ_func_0_1(29) +
              occ_func_0_0(1) * occ_func_0_1(80) +
              occ_func_0_0(7) * occ_func_0_1(22) +
              occ_func_0_0(6) * occ_func_0_1(80) +
              occ_func_0_0(11) * occ_func_0_1(30) +
              occ_func_0_0(2) * occ_func_0_1(81) +
              occ_func_0_0(8) * occ_func_0_1(25) +
              occ_func_0_0(5) * occ_func_0_1(81) +
              occ_func_0_1(6) * occ_func_0_0(39) +
              occ_func_0_0(22) * occ_func_0_1(80) +
              occ_func_0_1(1) * occ_func_0_0(32) +
              occ_func_0_0(29) * occ_func_0_1(80) +
              occ_func_0_1(5) * occ_func_0_0(83) +
              occ_func_0_1(27) * occ_func_0_0(82) +
              occ_func_0_1(6) * occ_func_0_0(84) +
              occ_func_0_1(23) * occ_func_0_0(81) +
              occ_func_0_1(5) * occ_func_0_0(36) +
              occ_func_0_0(25) * occ_func_0_1(81) +
              occ_func_0_0(10) * occ_func_0_1(19) +
              occ_func_0_0(3) * occ_func_0_1(79) +
              occ_func_0_0(33) * occ_func_0_1(82) +
              occ_func_0_1(3) * occ_func_0_0(28) +
              occ_func_0_0(12) * occ_func_0_1(21) +
              occ_func_0_0(1) * occ_func_0_1(79) +
              occ_func_0_0(9) * occ_func_0_1(82) +
              occ_func_0_0(4) * occ_func_0_1(26) +
              occ_func_0_1(1) * occ_func_0_0(40) +
              occ_func_0_0(21) * occ_func_0_1(79) +
              occ_func_0_0(7) * occ_func_0_1(81) +
              occ_func_0_0(6) * occ_func_0_1(23) +
              occ_func_0_0(8) * occ_func_0_1(82) +
              occ_func_0_0(5) * occ_func_0_1(27) +
              occ_func_0_0(9) * occ_func_0_1(24) +
              occ_func_0_0(4) * occ_func_0_1(80) +
              occ_func_0_1(28) * occ_func_0_0(83) +
              occ_func_0_1(3) * occ_func_0_0(82) +
              occ_func_0_1(2) * occ_func_0_0(31) +
              occ_func_0_0(30) * occ_func_0_1(81) +
              occ_func_0_1(4) * occ_func_0_0(37) +
              occ_func_0_0(24) * occ_func_0_1(80) +
              occ_func_0_0(11) * occ_func_0_1(20) +
              occ_func_0_0(2) * occ_func_0_1(79)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(9) * occ_func_0_0(35) +
              occ_func_0_0(10) * occ_func_0_0(86) +
              occ_func_0_0(11) * occ_func_0_0(86) +
              occ_func_0_0(32) * occ_func_0_0(85) +
              occ_func_0_0(39) * occ_func_0_0(85) +
              occ_func_0_0(31) * occ_func_0_0(84) +
              occ_func_0_0(36) * occ_func_0_0(84) +
              occ_func_0_0(7) * occ_func_0_0(85) +
              occ_func_0_0(12) * occ_func_0_0(85) +
              occ_func_0_0(8) * occ_func_0_0(34) +
              occ_func_0_0(7) * occ_func_0_0(38) +
              occ_func_0_0(8) * occ_func_0_0(84) +
              occ_func_0_0(42) * occ_func_0_0(86) +
              occ_func_0_0(10) * occ_func_0_0(83) +
              occ_func_0_0(40) * occ_func_0_0(86) +
              occ_func_0_0(35) * occ_func_0_0(83) +
              occ_func_0_0(12) * occ_func_0_0(86) +
              occ_func_0_0(38) * occ_func_0_0(84) +
              occ_func_0_0(34) * occ_func_0_0(83) +
              occ_func_0_0(37) * occ_func_0_0(85) +
              occ_func_0_0(10) * occ_func_0_0(33) +
              occ_func_0_0(11) * occ_func_0_0(84) +
              occ_func_0_0(9) * occ_func_0_0(85) +
              occ_func_0_0(41) * occ_func_0_0(86)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(9) * occ_func_0_0(35) +
              occ_func_0_0(26) * occ_func_0_1(82) +
              occ_func_0_1(10) * occ_func_0_0(86) +
              occ_func_0_1(19) * occ_func_0_0(79) +
              occ_func_0_1(11) * occ_func_0_0(86) +
              occ_func_0_1(20) * occ_func_0_0(79) +
              occ_func_0_1(32) * occ_func_0_0(85) +
              occ_func_0_1(1) * occ_func_0_0(80) +
              occ_func_0_1(39) * occ_func_0_0(85) +
              occ_func_0_1(6) * occ_func_0_0(80) +
              occ_func_0_1(31) * occ_func_0_0(84) +
              occ_func_0_1(2) * occ_func_0_0(81) +
              occ_func_0_1(36) * occ_func_0_0(84) +
              occ_func_0_1(5) * occ_func_0_0(81) +
              occ_func_0_1(7) * occ_func_0_0(85) +
              occ_func_0_1(22) * occ_func_0_0(80) +
              occ_func_0_1(12) * occ_func_0_0(85) +
              occ_func_0_1(29) * occ_func_0_0(80) +
              occ_func_0_1(8) * occ_func_0_0(34) +
              occ_func_0_0(27) * occ_func_0_1(82) +
              occ_func_0_1(7) * occ_func_0_0(38) +
              occ_func_0_0(23) * occ_func_0_1(81) +
              occ_func_0_1(8) * occ_func_0_0(84) +
              occ_func_0_1(25) * occ_func_0_0(81) +
              occ_func_0_1(42) * occ_func_0_0(86) +
              occ_func_0_1(3) * occ_func_0_0(79) +
              occ_func_0_0(10) * occ_func_0_1(83) +
              occ_func_0_0(3) * occ_func_0_1(28) +
              occ_func_0_1(40) * occ_func_0_0(86) +
              occ_func_0_1(1) * occ_func_0_0(79) +
              occ_func_0_0(35) * occ_func_0_1(83) +
              occ_func_0_1(4) * occ_func_0_0(26) +
              occ_func_0_1(12) * occ_func_0_0(86) +
              occ_func_0_1(21) * occ_func_0_0(79) +
              occ_func_0_0(38) * occ_func_0_1(84) +
              occ_func_0_1(6) * occ_func_0_0(23) +
              occ_func_0_0(34) * occ_func_0_1(83) +
              occ_func_0_1(5) * occ_func_0_0(27) +
              occ_func_0_1(37) * occ_func_0_0(85) +
              occ_func_0_1(4) * occ_func_0_0(80) +
              occ_func_0_0(10) * occ_func_0_1(33) +
              occ_func_0_0(3) * occ_func_0_1(82) +
              occ_func_0_1(11) * occ_func_0_0(84) +
              occ_func_0_1(30) * occ_func_0_0(81) +
              occ_func_0_1(9) * occ_func_0_0(85) +
              occ_func_0_1(24) * occ_func_0_0(80) +
              occ_func_0_1(41) * occ_func_0_0(86) +
              occ_func_0_1(2) * occ_func_0_0(79)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(4) * occ_func_0_0(83) +
              occ_func_0_0(3) * occ_func_0_0(42) +
              occ_func_0_0(2) * occ_func_0_0(41) +
              occ_func_0_0(12) * occ_func_0_0(29) +
              occ_func_0_0(7) * occ_func_0_0(22) +
              occ_func_0_0(11) * occ_func_0_0(30) +
              occ_func_0_0(8) * occ_func_0_0(25) +
              occ_func_0_0(6) * occ_func_0_0(39) +
              occ_func_0_0(1) * occ_func_0_0(32) +
              occ_func_0_0(5) * occ_func_0_0(83) +
              occ_func_0_0(6) * occ_func_0_0(84) +
              occ_func_0_0(5) * occ_func_0_0(36) +
              occ_func_0_0(10) * occ_func_0_0(19) +
              occ_func_0_0(33) * occ_func_0_0(82) +
              occ_func_0_0(12) * occ_func_0_0(21) +
              occ_func_0_0(9) * occ_func_0_0(82) +
              occ_func_0_0(1) * occ_func_0_0(40) +
              occ_func_0_0(7) * occ_func_0_0(81) +
              occ_func_0_0(8) * occ_func_0_0(82) +
              occ_func_0_0(9) * occ_func_0_0(24) +
              occ_func_0_0(28) * occ_func_0_0(83) +
              occ_func_0_0(2) * occ_func_0_0(31) +
              occ_func_0_0(4) * occ_func_0_0(37) +
              occ_func_0_0(11) * occ_func_0_0(20)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_3_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(26) * occ_func_0_1(82) +
              occ_func_0_1(19) * occ_func_0_1(79) +
              occ_func_0_1(20) * occ_func_0_1(79) +
              occ_func_0_1(1) * occ_func_0_1(80) +
              occ_func_0_1(6) * occ_func_0_1(80) +
              occ_func_0_1(2) * occ_func_0_1(81) +
              occ_func_0_1(5) * occ_func_0_1(81) +
              occ_func_0_1(22) * occ_func_0_1(80) +
              occ_func_0_1(29) * occ_func_0_1(80) +
              occ_func_0_1(27) * occ_func_0_1(82) +
              occ_func_0_1(23) * occ_func_0_1(81) +
              occ_func_0_1(25) * occ_func_0_1(81) +
              occ_func_0_1(3) * occ_func_0_1(79) +
              occ_func_0_1(3) * occ_func_0_1(28) +
              occ_func_0_1(1) * occ_func_0_1(79) +
              occ_func_0_1(4) * occ_func_0_1(26) +
              occ_func_0_1(21) * occ_func_0_1(79) +
              occ_func_0_1(6) * occ_func_0_1(23) +
              occ_func_0_1(5) * occ_func_0_1(27) +
              occ_func_0_1(4) * occ_func_0_1(80) +
              occ_func_0_1(3) * occ_func_0_1(82) +
              occ_func_0_1(30) * occ_func_0_1(81) +
              occ_func_0_1(24) * occ_func_0_1(80) +
              occ_func_0_1(2) * occ_func_0_1(79)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_1(9) * occ_func_0_0(35) +
              occ_func_0_1(4) * occ_func_0_0(83) +
              occ_func_0_1(10) * occ_func_0_0(86) +
              occ_func_0_1(3) * occ_func_0_0(42) +
              occ_func_0_1(11) * occ_func_0_0(86) +
              occ_func_0_1(2) * occ_func_0_0(41) +
              occ_func_0_1(32) * occ_func_0_0(85) +
              occ_func_0_0(12) * occ_func_0_1(29) +
              occ_func_0_1(39) * occ_func_0_0(85) +
              occ_func_0_0(7) * occ_func_0_1(22) +
              occ_func_0_1(31) * occ_func_0_0(84) +
              occ_func_0_0(11) * occ_func_0_1(30) +
              occ_func_0_1(36) * occ_func_0_0(84) +
              occ_func_0_0(8) * occ_func_0_1(25) +
              occ_func_0_1(7) * occ_func_0_0(85) +
              occ_func_0_1(6) * occ_func_0_0(39) +
              occ_func_0_1(12) * occ_func_0_0(85) +
              occ_func_0_1(1) * occ_func_0_0(32) +
              occ_func_0_1(8) * occ_func_0_0(34) +
              occ_func_0_1(5) * occ_func_0_0(83) +
              occ_func_0_1(7) * occ_func_0_0(38) +
              occ_func_0_1(6) * occ_func_0_0(84) +
              occ_func_0_1(8) * occ_func_0_0(84) +
              occ_func_0_1(5) * occ_func_0_0(36) +
              occ_func_0_1(42) * occ_func_0_0(86) +
              occ_func_0_0(10) * occ_func_0_1(19) +
              occ_func_0_0(10) * occ_func_0_1(83) +
              occ_func_0_0(33) * occ_func_0_1(82) +
              occ_func_0_1(40) * occ_func_0_0(86) +
              occ_func_0_0(12) * occ_func_0_1(21) +
              occ_func_0_0(35) * occ_func_0_1(83) +
              occ_func_0_0(9) * occ_func_0_1(82) +
              occ_func_0_1(12) * occ_func_0_0(86) +
              occ_func_0_1(1) * occ_func_0_0(40) +
              occ_func_0_0(38) * occ_func_0_1(84) +
              occ_func_0_0(7) * occ_func_0_1(81) +
              occ_func_0_0(34) * occ_func_0_1(83) +
              occ_func_0_0(8) * occ_func_0_1(82) +
              occ_func_0_1(37) * occ_func_0_0(85) +
              occ_func_0_0(9) * occ_func_0_1(24) +
              occ_func_0_0(10) * occ_func_0_1(33) +
              occ_func_0_1(28) * occ_func_0_0(83) +
              occ_func_0_1(11) * occ_func_0_0(84) +
              occ_func_0_1(2) * occ_func_0_0(31) +
              occ_func_0_1(9) * occ_func_0_0(85) +
              occ_func_0_1(4) * occ_func_0_0(37) +
              occ_func_0_1(41) * occ_func_0_0(86) +
              occ_func_0_0(11) * occ_func_0_1(20)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_4_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_0(9) * occ_func_0_1(35) +
              occ_func_0_0(4) * occ_func_0_1(83) +
              occ_func_0_0(10) * occ_func_0_1(86) +
              occ_func_0_0(3) * occ_func_0_1(42) +
              occ_func_0_0(11) * occ_func_0_1(86) +
              occ_func_0_0(2) * occ_func_0_1(41) +
              occ_func_0_0(32) * occ_func_0_1(85) +
              occ_func_0_1(12) * occ_func_0_0(29) +
              occ_func_0_0(39) * occ_func_0_1(85) +
              occ_func_0_1(7) * occ_func_0_0(22) +
              occ_func_0_0(31) * occ_func_0_1(84) +
              occ_func_0_1(11) * occ_func_0_0(30) +
              occ_func_0_0(36) * occ_func_0_1(84) +
              occ_func_0_1(8) * occ_func_0_0(25) +
              occ_func_0_0(7) * occ_func_0_1(85) +
              occ_func_0_0(6) * occ_func_0_1(39) +
              occ_func_0_0(12) * occ_func_0_1(85) +
              occ_func_0_0(1) * occ_func_0_1(32) +
              occ_func_0_0(8) * occ_func_0_1(34) +
              occ_func_0_0(5) * occ_func_0_1(83) +
              occ_func_0_0(7) * occ_func_0_1(38) +
              occ_func_0_0(6) * occ_func_0_1(84) +
              occ_func_0_0(8) * occ_func_0_1(84) +
              occ_func_0_0(5) * occ_func_0_1(36) +
              occ_func_0_0(42) * occ_func_0_1(86) +
              occ_func_0_1(10) * occ_func_0_0(19) +
              occ_func_0_1(10) * occ_func_0_0(83) +
              occ_func_0_1(33) * occ_func_0_0(82) +
              occ_func_0_0(40) * occ_func_0_1(86) +
              occ_func_0_1(12) * occ_func_0_0(21) +
              occ_func_0_1(35) * occ_func_0_0(83) +
              occ_func_0_1(9) * occ_func_0_0(82) +
              occ_func_0_0(12) * occ_func_0_1(86) +
              occ_func_0_0(1) * occ_func_0_1(40) +
              occ_func_0_1(38) * occ_func_0_0(84) +
              occ_func_0_1(7) * occ_func_0_0(81) +
              occ_func_0_1(34) * occ_func_0_0(83) +
              occ_func_0_1(8) * occ_func_0_0(82) +
              occ_func_0_0(37) * occ_func_0_1(85) +
              occ_func_0_1(9) * occ_func_0_0(24) +
              occ_func_0_1(10) * occ_func_0_0(33) +
              occ_func_0_0(28) * occ_func_0_1(83) +
              occ_func_0_0(11) * occ_func_0_1(84) +
              occ_func_0_0(2) * occ_func_0_1(31) +
              occ_func_0_0(9) * occ_func_0_1(85) +
              occ_func_0_0(4) * occ_func_0_1(37) +
              occ_func_0_0(41) * occ_func_0_1(86) +
              occ_func_0_1(11) * occ_func_0_0(20)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(26) * occ_func_0_0(82) +
              occ_func_0_0(19) * occ_func_0_0(79) +
              occ_func_0_0(20) * occ_func_0_0(79) +
              occ_func_0_0(1) * occ_func_0_0(80) +
              occ_func_0_0(6) * occ_func_0_0(80) +
              occ_func_0_0(2) * occ_func_0_0(81) +
              occ_func_0_0(5) * occ_func_0_0(81) +
              occ_func_0_0(22) * occ_func_0_0(80) +
              occ_func_0_0(29) * occ_func_0_0(80) +
              occ_func_0_0(27) * occ_func_0_0(82) +
              occ_func_0_0(23) * occ_func_0_0(81) +
              occ_func_0_0(25) * occ_func_0_0(81) +
              occ_func_0_0(3) * occ_func_0_0(79) +
              occ_func_0_0(3) * occ_func_0_0(28) +
              occ_func_0_0(1) * occ_func_0_0(79) +
              occ_func_0_0(4) * occ_func_0_0(26) +
              occ_func_0_0(21) * occ_func_0_0(79) +
              occ_func_0_0(6) * occ_func_0_0(23) +
              occ_func_0_0(5) * occ_func_0_0(27) +
              occ_func_0_0(4) * occ_func_0_0(80) +
              occ_func_0_0(3) * occ_func_0_0(82) +
              occ_func_0_0(30) * occ_func_0_0(81) +
              occ_func_0_0(24) * occ_func_0_0(80) +
              occ_func_0_0(2) * occ_func_0_0(79)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_5_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(4) * occ_func_0_1(83) +
              occ_func_0_1(3) * occ_func_0_1(42) +
              occ_func_0_1(2) * occ_func_0_1(41) +
              occ_func_0_1(12) * occ_func_0_1(29) +
              occ_func_0_1(7) * occ_func_0_1(22) +
              occ_func_0_1(11) * occ_func_0_1(30) +
              occ_func_0_1(8) * occ_func_0_1(25) +
              occ_func_0_1(6) * occ_func_0_1(39) +
              occ_func_0_1(1) * occ_func_0_1(32) +
              occ_func_0_1(5) * occ_func_0_1(83) +
              occ_func_0_1(6) * occ_func_0_1(84) +
              occ_func_0_1(5) * occ_func_0_1(36) +
              occ_func_0_1(10) * occ_func_0_1(19) +
              occ_func_0_1(33) * occ_func_0_1(82) +
              occ_func_0_1(12) * occ_func_0_1(21) +
              occ_func_0_1(9) * occ_func_0_1(82) +
              occ_func_0_1(1) * occ_func_0_1(40) +
              occ_func_0_1(7) * occ_func_0_1(81) +
              occ_func_0_1(8) * occ_func_0_1(82) +
              occ_func_0_1(9) * occ_func_0_1(24) +
              occ_func_0_1(28) * occ_func_0_1(83) +
              occ_func_0_1(2) * occ_func_0_1(31) +
              occ_func_0_1(4) * occ_func_0_1(37) +
              occ_func_0_1(11) * occ_func_0_1(20)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(9) * occ_func_0_1(35) +
              occ_func_0_1(26) * occ_func_0_0(82) +
              occ_func_0_0(10) * occ_func_0_1(86) +
              occ_func_0_0(19) * occ_func_0_1(79) +
              occ_func_0_0(11) * occ_func_0_1(86) +
              occ_func_0_0(20) * occ_func_0_1(79) +
              occ_func_0_0(32) * occ_func_0_1(85) +
              occ_func_0_0(1) * occ_func_0_1(80) +
              occ_func_0_0(39) * occ_func_0_1(85) +
              occ_func_0_0(6) * occ_func_0_1(80) +
              occ_func_0_0(31) * occ_func_0_1(84) +
              occ_func_0_0(2) * occ_func_0_1(81) +
              occ_func_0_0(36) * occ_func_0_1(84) +
              occ_func_0_0(5) * occ_func_0_1(81) +
              occ_func_0_0(7) * occ_func_0_1(85) +
              occ_func_0_0(22) * occ_func_0_1(80) +
              occ_func_0_0(12) * occ_func_0_1(85) +
              occ_func_0_0(29) * occ_func_0_1(80) +
              occ_func_0_0(8) * occ_func_0_1(34) +
              occ_func_0_1(27) * occ_func_0_0(82) +
              occ_func_0_0(7) * occ_func_0_1(38) +
              occ_func_0_1(23) * occ_func_0_0(81) +
              occ_func_0_0(8) * occ_func_0_1(84) +
              occ_func_0_0(25) * occ_func_0_1(81) +
              occ_func_0_0(42) * occ_func_0_1(86) +
              occ_func_0_0(3) * occ_func_0_1(79) +
              occ_func_0_1(10) * occ_func_0_0(83) +
              occ_func_0_1(3) * occ_func_0_0(28) +
              occ_func_0_0(40) * occ_func_0_1(86) +
              occ_func_0_0(1) * occ_func_0_1(79) +
              occ_func_0_1(35) * occ_func_0_0(83) +
              occ_func_0_0(4) * occ_func_0_1(26) +
              occ_func_0_0(12) * occ_func_0_1(86) +
              occ_func_0_0(21) * occ_func_0_1(79) +
              occ_func_0_1(38) * occ_func_0_0(84) +
              occ_func_0_0(6) * occ_func_0_1(23) +
              occ_func_0_1(34) * occ_func_0_0(83) +
              occ_func_0_0(5) * occ_func_0_1(27) +
              occ_func_0_0(37) * occ_func_0_1(85) +
              occ_func_0_0(4) * occ_func_0_1(80) +
              occ_func_0_1(10) * occ_func_0_0(33) +
              occ_func_0_1(3) * occ_func_0_0(82) +
              occ_func_0_0(11) * occ_func_0_1(84) +
              occ_func_0_0(30) * occ_func_0_1(81) +
              occ_func_0_0(9) * occ_func_0_1(85) +
              occ_func_0_0(24) * occ_func_0_1(80) +
              occ_func_0_0(41) * occ_func_0_1(86) +
              occ_func_0_0(2) * occ_func_0_1(79)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_6_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(9) * occ_func_0_1(35) +
              occ_func_0_1(10) * occ_func_0_1(86) +
              occ_func_0_1(11) * occ_func_0_1(86) +
              occ_func_0_1(32) * occ_func_0_1(85) +
              occ_func_0_1(39) * occ_func_0_1(85) +
              occ_func_0_1(31) * occ_func_0_1(84) +
              occ_func_0_1(36) * occ_func_0_1(84) +
              occ_func_0_1(7) * occ_func_0_1(85) +
              occ_func_0_1(12) * occ_func_0_1(85) +
              occ_func_0_1(8) * occ_func_0_1(34) +
              occ_func_0_1(7) * occ_func_0_1(38) +
              occ_func_0_1(8) * occ_func_0_1(84) +
              occ_func_0_1(42) * occ_func_0_1(86) +
              occ_func_0_1(10) * occ_func_0_1(83) +
              occ_func_0_1(40) * occ_func_0_1(86) +
              occ_func_0_1(35) * occ_func_0_1(83) +
              occ_func_0_1(12) * occ_func_0_1(86) +
              occ_func_0_1(38) * occ_func_0_1(84) +
              occ_func_0_1(34) * occ_func_0_1(83) +
              occ_func_0_1(37) * occ_func_0_1(85) +
              occ_func_0_1(10) * occ_func_0_1(33) +
              occ_func_0_1(11) * occ_func_0_1(84) +
              occ_func_0_1(9) * occ_func_0_1(85) +
              occ_func_0_1(41) * occ_func_0_1(86)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(4) * occ_func_0_1(83) +
              occ_func_0_0(26) * occ_func_0_1(82) +
              occ_func_0_0(3) * occ_func_0_1(42) +
              occ_func_0_1(19) * occ_func_0_0(79) +
              occ_func_0_0(2) * occ_func_0_1(41) +
              occ_func_0_1(20) * occ_func_0_0(79) +
              occ_func_0_1(12) * occ_func_0_0(29) +
              occ_func_0_1(1) * occ_func_0_0(80) +
              occ_func_0_1(7) * occ_func_0_0(22) +
              occ_func_0_1(6) * occ_func_0_0(80) +
              occ_func_0_1(11) * occ_func_0_0(30) +
              occ_func_0_1(2) * occ_func_0_0(81) +
              occ_func_0_1(8) * occ_func_0_0(25) +
              occ_func_0_1(5) * occ_func_0_0(81) +
              occ_func_0_0(6) * occ_func_0_1(39) +
              occ_func_0_1(22) * occ_func_0_0(80) +
              occ_func_0_0(1) * occ_func_0_1(32) +
              occ_func_0_1(29) * occ_func_0_0(80) +
              occ_func_0_0(5) * occ_func_0_1(83) +
              occ_func_0_0(27) * occ_func_0_1(82) +
              occ_func_0_0(6) * occ_func_0_1(84) +
              occ_func_0_0(23) * occ_func_0_1(81) +
              occ_func_0_0(5) * occ_func_0_1(36) +
              occ_func_0_1(25) * occ_func_0_0(81) +
              occ_func_0_1(10) * occ_func_0_0(19) +
              occ_func_0_1(3) * occ_func_0_0(79) +
              occ_func_0_1(33) * occ_func_0_0(82) +
              occ_func_0_0(3) * occ_func_0_1(28) +
              occ_func_0_1(12) * occ_func_0_0(21) +
              occ_func_0_1(1) * occ_func_0_0(79) +
              occ_func_0_1(9) * occ_func_0_0(82) +
              occ_func_0_1(4) * occ_func_0_0(26) +
              occ_func_0_0(1) * occ_func_0_1(40) +
              occ_func_0_1(21) * occ_func_0_0(79) +
              occ_func_0_1(7) * occ_func_0_0(81) +
              occ_func_0_1(6) * occ_func_0_0(23) +
              occ_func_0_1(8) * occ_func_0_0(82) +
              occ_func_0_1(5) * occ_func_0_0(27) +
              occ_func_0_1(9) * occ_func_0_0(24) +
              occ_func_0_1(4) * occ_func_0_0(80) +
              occ_func_0_0(28) * occ_func_0_1(83) +
              occ_func_0_0(3) * occ_func_0_1(82) +
              occ_func_0_0(2) * occ_func_0_1(31) +
              occ_func_0_1(30) * occ_func_0_0(81) +
              occ_func_0_0(4) * occ_func_0_1(37) +
              occ_func_0_1(24) * occ_func_0_0(80) +
              occ_func_0_1(11) * occ_func_0_0(20) +
              occ_func_0_1(2) * occ_func_0_0(79)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_11_7_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(9) * occ_func_0_1(35) +
          occ_func_0_1(4) * occ_func_0_1(83) +
          occ_func_0_1(26) * occ_func_0_1(82) +
          occ_func_0_1(10) * occ_func_0_1(86) +
          occ_func_0_1(3) * occ_func_0_1(42) +
          occ_func_0_1(19) * occ_func_0_1(79) +
          occ_func_0_1(11) * occ_func_0_1(86) +
          occ_func_0_1(2) * occ_func_0_1(41) +
          occ_func_0_1(20) * occ_func_0_1(79) +
          occ_func_0_1(32) * occ_func_0_1(85) +
          occ_func_0_1(12) * occ_func_0_1(29) +
          occ_func_0_1(1) * occ_func_0_1(80) +
          occ_func_0_1(39) * occ_func_0_1(85) +
          occ_func_0_1(7) * occ_func_0_1(22) +
          occ_func_0_1(6) * occ_func_0_1(80) +
          occ_func_0_1(31) * occ_func_0_1(84) +
          occ_func_0_1(11) * occ_func_0_1(30) +
          occ_func_0_1(2) * occ_func_0_1(81) +
          occ_func_0_1(36) * occ_func_0_1(84) +
          occ_func_0_1(8) * occ_func_0_1(25) +
          occ_func_0_1(5) * occ_func_0_1(81) +
          occ_func_0_1(7) * occ_func_0_1(85) +
          occ_func_0_1(6) * occ_func_0_1(39) +
          occ_func_0_1(22) * occ_func_0_1(80) +
          occ_func_0_1(12) * occ_func_0_1(85) +
          occ_func_0_1(1) * occ_func_0_1(32) +
          occ_func_0_1(29) * occ_func_0_1(80) +
          occ_func_0_1(8) * occ_func_0_1(34) +
          occ_func_0_1(5) * occ_func_0_1(83) +
          occ_func_0_1(27) * occ_func_0_1(82) +
          occ_func_0_1(7) * occ_func_0_1(38) +
          occ_func_0_1(6) * occ_func_0_1(84) +
          occ_func_0_1(23) * occ_func_0_1(81) +
          occ_func_0_1(8) * occ_func_0_1(84) +
          occ_func_0_1(5) * occ_func_0_1(36) +
          occ_func_0_1(25) * occ_func_0_1(81) +
          occ_func_0_1(42) * occ_func_0_1(86) +
          occ_func_0_1(10) * occ_func_0_1(19) +
          occ_func_0_1(3) * occ_func_0_1(79) +
          occ_func_0_1(10) * occ_func_0_1(83) +
          occ_func_0_1(33) * occ_func_0_1(82) +
          occ_func_0_1(3) * occ_func_0_1(28) +
          occ_func_0_1(40) * occ_func_0_1(86) +
          occ_func_0_1(12) * occ_func_0_1(21) +
          occ_func_0_1(1) * occ_func_0_1(79) +
          occ_func_0_1(35) * occ_func_0_1(83) +
          occ_func_0_1(9) * occ_func_0_1(82) +
          occ_func_0_1(4) * occ_func_0_1(26) +
          occ_func_0_1(12) * occ_func_0_1(86) +
          occ_func_0_1(1) * occ_func_0_1(40) +
          occ_func_0_1(21) * occ_func_0_1(79) +
          occ_func_0_1(38) * occ_func_0_1(84) +
          occ_func_0_1(7) * occ_func_0_1(81) +
          occ_func_0_1(6) * occ_func_0_1(23) +
          occ_func_0_1(34) * occ_func_0_1(83) +
          occ_func_0_1(8) * occ_func_0_1(82) +
          occ_func_0_1(5) * occ_func_0_1(27) +
          occ_func_0_1(37) * occ_func_0_1(85) +
          occ_func_0_1(9) * occ_func_0_1(24) +
          occ_func_0_1(4) * occ_func_0_1(80) +
          occ_func_0_1(10) * occ_func_0_1(33) +
          occ_func_0_1(28) * occ_func_0_1(83) +
          occ_func_0_1(3) * occ_func_0_1(82) +
          occ_func_0_1(11) * occ_func_0_1(84) +
          occ_func_0_1(2) * occ_func_0_1(31) +
          occ_func_0_1(30) * occ_func_0_1(81) +
          occ_func_0_1(9) * occ_func_0_1(85) +
          occ_func_0_1(4) * occ_func_0_1(37) +
          occ_func_0_1(24) * occ_func_0_1(80) +
          occ_func_0_1(41) * occ_func_0_1(86) +
          occ_func_0_1(11) * occ_func_0_1(20) +
          occ_func_0_1(2) * occ_func_0_1(79)) /
         24.;
}

/**** Basis functions for orbit 12****
0.0000000 0.0000000 0.0000000 A  B  C

1.0000000 0.0000000 -1.0000000 A  B  C

3.0000000 0.0000000 -3.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_12_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(174) +
          occ_func_0_0(159) * occ_func_0_0(49) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(161) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(160) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(171) +
          occ_func_0_0(161) * occ_func_0_0(51) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(175) +
          occ_func_0_0(175) * occ_func_0_0(54) * occ_func_0_0(0) +
          occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(159) +
          occ_func_0_0(160) * occ_func_0_0(50) * occ_func_0_0(0) +
          occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_0(0)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_12_1() const {
  return (occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(174) +
          occ_func_0_0(159) * occ_func_0_0(49) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(161) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(160) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(171) +
          occ_func_0_0(161) * occ_func_0_0(51) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(175) +
          occ_func_0_0(175) * occ_func_0_0(54) * occ_func_0_1(0) +
          occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(159) +
          occ_func_0_0(160) * occ_func_0_0(50) * occ_func_0_1(0) +
          occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_1(0)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_12_2() const {
  return (occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(174) +
          occ_func_0_0(159) * occ_func_0_1(49) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(161) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(160) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(171) +
          occ_func_0_0(161) * occ_func_0_1(51) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(175) +
          occ_func_0_0(175) * occ_func_0_1(54) * occ_func_0_0(0) +
          occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(159) +
          occ_func_0_0(160) * occ_func_0_1(50) * occ_func_0_0(0) +
          occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_0(0)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_12_3() const {
  return (occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(174) +
          occ_func_0_0(159) * occ_func_0_1(49) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(161) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(160) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(171) +
          occ_func_0_0(161) * occ_func_0_1(51) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(175) +
          occ_func_0_0(175) * occ_func_0_1(54) * occ_func_0_1(0) +
          occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(159) +
          occ_func_0_0(160) * occ_func_0_1(50) * occ_func_0_1(0) +
          occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_1(0)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_12_4() const {
  return (occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(174) +
          occ_func_0_1(159) * occ_func_0_0(49) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(161) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(160) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(171) +
          occ_func_0_1(161) * occ_func_0_0(51) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(175) +
          occ_func_0_1(175) * occ_func_0_0(54) * occ_func_0_0(0) +
          occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(159) +
          occ_func_0_1(160) * occ_func_0_0(50) * occ_func_0_0(0) +
          occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_0(0)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_12_5() const {
  return (occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(174) +
          occ_func_0_1(159) * occ_func_0_0(49) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(161) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(160) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(171) +
          occ_func_0_1(161) * occ_func_0_0(51) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(175) +
          occ_func_0_1(175) * occ_func_0_0(54) * occ_func_0_1(0) +
          occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(159) +
          occ_func_0_1(160) * occ_func_0_0(50) * occ_func_0_1(0) +
          occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_1(0)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_12_6() const {
  return (occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(174) +
          occ_func_0_1(159) * occ_func_0_1(49) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(161) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(160) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(171) +
          occ_func_0_1(161) * occ_func_0_1(51) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(175) +
          occ_func_0_1(175) * occ_func_0_1(54) * occ_func_0_0(0) +
          occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(159) +
          occ_func_0_1(160) * occ_func_0_1(50) * occ_func_0_0(0) +
          occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_0(0)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_12_7() const {
  return (occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(174) +
          occ_func_0_1(159) * occ_func_0_1(49) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(161) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(160) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(171) +
          occ_func_0_1(161) * occ_func_0_1(51) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(175) +
          occ_func_0_1(175) * occ_func_0_1(54) * occ_func_0_1(0) +
          occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(159) +
          occ_func_0_1(160) * occ_func_0_1(50) * occ_func_0_1(0) +
          occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_1(0)) /
         12.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(174) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_0(53) +
          occ_func_0_0(143) * occ_func_0_0(44) * occ_func_0_0(0) +
          occ_func_0_0(159) * occ_func_0_0(49) * occ_func_0_0(0) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_0(48) +
          occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_0(158) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(161) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(51) +
          occ_func_0_0(156) * occ_func_0_0(46) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(160) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_0(50) +
          occ_func_0_0(157) * occ_func_0_0(47) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(171) +
          occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_0(52) +
          occ_func_0_0(146) * occ_func_0_0(45) * occ_func_0_0(0) +
          occ_func_0_0(161) * occ_func_0_0(51) * occ_func_0_0(0) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(46) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_0(156) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(175) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_0(54) +
          occ_func_0_0(142) * occ_func_0_0(43) * occ_func_0_0(0) +
          occ_func_0_0(175) * occ_func_0_0(54) * occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(43) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_0(142) +
          occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(45) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_0(146) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(159) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(49) +
          occ_func_0_0(158) * occ_func_0_0(48) * occ_func_0_0(0) +
          occ_func_0_0(160) * occ_func_0_0(50) * occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_0(47) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_0(157) +
          occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(44) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(143)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_1_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(174) +
          occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_0(53) +
          occ_func_0_1(143) * occ_func_0_0(44) * occ_func_0_0(0) +
          occ_func_0_0(159) * occ_func_0_0(49) * occ_func_0_1(0) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_1(48) +
          occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_1(158) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(161) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(51) +
          occ_func_0_1(156) * occ_func_0_0(46) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(160) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_0(50) +
          occ_func_0_1(157) * occ_func_0_0(47) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(171) +
          occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_0(52) +
          occ_func_0_1(146) * occ_func_0_0(45) * occ_func_0_0(0) +
          occ_func_0_0(161) * occ_func_0_0(51) * occ_func_0_1(0) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(46) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_1(156) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(175) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_0(54) +
          occ_func_0_1(142) * occ_func_0_0(43) * occ_func_0_0(0) +
          occ_func_0_0(175) * occ_func_0_0(54) * occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(43) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_1(142) +
          occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_1(0) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(45) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_1(146) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(159) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(49) +
          occ_func_0_1(158) * occ_func_0_0(48) * occ_func_0_0(0) +
          occ_func_0_0(160) * occ_func_0_0(50) * occ_func_0_1(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_1(47) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_1(157) +
          occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_1(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(44) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(143)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_2_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(174) +
          occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_0(53) +
          occ_func_0_0(143) * occ_func_0_1(44) * occ_func_0_0(0) +
          occ_func_0_0(159) * occ_func_0_1(49) * occ_func_0_0(0) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_0(48) +
          occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_0(158) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(161) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(51) +
          occ_func_0_0(156) * occ_func_0_1(46) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(160) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_0(50) +
          occ_func_0_0(157) * occ_func_0_1(47) * occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(171) +
          occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_0(52) +
          occ_func_0_0(146) * occ_func_0_1(45) * occ_func_0_0(0) +
          occ_func_0_0(161) * occ_func_0_1(51) * occ_func_0_0(0) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(46) +
          occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_0(156) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(175) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_0(54) +
          occ_func_0_0(142) * occ_func_0_1(43) * occ_func_0_0(0) +
          occ_func_0_0(175) * occ_func_0_1(54) * occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(43) +
          occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_0(142) +
          occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(45) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_0(146) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(159) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(49) +
          occ_func_0_0(158) * occ_func_0_1(48) * occ_func_0_0(0) +
          occ_func_0_0(160) * occ_func_0_1(50) * occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_0(47) +
          occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_0(157) +
          occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(44) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(143)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_3_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(174) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_0(53) +
          occ_func_0_1(143) * occ_func_0_1(44) * occ_func_0_0(0) +
          occ_func_0_0(159) * occ_func_0_1(49) * occ_func_0_1(0) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_1(48) +
          occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_1(158) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(161) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(51) +
          occ_func_0_1(156) * occ_func_0_1(46) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(160) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_0(50) +
          occ_func_0_1(157) * occ_func_0_1(47) * occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(171) +
          occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_0(52) +
          occ_func_0_1(146) * occ_func_0_1(45) * occ_func_0_0(0) +
          occ_func_0_0(161) * occ_func_0_1(51) * occ_func_0_1(0) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(46) +
          occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_1(156) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(175) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_0(54) +
          occ_func_0_1(142) * occ_func_0_1(43) * occ_func_0_0(0) +
          occ_func_0_0(175) * occ_func_0_1(54) * occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(43) +
          occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_1(142) +
          occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_1(0) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(45) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_1(146) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(159) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(49) +
          occ_func_0_1(158) * occ_func_0_1(48) * occ_func_0_0(0) +
          occ_func_0_0(160) * occ_func_0_1(50) * occ_func_0_1(0) +
          occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_1(47) +
          occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_1(157) +
          occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_1(0) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(44) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(143)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_4_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(174) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_1(53) +
          occ_func_0_0(143) * occ_func_0_0(44) * occ_func_0_1(0) +
          occ_func_0_1(159) * occ_func_0_0(49) * occ_func_0_0(0) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_0(48) +
          occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_0(158) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(161) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(51) +
          occ_func_0_0(156) * occ_func_0_0(46) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(160) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_1(50) +
          occ_func_0_0(157) * occ_func_0_0(47) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(171) +
          occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_1(52) +
          occ_func_0_0(146) * occ_func_0_0(45) * occ_func_0_1(0) +
          occ_func_0_1(161) * occ_func_0_0(51) * occ_func_0_0(0) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(46) +
          occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_0(156) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(175) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_1(54) +
          occ_func_0_0(142) * occ_func_0_0(43) * occ_func_0_1(0) +
          occ_func_0_1(175) * occ_func_0_0(54) * occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(43) +
          occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_0(142) +
          occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_0(0) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(45) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_0(146) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(159) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(49) +
          occ_func_0_0(158) * occ_func_0_0(48) * occ_func_0_1(0) +
          occ_func_0_1(160) * occ_func_0_0(50) * occ_func_0_0(0) +
          occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_0(47) +
          occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_0(157) +
          occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_0(0) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(44) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(143)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_5_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(174) +
          occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_1(53) +
          occ_func_0_1(143) * occ_func_0_0(44) * occ_func_0_1(0) +
          occ_func_0_1(159) * occ_func_0_0(49) * occ_func_0_1(0) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_1(48) +
          occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_1(158) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(161) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(51) +
          occ_func_0_1(156) * occ_func_0_0(46) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(160) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_1(50) +
          occ_func_0_1(157) * occ_func_0_0(47) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(171) +
          occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_1(52) +
          occ_func_0_1(146) * occ_func_0_0(45) * occ_func_0_1(0) +
          occ_func_0_1(161) * occ_func_0_0(51) * occ_func_0_1(0) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(46) +
          occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_1(156) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(175) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_1(54) +
          occ_func_0_1(142) * occ_func_0_0(43) * occ_func_0_1(0) +
          occ_func_0_1(175) * occ_func_0_0(54) * occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(43) +
          occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_1(142) +
          occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(45) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_1(146) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(159) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(49) +
          occ_func_0_1(158) * occ_func_0_0(48) * occ_func_0_1(0) +
          occ_func_0_1(160) * occ_func_0_0(50) * occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_1(47) +
          occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_1(157) +
          occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(44) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(143)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_6_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(174) +
          occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_1(53) +
          occ_func_0_0(143) * occ_func_0_1(44) * occ_func_0_1(0) +
          occ_func_0_1(159) * occ_func_0_1(49) * occ_func_0_0(0) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_0(48) +
          occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_0(158) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(161) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(51) +
          occ_func_0_0(156) * occ_func_0_1(46) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(160) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_1(50) +
          occ_func_0_0(157) * occ_func_0_1(47) * occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(171) +
          occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_1(52) +
          occ_func_0_0(146) * occ_func_0_1(45) * occ_func_0_1(0) +
          occ_func_0_1(161) * occ_func_0_1(51) * occ_func_0_0(0) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(46) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_0(156) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(175) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_1(54) +
          occ_func_0_0(142) * occ_func_0_1(43) * occ_func_0_1(0) +
          occ_func_0_1(175) * occ_func_0_1(54) * occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(43) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_0(142) +
          occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_0(0) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(45) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_0(146) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(159) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(49) +
          occ_func_0_0(158) * occ_func_0_1(48) * occ_func_0_1(0) +
          occ_func_0_1(160) * occ_func_0_1(50) * occ_func_0_0(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_0(47) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_0(157) +
          occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_0(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(44) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(143)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_12_7_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(174) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_1(53) +
          occ_func_0_1(143) * occ_func_0_1(44) * occ_func_0_1(0) +
          occ_func_0_1(159) * occ_func_0_1(49) * occ_func_0_1(0) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_1(48) +
          occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_1(158) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(161) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(51) +
          occ_func_0_1(156) * occ_func_0_1(46) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(160) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_1(50) +
          occ_func_0_1(157) * occ_func_0_1(47) * occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(171) +
          occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_1(52) +
          occ_func_0_1(146) * occ_func_0_1(45) * occ_func_0_1(0) +
          occ_func_0_1(161) * occ_func_0_1(51) * occ_func_0_1(0) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(46) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_1(156) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(175) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_1(54) +
          occ_func_0_1(142) * occ_func_0_1(43) * occ_func_0_1(0) +
          occ_func_0_1(175) * occ_func_0_1(54) * occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(43) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_1(142) +
          occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(45) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_1(146) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(159) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(49) +
          occ_func_0_1(158) * occ_func_0_1(48) * occ_func_0_1(0) +
          occ_func_0_1(160) * occ_func_0_1(50) * occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_1(47) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_1(157) +
          occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(44) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(143)) /
         12.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(11) * occ_func_0_0(174) +
          occ_func_0_0(2) * occ_func_0_0(53) +
          occ_func_0_0(143) * occ_func_0_0(44) +
          occ_func_0_0(159) * occ_func_0_0(49) +
          occ_func_0_0(7) * occ_func_0_0(48) +
          occ_func_0_0(6) * occ_func_0_0(158) +
          occ_func_0_0(9) * occ_func_0_0(161) +
          occ_func_0_0(4) * occ_func_0_0(51) +
          occ_func_0_0(156) * occ_func_0_0(46) +
          occ_func_0_0(8) * occ_func_0_0(160) +
          occ_func_0_0(5) * occ_func_0_0(50) +
          occ_func_0_0(157) * occ_func_0_0(47) +
          occ_func_0_0(10) * occ_func_0_0(171) +
          occ_func_0_0(3) * occ_func_0_0(52) +
          occ_func_0_0(146) * occ_func_0_0(45) +
          occ_func_0_0(161) * occ_func_0_0(51) +
          occ_func_0_0(9) * occ_func_0_0(46) +
          occ_func_0_0(4) * occ_func_0_0(156) +
          occ_func_0_0(12) * occ_func_0_0(175) +
          occ_func_0_0(1) * occ_func_0_0(54) +
          occ_func_0_0(142) * occ_func_0_0(43) +
          occ_func_0_0(175) * occ_func_0_0(54) +
          occ_func_0_0(12) * occ_func_0_0(43) +
          occ_func_0_0(1) * occ_func_0_0(142) +
          occ_func_0_0(171) * occ_func_0_0(52) +
          occ_func_0_0(10) * occ_func_0_0(45) +
          occ_func_0_0(3) * occ_func_0_0(146) +
          occ_func_0_0(7) * occ_func_0_0(159) +
          occ_func_0_0(6) * occ_func_0_0(49) +
          occ_func_0_0(158) * occ_func_0_0(48) +
          occ_func_0_0(160) * occ_func_0_0(50) +
          occ_func_0_0(8) * occ_func_0_0(47) +
          occ_func_0_0(5) * occ_func_0_0(157) +
          occ_func_0_0(174) * occ_func_0_0(53) +
          occ_func_0_0(11) * occ_func_0_0(44) +
          occ_func_0_0(2) * occ_func_0_0(143)) /
         12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(2) * occ_func_0_0(53) +
              occ_func_0_1(143) * occ_func_0_0(44) +
              occ_func_0_0(7) * occ_func_0_1(48) +
              occ_func_0_0(6) * occ_func_0_1(158) +
              occ_func_0_1(4) * occ_func_0_0(51) +
              occ_func_0_1(156) * occ_func_0_0(46) +
              occ_func_0_1(5) * occ_func_0_0(50) +
              occ_func_0_1(157) * occ_func_0_0(47) +
              occ_func_0_1(3) * occ_func_0_0(52) +
              occ_func_0_1(146) * occ_func_0_0(45) +
              occ_func_0_0(9) * occ_func_0_1(46) +
              occ_func_0_0(4) * occ_func_0_1(156) +
              occ_func_0_1(1) * occ_func_0_0(54) +
              occ_func_0_1(142) * occ_func_0_0(43) +
              occ_func_0_0(12) * occ_func_0_1(43) +
              occ_func_0_0(1) * occ_func_0_1(142) +
              occ_func_0_0(10) * occ_func_0_1(45) +
              occ_func_0_0(3) * occ_func_0_1(146) +
              occ_func_0_1(6) * occ_func_0_0(49) +
              occ_func_0_1(158) * occ_func_0_0(48) +
              occ_func_0_0(8) * occ_func_0_1(47) +
              occ_func_0_0(5) * occ_func_0_1(157) +
              occ_func_0_0(11) * occ_func_0_1(44) +
              occ_func_0_0(2) * occ_func_0_1(143)) /
             12. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(11) * occ_func_0_0(174) +
              occ_func_0_0(159) * occ_func_0_0(49) +
              occ_func_0_0(9) * occ_func_0_0(161) +
              occ_func_0_0(8) * occ_func_0_0(160) +
              occ_func_0_0(10) * occ_func_0_0(171) +
              occ_func_0_0(161) * occ_func_0_0(51) +
              occ_func_0_0(12) * occ_func_0_0(175) +
              occ_func_0_0(175) * occ_func_0_0(54) +
              occ_func_0_0(171) * occ_func_0_0(52) +
              occ_func_0_0(7) * occ_func_0_0(159) +
              occ_func_0_0(160) * occ_func_0_0(50) +
              occ_func_0_0(174) * occ_func_0_0(53)) /
             12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(11) * occ_func_0_0(174) +
              occ_func_0_0(143) * occ_func_0_1(44) +
              occ_func_0_0(159) * occ_func_0_1(49) +
              occ_func_0_1(6) * occ_func_0_0(158) +
              occ_func_0_1(9) * occ_func_0_0(161) +
              occ_func_0_0(156) * occ_func_0_1(46) +
              occ_func_0_1(8) * occ_func_0_0(160) +
              occ_func_0_0(157) * occ_func_0_1(47) +
              occ_func_0_1(10) * occ_func_0_0(171) +
              occ_func_0_0(146) * occ_func_0_1(45) +
              occ_func_0_0(161) * occ_func_0_1(51) +
              occ_func_0_1(4) * occ_func_0_0(156) +
              occ_func_0_1(12) * occ_func_0_0(175) +
              occ_func_0_0(142) * occ_func_0_1(43) +
              occ_func_0_0(175) * occ_func_0_1(54) +
              occ_func_0_1(1) * occ_func_0_0(142) +
              occ_func_0_0(171) * occ_func_0_1(52) +
              occ_func_0_1(3) * occ_func_0_0(146) +
              occ_func_0_1(7) * occ_func_0_0(159) +
              occ_func_0_0(158) * occ_func_0_1(48) +
              occ_func_0_0(160) * occ_func_0_1(50) +
              occ_func_0_1(5) * occ_func_0_0(157) +
              occ_func_0_0(174) * occ_func_0_1(53) +
              occ_func_0_1(2) * occ_func_0_0(143)) /
             12. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(2) * occ_func_0_0(53) +
              occ_func_0_0(7) * occ_func_0_0(48) +
              occ_func_0_0(4) * occ_func_0_0(51) +
              occ_func_0_0(5) * occ_func_0_0(50) +
              occ_func_0_0(3) * occ_func_0_0(52) +
              occ_func_0_0(9) * occ_func_0_0(46) +
              occ_func_0_0(1) * occ_func_0_0(54) +
              occ_func_0_0(12) * occ_func_0_0(43) +
              occ_func_0_0(10) * occ_func_0_0(45) +
              occ_func_0_0(6) * occ_func_0_0(49) +
              occ_func_0_0(8) * occ_func_0_0(47) +
              occ_func_0_0(11) * occ_func_0_0(44)) /
             12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_3_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(143) * occ_func_0_1(44) +
              occ_func_0_1(6) * occ_func_0_1(158) +
              occ_func_0_1(156) * occ_func_0_1(46) +
              occ_func_0_1(157) * occ_func_0_1(47) +
              occ_func_0_1(146) * occ_func_0_1(45) +
              occ_func_0_1(4) * occ_func_0_1(156) +
              occ_func_0_1(142) * occ_func_0_1(43) +
              occ_func_0_1(1) * occ_func_0_1(142) +
              occ_func_0_1(3) * occ_func_0_1(146) +
              occ_func_0_1(158) * occ_func_0_1(48) +
              occ_func_0_1(5) * occ_func_0_1(157) +
              occ_func_0_1(2) * occ_func_0_1(143)) /
             12. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_1(11) * occ_func_0_0(174) +
              occ_func_0_1(2) * occ_func_0_0(53) +
              occ_func_0_0(159) * occ_func_0_1(49) +
              occ_func_0_0(7) * occ_func_0_1(48) +
              occ_func_0_1(9) * occ_func_0_0(161) +
              occ_func_0_1(4) * occ_func_0_0(51) +
              occ_func_0_1(8) * occ_func_0_0(160) +
              occ_func_0_1(5) * occ_func_0_0(50) +
              occ_func_0_1(10) * occ_func_0_0(171) +
              occ_func_0_1(3) * occ_func_0_0(52) +
              occ_func_0_0(161) * occ_func_0_1(51) +
              occ_func_0_0(9) * occ_func_0_1(46) +
              occ_func_0_1(12) * occ_func_0_0(175) +
              occ_func_0_1(1) * occ_func_0_0(54) +
              occ_func_0_0(175) * occ_func_0_1(54) +
              occ_func_0_0(12) * occ_func_0_1(43) +
              occ_func_0_0(171) * occ_func_0_1(52) +
              occ_func_0_0(10) * occ_func_0_1(45) +
              occ_func_0_1(7) * occ_func_0_0(159) +
              occ_func_0_1(6) * occ_func_0_0(49) +
              occ_func_0_0(160) * occ_func_0_1(50) +
              occ_func_0_0(8) * occ_func_0_1(47) +
              occ_func_0_0(174) * occ_func_0_1(53) +
              occ_func_0_0(11) * occ_func_0_1(44)) /
             12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_4_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_0(11) * occ_func_0_1(174) +
              occ_func_0_0(2) * occ_func_0_1(53) +
              occ_func_0_1(159) * occ_func_0_0(49) +
              occ_func_0_1(7) * occ_func_0_0(48) +
              occ_func_0_0(9) * occ_func_0_1(161) +
              occ_func_0_0(4) * occ_func_0_1(51) +
              occ_func_0_0(8) * occ_func_0_1(160) +
              occ_func_0_0(5) * occ_func_0_1(50) +
              occ_func_0_0(10) * occ_func_0_1(171) +
              occ_func_0_0(3) * occ_func_0_1(52) +
              occ_func_0_1(161) * occ_func_0_0(51) +
              occ_func_0_1(9) * occ_func_0_0(46) +
              occ_func_0_0(12) * occ_func_0_1(175) +
              occ_func_0_0(1) * occ_func_0_1(54) +
              occ_func_0_1(175) * occ_func_0_0(54) +
              occ_func_0_1(12) * occ_func_0_0(43) +
              occ_func_0_1(171) * occ_func_0_0(52) +
              occ_func_0_1(10) * occ_func_0_0(45) +
              occ_func_0_0(7) * occ_func_0_1(159) +
              occ_func_0_0(6) * occ_func_0_1(49) +
              occ_func_0_1(160) * occ_func_0_0(50) +
              occ_func_0_1(8) * occ_func_0_0(47) +
              occ_func_0_1(174) * occ_func_0_0(53) +
              occ_func_0_1(11) * occ_func_0_0(44)) /
             12. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(143) * occ_func_0_0(44) +
              occ_func_0_0(6) * occ_func_0_0(158) +
              occ_func_0_0(156) * occ_func_0_0(46) +
              occ_func_0_0(157) * occ_func_0_0(47) +
              occ_func_0_0(146) * occ_func_0_0(45) +
              occ_func_0_0(4) * occ_func_0_0(156) +
              occ_func_0_0(142) * occ_func_0_0(43) +
              occ_func_0_0(1) * occ_func_0_0(142) +
              occ_func_0_0(3) * occ_func_0_0(146) +
              occ_func_0_0(158) * occ_func_0_0(48) +
              occ_func_0_0(5) * occ_func_0_0(157) +
              occ_func_0_0(2) * occ_func_0_0(143)) /
             12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_5_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(2) * occ_func_0_1(53) +
              occ_func_0_1(7) * occ_func_0_1(48) +
              occ_func_0_1(4) * occ_func_0_1(51) +
              occ_func_0_1(5) * occ_func_0_1(50) +
              occ_func_0_1(3) * occ_func_0_1(52) +
              occ_func_0_1(9) * occ_func_0_1(46) +
              occ_func_0_1(1) * occ_func_0_1(54) +
              occ_func_0_1(12) * occ_func_0_1(43) +
              occ_func_0_1(10) * occ_func_0_1(45) +
              occ_func_0_1(6) * occ_func_0_1(49) +
              occ_func_0_1(8) * occ_func_0_1(47) +
              occ_func_0_1(11) * occ_func_0_1(44)) /
             12. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(11) * occ_func_0_1(174) +
              occ_func_0_1(143) * occ_func_0_0(44) +
              occ_func_0_1(159) * occ_func_0_0(49) +
              occ_func_0_0(6) * occ_func_0_1(158) +
              occ_func_0_0(9) * occ_func_0_1(161) +
              occ_func_0_1(156) * occ_func_0_0(46) +
              occ_func_0_0(8) * occ_func_0_1(160) +
              occ_func_0_1(157) * occ_func_0_0(47) +
              occ_func_0_0(10) * occ_func_0_1(171) +
              occ_func_0_1(146) * occ_func_0_0(45) +
              occ_func_0_1(161) * occ_func_0_0(51) +
              occ_func_0_0(4) * occ_func_0_1(156) +
              occ_func_0_0(12) * occ_func_0_1(175) +
              occ_func_0_1(142) * occ_func_0_0(43) +
              occ_func_0_1(175) * occ_func_0_0(54) +
              occ_func_0_0(1) * occ_func_0_1(142) +
              occ_func_0_1(171) * occ_func_0_0(52) +
              occ_func_0_0(3) * occ_func_0_1(146) +
              occ_func_0_0(7) * occ_func_0_1(159) +
              occ_func_0_1(158) * occ_func_0_0(48) +
              occ_func_0_1(160) * occ_func_0_0(50) +
              occ_func_0_0(5) * occ_func_0_1(157) +
              occ_func_0_1(174) * occ_func_0_0(53) +
              occ_func_0_0(2) * occ_func_0_1(143)) /
             12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_6_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(11) * occ_func_0_1(174) +
              occ_func_0_1(159) * occ_func_0_1(49) +
              occ_func_0_1(9) * occ_func_0_1(161) +
              occ_func_0_1(8) * occ_func_0_1(160) +
              occ_func_0_1(10) * occ_func_0_1(171) +
              occ_func_0_1(161) * occ_func_0_1(51) +
              occ_func_0_1(12) * occ_func_0_1(175) +
              occ_func_0_1(175) * occ_func_0_1(54) +
              occ_func_0_1(171) * occ_func_0_1(52) +
              occ_func_0_1(7) * occ_func_0_1(159) +
              occ_func_0_1(160) * occ_func_0_1(50) +
              occ_func_0_1(174) * occ_func_0_1(53)) /
             12. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(2) * occ_func_0_1(53) +
              occ_func_0_0(143) * occ_func_0_1(44) +
              occ_func_0_1(7) * occ_func_0_0(48) +
              occ_func_0_1(6) * occ_func_0_0(158) +
              occ_func_0_0(4) * occ_func_0_1(51) +
              occ_func_0_0(156) * occ_func_0_1(46) +
              occ_func_0_0(5) * occ_func_0_1(50) +
              occ_func_0_0(157) * occ_func_0_1(47) +
              occ_func_0_0(3) * occ_func_0_1(52) +
              occ_func_0_0(146) * occ_func_0_1(45) +
              occ_func_0_1(9) * occ_func_0_0(46) +
              occ_func_0_1(4) * occ_func_0_0(156) +
              occ_func_0_0(1) * occ_func_0_1(54) +
              occ_func_0_0(142) * occ_func_0_1(43) +
              occ_func_0_1(12) * occ_func_0_0(43) +
              occ_func_0_1(1) * occ_func_0_0(142) +
              occ_func_0_1(10) * occ_func_0_0(45) +
              occ_func_0_1(3) * occ_func_0_0(146) +
              occ_func_0_0(6) * occ_func_0_1(49) +
              occ_func_0_0(158) * occ_func_0_1(48) +
              occ_func_0_1(8) * occ_func_0_0(47) +
              occ_func_0_1(5) * occ_func_0_0(157) +
              occ_func_0_1(11) * occ_func_0_0(44) +
              occ_func_0_1(2) * occ_func_0_0(143)) /
             12.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_12_7_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(11) * occ_func_0_1(174) +
          occ_func_0_1(2) * occ_func_0_1(53) +
          occ_func_0_1(143) * occ_func_0_1(44) +
          occ_func_0_1(159) * occ_func_0_1(49) +
          occ_func_0_1(7) * occ_func_0_1(48) +
          occ_func_0_1(6) * occ_func_0_1(158) +
          occ_func_0_1(9) * occ_func_0_1(161) +
          occ_func_0_1(4) * occ_func_0_1(51) +
          occ_func_0_1(156) * occ_func_0_1(46) +
          occ_func_0_1(8) * occ_func_0_1(160) +
          occ_func_0_1(5) * occ_func_0_1(50) +
          occ_func_0_1(157) * occ_func_0_1(47) +
          occ_func_0_1(10) * occ_func_0_1(171) +
          occ_func_0_1(3) * occ_func_0_1(52) +
          occ_func_0_1(146) * occ_func_0_1(45) +
          occ_func_0_1(161) * occ_func_0_1(51) +
          occ_func_0_1(9) * occ_func_0_1(46) +
          occ_func_0_1(4) * occ_func_0_1(156) +
          occ_func_0_1(12) * occ_func_0_1(175) +
          occ_func_0_1(1) * occ_func_0_1(54) +
          occ_func_0_1(142) * occ_func_0_1(43) +
          occ_func_0_1(175) * occ_func_0_1(54) +
          occ_func_0_1(12) * occ_func_0_1(43) +
          occ_func_0_1(1) * occ_func_0_1(142) +
          occ_func_0_1(171) * occ_func_0_1(52) +
          occ_func_0_1(10) * occ_func_0_1(45) +
          occ_func_0_1(3) * occ_func_0_1(146) +
          occ_func_0_1(7) * occ_func_0_1(159) +
          occ_func_0_1(6) * occ_func_0_1(49) +
          occ_func_0_1(158) * occ_func_0_1(48) +
          occ_func_0_1(160) * occ_func_0_1(50) +
          occ_func_0_1(8) * occ_func_0_1(47) +
          occ_func_0_1(5) * occ_func_0_1(157) +
          occ_func_0_1(174) * occ_func_0_1(53) +
          occ_func_0_1(11) * occ_func_0_1(44) +
          occ_func_0_1(2) * occ_func_0_1(143)) /
         12.;
}

/**** Basis functions for orbit 13****
0.0000000 0.0000000 0.0000000 A  B  C

0.0000000 0.0000000 1.0000000 A  B  C

1.0000000 0.0000000 0.0000000 A  B  C

1.0000000 1.0000000 1.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(12) *
              occ_func_0_0(85) +
          occ_func_0_0(83) * occ_func_0_0(35) * occ_func_0_0(34) *
              occ_func_0_0(0) +
          occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_0(38) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(11) *
              occ_func_0_0(86) +
          occ_func_0_0(84) * occ_func_0_0(31) * occ_func_0_0(36) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(10) *
              occ_func_0_0(86) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(12) *
              occ_func_0_0(33) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(11) *
              occ_func_0_0(84) +
          occ_func_0_0(86) * occ_func_0_0(41) * occ_func_0_0(42) *
              occ_func_0_0(0) +
          occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_0(0) *
              occ_func_0_0(38) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(9) *
              occ_func_0_0(85) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(12) *
              occ_func_0_0(35) +
          occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_0(0) *
              occ_func_0_0(35) +
          occ_func_0_0(86) * occ_func_0_0(40) * occ_func_0_0(41) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(7) *
              occ_func_0_0(85) +
          occ_func_0_0(85) * occ_func_0_0(32) * occ_func_0_0(39) *
              occ_func_0_0(0) +
          occ_func_0_0(85) * occ_func_0_0(39) * occ_func_0_0(37) *
              occ_func_0_0(0) +
          occ_func_0_0(85) * occ_func_0_0(37) * occ_func_0_0(32) *
              occ_func_0_0(0) +
          occ_func_0_0(84) * occ_func_0_0(38) * occ_func_0_0(31) *
              occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_0(0) *
              occ_func_0_0(33) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(12) *
              occ_func_0_0(86) +
          occ_func_0_0(86) * occ_func_0_0(42) * occ_func_0_0(40) *
              occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_0(0) *
              occ_func_0_0(34) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_0(9) *
              occ_func_0_0(38)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_1() const {
  return (occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(12) *
              occ_func_0_0(85) +
          occ_func_0_0(83) * occ_func_0_0(35) * occ_func_0_0(34) *
              occ_func_0_1(0) +
          occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_0(38) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(11) *
              occ_func_0_0(86) +
          occ_func_0_0(84) * occ_func_0_0(31) * occ_func_0_0(36) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(10) *
              occ_func_0_0(86) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(12) *
              occ_func_0_0(33) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(11) *
              occ_func_0_0(84) +
          occ_func_0_0(86) * occ_func_0_0(41) * occ_func_0_0(42) *
              occ_func_0_1(0) +
          occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_1(0) *
              occ_func_0_0(38) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(9) *
              occ_func_0_0(85) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(12) *
              occ_func_0_0(35) +
          occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_1(0) *
              occ_func_0_0(35) +
          occ_func_0_0(86) * occ_func_0_0(40) * occ_func_0_0(41) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(7) *
              occ_func_0_0(85) +
          occ_func_0_0(85) * occ_func_0_0(32) * occ_func_0_0(39) *
              occ_func_0_1(0) +
          occ_func_0_0(85) * occ_func_0_0(39) * occ_func_0_0(37) *
              occ_func_0_1(0) +
          occ_func_0_0(85) * occ_func_0_0(37) * occ_func_0_0(32) *
              occ_func_0_1(0) +
          occ_func_0_0(84) * occ_func_0_0(38) * occ_func_0_0(31) *
              occ_func_0_1(0) +
          occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_1(0) *
              occ_func_0_0(33) +
          occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(12) *
              occ_func_0_0(86) +
          occ_func_0_0(86) * occ_func_0_0(42) * occ_func_0_0(40) *
              occ_func_0_1(0) +
          occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_1(0) *
              occ_func_0_0(34) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_0(9) *
              occ_func_0_0(38)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_2() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(12) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(12) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_0(35) * occ_func_0_1(34) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_0(35) * occ_func_0_0(34) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) * occ_func_0_0(38) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(36) * occ_func_0_0(38) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(11) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(11) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_0(31) * occ_func_0_1(36) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(84) * occ_func_0_1(31) * occ_func_0_0(36) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(10) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(10) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(12) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(12) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(11) *
               occ_func_0_0(84) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(11) *
               occ_func_0_0(84)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(41) * occ_func_0_1(42) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(41) * occ_func_0_0(42) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) * occ_func_0_0(0) *
               occ_func_0_0(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(12) * occ_func_0_0(0) *
               occ_func_0_0(38)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(9) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(9) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(12) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(12) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_0(0) *
               occ_func_0_0(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(7) * occ_func_0_0(0) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(40) * occ_func_0_1(41) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(40) * occ_func_0_0(41) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(7) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(7) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(32) * occ_func_0_1(39) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(32) * occ_func_0_0(39) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(39) * occ_func_0_1(37) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(39) * occ_func_0_0(37) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(37) * occ_func_0_1(32) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(37) * occ_func_0_0(32) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_0(38) * occ_func_0_1(31) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(38) * occ_func_0_0(31) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_0(0) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(11) * occ_func_0_0(0) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(12) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(12) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(42) * occ_func_0_1(40) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(42) * occ_func_0_0(40) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_0(0) *
               occ_func_0_1(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(11) * occ_func_0_0(0) *
               occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_1(9) *
               occ_func_0_0(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_0(9) *
               occ_func_0_0(38))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_3() const {
  return ((0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(12) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(12) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_0(35) * occ_func_0_1(34) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_0(35) * occ_func_0_0(34) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) * occ_func_0_0(38) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(36) * occ_func_0_0(38) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(11) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(11) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_0(31) * occ_func_0_1(36) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(84) * occ_func_0_1(31) * occ_func_0_0(36) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(10) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(10) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(11) *
               occ_func_0_0(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(11) *
               occ_func_0_0(84)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(41) * occ_func_0_1(42) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(41) * occ_func_0_0(42) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) * occ_func_0_1(0) *
               occ_func_0_0(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(12) * occ_func_0_1(0) *
               occ_func_0_0(38)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(9) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(9) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_1(0) *
               occ_func_0_0(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(7) * occ_func_0_1(0) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(40) * occ_func_0_1(41) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(40) * occ_func_0_0(41) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(7) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(7) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(32) * occ_func_0_1(39) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(32) * occ_func_0_0(39) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(39) * occ_func_0_1(37) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(39) * occ_func_0_0(37) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(37) * occ_func_0_1(32) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(37) * occ_func_0_0(32) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_0(38) * occ_func_0_1(31) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(38) * occ_func_0_0(31) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(12) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(12) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(42) * occ_func_0_1(40) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(42) * occ_func_0_0(40) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_1(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_1(9) *
               occ_func_0_0(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_0(9) *
               occ_func_0_0(38))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_4() const {
  return (occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(12) *
              occ_func_0_0(85) +
          occ_func_0_1(83) * occ_func_0_0(35) * occ_func_0_1(34) *
              occ_func_0_0(0) +
          occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_0(38) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(11) *
              occ_func_0_0(86) +
          occ_func_0_0(84) * occ_func_0_1(31) * occ_func_0_1(36) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(10) *
              occ_func_0_0(86) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(12) *
              occ_func_0_1(33) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(11) *
              occ_func_0_0(84) +
          occ_func_0_0(86) * occ_func_0_1(41) * occ_func_0_1(42) *
              occ_func_0_0(0) +
          occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_0(0) *
              occ_func_0_0(38) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(9) *
              occ_func_0_0(85) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(12) *
              occ_func_0_1(35) +
          occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_0(0) *
              occ_func_0_0(35) +
          occ_func_0_0(86) * occ_func_0_1(40) * occ_func_0_1(41) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(7) *
              occ_func_0_0(85) +
          occ_func_0_0(85) * occ_func_0_1(32) * occ_func_0_1(39) *
              occ_func_0_0(0) +
          occ_func_0_0(85) * occ_func_0_1(39) * occ_func_0_1(37) *
              occ_func_0_0(0) +
          occ_func_0_0(85) * occ_func_0_1(37) * occ_func_0_1(32) *
              occ_func_0_0(0) +
          occ_func_0_1(84) * occ_func_0_0(38) * occ_func_0_1(31) *
              occ_func_0_0(0) +
          occ_func_0_1(10) * occ_func_0_0(11) * occ_func_0_0(0) *
              occ_func_0_1(33) +
          occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(12) *
              occ_func_0_0(86) +
          occ_func_0_0(86) * occ_func_0_1(42) * occ_func_0_1(40) *
              occ_func_0_0(0) +
          occ_func_0_1(8) * occ_func_0_0(11) * occ_func_0_0(0) *
              occ_func_0_1(34) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_1(9) *
              occ_func_0_0(38)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_5() const {
  return (occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(12) *
              occ_func_0_0(85) +
          occ_func_0_1(83) * occ_func_0_0(35) * occ_func_0_1(34) *
              occ_func_0_1(0) +
          occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_0(38) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(11) *
              occ_func_0_0(86) +
          occ_func_0_0(84) * occ_func_0_1(31) * occ_func_0_1(36) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(10) *
              occ_func_0_0(86) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(12) *
              occ_func_0_1(33) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(11) *
              occ_func_0_0(84) +
          occ_func_0_0(86) * occ_func_0_1(41) * occ_func_0_1(42) *
              occ_func_0_1(0) +
          occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_1(0) *
              occ_func_0_0(38) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(9) *
              occ_func_0_0(85) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(12) *
              occ_func_0_1(35) +
          occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_1(0) *
              occ_func_0_0(35) +
          occ_func_0_0(86) * occ_func_0_1(40) * occ_func_0_1(41) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(7) *
              occ_func_0_0(85) +
          occ_func_0_0(85) * occ_func_0_1(32) * occ_func_0_1(39) *
              occ_func_0_1(0) +
          occ_func_0_0(85) * occ_func_0_1(39) * occ_func_0_1(37) *
              occ_func_0_1(0) +
          occ_func_0_0(85) * occ_func_0_1(37) * occ_func_0_1(32) *
              occ_func_0_1(0) +
          occ_func_0_1(84) * occ_func_0_0(38) * occ_func_0_1(31) *
              occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_0(11) * occ_func_0_1(0) *
              occ_func_0_1(33) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(12) *
              occ_func_0_0(86) +
          occ_func_0_0(86) * occ_func_0_1(42) * occ_func_0_1(40) *
              occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_0(11) * occ_func_0_1(0) *
              occ_func_0_1(34) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_1(9) *
              occ_func_0_0(38)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_6() const {
  return (occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(12) *
              occ_func_0_1(85) +
          occ_func_0_0(83) * occ_func_0_1(35) * occ_func_0_0(34) *
              occ_func_0_0(0) +
          occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_1(38) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(11) *
              occ_func_0_1(86) +
          occ_func_0_1(84) * occ_func_0_0(31) * occ_func_0_0(36) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(10) *
              occ_func_0_1(86) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(12) *
              occ_func_0_0(33) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(11) *
              occ_func_0_1(84) +
          occ_func_0_1(86) * occ_func_0_0(41) * occ_func_0_0(42) *
              occ_func_0_0(0) +
          occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_0(0) *
              occ_func_0_1(38) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(9) *
              occ_func_0_1(85) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(12) *
              occ_func_0_0(35) +
          occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_0(0) *
              occ_func_0_1(35) +
          occ_func_0_1(86) * occ_func_0_0(40) * occ_func_0_0(41) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(7) *
              occ_func_0_1(85) +
          occ_func_0_1(85) * occ_func_0_0(32) * occ_func_0_0(39) *
              occ_func_0_0(0) +
          occ_func_0_1(85) * occ_func_0_0(39) * occ_func_0_0(37) *
              occ_func_0_0(0) +
          occ_func_0_1(85) * occ_func_0_0(37) * occ_func_0_0(32) *
              occ_func_0_0(0) +
          occ_func_0_0(84) * occ_func_0_1(38) * occ_func_0_0(31) *
              occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_1(11) * occ_func_0_0(0) *
              occ_func_0_0(33) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(12) *
              occ_func_0_1(86) +
          occ_func_0_1(86) * occ_func_0_0(42) * occ_func_0_0(40) *
              occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_1(11) * occ_func_0_0(0) *
              occ_func_0_0(34) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_0(9) *
              occ_func_0_1(38)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_7() const {
  return (occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(12) *
              occ_func_0_1(85) +
          occ_func_0_0(83) * occ_func_0_1(35) * occ_func_0_0(34) *
              occ_func_0_1(0) +
          occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_1(38) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(11) *
              occ_func_0_1(86) +
          occ_func_0_1(84) * occ_func_0_0(31) * occ_func_0_0(36) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(10) *
              occ_func_0_1(86) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(12) *
              occ_func_0_0(33) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(11) *
              occ_func_0_1(84) +
          occ_func_0_1(86) * occ_func_0_0(41) * occ_func_0_0(42) *
              occ_func_0_1(0) +
          occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_1(0) *
              occ_func_0_1(38) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(9) *
              occ_func_0_1(85) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(12) *
              occ_func_0_0(35) +
          occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_1(0) *
              occ_func_0_1(35) +
          occ_func_0_1(86) * occ_func_0_0(40) * occ_func_0_0(41) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(7) *
              occ_func_0_1(85) +
          occ_func_0_1(85) * occ_func_0_0(32) * occ_func_0_0(39) *
              occ_func_0_1(0) +
          occ_func_0_1(85) * occ_func_0_0(39) * occ_func_0_0(37) *
              occ_func_0_1(0) +
          occ_func_0_1(85) * occ_func_0_0(37) * occ_func_0_0(32) *
              occ_func_0_1(0) +
          occ_func_0_0(84) * occ_func_0_1(38) * occ_func_0_0(31) *
              occ_func_0_1(0) +
          occ_func_0_0(10) * occ_func_0_1(11) * occ_func_0_1(0) *
              occ_func_0_0(33) +
          occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(12) *
              occ_func_0_1(86) +
          occ_func_0_1(86) * occ_func_0_0(42) * occ_func_0_0(40) *
              occ_func_0_1(0) +
          occ_func_0_0(8) * occ_func_0_1(11) * occ_func_0_1(0) *
              occ_func_0_0(34) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_0(9) *
              occ_func_0_1(38)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_8() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(12) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(12) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_1(35) * occ_func_0_1(34) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_1(35) * occ_func_0_0(34) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) * occ_func_0_1(38) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(36) * occ_func_0_1(38) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(11) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(11) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_1(84) * occ_func_0_0(31) * occ_func_0_1(36) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_1(31) * occ_func_0_0(36) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(10) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(10) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(11) *
               occ_func_0_1(84) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(11) *
               occ_func_0_1(84)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(41) * occ_func_0_1(42) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(41) * occ_func_0_0(42) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) * occ_func_0_0(0) *
               occ_func_0_1(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(12) * occ_func_0_0(0) *
               occ_func_0_1(38)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(9) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(9) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_0(0) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(7) * occ_func_0_0(0) *
               occ_func_0_1(35)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(40) * occ_func_0_1(41) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(40) * occ_func_0_0(41) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(7) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(7) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(32) * occ_func_0_1(39) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(32) * occ_func_0_0(39) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(39) * occ_func_0_1(37) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(39) * occ_func_0_0(37) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(37) * occ_func_0_1(32) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(37) * occ_func_0_0(32) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(38) * occ_func_0_1(31) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_1(38) * occ_func_0_0(31) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(12) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(12) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(42) * occ_func_0_1(40) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(42) * occ_func_0_0(40) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_1(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_1(9) *
               occ_func_0_1(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_0(9) *
               occ_func_0_1(38))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_9() const {
  return ((0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(12) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(12) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_1(35) * occ_func_0_1(34) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_1(35) * occ_func_0_0(34) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) * occ_func_0_1(38) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(36) * occ_func_0_1(38) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(11) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(11) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_1(84) * occ_func_0_0(31) * occ_func_0_1(36) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_1(31) * occ_func_0_0(36) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(10) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(10) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(12) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(12) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(11) *
               occ_func_0_1(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(11) *
               occ_func_0_1(84)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(41) * occ_func_0_1(42) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(41) * occ_func_0_0(42) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) * occ_func_0_1(0) *
               occ_func_0_1(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(12) * occ_func_0_1(0) *
               occ_func_0_1(38)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(9) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(9) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(12) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(12) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_1(0) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(7) * occ_func_0_1(0) *
               occ_func_0_1(35)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(40) * occ_func_0_1(41) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(40) * occ_func_0_0(41) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(7) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(7) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(32) * occ_func_0_1(39) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(32) * occ_func_0_0(39) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(39) * occ_func_0_1(37) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(39) * occ_func_0_0(37) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(37) * occ_func_0_1(32) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(37) * occ_func_0_0(32) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(38) * occ_func_0_1(31) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_1(38) * occ_func_0_0(31) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(11) * occ_func_0_1(0) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_1(0) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(12) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(12) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(42) * occ_func_0_1(40) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(42) * occ_func_0_0(40) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(11) * occ_func_0_1(0) *
               occ_func_0_1(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_1(0) *
               occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_1(9) *
               occ_func_0_1(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_0(9) *
               occ_func_0_1(38))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_10() const {
  return (occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(12) *
              occ_func_0_1(85) +
          occ_func_0_1(83) * occ_func_0_1(35) * occ_func_0_1(34) *
              occ_func_0_0(0) +
          occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_1(38) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(11) *
              occ_func_0_1(86) +
          occ_func_0_1(84) * occ_func_0_1(31) * occ_func_0_1(36) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(10) *
              occ_func_0_1(86) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(12) *
              occ_func_0_1(33) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(11) *
              occ_func_0_1(84) +
          occ_func_0_1(86) * occ_func_0_1(41) * occ_func_0_1(42) *
              occ_func_0_0(0) +
          occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_0(0) *
              occ_func_0_1(38) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(9) *
              occ_func_0_1(85) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(12) *
              occ_func_0_1(35) +
          occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_0(0) *
              occ_func_0_1(35) +
          occ_func_0_1(86) * occ_func_0_1(40) * occ_func_0_1(41) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(7) *
              occ_func_0_1(85) +
          occ_func_0_1(85) * occ_func_0_1(32) * occ_func_0_1(39) *
              occ_func_0_0(0) +
          occ_func_0_1(85) * occ_func_0_1(39) * occ_func_0_1(37) *
              occ_func_0_0(0) +
          occ_func_0_1(85) * occ_func_0_1(37) * occ_func_0_1(32) *
              occ_func_0_0(0) +
          occ_func_0_1(84) * occ_func_0_1(38) * occ_func_0_1(31) *
              occ_func_0_0(0) +
          occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_0(0) *
              occ_func_0_1(33) +
          occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(12) *
              occ_func_0_1(86) +
          occ_func_0_1(86) * occ_func_0_1(42) * occ_func_0_1(40) *
              occ_func_0_0(0) +
          occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_0(0) *
              occ_func_0_1(34) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_1(9) *
              occ_func_0_1(38)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_13_11() const {
  return (occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(12) *
              occ_func_0_1(85) +
          occ_func_0_1(83) * occ_func_0_1(35) * occ_func_0_1(34) *
              occ_func_0_1(0) +
          occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_1(38) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(11) *
              occ_func_0_1(86) +
          occ_func_0_1(84) * occ_func_0_1(31) * occ_func_0_1(36) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(10) *
              occ_func_0_1(86) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(12) *
              occ_func_0_1(33) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(11) *
              occ_func_0_1(84) +
          occ_func_0_1(86) * occ_func_0_1(41) * occ_func_0_1(42) *
              occ_func_0_1(0) +
          occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_1(0) *
              occ_func_0_1(38) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(9) *
              occ_func_0_1(85) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(12) *
              occ_func_0_1(35) +
          occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_1(0) *
              occ_func_0_1(35) +
          occ_func_0_1(86) * occ_func_0_1(40) * occ_func_0_1(41) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(7) *
              occ_func_0_1(85) +
          occ_func_0_1(85) * occ_func_0_1(32) * occ_func_0_1(39) *
              occ_func_0_1(0) +
          occ_func_0_1(85) * occ_func_0_1(39) * occ_func_0_1(37) *
              occ_func_0_1(0) +
          occ_func_0_1(85) * occ_func_0_1(37) * occ_func_0_1(32) *
              occ_func_0_1(0) +
          occ_func_0_1(84) * occ_func_0_1(38) * occ_func_0_1(31) *
              occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_1(0) *
              occ_func_0_1(33) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(12) *
              occ_func_0_1(86) +
          occ_func_0_1(86) * occ_func_0_1(42) * occ_func_0_1(40) *
              occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_1(0) *
              occ_func_0_1(34) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_1(9) *
              occ_func_0_1(38)) /
         24.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(12) *
              occ_func_0_0(85) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(11) *
              occ_func_0_0(39) +
          occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_0(0) *
              occ_func_0_0(32) +
          occ_func_0_0(80) * occ_func_0_0(22) * occ_func_0_0(29) *
              occ_func_0_0(0) +
          occ_func_0_0(83) * occ_func_0_0(35) * occ_func_0_0(34) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(8) *
              occ_func_0_0(82) +
          occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_0(0) *
              occ_func_0_0(27) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(6) *
              occ_func_0_0(26) +
          occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_0(38) *
              occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_0(9) *
              occ_func_0_0(25) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_0(7) *
              occ_func_0_0(81) +
          occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_0(0) *
              occ_func_0_0(23) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(11) *
              occ_func_0_0(86) +
          occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_0(8) *
              occ_func_0_0(42) +
          occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_0(0) *
              occ_func_0_0(41) +
          occ_func_0_0(79) * occ_func_0_0(19) * occ_func_0_0(20) *
              occ_func_0_0(0) +
          occ_func_0_0(84) * occ_func_0_0(31) * occ_func_0_0(36) *
              occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(10) *
              occ_func_0_0(30) +
          occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_0(0) *
              occ_func_0_0(25) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(5) *
              occ_func_0_0(81) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(10) *
              occ_func_0_0(86) +
          occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_0(0) *
              occ_func_0_0(42) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_0(4) *
              occ_func_0_0(40) +
          occ_func_0_0(79) * occ_func_0_0(21) * occ_func_0_0(19) *
              occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(12) *
              occ_func_0_0(33) +
          occ_func_0_0(83) * occ_func_0_0(28) * occ_func_0_0(35) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_0(9) *
              occ_func_0_0(82) +
          occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_0(0) *
              occ_func_0_0(26) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(11) *
              occ_func_0_0(84) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_0(10) *
              occ_func_0_0(36) +
          occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_0(0) *
              occ_func_0_0(31) +
          occ_func_0_0(81) * occ_func_0_0(25) * occ_func_0_0(30) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_0(41) * occ_func_0_0(42) *
              occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(8) *
              occ_func_0_0(20) +
          occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_0(0) *
              occ_func_0_0(19) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(3) *
              occ_func_0_0(79) +
          occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_0(0) *
              occ_func_0_0(38) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(6) *
              occ_func_0_0(84) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_0(1) *
              occ_func_0_0(31) +
          occ_func_0_0(81) * occ_func_0_0(30) * occ_func_0_0(23) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(9) *
              occ_func_0_0(85) +
          occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_0(0) *
              occ_func_0_0(37) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_0(3) *
              occ_func_0_0(32) +
          occ_func_0_0(80) * occ_func_0_0(29) * occ_func_0_0(24) *
              occ_func_0_0(0) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(12) *
              occ_func_0_0(35) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_0(10) *
              occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_0(26) * occ_func_0_0(33) *
              occ_func_0_0(0) +
          occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_0(0) *
              occ_func_0_0(28) +
          occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_0(0) *
              occ_func_0_0(35) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_0(6) *
              occ_func_0_0(34) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_0(4) *
              occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_0(27) * occ_func_0_0(26) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_0(40) * occ_func_0_0(41) *
              occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(7) *
              occ_func_0_0(21) +
          occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_0(0) *
              occ_func_0_0(20) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_0(2) *
              occ_func_0_0(79) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(7) *
              occ_func_0_0(85) +
          occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_0(0) *
              occ_func_0_0(39) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(5) *
              occ_func_0_0(37) +
          occ_func_0_0(80) * occ_func_0_0(24) * occ_func_0_0(22) *
              occ_func_0_0(0) +
          occ_func_0_0(85) * occ_func_0_0(32) * occ_func_0_0(39) *
              occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(11) *
              occ_func_0_0(29) +
          occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_0(0) *
              occ_func_0_0(22) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_0(6) *
              occ_func_0_0(80) +
          occ_func_0_0(85) * occ_func_0_0(39) * occ_func_0_0(37) *
              occ_func_0_0(0) +
          occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_0(0) *
              occ_func_0_0(24) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_0(5) *
              occ_func_0_0(22) +
          occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_0(4) *
              occ_func_0_0(80) +
          occ_func_0_0(85) * occ_func_0_0(37) * occ_func_0_0(32) *
              occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_0(10) * occ_func_0_0(0) *
              occ_func_0_0(29) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(3) *
              occ_func_0_0(24) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_0(1) *
              occ_func_0_0(80) +
          occ_func_0_0(84) * occ_func_0_0(38) * occ_func_0_0(31) *
              occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_0(12) * occ_func_0_0(0) *
              occ_func_0_0(30) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(2) *
              occ_func_0_0(81) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(1) *
              occ_func_0_0(23) +
          occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_0(0) *
              occ_func_0_0(33) +
          occ_func_0_0(83) * occ_func_0_0(34) * occ_func_0_0(28) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(3) *
              occ_func_0_0(82) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_0(2) *
              occ_func_0_0(27) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(12) *
              occ_func_0_0(86) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_0(7) *
              occ_func_0_0(41) +
          occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_0(0) *
              occ_func_0_0(40) +
          occ_func_0_0(79) * occ_func_0_0(20) * occ_func_0_0(21) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_0(42) * occ_func_0_0(40) *
              occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_0(0) *
              occ_func_0_0(21) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(4) *
              occ_func_0_0(19) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_0(1) *
              occ_func_0_0(79) +
          occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_0(0) *
              occ_func_0_0(34) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(5) *
              occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_0(33) * occ_func_0_0(27) *
              occ_func_0_0(0) +
          occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_0(2) *
              occ_func_0_0(28) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_0(9) *
              occ_func_0_0(38) +
          occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_0(8) *
              occ_func_0_0(84) +
          occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_0(0) *
              occ_func_0_0(36) +
          occ_func_0_0(81) * occ_func_0_0(23) * occ_func_0_0(25) *
              occ_func_0_0(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_1_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(12) *
              occ_func_0_0(85) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(11) *
              occ_func_0_0(39) +
          occ_func_0_1(1) * occ_func_0_0(2) * occ_func_0_0(0) *
              occ_func_0_0(32) +
          occ_func_0_1(80) * occ_func_0_0(22) * occ_func_0_0(29) *
              occ_func_0_0(0) +
          occ_func_0_0(83) * occ_func_0_0(35) * occ_func_0_0(34) *
              occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(8) *
              occ_func_0_1(82) +
          occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_0(0) *
              occ_func_0_1(27) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(6) *
              occ_func_0_1(26) +
          occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_0(38) *
              occ_func_0_1(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_0(9) *
              occ_func_0_1(25) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_0(7) *
              occ_func_0_1(81) +
          occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_0(0) *
              occ_func_0_1(23) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(11) *
              occ_func_0_0(86) +
          occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_0(8) *
              occ_func_0_0(42) +
          occ_func_0_1(2) * occ_func_0_0(5) * occ_func_0_0(0) *
              occ_func_0_0(41) +
          occ_func_0_1(79) * occ_func_0_0(19) * occ_func_0_0(20) *
              occ_func_0_0(0) +
          occ_func_0_0(84) * occ_func_0_0(31) * occ_func_0_0(36) *
              occ_func_0_1(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(10) *
              occ_func_0_1(30) +
          occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_0(0) *
              occ_func_0_1(25) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(5) *
              occ_func_0_1(81) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(10) *
              occ_func_0_0(86) +
          occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_0(0) *
              occ_func_0_0(42) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_0(4) *
              occ_func_0_0(40) +
          occ_func_0_1(79) * occ_func_0_0(21) * occ_func_0_0(19) *
              occ_func_0_0(0) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(12) *
              occ_func_0_0(33) +
          occ_func_0_0(83) * occ_func_0_1(28) * occ_func_0_0(35) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_0(9) *
              occ_func_0_0(82) +
          occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_0(0) *
              occ_func_0_0(26) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(11) *
              occ_func_0_0(84) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_0(10) *
              occ_func_0_0(36) +
          occ_func_0_1(2) * occ_func_0_0(3) * occ_func_0_0(0) *
              occ_func_0_0(31) +
          occ_func_0_1(81) * occ_func_0_0(25) * occ_func_0_0(30) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_0(41) * occ_func_0_0(42) *
              occ_func_0_1(0) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(8) *
              occ_func_0_1(20) +
          occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_0(0) *
              occ_func_0_1(19) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(3) *
              occ_func_0_1(79) +
          occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_1(0) *
              occ_func_0_0(38) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(6) *
              occ_func_0_0(84) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_1(1) *
              occ_func_0_0(31) +
          occ_func_0_0(81) * occ_func_0_0(30) * occ_func_0_1(23) *
              occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(9) *
              occ_func_0_0(85) +
          occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_0(0) *
              occ_func_0_0(37) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_0(3) *
              occ_func_0_0(32) +
          occ_func_0_1(80) * occ_func_0_0(29) * occ_func_0_0(24) *
              occ_func_0_0(0) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(12) *
              occ_func_0_0(35) +
          occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_0(10) *
              occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_1(26) * occ_func_0_0(33) *
              occ_func_0_0(0) +
          occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_0(0) *
              occ_func_0_0(28) +
          occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_1(0) *
              occ_func_0_0(35) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_1(6) *
              occ_func_0_0(34) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_1(4) *
              occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_0(27) * occ_func_0_1(26) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_0(40) * occ_func_0_0(41) *
              occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(7) *
              occ_func_0_1(21) +
          occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_0(0) *
              occ_func_0_1(20) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_0(2) *
              occ_func_0_1(79) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(7) *
              occ_func_0_0(85) +
          occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_0(0) *
              occ_func_0_0(39) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(5) *
              occ_func_0_0(37) +
          occ_func_0_1(80) * occ_func_0_0(24) * occ_func_0_0(22) *
              occ_func_0_0(0) +
          occ_func_0_0(85) * occ_func_0_0(32) * occ_func_0_0(39) *
              occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_0(11) *
              occ_func_0_1(29) +
          occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_0(0) *
              occ_func_0_1(22) +
          occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_0(6) *
              occ_func_0_1(80) +
          occ_func_0_0(85) * occ_func_0_0(39) * occ_func_0_0(37) *
              occ_func_0_1(0) +
          occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_0(0) *
              occ_func_0_1(24) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_0(5) *
              occ_func_0_1(22) +
          occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_0(4) *
              occ_func_0_1(80) +
          occ_func_0_0(85) * occ_func_0_0(37) * occ_func_0_0(32) *
              occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_0(10) * occ_func_0_0(0) *
              occ_func_0_1(29) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(3) *
              occ_func_0_1(24) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_0(1) *
              occ_func_0_1(80) +
          occ_func_0_0(84) * occ_func_0_0(38) * occ_func_0_0(31) *
              occ_func_0_1(0) +
          occ_func_0_0(11) * occ_func_0_0(12) * occ_func_0_0(0) *
              occ_func_0_1(30) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(2) *
              occ_func_0_1(81) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(1) *
              occ_func_0_1(23) +
          occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_1(0) *
              occ_func_0_0(33) +
          occ_func_0_0(83) * occ_func_0_0(34) * occ_func_0_1(28) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(3) *
              occ_func_0_0(82) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_1(2) *
              occ_func_0_0(27) +
          occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(12) *
              occ_func_0_0(86) +
          occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_0(7) *
              occ_func_0_0(41) +
          occ_func_0_1(1) * occ_func_0_0(6) * occ_func_0_0(0) *
              occ_func_0_0(40) +
          occ_func_0_1(79) * occ_func_0_0(20) * occ_func_0_0(21) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_0(42) * occ_func_0_0(40) *
              occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_0(0) *
              occ_func_0_1(21) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(4) *
              occ_func_0_1(19) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_0(1) *
              occ_func_0_1(79) +
          occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_1(0) *
              occ_func_0_0(34) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(5) *
              occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_0(33) * occ_func_0_1(27) *
              occ_func_0_0(0) +
          occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_1(2) *
              occ_func_0_0(28) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_0(9) *
              occ_func_0_0(38) +
          occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_0(8) *
              occ_func_0_0(84) +
          occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_0(0) *
              occ_func_0_0(36) +
          occ_func_0_0(81) * occ_func_0_1(23) * occ_func_0_0(25) *
              occ_func_0_0(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_2_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(12) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(12) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(11) *
               occ_func_0_0(39) +
           0.707107 * occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(11) *
               occ_func_0_0(39)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_1(0) *
               occ_func_0_0(32) +
           0.707107 * occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_0(0) *
               occ_func_0_0(32)) +
          (0.707107 * occ_func_0_0(80) * occ_func_0_0(22) * occ_func_0_1(29) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(80) * occ_func_0_1(22) * occ_func_0_0(29) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_0(35) * occ_func_0_1(34) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_0(35) * occ_func_0_0(34) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(8) *
               occ_func_0_0(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(8) *
               occ_func_0_0(82)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_1(0) *
               occ_func_0_0(27) +
           0.707107 * occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_0(0) *
               occ_func_0_0(27)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(6) *
               occ_func_0_0(26) +
           0.707107 * occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(6) *
               occ_func_0_0(26)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) * occ_func_0_0(38) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(36) * occ_func_0_0(38) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_0(9) *
               occ_func_0_0(25) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_0(9) *
               occ_func_0_0(25)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_0(7) *
               occ_func_0_0(81) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_0(7) *
               occ_func_0_0(81)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_0(0) *
               occ_func_0_0(23) +
           0.707107 * occ_func_0_1(6) * occ_func_0_0(4) * occ_func_0_0(0) *
               occ_func_0_0(23)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(11) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(11) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_0(42) +
           0.707107 * occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_0(42)) +
          (0.707107 * occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_0(41) +
           0.707107 * occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_0(41)) +
          (0.707107 * occ_func_0_0(79) * occ_func_0_0(19) * occ_func_0_1(20) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(79) * occ_func_0_1(19) * occ_func_0_0(20) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_0(31) * occ_func_0_1(36) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(84) * occ_func_0_1(31) * occ_func_0_0(36) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(10) *
               occ_func_0_0(30) +
           0.707107 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(10) *
               occ_func_0_0(30)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_1(0) *
               occ_func_0_0(25) +
           0.707107 * occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_0(0) *
               occ_func_0_0(25)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(5) *
               occ_func_0_0(81) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(5) *
               occ_func_0_0(81)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(10) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(10) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_1(0) *
               occ_func_0_0(42) +
           0.707107 * occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_0(0) *
               occ_func_0_0(42)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_1(4) *
               occ_func_0_0(40) +
           0.707107 * occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_0(4) *
               occ_func_0_0(40)) +
          (0.707107 * occ_func_0_0(79) * occ_func_0_0(21) * occ_func_0_1(19) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(79) * occ_func_0_1(21) * occ_func_0_0(19) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(12) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(12) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_0(28) * occ_func_0_0(35) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_0(28) * occ_func_0_0(35) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_0(9) *
               occ_func_0_1(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_0(9) *
               occ_func_0_0(82)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_0(0) *
               occ_func_0_1(26) +
           0.707107 * occ_func_0_1(4) * occ_func_0_0(1) * occ_func_0_0(0) *
               occ_func_0_0(26)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(11) *
               occ_func_0_0(84) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(11) *
               occ_func_0_0(84)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_1(10) *
               occ_func_0_0(36) +
           0.707107 * occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_0(10) *
               occ_func_0_0(36)) +
          (0.707107 * occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_1(0) *
               occ_func_0_0(31) +
           0.707107 * occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_0(0) *
               occ_func_0_0(31)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_0(25) * occ_func_0_1(30) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(81) * occ_func_0_1(25) * occ_func_0_0(30) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(41) * occ_func_0_1(42) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(41) * occ_func_0_0(42) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_0(20) +
           0.707107 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_0(20)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_0(19) +
           0.707107 * occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_0(19)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(3) *
               occ_func_0_0(79) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(3) *
               occ_func_0_0(79)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) * occ_func_0_0(0) *
               occ_func_0_0(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(12) * occ_func_0_0(0) *
               occ_func_0_0(38)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(6) *
               occ_func_0_0(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(6) *
               occ_func_0_0(84)) +
          (0.707107 * occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_0(1) *
               occ_func_0_0(31) +
           0.707107 * occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_0(1) *
               occ_func_0_0(31)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_1(30) * occ_func_0_0(23) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_0(30) * occ_func_0_0(23) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(9) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(9) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_0(37) +
           0.707107 * occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_0(37)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_0(32) +
           0.707107 * occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_0(32)) +
          (0.707107 * occ_func_0_0(80) * occ_func_0_0(29) * occ_func_0_1(24) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(80) * occ_func_0_1(29) * occ_func_0_0(24) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_0(12) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(12) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_0(10) *
               occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_0(10) *
               occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_0(26) * occ_func_0_0(33) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_0(26) * occ_func_0_0(33) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_0(0) *
               occ_func_0_1(28) +
           0.707107 * occ_func_0_1(3) * occ_func_0_0(1) * occ_func_0_0(0) *
               occ_func_0_0(28)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_0(0) *
               occ_func_0_0(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(7) * occ_func_0_0(0) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_0(6) *
               occ_func_0_0(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_0(6) *
               occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_0(4) *
               occ_func_0_0(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_0(4) *
               occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_1(27) * occ_func_0_0(26) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_0(27) * occ_func_0_0(26) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(40) * occ_func_0_1(41) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(40) * occ_func_0_0(41) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_0(21) +
           0.707107 * occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_0(21)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_0(20) +
           0.707107 * occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_0(20)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_1(2) *
               occ_func_0_0(79) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_0(2) *
               occ_func_0_0(79)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(7) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(7) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_1(0) *
               occ_func_0_0(39) +
           0.707107 * occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_0(0) *
               occ_func_0_0(39)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(5) *
               occ_func_0_0(37) +
           0.707107 * occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(5) *
               occ_func_0_0(37)) +
          (0.707107 * occ_func_0_0(80) * occ_func_0_0(24) * occ_func_0_1(22) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(80) * occ_func_0_1(24) * occ_func_0_0(22) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(32) * occ_func_0_1(39) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(32) * occ_func_0_0(39) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(11) *
               occ_func_0_0(29) +
           0.707107 * occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(11) *
               occ_func_0_0(29)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_1(0) *
               occ_func_0_0(22) +
           0.707107 * occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_0(0) *
               occ_func_0_0(22)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_1(6) *
               occ_func_0_0(80) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_0(6) *
               occ_func_0_0(80)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(39) * occ_func_0_1(37) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(39) * occ_func_0_0(37) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_1(0) *
               occ_func_0_0(24) +
           0.707107 * occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_0(0) *
               occ_func_0_0(24)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_1(5) *
               occ_func_0_0(22) +
           0.707107 * occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_0(5) *
               occ_func_0_0(22)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_1(4) *
               occ_func_0_0(80) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_0(4) *
               occ_func_0_0(80)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(37) * occ_func_0_1(32) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(37) * occ_func_0_0(32) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(12) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_0(29) +
           0.707107 * occ_func_0_0(12) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_0(29)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_0(24) +
           0.707107 * occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_0(24)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_1(1) *
               occ_func_0_0(80) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_0(1) *
               occ_func_0_0(80)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_0(38) * occ_func_0_1(31) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(38) * occ_func_0_0(31) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(12) * occ_func_0_1(0) *
               occ_func_0_0(30) +
           0.707107 * occ_func_0_1(11) * occ_func_0_0(12) * occ_func_0_0(0) *
               occ_func_0_0(30)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(2) *
               occ_func_0_0(81) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(2) *
               occ_func_0_0(81)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(1) *
               occ_func_0_0(23) +
           0.707107 * occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(1) *
               occ_func_0_0(23)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_0(0) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(11) * occ_func_0_0(0) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_0(34) * occ_func_0_0(28) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_0(34) * occ_func_0_0(28) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(3) *
               occ_func_0_1(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(3) *
               occ_func_0_0(82)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_0(2) *
               occ_func_0_1(27) +
           0.707107 * occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_0(2) *
               occ_func_0_0(27)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(12) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(12) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_0(41) +
           0.707107 * occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_0(41)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_0(40) +
           0.707107 * occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_0(40)) +
          (0.707107 * occ_func_0_0(79) * occ_func_0_0(20) * occ_func_0_1(21) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(79) * occ_func_0_1(20) * occ_func_0_0(21) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(42) * occ_func_0_1(40) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(42) * occ_func_0_0(40) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_1(0) *
               occ_func_0_0(21) +
           0.707107 * occ_func_0_0(12) * occ_func_0_1(9) * occ_func_0_0(0) *
               occ_func_0_0(21)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(4) *
               occ_func_0_0(19) +
           0.707107 * occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(4) *
               occ_func_0_0(19)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_1(1) *
               occ_func_0_0(79) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_0(1) *
               occ_func_0_0(79)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_0(0) *
               occ_func_0_1(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(11) * occ_func_0_0(0) *
               occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(5) *
               occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(5) *
               occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_0(33) * occ_func_0_0(27) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_0(33) * occ_func_0_0(27) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_0(2) *
               occ_func_0_1(28) +
           0.707107 * occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_0(2) *
               occ_func_0_0(28)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_1(9) *
               occ_func_0_0(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_0(9) *
               occ_func_0_0(38)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_1(8) *
               occ_func_0_0(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_0(8) *
               occ_func_0_0(84)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_1(0) *
               occ_func_0_0(36) +
           0.707107 * occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_0(0) *
               occ_func_0_0(36)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_0(23) * occ_func_0_1(25) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_0(23) * occ_func_0_0(25) *
               occ_func_0_0(0))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_3_at_0() const {
  return ((0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(12) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(12) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(11) *
               occ_func_0_0(39) +
           0.707107 * occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(11) *
               occ_func_0_0(39)) +
          (0.707107 * occ_func_0_1(1) * occ_func_0_0(2) * occ_func_0_1(0) *
               occ_func_0_0(32) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_0(0) *
               occ_func_0_0(32)) +
          (0.707107 * occ_func_0_1(80) * occ_func_0_0(22) * occ_func_0_1(29) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(80) * occ_func_0_1(22) * occ_func_0_0(29) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_0(35) * occ_func_0_1(34) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_0(35) * occ_func_0_0(34) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(8) *
               occ_func_0_1(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(8) *
               occ_func_0_1(82)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_1(0) *
               occ_func_0_1(27) +
           0.707107 * occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_0(0) *
               occ_func_0_1(27)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(6) *
               occ_func_0_1(26) +
           0.707107 * occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(6) *
               occ_func_0_1(26)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) * occ_func_0_0(38) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(36) * occ_func_0_0(38) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_0(9) *
               occ_func_0_1(25) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_0(9) *
               occ_func_0_1(25)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_0(7) *
               occ_func_0_1(81) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_0(7) *
               occ_func_0_1(81)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_0(0) *
               occ_func_0_1(23) +
           0.707107 * occ_func_0_1(6) * occ_func_0_0(4) * occ_func_0_0(0) *
               occ_func_0_1(23)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(11) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(11) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_0(42) +
           0.707107 * occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_0(42)) +
          (0.707107 * occ_func_0_1(2) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_0(41) +
           0.707107 * occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_0(41)) +
          (0.707107 * occ_func_0_1(79) * occ_func_0_0(19) * occ_func_0_1(20) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(79) * occ_func_0_1(19) * occ_func_0_0(20) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_0(31) * occ_func_0_1(36) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(84) * occ_func_0_1(31) * occ_func_0_0(36) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(10) *
               occ_func_0_1(30) +
           0.707107 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(10) *
               occ_func_0_1(30)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_1(0) *
               occ_func_0_1(25) +
           0.707107 * occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_0(0) *
               occ_func_0_1(25)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(5) *
               occ_func_0_1(81) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(5) *
               occ_func_0_1(81)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(10) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(10) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_1(0) *
               occ_func_0_0(42) +
           0.707107 * occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_0(0) *
               occ_func_0_0(42)) +
          (0.707107 * occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_1(4) *
               occ_func_0_0(40) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_0(4) *
               occ_func_0_0(40)) +
          (0.707107 * occ_func_0_1(79) * occ_func_0_0(21) * occ_func_0_1(19) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(79) * occ_func_0_1(21) * occ_func_0_0(19) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_1(28) * occ_func_0_0(35) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_1(28) * occ_func_0_0(35) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_0(9) *
               occ_func_0_1(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_0(9) *
               occ_func_0_0(82)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_0(0) *
               occ_func_0_1(26) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(1) * occ_func_0_0(0) *
               occ_func_0_0(26)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(11) *
               occ_func_0_0(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(11) *
               occ_func_0_0(84)) +
          (0.707107 * occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_1(10) *
               occ_func_0_0(36) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_0(10) *
               occ_func_0_0(36)) +
          (0.707107 * occ_func_0_1(2) * occ_func_0_0(3) * occ_func_0_1(0) *
               occ_func_0_0(31) +
           0.707107 * occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_0(0) *
               occ_func_0_0(31)) +
          (0.707107 * occ_func_0_1(81) * occ_func_0_0(25) * occ_func_0_1(30) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_1(25) * occ_func_0_0(30) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(41) * occ_func_0_1(42) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(41) * occ_func_0_0(42) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_1(20) +
           0.707107 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_1(20)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_1(19) +
           0.707107 * occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_1(19)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(3) *
               occ_func_0_1(79) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(3) *
               occ_func_0_1(79)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) * occ_func_0_1(0) *
               occ_func_0_0(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(12) * occ_func_0_1(0) *
               occ_func_0_0(38)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(6) *
               occ_func_0_0(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(6) *
               occ_func_0_0(84)) +
          (0.707107 * occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_1(1) *
               occ_func_0_0(31) +
           0.707107 * occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_1(1) *
               occ_func_0_0(31)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_1(30) * occ_func_0_1(23) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_0(30) * occ_func_0_1(23) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(9) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(9) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_0(37) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_0(37)) +
          (0.707107 * occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_0(32) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_0(32)) +
          (0.707107 * occ_func_0_1(80) * occ_func_0_0(29) * occ_func_0_1(24) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(80) * occ_func_0_1(29) * occ_func_0_0(24) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_0(10) *
               occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_0(10) *
               occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_1(26) * occ_func_0_0(33) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_1(26) * occ_func_0_0(33) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_0(0) *
               occ_func_0_1(28) +
           0.707107 * occ_func_0_1(3) * occ_func_0_1(1) * occ_func_0_0(0) *
               occ_func_0_0(28)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_1(0) *
               occ_func_0_0(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(7) * occ_func_0_1(0) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_1(6) *
               occ_func_0_0(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_1(6) *
               occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_1(4) *
               occ_func_0_0(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_1(4) *
               occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_1(27) * occ_func_0_1(26) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_0(27) * occ_func_0_1(26) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(40) * occ_func_0_1(41) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(40) * occ_func_0_0(41) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_1(21) +
           0.707107 * occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_1(21)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_1(20) +
           0.707107 * occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_1(20)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_1(2) *
               occ_func_0_1(79) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_0(2) *
               occ_func_0_1(79)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(7) *
               occ_func_0_0(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(7) *
               occ_func_0_0(85)) +
          (0.707107 * occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_1(0) *
               occ_func_0_0(39) +
           0.707107 * occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_0(0) *
               occ_func_0_0(39)) +
          (0.707107 * occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(5) *
               occ_func_0_0(37) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(5) *
               occ_func_0_0(37)) +
          (0.707107 * occ_func_0_1(80) * occ_func_0_0(24) * occ_func_0_1(22) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(80) * occ_func_0_1(24) * occ_func_0_0(22) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(32) * occ_func_0_1(39) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(32) * occ_func_0_0(39) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(12) * occ_func_0_0(0) * occ_func_0_1(11) *
               occ_func_0_1(29) +
           0.707107 * occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_0(11) *
               occ_func_0_1(29)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_1(0) *
               occ_func_0_1(22) +
           0.707107 * occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_0(0) *
               occ_func_0_1(22)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(1) * occ_func_0_1(6) *
               occ_func_0_1(80) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_0(6) *
               occ_func_0_1(80)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(39) * occ_func_0_1(37) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(39) * occ_func_0_0(37) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_1(0) *
               occ_func_0_1(24) +
           0.707107 * occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_0(0) *
               occ_func_0_1(24)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_1(5) *
               occ_func_0_1(22) +
           0.707107 * occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_0(5) *
               occ_func_0_1(22)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_1(4) *
               occ_func_0_1(80) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_0(4) *
               occ_func_0_1(80)) +
          (0.707107 * occ_func_0_0(85) * occ_func_0_0(37) * occ_func_0_1(32) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(85) * occ_func_0_1(37) * occ_func_0_0(32) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(12) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_1(29) +
           0.707107 * occ_func_0_0(12) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_1(29)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_1(24) +
           0.707107 * occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_1(24)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_1(1) *
               occ_func_0_1(80) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_0(1) *
               occ_func_0_1(80)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_0(38) * occ_func_0_1(31) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(38) * occ_func_0_0(31) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(12) * occ_func_0_1(0) *
               occ_func_0_1(30) +
           0.707107 * occ_func_0_1(11) * occ_func_0_0(12) * occ_func_0_0(0) *
               occ_func_0_1(30)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(2) *
               occ_func_0_1(81) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(2) *
               occ_func_0_1(81)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(1) *
               occ_func_0_1(23) +
           0.707107 * occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(1) *
               occ_func_0_1(23)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_0(34) * occ_func_0_1(28) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_0(34) * occ_func_0_1(28) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(3) *
               occ_func_0_1(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(3) *
               occ_func_0_0(82)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_1(2) *
               occ_func_0_1(27) +
           0.707107 * occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_1(2) *
               occ_func_0_0(27)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(12) *
               occ_func_0_0(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(12) *
               occ_func_0_0(86)) +
          (0.707107 * occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_0(41) +
           0.707107 * occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_0(41)) +
          (0.707107 * occ_func_0_1(1) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_0(40) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_0(40)) +
          (0.707107 * occ_func_0_1(79) * occ_func_0_0(20) * occ_func_0_1(21) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(79) * occ_func_0_1(20) * occ_func_0_0(21) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(86) * occ_func_0_0(42) * occ_func_0_1(40) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(86) * occ_func_0_1(42) * occ_func_0_0(40) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_1(0) *
               occ_func_0_1(21) +
           0.707107 * occ_func_0_0(12) * occ_func_0_1(9) * occ_func_0_0(0) *
               occ_func_0_1(21)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(4) *
               occ_func_0_1(19) +
           0.707107 * occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(4) *
               occ_func_0_1(19)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_1(1) *
               occ_func_0_1(79) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_0(1) *
               occ_func_0_1(79)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_1(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(5) *
               occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(5) *
               occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_0(33) * occ_func_0_1(27) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_0(33) * occ_func_0_1(27) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_1(2) *
               occ_func_0_1(28) +
           0.707107 * occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_1(2) *
               occ_func_0_0(28)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_1(9) *
               occ_func_0_0(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_0(9) *
               occ_func_0_0(38)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_1(8) *
               occ_func_0_0(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_0(8) *
               occ_func_0_0(84)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_1(0) *
               occ_func_0_0(36) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_0(0) *
               occ_func_0_0(36)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_1(23) * occ_func_0_1(25) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_1(23) * occ_func_0_0(25) *
               occ_func_0_0(0))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_4_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(12) *
              occ_func_0_0(85) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(11) *
              occ_func_0_0(39) +
          occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_1(0) *
              occ_func_0_0(32) +
          occ_func_0_0(80) * occ_func_0_1(22) * occ_func_0_1(29) *
              occ_func_0_0(0) +
          occ_func_0_1(83) * occ_func_0_0(35) * occ_func_0_1(34) *
              occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(8) *
              occ_func_0_0(82) +
          occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_1(0) *
              occ_func_0_0(27) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(6) *
              occ_func_0_0(26) +
          occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_0(38) *
              occ_func_0_0(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_0(9) *
              occ_func_0_0(25) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_0(7) *
              occ_func_0_0(81) +
          occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_0(0) *
              occ_func_0_0(23) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(11) *
              occ_func_0_0(86) +
          occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_1(8) *
              occ_func_0_0(42) +
          occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_1(0) *
              occ_func_0_0(41) +
          occ_func_0_0(79) * occ_func_0_1(19) * occ_func_0_1(20) *
              occ_func_0_0(0) +
          occ_func_0_0(84) * occ_func_0_1(31) * occ_func_0_1(36) *
              occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(10) *
              occ_func_0_0(30) +
          occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_1(0) *
              occ_func_0_0(25) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(5) *
              occ_func_0_0(81) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(10) *
              occ_func_0_0(86) +
          occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_1(0) *
              occ_func_0_0(42) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_1(4) *
              occ_func_0_0(40) +
          occ_func_0_0(79) * occ_func_0_1(21) * occ_func_0_1(19) *
              occ_func_0_0(0) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(12) *
              occ_func_0_1(33) +
          occ_func_0_1(83) * occ_func_0_0(28) * occ_func_0_0(35) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_0(9) *
              occ_func_0_1(82) +
          occ_func_0_1(4) * occ_func_0_0(1) * occ_func_0_0(0) *
              occ_func_0_1(26) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(11) *
              occ_func_0_0(84) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_1(10) *
              occ_func_0_0(36) +
          occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_1(0) *
              occ_func_0_0(31) +
          occ_func_0_0(81) * occ_func_0_1(25) * occ_func_0_1(30) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_1(41) * occ_func_0_1(42) *
              occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(8) *
              occ_func_0_0(20) +
          occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_1(0) *
              occ_func_0_0(19) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(3) *
              occ_func_0_0(79) +
          occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_0(0) *
              occ_func_0_0(38) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(6) *
              occ_func_0_0(84) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_0(1) *
              occ_func_0_0(31) +
          occ_func_0_1(81) * occ_func_0_1(30) * occ_func_0_0(23) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(9) *
              occ_func_0_0(85) +
          occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_1(0) *
              occ_func_0_0(37) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_1(3) *
              occ_func_0_0(32) +
          occ_func_0_0(80) * occ_func_0_1(29) * occ_func_0_1(24) *
              occ_func_0_0(0) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(12) *
              occ_func_0_1(35) +
          occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_0(10) *
              occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_0(26) * occ_func_0_0(33) *
              occ_func_0_1(0) +
          occ_func_0_1(3) * occ_func_0_0(1) * occ_func_0_0(0) *
              occ_func_0_1(28) +
          occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_0(0) *
              occ_func_0_0(35) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_0(6) *
              occ_func_0_0(34) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_0(4) *
              occ_func_0_0(83) +
          occ_func_0_1(82) * occ_func_0_1(27) * occ_func_0_0(26) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_1(40) * occ_func_0_1(41) *
              occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(7) *
              occ_func_0_0(21) +
          occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_1(0) *
              occ_func_0_0(20) +
          occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_1(2) *
              occ_func_0_0(79) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(7) *
              occ_func_0_0(85) +
          occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_1(0) *
              occ_func_0_0(39) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(5) *
              occ_func_0_0(37) +
          occ_func_0_0(80) * occ_func_0_1(24) * occ_func_0_1(22) *
              occ_func_0_0(0) +
          occ_func_0_0(85) * occ_func_0_1(32) * occ_func_0_1(39) *
              occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(11) *
              occ_func_0_0(29) +
          occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_1(0) *
              occ_func_0_0(22) +
          occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_1(6) *
              occ_func_0_0(80) +
          occ_func_0_0(85) * occ_func_0_1(39) * occ_func_0_1(37) *
              occ_func_0_0(0) +
          occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_1(0) *
              occ_func_0_0(24) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_1(5) *
              occ_func_0_0(22) +
          occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_1(4) *
              occ_func_0_0(80) +
          occ_func_0_0(85) * occ_func_0_1(37) * occ_func_0_1(32) *
              occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_1(10) * occ_func_0_1(0) *
              occ_func_0_0(29) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(3) *
              occ_func_0_0(24) +
          occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_1(1) *
              occ_func_0_0(80) +
          occ_func_0_1(84) * occ_func_0_0(38) * occ_func_0_1(31) *
              occ_func_0_0(0) +
          occ_func_0_1(11) * occ_func_0_0(12) * occ_func_0_1(0) *
              occ_func_0_0(30) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(2) *
              occ_func_0_0(81) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(1) *
              occ_func_0_0(23) +
          occ_func_0_1(10) * occ_func_0_0(11) * occ_func_0_0(0) *
              occ_func_0_1(33) +
          occ_func_0_1(83) * occ_func_0_0(34) * occ_func_0_0(28) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(3) *
              occ_func_0_1(82) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_0(2) *
              occ_func_0_1(27) +
          occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(12) *
              occ_func_0_0(86) +
          occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_1(7) *
              occ_func_0_0(41) +
          occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_1(0) *
              occ_func_0_0(40) +
          occ_func_0_0(79) * occ_func_0_1(20) * occ_func_0_1(21) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_1(42) * occ_func_0_1(40) *
              occ_func_0_0(0) +
          occ_func_0_0(12) * occ_func_0_1(9) * occ_func_0_1(0) *
              occ_func_0_0(21) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(4) *
              occ_func_0_0(19) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_1(1) *
              occ_func_0_0(79) +
          occ_func_0_1(8) * occ_func_0_0(11) * occ_func_0_0(0) *
              occ_func_0_1(34) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(5) *
              occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_0(33) * occ_func_0_0(27) *
              occ_func_0_1(0) +
          occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_0(2) *
              occ_func_0_1(28) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_1(9) *
              occ_func_0_0(38) +
          occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_1(8) *
              occ_func_0_0(84) +
          occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_1(0) *
              occ_func_0_0(36) +
          occ_func_0_1(81) * occ_func_0_0(23) * occ_func_0_1(25) *
              occ_func_0_0(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_5_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(12) *
              occ_func_0_0(85) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(11) *
              occ_func_0_0(39) +
          occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_1(0) *
              occ_func_0_0(32) +
          occ_func_0_1(80) * occ_func_0_1(22) * occ_func_0_1(29) *
              occ_func_0_0(0) +
          occ_func_0_1(83) * occ_func_0_0(35) * occ_func_0_1(34) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(8) *
              occ_func_0_1(82) +
          occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_1(0) *
              occ_func_0_1(27) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(6) *
              occ_func_0_1(26) +
          occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_0(38) *
              occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_0(9) *
              occ_func_0_1(25) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_0(7) *
              occ_func_0_1(81) +
          occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_0(0) *
              occ_func_0_1(23) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(11) *
              occ_func_0_0(86) +
          occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_1(8) *
              occ_func_0_0(42) +
          occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_1(0) *
              occ_func_0_0(41) +
          occ_func_0_1(79) * occ_func_0_1(19) * occ_func_0_1(20) *
              occ_func_0_0(0) +
          occ_func_0_0(84) * occ_func_0_1(31) * occ_func_0_1(36) *
              occ_func_0_1(0) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(10) *
              occ_func_0_1(30) +
          occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_1(0) *
              occ_func_0_1(25) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(5) *
              occ_func_0_1(81) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(10) *
              occ_func_0_0(86) +
          occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_1(0) *
              occ_func_0_0(42) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_1(4) *
              occ_func_0_0(40) +
          occ_func_0_1(79) * occ_func_0_1(21) * occ_func_0_1(19) *
              occ_func_0_0(0) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(12) *
              occ_func_0_1(33) +
          occ_func_0_1(83) * occ_func_0_1(28) * occ_func_0_0(35) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_0(9) *
              occ_func_0_1(82) +
          occ_func_0_1(4) * occ_func_0_1(1) * occ_func_0_0(0) *
              occ_func_0_1(26) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(11) *
              occ_func_0_0(84) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_1(10) *
              occ_func_0_0(36) +
          occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_1(0) *
              occ_func_0_0(31) +
          occ_func_0_1(81) * occ_func_0_1(25) * occ_func_0_1(30) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_1(41) * occ_func_0_1(42) *
              occ_func_0_1(0) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(8) *
              occ_func_0_1(20) +
          occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_1(0) *
              occ_func_0_1(19) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(3) *
              occ_func_0_1(79) +
          occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_1(0) *
              occ_func_0_0(38) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(6) *
              occ_func_0_0(84) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_1(1) *
              occ_func_0_0(31) +
          occ_func_0_1(81) * occ_func_0_1(30) * occ_func_0_1(23) *
              occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(9) *
              occ_func_0_0(85) +
          occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_1(0) *
              occ_func_0_0(37) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_1(3) *
              occ_func_0_0(32) +
          occ_func_0_1(80) * occ_func_0_1(29) * occ_func_0_1(24) *
              occ_func_0_0(0) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(12) *
              occ_func_0_1(35) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_0(10) *
              occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_1(26) * occ_func_0_0(33) *
              occ_func_0_1(0) +
          occ_func_0_1(3) * occ_func_0_1(1) * occ_func_0_0(0) *
              occ_func_0_1(28) +
          occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_1(0) *
              occ_func_0_0(35) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_1(6) *
              occ_func_0_0(34) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_1(4) *
              occ_func_0_0(83) +
          occ_func_0_1(82) * occ_func_0_1(27) * occ_func_0_1(26) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_1(40) * occ_func_0_1(41) *
              occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(7) *
              occ_func_0_1(21) +
          occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_1(0) *
              occ_func_0_1(20) +
          occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_1(2) *
              occ_func_0_1(79) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(7) *
              occ_func_0_0(85) +
          occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_1(0) *
              occ_func_0_0(39) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(5) *
              occ_func_0_0(37) +
          occ_func_0_1(80) * occ_func_0_1(24) * occ_func_0_1(22) *
              occ_func_0_0(0) +
          occ_func_0_0(85) * occ_func_0_1(32) * occ_func_0_1(39) *
              occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_1(0) * occ_func_0_1(11) *
              occ_func_0_1(29) +
          occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_1(0) *
              occ_func_0_1(22) +
          occ_func_0_0(0) * occ_func_0_1(1) * occ_func_0_1(6) *
              occ_func_0_1(80) +
          occ_func_0_0(85) * occ_func_0_1(39) * occ_func_0_1(37) *
              occ_func_0_1(0) +
          occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_1(0) *
              occ_func_0_1(24) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_1(5) *
              occ_func_0_1(22) +
          occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_1(4) *
              occ_func_0_1(80) +
          occ_func_0_0(85) * occ_func_0_1(37) * occ_func_0_1(32) *
              occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_1(10) * occ_func_0_1(0) *
              occ_func_0_1(29) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(3) *
              occ_func_0_1(24) +
          occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_1(1) *
              occ_func_0_1(80) +
          occ_func_0_1(84) * occ_func_0_0(38) * occ_func_0_1(31) *
              occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_0(12) * occ_func_0_1(0) *
              occ_func_0_1(30) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(2) *
              occ_func_0_1(81) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(1) *
              occ_func_0_1(23) +
          occ_func_0_1(10) * occ_func_0_0(11) * occ_func_0_1(0) *
              occ_func_0_1(33) +
          occ_func_0_1(83) * occ_func_0_0(34) * occ_func_0_1(28) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(3) *
              occ_func_0_1(82) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_1(2) *
              occ_func_0_1(27) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(12) *
              occ_func_0_0(86) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_1(7) *
              occ_func_0_0(41) +
          occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_1(0) *
              occ_func_0_0(40) +
          occ_func_0_1(79) * occ_func_0_1(20) * occ_func_0_1(21) *
              occ_func_0_0(0) +
          occ_func_0_0(86) * occ_func_0_1(42) * occ_func_0_1(40) *
              occ_func_0_1(0) +
          occ_func_0_0(12) * occ_func_0_1(9) * occ_func_0_1(0) *
              occ_func_0_1(21) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(4) *
              occ_func_0_1(19) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_1(1) *
              occ_func_0_1(79) +
          occ_func_0_1(8) * occ_func_0_0(11) * occ_func_0_1(0) *
              occ_func_0_1(34) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(5) *
              occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_0(33) * occ_func_0_1(27) *
              occ_func_0_1(0) +
          occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_1(2) *
              occ_func_0_1(28) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_1(9) *
              occ_func_0_0(38) +
          occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_1(8) *
              occ_func_0_0(84) +
          occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_1(0) *
              occ_func_0_0(36) +
          occ_func_0_1(81) * occ_func_0_1(23) * occ_func_0_1(25) *
              occ_func_0_0(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_6_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(12) *
              occ_func_0_1(85) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(11) *
              occ_func_0_1(39) +
          occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_0(0) *
              occ_func_0_1(32) +
          occ_func_0_0(80) * occ_func_0_0(22) * occ_func_0_0(29) *
              occ_func_0_1(0) +
          occ_func_0_0(83) * occ_func_0_1(35) * occ_func_0_0(34) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(8) *
              occ_func_0_0(82) +
          occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_0(0) *
              occ_func_0_0(27) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(6) *
              occ_func_0_0(26) +
          occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_1(38) *
              occ_func_0_0(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_1(9) *
              occ_func_0_0(25) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_1(7) *
              occ_func_0_0(81) +
          occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_1(0) *
              occ_func_0_0(23) +
          occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_0(11) *
              occ_func_0_1(86) +
          occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_0(8) *
              occ_func_0_1(42) +
          occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_0(0) *
              occ_func_0_1(41) +
          occ_func_0_0(79) * occ_func_0_0(19) * occ_func_0_0(20) *
              occ_func_0_1(0) +
          occ_func_0_1(84) * occ_func_0_0(31) * occ_func_0_0(36) *
              occ_func_0_0(0) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(10) *
              occ_func_0_0(30) +
          occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_0(0) *
              occ_func_0_0(25) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(5) *
              occ_func_0_0(81) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(10) *
              occ_func_0_1(86) +
          occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_0(0) *
              occ_func_0_1(42) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_0(4) *
              occ_func_0_1(40) +
          occ_func_0_0(79) * occ_func_0_0(21) * occ_func_0_0(19) *
              occ_func_0_1(0) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(12) *
              occ_func_0_0(33) +
          occ_func_0_0(83) * occ_func_0_0(28) * occ_func_0_1(35) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_1(9) *
              occ_func_0_0(82) +
          occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_1(0) *
              occ_func_0_0(26) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(11) *
              occ_func_0_1(84) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_0(10) *
              occ_func_0_1(36) +
          occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_0(0) *
              occ_func_0_1(31) +
          occ_func_0_0(81) * occ_func_0_0(25) * occ_func_0_0(30) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_0(41) * occ_func_0_0(42) *
              occ_func_0_0(0) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(8) *
              occ_func_0_0(20) +
          occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_0(0) *
              occ_func_0_0(19) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(3) *
              occ_func_0_0(79) +
          occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_0(0) *
              occ_func_0_1(38) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(6) *
              occ_func_0_1(84) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_0(1) *
              occ_func_0_1(31) +
          occ_func_0_0(81) * occ_func_0_0(30) * occ_func_0_0(23) *
              occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(9) *
              occ_func_0_1(85) +
          occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_0(0) *
              occ_func_0_1(37) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_0(3) *
              occ_func_0_1(32) +
          occ_func_0_0(80) * occ_func_0_0(29) * occ_func_0_0(24) *
              occ_func_0_1(0) +
          occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(12) *
              occ_func_0_0(35) +
          occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_1(10) *
              occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_0(26) * occ_func_0_1(33) *
              occ_func_0_0(0) +
          occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_1(0) *
              occ_func_0_0(28) +
          occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_0(0) *
              occ_func_0_1(35) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_0(6) *
              occ_func_0_1(34) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_0(4) *
              occ_func_0_1(83) +
          occ_func_0_0(82) * occ_func_0_0(27) * occ_func_0_0(26) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_0(40) * occ_func_0_0(41) *
              occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(7) *
              occ_func_0_0(21) +
          occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_0(0) *
              occ_func_0_0(20) +
          occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_0(2) *
              occ_func_0_0(79) +
          occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(7) *
              occ_func_0_1(85) +
          occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_0(0) *
              occ_func_0_1(39) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(5) *
              occ_func_0_1(37) +
          occ_func_0_0(80) * occ_func_0_0(24) * occ_func_0_0(22) *
              occ_func_0_1(0) +
          occ_func_0_1(85) * occ_func_0_0(32) * occ_func_0_0(39) *
              occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(11) *
              occ_func_0_0(29) +
          occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_0(0) *
              occ_func_0_0(22) +
          occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_0(6) *
              occ_func_0_0(80) +
          occ_func_0_1(85) * occ_func_0_0(39) * occ_func_0_0(37) *
              occ_func_0_0(0) +
          occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_0(0) *
              occ_func_0_0(24) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_0(5) *
              occ_func_0_0(22) +
          occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_0(4) *
              occ_func_0_0(80) +
          occ_func_0_1(85) * occ_func_0_0(37) * occ_func_0_0(32) *
              occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_0(10) * occ_func_0_0(0) *
              occ_func_0_0(29) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(3) *
              occ_func_0_0(24) +
          occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_0(1) *
              occ_func_0_0(80) +
          occ_func_0_0(84) * occ_func_0_1(38) * occ_func_0_0(31) *
              occ_func_0_0(0) +
          occ_func_0_0(11) * occ_func_0_1(12) * occ_func_0_0(0) *
              occ_func_0_0(30) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(2) *
              occ_func_0_0(81) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(1) *
              occ_func_0_0(23) +
          occ_func_0_0(10) * occ_func_0_1(11) * occ_func_0_0(0) *
              occ_func_0_0(33) +
          occ_func_0_0(83) * occ_func_0_1(34) * occ_func_0_0(28) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(3) *
              occ_func_0_0(82) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_0(2) *
              occ_func_0_0(27) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_0(12) *
              occ_func_0_1(86) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_0(7) *
              occ_func_0_1(41) +
          occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_0(0) *
              occ_func_0_1(40) +
          occ_func_0_0(79) * occ_func_0_0(20) * occ_func_0_0(21) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_0(42) * occ_func_0_0(40) *
              occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_0(9) * occ_func_0_0(0) *
              occ_func_0_0(21) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(4) *
              occ_func_0_0(19) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_0(1) *
              occ_func_0_0(79) +
          occ_func_0_0(8) * occ_func_0_1(11) * occ_func_0_0(0) *
              occ_func_0_0(34) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(5) *
              occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_1(33) * occ_func_0_0(27) *
              occ_func_0_0(0) +
          occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_0(2) *
              occ_func_0_0(28) +
          occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_0(9) *
              occ_func_0_1(38) +
          occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_0(8) *
              occ_func_0_1(84) +
          occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_0(0) *
              occ_func_0_1(36) +
          occ_func_0_0(81) * occ_func_0_0(23) * occ_func_0_0(25) *
              occ_func_0_1(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_7_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(12) *
              occ_func_0_1(85) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(11) *
              occ_func_0_1(39) +
          occ_func_0_1(1) * occ_func_0_0(2) * occ_func_0_0(0) *
              occ_func_0_1(32) +
          occ_func_0_1(80) * occ_func_0_0(22) * occ_func_0_0(29) *
              occ_func_0_1(0) +
          occ_func_0_0(83) * occ_func_0_1(35) * occ_func_0_0(34) *
              occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(8) *
              occ_func_0_1(82) +
          occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_0(0) *
              occ_func_0_1(27) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(6) *
              occ_func_0_1(26) +
          occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_1(38) *
              occ_func_0_1(0) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_1(9) *
              occ_func_0_1(25) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_1(7) *
              occ_func_0_1(81) +
          occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_1(0) *
              occ_func_0_1(23) +
          occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_0(11) *
              occ_func_0_1(86) +
          occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_0(8) *
              occ_func_0_1(42) +
          occ_func_0_1(2) * occ_func_0_0(5) * occ_func_0_0(0) *
              occ_func_0_1(41) +
          occ_func_0_1(79) * occ_func_0_0(19) * occ_func_0_0(20) *
              occ_func_0_1(0) +
          occ_func_0_1(84) * occ_func_0_0(31) * occ_func_0_0(36) *
              occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(10) *
              occ_func_0_1(30) +
          occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_0(0) *
              occ_func_0_1(25) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(5) *
              occ_func_0_1(81) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(10) *
              occ_func_0_1(86) +
          occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_0(0) *
              occ_func_0_1(42) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_0(4) *
              occ_func_0_1(40) +
          occ_func_0_1(79) * occ_func_0_0(21) * occ_func_0_0(19) *
              occ_func_0_1(0) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(12) *
              occ_func_0_0(33) +
          occ_func_0_0(83) * occ_func_0_1(28) * occ_func_0_1(35) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_1(9) *
              occ_func_0_0(82) +
          occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_1(0) *
              occ_func_0_0(26) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(11) *
              occ_func_0_1(84) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_0(10) *
              occ_func_0_1(36) +
          occ_func_0_1(2) * occ_func_0_0(3) * occ_func_0_0(0) *
              occ_func_0_1(31) +
          occ_func_0_1(81) * occ_func_0_0(25) * occ_func_0_0(30) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_0(41) * occ_func_0_0(42) *
              occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(8) *
              occ_func_0_1(20) +
          occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_0(0) *
              occ_func_0_1(19) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(3) *
              occ_func_0_1(79) +
          occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_1(0) *
              occ_func_0_1(38) +
          occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(6) *
              occ_func_0_1(84) +
          occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_1(1) *
              occ_func_0_1(31) +
          occ_func_0_0(81) * occ_func_0_0(30) * occ_func_0_1(23) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(9) *
              occ_func_0_1(85) +
          occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_0(0) *
              occ_func_0_1(37) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_0(3) *
              occ_func_0_1(32) +
          occ_func_0_1(80) * occ_func_0_0(29) * occ_func_0_0(24) *
              occ_func_0_1(0) +
          occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(12) *
              occ_func_0_0(35) +
          occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_1(10) *
              occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_1(26) * occ_func_0_1(33) *
              occ_func_0_0(0) +
          occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_1(0) *
              occ_func_0_0(28) +
          occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_1(0) *
              occ_func_0_1(35) +
          occ_func_0_0(8) * occ_func_0_0(0) * occ_func_0_1(6) *
              occ_func_0_1(34) +
          occ_func_0_0(0) * occ_func_0_0(5) * occ_func_0_1(4) *
              occ_func_0_1(83) +
          occ_func_0_0(82) * occ_func_0_0(27) * occ_func_0_1(26) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_0(40) * occ_func_0_0(41) *
              occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(7) *
              occ_func_0_1(21) +
          occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_0(0) *
              occ_func_0_1(20) +
          occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_0(2) *
              occ_func_0_1(79) +
          occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(7) *
              occ_func_0_1(85) +
          occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_0(0) *
              occ_func_0_1(39) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(5) *
              occ_func_0_1(37) +
          occ_func_0_1(80) * occ_func_0_0(24) * occ_func_0_0(22) *
              occ_func_0_1(0) +
          occ_func_0_1(85) * occ_func_0_0(32) * occ_func_0_0(39) *
              occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_0(11) *
              occ_func_0_1(29) +
          occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_0(0) *
              occ_func_0_1(22) +
          occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_0(6) *
              occ_func_0_1(80) +
          occ_func_0_1(85) * occ_func_0_0(39) * occ_func_0_0(37) *
              occ_func_0_1(0) +
          occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_0(0) *
              occ_func_0_1(24) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_0(5) *
              occ_func_0_1(22) +
          occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_0(4) *
              occ_func_0_1(80) +
          occ_func_0_1(85) * occ_func_0_0(37) * occ_func_0_0(32) *
              occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_0(10) * occ_func_0_0(0) *
              occ_func_0_1(29) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_0(3) *
              occ_func_0_1(24) +
          occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_0(1) *
              occ_func_0_1(80) +
          occ_func_0_0(84) * occ_func_0_1(38) * occ_func_0_0(31) *
              occ_func_0_1(0) +
          occ_func_0_0(11) * occ_func_0_1(12) * occ_func_0_0(0) *
              occ_func_0_1(30) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(2) *
              occ_func_0_1(81) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(1) *
              occ_func_0_1(23) +
          occ_func_0_0(10) * occ_func_0_1(11) * occ_func_0_1(0) *
              occ_func_0_0(33) +
          occ_func_0_0(83) * occ_func_0_1(34) * occ_func_0_1(28) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(3) *
              occ_func_0_0(82) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_1(2) *
              occ_func_0_0(27) +
          occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(12) *
              occ_func_0_1(86) +
          occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_0(7) *
              occ_func_0_1(41) +
          occ_func_0_1(1) * occ_func_0_0(6) * occ_func_0_0(0) *
              occ_func_0_1(40) +
          occ_func_0_1(79) * occ_func_0_0(20) * occ_func_0_0(21) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_0(42) * occ_func_0_0(40) *
              occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_0(9) * occ_func_0_0(0) *
              occ_func_0_1(21) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(4) *
              occ_func_0_1(19) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_0(1) *
              occ_func_0_1(79) +
          occ_func_0_0(8) * occ_func_0_1(11) * occ_func_0_1(0) *
              occ_func_0_0(34) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(5) *
              occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_1(33) * occ_func_0_1(27) *
              occ_func_0_0(0) +
          occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_1(2) *
              occ_func_0_0(28) +
          occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_0(9) *
              occ_func_0_1(38) +
          occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_0(8) *
              occ_func_0_1(84) +
          occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_0(0) *
              occ_func_0_1(36) +
          occ_func_0_0(81) * occ_func_0_1(23) * occ_func_0_0(25) *
              occ_func_0_1(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_8_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(12) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(12) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(11) *
               occ_func_0_1(39) +
           0.707107 * occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(11) *
               occ_func_0_1(39)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_1(0) *
               occ_func_0_1(32) +
           0.707107 * occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_0(0) *
               occ_func_0_1(32)) +
          (0.707107 * occ_func_0_0(80) * occ_func_0_0(22) * occ_func_0_1(29) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(80) * occ_func_0_1(22) * occ_func_0_0(29) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_1(35) * occ_func_0_1(34) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_1(35) * occ_func_0_0(34) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(8) *
               occ_func_0_0(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(8) *
               occ_func_0_0(82)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_1(0) *
               occ_func_0_0(27) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_0(0) *
               occ_func_0_0(27)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(6) *
               occ_func_0_0(26) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(6) *
               occ_func_0_0(26)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) * occ_func_0_1(38) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(36) * occ_func_0_1(38) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_1(9) *
               occ_func_0_0(25) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_1(9) *
               occ_func_0_0(25)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_1(7) *
               occ_func_0_0(81) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_1(7) *
               occ_func_0_0(81)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_1(0) *
               occ_func_0_0(23) +
           0.707107 * occ_func_0_1(6) * occ_func_0_0(4) * occ_func_0_1(0) *
               occ_func_0_0(23)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(10) * occ_func_0_1(11) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(11) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_1(42) +
           0.707107 * occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_1(42)) +
          (0.707107 * occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_1(41) +
           0.707107 * occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_1(41)) +
          (0.707107 * occ_func_0_0(79) * occ_func_0_0(19) * occ_func_0_1(20) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(79) * occ_func_0_1(19) * occ_func_0_0(20) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(84) * occ_func_0_0(31) * occ_func_0_1(36) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_1(31) * occ_func_0_0(36) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(10) *
               occ_func_0_0(30) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(10) *
               occ_func_0_0(30)) +
          (0.707107 * occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_1(0) *
               occ_func_0_0(25) +
           0.707107 * occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_0(0) *
               occ_func_0_0(25)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(5) *
               occ_func_0_0(81) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(5) *
               occ_func_0_0(81)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(10) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(10) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_1(0) *
               occ_func_0_1(42) +
           0.707107 * occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_0(0) *
               occ_func_0_1(42)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_1(4) *
               occ_func_0_1(40) +
           0.707107 * occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_0(4) *
               occ_func_0_1(40)) +
          (0.707107 * occ_func_0_0(79) * occ_func_0_0(21) * occ_func_0_1(19) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(79) * occ_func_0_1(21) * occ_func_0_0(19) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_0(28) * occ_func_0_1(35) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_0(28) * occ_func_0_1(35) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_1(9) *
               occ_func_0_1(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_1(9) *
               occ_func_0_0(82)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_1(0) *
               occ_func_0_1(26) +
           0.707107 * occ_func_0_1(4) * occ_func_0_0(1) * occ_func_0_1(0) *
               occ_func_0_0(26)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(11) *
               occ_func_0_1(84) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(11) *
               occ_func_0_1(84)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_1(10) *
               occ_func_0_1(36) +
           0.707107 * occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_0(10) *
               occ_func_0_1(36)) +
          (0.707107 * occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_1(0) *
               occ_func_0_1(31) +
           0.707107 * occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_0(0) *
               occ_func_0_1(31)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_0(25) * occ_func_0_1(30) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(81) * occ_func_0_1(25) * occ_func_0_0(30) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(41) * occ_func_0_1(42) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(41) * occ_func_0_0(42) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_0(20) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_0(20)) +
          (0.707107 * occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_0(19) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_0(19)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(3) *
               occ_func_0_0(79) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(3) *
               occ_func_0_0(79)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) * occ_func_0_0(0) *
               occ_func_0_1(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(12) * occ_func_0_0(0) *
               occ_func_0_1(38)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(6) *
               occ_func_0_1(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_0(6) *
               occ_func_0_1(84)) +
          (0.707107 * occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_0(1) *
               occ_func_0_1(31) +
           0.707107 * occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_0(1) *
               occ_func_0_1(31)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_1(30) * occ_func_0_0(23) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_0(30) * occ_func_0_0(23) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(9) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(9) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_1(37) +
           0.707107 * occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_1(37)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_1(32) +
           0.707107 * occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_1(32)) +
          (0.707107 * occ_func_0_0(80) * occ_func_0_0(29) * occ_func_0_1(24) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(80) * occ_func_0_1(29) * occ_func_0_0(24) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(4) * occ_func_0_1(10) *
               occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_1(10) *
               occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_0(26) * occ_func_0_1(33) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_0(26) * occ_func_0_1(33) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_1(0) *
               occ_func_0_1(28) +
           0.707107 * occ_func_0_1(3) * occ_func_0_0(1) * occ_func_0_1(0) *
               occ_func_0_0(28)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_0(0) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(7) * occ_func_0_0(0) *
               occ_func_0_1(35)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_0(6) *
               occ_func_0_1(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_0(6) *
               occ_func_0_1(34)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_0(4) *
               occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_0(4) *
               occ_func_0_1(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_1(27) * occ_func_0_0(26) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_0(27) * occ_func_0_0(26) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(40) * occ_func_0_1(41) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(40) * occ_func_0_0(41) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_0(21) +
           0.707107 * occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_0(21)) +
          (0.707107 * occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_0(20) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_0(20)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_1(2) *
               occ_func_0_0(79) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_0(2) *
               occ_func_0_0(79)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(7) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(7) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_1(0) *
               occ_func_0_1(39) +
           0.707107 * occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_0(0) *
               occ_func_0_1(39)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(5) *
               occ_func_0_1(37) +
           0.707107 * occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(5) *
               occ_func_0_1(37)) +
          (0.707107 * occ_func_0_0(80) * occ_func_0_0(24) * occ_func_0_1(22) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(80) * occ_func_0_1(24) * occ_func_0_0(22) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(32) * occ_func_0_1(39) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(32) * occ_func_0_0(39) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(11) *
               occ_func_0_0(29) +
           0.707107 * occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(11) *
               occ_func_0_0(29)) +
          (0.707107 * occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_1(0) *
               occ_func_0_0(22) +
           0.707107 * occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_0(0) *
               occ_func_0_0(22)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_1(6) *
               occ_func_0_0(80) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_0(6) *
               occ_func_0_0(80)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(39) * occ_func_0_1(37) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(39) * occ_func_0_0(37) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_1(0) *
               occ_func_0_0(24) +
           0.707107 * occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_0(0) *
               occ_func_0_0(24)) +
          (0.707107 * occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_1(5) *
               occ_func_0_0(22) +
           0.707107 * occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_0(5) *
               occ_func_0_0(22)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_1(4) *
               occ_func_0_0(80) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_0(4) *
               occ_func_0_0(80)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(37) * occ_func_0_1(32) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(37) * occ_func_0_0(32) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(12) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_0(29) +
           0.707107 * occ_func_0_1(12) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_0(29)) +
          (0.707107 * occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_0(24) +
           0.707107 * occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_0(24)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_1(1) *
               occ_func_0_0(80) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_0(1) *
               occ_func_0_0(80)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(38) * occ_func_0_1(31) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_1(38) * occ_func_0_0(31) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_1(12) * occ_func_0_1(0) *
               occ_func_0_0(30) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(12) * occ_func_0_0(0) *
               occ_func_0_0(30)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(2) *
               occ_func_0_0(81) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(2) *
               occ_func_0_0(81)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(1) *
               occ_func_0_0(23) +
           0.707107 * occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(1) *
               occ_func_0_0(23)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_1(34) * occ_func_0_0(28) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_1(34) * occ_func_0_0(28) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(3) *
               occ_func_0_1(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(3) *
               occ_func_0_0(82)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_0(2) *
               occ_func_0_1(27) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_0(2) *
               occ_func_0_0(27)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(11) * occ_func_0_1(12) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_0(12) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_0(2) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_1(41) +
           0.707107 * occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_1(41)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_1(40) +
           0.707107 * occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_1(40)) +
          (0.707107 * occ_func_0_0(79) * occ_func_0_0(20) * occ_func_0_1(21) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_0(79) * occ_func_0_1(20) * occ_func_0_0(21) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(42) * occ_func_0_1(40) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(42) * occ_func_0_0(40) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_1(12) * occ_func_0_0(9) * occ_func_0_1(0) *
               occ_func_0_0(21) +
           0.707107 * occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_0(0) *
               occ_func_0_0(21)) +
          (0.707107 * occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(4) *
               occ_func_0_0(19) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(4) *
               occ_func_0_0(19)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_1(1) *
               occ_func_0_0(79) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_0(1) *
               occ_func_0_0(79)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_1(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_0(5) *
               occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(5) *
               occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_1(33) * occ_func_0_0(27) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_1(33) * occ_func_0_0(27) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_0(2) *
               occ_func_0_1(28) +
           0.707107 * occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_0(2) *
               occ_func_0_0(28)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_0(0) * occ_func_0_1(9) *
               occ_func_0_1(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_0(9) *
               occ_func_0_1(38)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(6) * occ_func_0_1(8) *
               occ_func_0_1(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_0(8) *
               occ_func_0_1(84)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_1(0) *
               occ_func_0_1(36) +
           0.707107 * occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_0(0) *
               occ_func_0_1(36)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_0(23) * occ_func_0_1(25) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_0(23) * occ_func_0_0(25) *
               occ_func_0_1(0))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_9_at_0() const {
  return ((0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(12) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(12) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(11) *
               occ_func_0_1(39) +
           0.707107 * occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(11) *
               occ_func_0_1(39)) +
          (0.707107 * occ_func_0_1(1) * occ_func_0_0(2) * occ_func_0_1(0) *
               occ_func_0_1(32) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_0(0) *
               occ_func_0_1(32)) +
          (0.707107 * occ_func_0_1(80) * occ_func_0_0(22) * occ_func_0_1(29) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(80) * occ_func_0_1(22) * occ_func_0_0(29) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_1(35) * occ_func_0_1(34) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_1(35) * occ_func_0_0(34) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(8) *
               occ_func_0_1(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(8) *
               occ_func_0_1(82)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_1(0) *
               occ_func_0_1(27) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_0(0) *
               occ_func_0_1(27)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(6) *
               occ_func_0_1(26) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(6) *
               occ_func_0_1(26)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) * occ_func_0_1(38) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_0(36) * occ_func_0_1(38) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_1(9) *
               occ_func_0_1(25) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_1(9) *
               occ_func_0_1(25)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_1(7) *
               occ_func_0_1(81) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_1(7) *
               occ_func_0_1(81)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_1(0) *
               occ_func_0_1(23) +
           0.707107 * occ_func_0_1(6) * occ_func_0_0(4) * occ_func_0_1(0) *
               occ_func_0_1(23)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(10) * occ_func_0_1(11) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(11) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_1(3) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_1(42) +
           0.707107 * occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_1(42)) +
          (0.707107 * occ_func_0_1(2) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_1(41) +
           0.707107 * occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_1(41)) +
          (0.707107 * occ_func_0_1(79) * occ_func_0_0(19) * occ_func_0_1(20) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(79) * occ_func_0_1(19) * occ_func_0_0(20) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(84) * occ_func_0_0(31) * occ_func_0_1(36) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_1(31) * occ_func_0_0(36) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(10) *
               occ_func_0_1(30) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(10) *
               occ_func_0_1(30)) +
          (0.707107 * occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_1(0) *
               occ_func_0_1(25) +
           0.707107 * occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_0(0) *
               occ_func_0_1(25)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(5) *
               occ_func_0_1(81) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(5) *
               occ_func_0_1(81)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(10) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(10) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_1(0) *
               occ_func_0_1(42) +
           0.707107 * occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_0(0) *
               occ_func_0_1(42)) +
          (0.707107 * occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_1(4) *
               occ_func_0_1(40) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_0(4) *
               occ_func_0_1(40)) +
          (0.707107 * occ_func_0_1(79) * occ_func_0_0(21) * occ_func_0_1(19) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(79) * occ_func_0_1(21) * occ_func_0_0(19) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(12) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(12) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_1(28) * occ_func_0_1(35) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_1(28) * occ_func_0_1(35) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_1(9) *
               occ_func_0_1(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_1(9) *
               occ_func_0_0(82)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_1(0) *
               occ_func_0_1(26) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(1) * occ_func_0_1(0) *
               occ_func_0_0(26)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(11) *
               occ_func_0_1(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(11) *
               occ_func_0_1(84)) +
          (0.707107 * occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_1(10) *
               occ_func_0_1(36) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_0(10) *
               occ_func_0_1(36)) +
          (0.707107 * occ_func_0_1(2) * occ_func_0_0(3) * occ_func_0_1(0) *
               occ_func_0_1(31) +
           0.707107 * occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_0(0) *
               occ_func_0_1(31)) +
          (0.707107 * occ_func_0_1(81) * occ_func_0_0(25) * occ_func_0_1(30) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_1(25) * occ_func_0_0(30) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(41) * occ_func_0_1(42) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(41) * occ_func_0_0(42) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_1(20) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_1(20)) +
          (0.707107 * occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_1(19) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_1(19)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(3) *
               occ_func_0_1(79) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(3) *
               occ_func_0_1(79)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) * occ_func_0_1(0) *
               occ_func_0_1(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_0(12) * occ_func_0_1(0) *
               occ_func_0_1(38)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(6) *
               occ_func_0_1(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(6) *
               occ_func_0_1(84)) +
          (0.707107 * occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_1(1) *
               occ_func_0_1(31) +
           0.707107 * occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_1(1) *
               occ_func_0_1(31)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_1(30) * occ_func_0_1(23) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_0(30) * occ_func_0_1(23) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(9) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(9) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_1(37) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_1(37)) +
          (0.707107 * occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_1(32) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_1(32)) +
          (0.707107 * occ_func_0_1(80) * occ_func_0_0(29) * occ_func_0_1(24) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(80) * occ_func_0_1(29) * occ_func_0_0(24) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(0) * occ_func_0_1(12) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(12) *
               occ_func_0_0(35)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(4) * occ_func_0_1(10) *
               occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_1(10) *
               occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_1(26) * occ_func_0_1(33) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_1(26) * occ_func_0_1(33) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_1(0) *
               occ_func_0_1(28) +
           0.707107 * occ_func_0_1(3) * occ_func_0_1(1) * occ_func_0_1(0) *
               occ_func_0_0(28)) +
          (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_1(0) *
               occ_func_0_1(35) +
           0.707107 * occ_func_0_1(9) * occ_func_0_0(7) * occ_func_0_1(0) *
               occ_func_0_1(35)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(0) * occ_func_0_1(6) *
               occ_func_0_1(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_0(0) * occ_func_0_1(6) *
               occ_func_0_1(34)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(5) * occ_func_0_1(4) *
               occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(5) * occ_func_0_1(4) *
               occ_func_0_1(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_1(27) * occ_func_0_1(26) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_0(27) * occ_func_0_1(26) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(40) * occ_func_0_1(41) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(40) * occ_func_0_0(41) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_1(21) +
           0.707107 * occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_1(21)) +
          (0.707107 * occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_1(20) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_1(20)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_1(2) *
               occ_func_0_1(79) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_0(2) *
               occ_func_0_1(79)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(7) *
               occ_func_0_1(85) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(7) *
               occ_func_0_1(85)) +
          (0.707107 * occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_1(0) *
               occ_func_0_1(39) +
           0.707107 * occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_0(0) *
               occ_func_0_1(39)) +
          (0.707107 * occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(5) *
               occ_func_0_1(37) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(5) *
               occ_func_0_1(37)) +
          (0.707107 * occ_func_0_1(80) * occ_func_0_0(24) * occ_func_0_1(22) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(80) * occ_func_0_1(24) * occ_func_0_0(22) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(32) * occ_func_0_1(39) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(32) * occ_func_0_0(39) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(12) * occ_func_0_0(0) * occ_func_0_1(11) *
               occ_func_0_1(29) +
           0.707107 * occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_0(11) *
               occ_func_0_1(29)) +
          (0.707107 * occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_1(0) *
               occ_func_0_1(22) +
           0.707107 * occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_0(0) *
               occ_func_0_1(22)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(1) * occ_func_0_1(6) *
               occ_func_0_1(80) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_0(6) *
               occ_func_0_1(80)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(39) * occ_func_0_1(37) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(39) * occ_func_0_0(37) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_1(0) *
               occ_func_0_1(24) +
           0.707107 * occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_0(0) *
               occ_func_0_1(24)) +
          (0.707107 * occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_1(5) *
               occ_func_0_1(22) +
           0.707107 * occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_0(5) *
               occ_func_0_1(22)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_1(4) *
               occ_func_0_1(80) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_0(4) *
               occ_func_0_1(80)) +
          (0.707107 * occ_func_0_1(85) * occ_func_0_0(37) * occ_func_0_1(32) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(85) * occ_func_0_1(37) * occ_func_0_0(32) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(12) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_1(29) +
           0.707107 * occ_func_0_1(12) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_1(29)) +
          (0.707107 * occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_1(24) +
           0.707107 * occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_1(24)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_1(1) *
               occ_func_0_1(80) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_0(1) *
               occ_func_0_1(80)) +
          (0.707107 * occ_func_0_0(84) * occ_func_0_1(38) * occ_func_0_1(31) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(84) * occ_func_0_1(38) * occ_func_0_0(31) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_1(12) * occ_func_0_1(0) *
               occ_func_0_1(30) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(12) * occ_func_0_0(0) *
               occ_func_0_1(30)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(2) *
               occ_func_0_1(81) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(2) *
               occ_func_0_1(81)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(1) *
               occ_func_0_1(23) +
           0.707107 * occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(1) *
               occ_func_0_1(23)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(11) * occ_func_0_1(0) *
               occ_func_0_1(33) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_1(0) *
               occ_func_0_0(33)) +
          (0.707107 * occ_func_0_0(83) * occ_func_0_1(34) * occ_func_0_1(28) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(83) * occ_func_0_1(34) * occ_func_0_1(28) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(3) *
               occ_func_0_1(82) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(3) *
               occ_func_0_0(82)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_1(2) *
               occ_func_0_1(27) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_1(2) *
               occ_func_0_0(27)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(11) * occ_func_0_1(12) *
               occ_func_0_1(86) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(12) *
               occ_func_0_1(86)) +
          (0.707107 * occ_func_0_1(2) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_1(41) +
           0.707107 * occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_1(41)) +
          (0.707107 * occ_func_0_1(1) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_1(40) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_1(40)) +
          (0.707107 * occ_func_0_1(79) * occ_func_0_0(20) * occ_func_0_1(21) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(79) * occ_func_0_1(20) * occ_func_0_0(21) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(86) * occ_func_0_0(42) * occ_func_0_1(40) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(86) * occ_func_0_1(42) * occ_func_0_0(40) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(12) * occ_func_0_0(9) * occ_func_0_1(0) *
               occ_func_0_1(21) +
           0.707107 * occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_0(0) *
               occ_func_0_1(21)) +
          (0.707107 * occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(4) *
               occ_func_0_1(19) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(4) *
               occ_func_0_1(19)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_1(1) *
               occ_func_0_1(79) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_0(1) *
               occ_func_0_1(79)) +
          (0.707107 * occ_func_0_0(8) * occ_func_0_1(11) * occ_func_0_1(0) *
               occ_func_0_1(34) +
           0.707107 * occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_1(0) *
               occ_func_0_0(34)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(5) *
               occ_func_0_1(83) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(5) *
               occ_func_0_0(83)) +
          (0.707107 * occ_func_0_0(82) * occ_func_0_1(33) * occ_func_0_1(27) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(82) * occ_func_0_1(33) * occ_func_0_1(27) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_1(2) *
               occ_func_0_1(28) +
           0.707107 * occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_1(2) *
               occ_func_0_0(28)) +
          (0.707107 * occ_func_0_0(7) * occ_func_0_1(0) * occ_func_0_1(9) *
               occ_func_0_1(38) +
           0.707107 * occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_0(9) *
               occ_func_0_1(38)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(6) * occ_func_0_1(8) *
               occ_func_0_1(84) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_0(8) *
               occ_func_0_1(84)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_1(0) *
               occ_func_0_1(36) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_0(0) *
               occ_func_0_1(36)) +
          (0.707107 * occ_func_0_0(81) * occ_func_0_1(23) * occ_func_0_1(25) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(81) * occ_func_0_1(23) * occ_func_0_0(25) *
               occ_func_0_1(0))) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_10_at_0()
    const {
  return (occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(12) *
              occ_func_0_1(85) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(11) *
              occ_func_0_1(39) +
          occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_1(0) *
              occ_func_0_1(32) +
          occ_func_0_0(80) * occ_func_0_1(22) * occ_func_0_1(29) *
              occ_func_0_1(0) +
          occ_func_0_1(83) * occ_func_0_1(35) * occ_func_0_1(34) *
              occ_func_0_0(0) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(8) *
              occ_func_0_0(82) +
          occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_1(0) *
              occ_func_0_0(27) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(6) *
              occ_func_0_0(26) +
          occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_1(38) *
              occ_func_0_0(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_1(9) *
              occ_func_0_0(25) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_1(7) *
              occ_func_0_0(81) +
          occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_1(0) *
              occ_func_0_0(23) +
          occ_func_0_0(0) * occ_func_0_1(10) * occ_func_0_1(11) *
              occ_func_0_1(86) +
          occ_func_0_0(3) * occ_func_0_1(0) * occ_func_0_1(8) *
              occ_func_0_1(42) +
          occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_1(0) *
              occ_func_0_1(41) +
          occ_func_0_0(79) * occ_func_0_1(19) * occ_func_0_1(20) *
              occ_func_0_1(0) +
          occ_func_0_1(84) * occ_func_0_1(31) * occ_func_0_1(36) *
              occ_func_0_0(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(10) *
              occ_func_0_0(30) +
          occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_1(0) *
              occ_func_0_0(25) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(5) *
              occ_func_0_0(81) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(10) *
              occ_func_0_1(86) +
          occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_1(0) *
              occ_func_0_1(42) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_1(4) *
              occ_func_0_1(40) +
          occ_func_0_0(79) * occ_func_0_1(21) * occ_func_0_1(19) *
              occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(12) *
              occ_func_0_1(33) +
          occ_func_0_1(83) * occ_func_0_0(28) * occ_func_0_1(35) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_1(9) *
              occ_func_0_1(82) +
          occ_func_0_1(4) * occ_func_0_0(1) * occ_func_0_1(0) *
              occ_func_0_1(26) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(11) *
              occ_func_0_1(84) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_1(10) *
              occ_func_0_1(36) +
          occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_1(0) *
              occ_func_0_1(31) +
          occ_func_0_0(81) * occ_func_0_1(25) * occ_func_0_1(30) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_1(41) * occ_func_0_1(42) *
              occ_func_0_0(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(8) *
              occ_func_0_0(20) +
          occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_1(0) *
              occ_func_0_0(19) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(3) *
              occ_func_0_0(79) +
          occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_0(0) *
              occ_func_0_1(38) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_0(6) *
              occ_func_0_1(84) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_0(1) *
              occ_func_0_1(31) +
          occ_func_0_1(81) * occ_func_0_1(30) * occ_func_0_0(23) *
              occ_func_0_1(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(9) *
              occ_func_0_1(85) +
          occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_1(0) *
              occ_func_0_1(37) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_1(3) *
              occ_func_0_1(32) +
          occ_func_0_0(80) * occ_func_0_1(29) * occ_func_0_1(24) *
              occ_func_0_1(0) +
          occ_func_0_1(9) * occ_func_0_0(0) * occ_func_0_1(12) *
              occ_func_0_1(35) +
          occ_func_0_1(0) * occ_func_0_0(4) * occ_func_0_1(10) *
              occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_0(26) * occ_func_0_1(33) *
              occ_func_0_1(0) +
          occ_func_0_1(3) * occ_func_0_0(1) * occ_func_0_1(0) *
              occ_func_0_1(28) +
          occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_0(0) *
              occ_func_0_1(35) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_0(6) *
              occ_func_0_1(34) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_0(4) *
              occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_1(27) * occ_func_0_0(26) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_1(40) * occ_func_0_1(41) *
              occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(7) *
              occ_func_0_0(21) +
          occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_1(0) *
              occ_func_0_0(20) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_1(2) *
              occ_func_0_0(79) +
          occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(7) *
              occ_func_0_1(85) +
          occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_1(0) *
              occ_func_0_1(39) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(5) *
              occ_func_0_1(37) +
          occ_func_0_0(80) * occ_func_0_1(24) * occ_func_0_1(22) *
              occ_func_0_1(0) +
          occ_func_0_1(85) * occ_func_0_1(32) * occ_func_0_1(39) *
              occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(11) *
              occ_func_0_0(29) +
          occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_1(0) *
              occ_func_0_0(22) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_1(6) *
              occ_func_0_0(80) +
          occ_func_0_1(85) * occ_func_0_1(39) * occ_func_0_1(37) *
              occ_func_0_0(0) +
          occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_1(0) *
              occ_func_0_0(24) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_1(5) *
              occ_func_0_0(22) +
          occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_1(4) *
              occ_func_0_0(80) +
          occ_func_0_1(85) * occ_func_0_1(37) * occ_func_0_1(32) *
              occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_1(10) * occ_func_0_1(0) *
              occ_func_0_0(29) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(3) *
              occ_func_0_0(24) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_1(1) *
              occ_func_0_0(80) +
          occ_func_0_1(84) * occ_func_0_1(38) * occ_func_0_1(31) *
              occ_func_0_0(0) +
          occ_func_0_1(11) * occ_func_0_1(12) * occ_func_0_1(0) *
              occ_func_0_0(30) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(2) *
              occ_func_0_0(81) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(1) *
              occ_func_0_0(23) +
          occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_0(0) *
              occ_func_0_1(33) +
          occ_func_0_1(83) * occ_func_0_1(34) * occ_func_0_0(28) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(3) *
              occ_func_0_1(82) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_0(2) *
              occ_func_0_1(27) +
          occ_func_0_0(0) * occ_func_0_1(11) * occ_func_0_1(12) *
              occ_func_0_1(86) +
          occ_func_0_0(2) * occ_func_0_1(0) * occ_func_0_1(7) *
              occ_func_0_1(41) +
          occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_1(0) *
              occ_func_0_1(40) +
          occ_func_0_0(79) * occ_func_0_1(20) * occ_func_0_1(21) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_1(42) * occ_func_0_1(40) *
              occ_func_0_0(0) +
          occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_1(0) *
              occ_func_0_0(21) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(4) *
              occ_func_0_0(19) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_1(1) *
              occ_func_0_0(79) +
          occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_0(0) *
              occ_func_0_1(34) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_0(5) *
              occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_1(33) * occ_func_0_0(27) *
              occ_func_0_1(0) +
          occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_0(2) *
              occ_func_0_1(28) +
          occ_func_0_1(7) * occ_func_0_0(0) * occ_func_0_1(9) *
              occ_func_0_1(38) +
          occ_func_0_1(0) * occ_func_0_0(6) * occ_func_0_1(8) *
              occ_func_0_1(84) +
          occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_1(0) *
              occ_func_0_1(36) +
          occ_func_0_1(81) * occ_func_0_0(23) * occ_func_0_1(25) *
              occ_func_0_1(0)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_13_11_at_0()
    const {
  return (occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(12) *
              occ_func_0_1(85) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(11) *
              occ_func_0_1(39) +
          occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_1(0) *
              occ_func_0_1(32) +
          occ_func_0_1(80) * occ_func_0_1(22) * occ_func_0_1(29) *
              occ_func_0_1(0) +
          occ_func_0_1(83) * occ_func_0_1(35) * occ_func_0_1(34) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(8) *
              occ_func_0_1(82) +
          occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_1(0) *
              occ_func_0_1(27) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(6) *
              occ_func_0_1(26) +
          occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_1(38) *
              occ_func_0_1(0) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_1(9) *
              occ_func_0_1(25) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_1(7) *
              occ_func_0_1(81) +
          occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_1(0) *
              occ_func_0_1(23) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(11) *
              occ_func_0_1(86) +
          occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_1(8) *
              occ_func_0_1(42) +
          occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_1(0) *
              occ_func_0_1(41) +
          occ_func_0_1(79) * occ_func_0_1(19) * occ_func_0_1(20) *
              occ_func_0_1(0) +
          occ_func_0_1(84) * occ_func_0_1(31) * occ_func_0_1(36) *
              occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(10) *
              occ_func_0_1(30) +
          occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_1(0) *
              occ_func_0_1(25) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(5) *
              occ_func_0_1(81) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(10) *
              occ_func_0_1(86) +
          occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_1(0) *
              occ_func_0_1(42) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_1(4) *
              occ_func_0_1(40) +
          occ_func_0_1(79) * occ_func_0_1(21) * occ_func_0_1(19) *
              occ_func_0_1(0) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(12) *
              occ_func_0_1(33) +
          occ_func_0_1(83) * occ_func_0_1(28) * occ_func_0_1(35) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_1(9) *
              occ_func_0_1(82) +
          occ_func_0_1(4) * occ_func_0_1(1) * occ_func_0_1(0) *
              occ_func_0_1(26) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(11) *
              occ_func_0_1(84) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_1(10) *
              occ_func_0_1(36) +
          occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_1(0) *
              occ_func_0_1(31) +
          occ_func_0_1(81) * occ_func_0_1(25) * occ_func_0_1(30) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_1(41) * occ_func_0_1(42) *
              occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(8) *
              occ_func_0_1(20) +
          occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_1(0) *
              occ_func_0_1(19) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(3) *
              occ_func_0_1(79) +
          occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_1(0) *
              occ_func_0_1(38) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(6) *
              occ_func_0_1(84) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_1(1) *
              occ_func_0_1(31) +
          occ_func_0_1(81) * occ_func_0_1(30) * occ_func_0_1(23) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(9) *
              occ_func_0_1(85) +
          occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_1(0) *
              occ_func_0_1(37) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_1(3) *
              occ_func_0_1(32) +
          occ_func_0_1(80) * occ_func_0_1(29) * occ_func_0_1(24) *
              occ_func_0_1(0) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(12) *
              occ_func_0_1(35) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_1(10) *
              occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_1(26) * occ_func_0_1(33) *
              occ_func_0_1(0) +
          occ_func_0_1(3) * occ_func_0_1(1) * occ_func_0_1(0) *
              occ_func_0_1(28) +
          occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_1(0) *
              occ_func_0_1(35) +
          occ_func_0_1(8) * occ_func_0_1(0) * occ_func_0_1(6) *
              occ_func_0_1(34) +
          occ_func_0_1(0) * occ_func_0_1(5) * occ_func_0_1(4) *
              occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_1(27) * occ_func_0_1(26) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_1(40) * occ_func_0_1(41) *
              occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(7) *
              occ_func_0_1(21) +
          occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_1(0) *
              occ_func_0_1(20) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_1(2) *
              occ_func_0_1(79) +
          occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(7) *
              occ_func_0_1(85) +
          occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_1(0) *
              occ_func_0_1(39) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(5) *
              occ_func_0_1(37) +
          occ_func_0_1(80) * occ_func_0_1(24) * occ_func_0_1(22) *
              occ_func_0_1(0) +
          occ_func_0_1(85) * occ_func_0_1(32) * occ_func_0_1(39) *
              occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_1(0) * occ_func_0_1(11) *
              occ_func_0_1(29) +
          occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_1(0) *
              occ_func_0_1(22) +
          occ_func_0_1(0) * occ_func_0_1(1) * occ_func_0_1(6) *
              occ_func_0_1(80) +
          occ_func_0_1(85) * occ_func_0_1(39) * occ_func_0_1(37) *
              occ_func_0_1(0) +
          occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_1(0) *
              occ_func_0_1(24) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_1(5) *
              occ_func_0_1(22) +
          occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_1(4) *
              occ_func_0_1(80) +
          occ_func_0_1(85) * occ_func_0_1(37) * occ_func_0_1(32) *
              occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_1(10) * occ_func_0_1(0) *
              occ_func_0_1(29) +
          occ_func_0_1(9) * occ_func_0_1(0) * occ_func_0_1(3) *
              occ_func_0_1(24) +
          occ_func_0_1(0) * occ_func_0_1(4) * occ_func_0_1(1) *
              occ_func_0_1(80) +
          occ_func_0_1(84) * occ_func_0_1(38) * occ_func_0_1(31) *
              occ_func_0_1(0) +
          occ_func_0_1(11) * occ_func_0_1(12) * occ_func_0_1(0) *
              occ_func_0_1(30) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(2) *
              occ_func_0_1(81) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(1) *
              occ_func_0_1(23) +
          occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_1(0) *
              occ_func_0_1(33) +
          occ_func_0_1(83) * occ_func_0_1(34) * occ_func_0_1(28) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(3) *
              occ_func_0_1(82) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_1(2) *
              occ_func_0_1(27) +
          occ_func_0_1(0) * occ_func_0_1(11) * occ_func_0_1(12) *
              occ_func_0_1(86) +
          occ_func_0_1(2) * occ_func_0_1(0) * occ_func_0_1(7) *
              occ_func_0_1(41) +
          occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_1(0) *
              occ_func_0_1(40) +
          occ_func_0_1(79) * occ_func_0_1(20) * occ_func_0_1(21) *
              occ_func_0_1(0) +
          occ_func_0_1(86) * occ_func_0_1(42) * occ_func_0_1(40) *
              occ_func_0_1(0) +
          occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_1(0) *
              occ_func_0_1(21) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(4) *
              occ_func_0_1(19) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_1(1) *
              occ_func_0_1(79) +
          occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_1(0) *
              occ_func_0_1(34) +
          occ_func_0_1(0) * occ_func_0_1(10) * occ_func_0_1(5) *
              occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_1(33) * occ_func_0_1(27) *
              occ_func_0_1(0) +
          occ_func_0_1(3) * occ_func_0_1(0) * occ_func_0_1(2) *
              occ_func_0_1(28) +
          occ_func_0_1(7) * occ_func_0_1(0) * occ_func_0_1(9) *
              occ_func_0_1(38) +
          occ_func_0_1(0) * occ_func_0_1(6) * occ_func_0_1(8) *
              occ_func_0_1(84) +
          occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_1(0) *
              occ_func_0_1(36) +
          occ_func_0_1(81) * occ_func_0_1(23) * occ_func_0_1(25) *
              occ_func_0_1(0)) /
         24.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_0(85) +
          occ_func_0_0(6) * occ_func_0_0(11) * occ_func_0_0(39) +
          occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_0(32) +
          occ_func_0_0(80) * occ_func_0_0(22) * occ_func_0_0(29) +
          occ_func_0_0(83) * occ_func_0_0(35) * occ_func_0_0(34) +
          occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_0(82) +
          occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_0(27) +
          occ_func_0_0(4) * occ_func_0_0(6) * occ_func_0_0(26) +
          occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_0(38) +
          occ_func_0_0(8) * occ_func_0_0(9) * occ_func_0_0(25) +
          occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_0(81) +
          occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_0(23) +
          occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_0(86) +
          occ_func_0_0(3) * occ_func_0_0(8) * occ_func_0_0(42) +
          occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_0(41) +
          occ_func_0_0(79) * occ_func_0_0(19) * occ_func_0_0(20) +
          occ_func_0_0(84) * occ_func_0_0(31) * occ_func_0_0(36) +
          occ_func_0_0(11) * occ_func_0_0(10) * occ_func_0_0(30) +
          occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_0(25) +
          occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_0(81) +
          occ_func_0_0(12) * occ_func_0_0(10) * occ_func_0_0(86) +
          occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_0(42) +
          occ_func_0_0(1) * occ_func_0_0(4) * occ_func_0_0(40) +
          occ_func_0_0(79) * occ_func_0_0(21) * occ_func_0_0(19) +
          occ_func_0_0(10) * occ_func_0_0(12) * occ_func_0_0(33) +
          occ_func_0_0(83) * occ_func_0_0(28) * occ_func_0_0(35) +
          occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_0(82) +
          occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_0(26) +
          occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_0(84) +
          occ_func_0_0(5) * occ_func_0_0(10) * occ_func_0_0(36) +
          occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_0(31) +
          occ_func_0_0(81) * occ_func_0_0(25) * occ_func_0_0(30) +
          occ_func_0_0(86) * occ_func_0_0(41) * occ_func_0_0(42) +
          occ_func_0_0(11) * occ_func_0_0(8) * occ_func_0_0(20) +
          occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_0(19) +
          occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_0(79) +
          occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_0(38) +
          occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_0(84) +
          occ_func_0_0(2) * occ_func_0_0(1) * occ_func_0_0(31) +
          occ_func_0_0(81) * occ_func_0_0(30) * occ_func_0_0(23) +
          occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_0(85) +
          occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_0(37) +
          occ_func_0_0(1) * occ_func_0_0(3) * occ_func_0_0(32) +
          occ_func_0_0(80) * occ_func_0_0(29) * occ_func_0_0(24) +
          occ_func_0_0(9) * occ_func_0_0(12) * occ_func_0_0(35) +
          occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_0(26) * occ_func_0_0(33) +
          occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_0(28) +
          occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_0(35) +
          occ_func_0_0(8) * occ_func_0_0(6) * occ_func_0_0(34) +
          occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_0(27) * occ_func_0_0(26) +
          occ_func_0_0(86) * occ_func_0_0(40) * occ_func_0_0(41) +
          occ_func_0_0(12) * occ_func_0_0(7) * occ_func_0_0(21) +
          occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_0(20) +
          occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_0(79) +
          occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_0(85) +
          occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_0(39) +
          occ_func_0_0(4) * occ_func_0_0(5) * occ_func_0_0(37) +
          occ_func_0_0(80) * occ_func_0_0(24) * occ_func_0_0(22) +
          occ_func_0_0(85) * occ_func_0_0(32) * occ_func_0_0(39) +
          occ_func_0_0(12) * occ_func_0_0(11) * occ_func_0_0(29) +
          occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_0(22) +
          occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_0(80) +
          occ_func_0_0(85) * occ_func_0_0(39) * occ_func_0_0(37) +
          occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_0(24) +
          occ_func_0_0(7) * occ_func_0_0(5) * occ_func_0_0(22) +
          occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_0(80) +
          occ_func_0_0(85) * occ_func_0_0(37) * occ_func_0_0(32) +
          occ_func_0_0(12) * occ_func_0_0(10) * occ_func_0_0(29) +
          occ_func_0_0(9) * occ_func_0_0(3) * occ_func_0_0(24) +
          occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_0(80) +
          occ_func_0_0(84) * occ_func_0_0(38) * occ_func_0_0(31) +
          occ_func_0_0(11) * occ_func_0_0(12) * occ_func_0_0(30) +
          occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_0(81) +
          occ_func_0_0(6) * occ_func_0_0(1) * occ_func_0_0(23) +
          occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_0(33) +
          occ_func_0_0(83) * occ_func_0_0(34) * occ_func_0_0(28) +
          occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_0(82) +
          occ_func_0_0(5) * occ_func_0_0(2) * occ_func_0_0(27) +
          occ_func_0_0(11) * occ_func_0_0(12) * occ_func_0_0(86) +
          occ_func_0_0(2) * occ_func_0_0(7) * occ_func_0_0(41) +
          occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_0(40) +
          occ_func_0_0(79) * occ_func_0_0(20) * occ_func_0_0(21) +
          occ_func_0_0(86) * occ_func_0_0(42) * occ_func_0_0(40) +
          occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_0(21) +
          occ_func_0_0(10) * occ_func_0_0(4) * occ_func_0_0(19) +
          occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_0(79) +
          occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_0(34) +
          occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_0(83) +
          occ_func_0_0(82) * occ_func_0_0(33) * occ_func_0_0(27) +
          occ_func_0_0(3) * occ_func_0_0(2) * occ_func_0_0(28) +
          occ_func_0_0(7) * occ_func_0_0(9) * occ_func_0_0(38) +
          occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_0(84) +
          occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_0(36) +
          occ_func_0_0(81) * occ_func_0_0(23) * occ_func_0_0(25)) /
         24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(6) * occ_func_0_0(11) * occ_func_0_0(39) +
              occ_func_0_1(1) * occ_func_0_0(2) * occ_func_0_0(32) +
              occ_func_0_1(80) * occ_func_0_0(22) * occ_func_0_0(29) +
              occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_1(82) +
              occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_1(27) +
              occ_func_0_0(4) * occ_func_0_0(6) * occ_func_0_1(26) +
              occ_func_0_0(8) * occ_func_0_0(9) * occ_func_0_1(25) +
              occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_1(81) +
              occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_1(23) +
              occ_func_0_1(3) * occ_func_0_0(8) * occ_func_0_0(42) +
              occ_func_0_1(2) * occ_func_0_0(5) * occ_func_0_0(41) +
              occ_func_0_1(79) * occ_func_0_0(19) * occ_func_0_0(20) +
              occ_func_0_0(11) * occ_func_0_0(10) * occ_func_0_1(30) +
              occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_1(25) +
              occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_1(81) +
              occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_0(42) +
              occ_func_0_1(1) * occ_func_0_0(4) * occ_func_0_0(40) +
              occ_func_0_1(79) * occ_func_0_0(21) * occ_func_0_0(19) +
              occ_func_0_0(83) * occ_func_0_1(28) * occ_func_0_0(35) +
              occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_0(82) +
              occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_0(26) +
              occ_func_0_1(5) * occ_func_0_0(10) * occ_func_0_0(36) +
              occ_func_0_1(2) * occ_func_0_0(3) * occ_func_0_0(31) +
              occ_func_0_1(81) * occ_func_0_0(25) * occ_func_0_0(30) +
              occ_func_0_0(11) * occ_func_0_0(8) * occ_func_0_1(20) +
              occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_1(19) +
              occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_1(79) +
              occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_0(84) +
              occ_func_0_0(2) * occ_func_0_1(1) * occ_func_0_0(31) +
              occ_func_0_0(81) * occ_func_0_0(30) * occ_func_0_1(23) +
              occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_0(37) +
              occ_func_0_1(1) * occ_func_0_0(3) * occ_func_0_0(32) +
              occ_func_0_1(80) * occ_func_0_0(29) * occ_func_0_0(24) +
              occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_0(83) +
              occ_func_0_0(82) * occ_func_0_1(26) * occ_func_0_0(33) +
              occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_0(28) +
              occ_func_0_0(8) * occ_func_0_1(6) * occ_func_0_0(34) +
              occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_0(83) +
              occ_func_0_0(82) * occ_func_0_0(27) * occ_func_0_1(26) +
              occ_func_0_0(12) * occ_func_0_0(7) * occ_func_0_1(21) +
              occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_1(20) +
              occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_1(79) +
              occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_0(39) +
              occ_func_0_1(4) * occ_func_0_0(5) * occ_func_0_0(37) +
              occ_func_0_1(80) * occ_func_0_0(24) * occ_func_0_0(22) +
              occ_func_0_0(12) * occ_func_0_0(11) * occ_func_0_1(29) +
              occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_1(22) +
              occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_1(80) +
              occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_1(24) +
              occ_func_0_0(7) * occ_func_0_0(5) * occ_func_0_1(22) +
              occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_1(80) +
              occ_func_0_0(12) * occ_func_0_0(10) * occ_func_0_1(29) +
              occ_func_0_0(9) * occ_func_0_0(3) * occ_func_0_1(24) +
              occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_1(80) +
              occ_func_0_0(11) * occ_func_0_0(12) * occ_func_0_1(30) +
              occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_1(81) +
              occ_func_0_0(6) * occ_func_0_0(1) * occ_func_0_1(23) +
              occ_func_0_0(83) * occ_func_0_0(34) * occ_func_0_1(28) +
              occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_0(82) +
              occ_func_0_0(5) * occ_func_0_1(2) * occ_func_0_0(27) +
              occ_func_0_1(2) * occ_func_0_0(7) * occ_func_0_0(41) +
              occ_func_0_1(1) * occ_func_0_0(6) * occ_func_0_0(40) +
              occ_func_0_1(79) * occ_func_0_0(20) * occ_func_0_0(21) +
              occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_1(21) +
              occ_func_0_0(10) * occ_func_0_0(4) * occ_func_0_1(19) +
              occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_1(79) +
              occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_0(83) +
              occ_func_0_0(82) * occ_func_0_0(33) * occ_func_0_1(27) +
              occ_func_0_0(3) * occ_func_0_1(2) * occ_func_0_0(28) +
              occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_0(84) +
              occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_0(36) +
              occ_func_0_0(81) * occ_func_0_1(23) * occ_func_0_0(25)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_0(85) +
              occ_func_0_0(83) * occ_func_0_0(35) * occ_func_0_0(34) +
              occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_0(38) +
              occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_0(86) +
              occ_func_0_0(84) * occ_func_0_0(31) * occ_func_0_0(36) +
              occ_func_0_0(12) * occ_func_0_0(10) * occ_func_0_0(86) +
              occ_func_0_0(10) * occ_func_0_0(12) * occ_func_0_0(33) +
              occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_0(84) +
              occ_func_0_0(86) * occ_func_0_0(41) * occ_func_0_0(42) +
              occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_0(38) +
              occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_0(85) +
              occ_func_0_0(9) * occ_func_0_0(12) * occ_func_0_0(35) +
              occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_0(35) +
              occ_func_0_0(86) * occ_func_0_0(40) * occ_func_0_0(41) +
              occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_0(85) +
              occ_func_0_0(85) * occ_func_0_0(32) * occ_func_0_0(39) +
              occ_func_0_0(85) * occ_func_0_0(39) * occ_func_0_0(37) +
              occ_func_0_0(85) * occ_func_0_0(37) * occ_func_0_0(32) +
              occ_func_0_0(84) * occ_func_0_0(38) * occ_func_0_0(31) +
              occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_0(33) +
              occ_func_0_0(11) * occ_func_0_0(12) * occ_func_0_0(86) +
              occ_func_0_0(86) * occ_func_0_0(42) * occ_func_0_0(40) +
              occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_0(34) +
              occ_func_0_0(7) * occ_func_0_0(9) * occ_func_0_0(38)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             ((0.707107 * occ_func_0_0(7) * occ_func_0_1(12) *
                   occ_func_0_0(85) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(12) *
                   occ_func_0_0(85)) +
              0.707107 * occ_func_0_0(6) * occ_func_0_1(11) * occ_func_0_0(39) +
              0.707107 * occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_0(32) +
              (0.707107 * occ_func_0_0(80) * occ_func_0_0(22) *
                   occ_func_0_1(29) +
               0.707107 * occ_func_0_0(80) * occ_func_0_1(22) *
                   occ_func_0_0(29)) +
              (0.707107 * occ_func_0_0(83) * occ_func_0_0(35) *
                   occ_func_0_1(34) +
               0.707107 * occ_func_0_1(83) * occ_func_0_0(35) *
                   occ_func_0_0(34)) +
              0.707107 * occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_0(82) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_0(27) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(6) * occ_func_0_0(26) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(6) *
                   occ_func_0_0(26)) +
              (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) *
                   occ_func_0_0(38) +
               0.707107 * occ_func_0_1(84) * occ_func_0_0(36) *
                   occ_func_0_0(38)) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(9) * occ_func_0_0(25) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_0(81) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_0(23) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(4) *
                   occ_func_0_0(23)) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(11) *
                   occ_func_0_0(86) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(11) *
                   occ_func_0_0(86)) +
              0.707107 * occ_func_0_0(3) * occ_func_0_1(8) * occ_func_0_0(42) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_0(41) +
              (0.707107 * occ_func_0_0(79) * occ_func_0_0(19) *
                   occ_func_0_1(20) +
               0.707107 * occ_func_0_0(79) * occ_func_0_1(19) *
                   occ_func_0_0(20)) +
              (0.707107 * occ_func_0_0(84) * occ_func_0_0(31) *
                   occ_func_0_1(36) +
               0.707107 * occ_func_0_0(84) * occ_func_0_1(31) *
                   occ_func_0_0(36)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(10) *
                  occ_func_0_0(30) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_0(25) +
              (0.707107 * occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_0(81) +
               0.707107 * occ_func_0_1(2) * occ_func_0_0(5) *
                   occ_func_0_0(81)) +
              (0.707107 * occ_func_0_0(12) * occ_func_0_1(10) *
                   occ_func_0_0(86) +
               0.707107 * occ_func_0_1(12) * occ_func_0_0(10) *
                   occ_func_0_0(86)) +
              0.707107 * occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_0(42) +
              0.707107 * occ_func_0_0(1) * occ_func_0_1(4) * occ_func_0_0(40) +
              (0.707107 * occ_func_0_0(79) * occ_func_0_0(21) *
                   occ_func_0_1(19) +
               0.707107 * occ_func_0_0(79) * occ_func_0_1(21) *
                   occ_func_0_0(19)) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_0(12) *
                   occ_func_0_1(33) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(12) *
                   occ_func_0_0(33)) +
              0.707107 * occ_func_0_1(83) * occ_func_0_0(28) *
                  occ_func_0_0(35) +
              0.707107 * occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_1(82) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_1(26) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(1) *
                   occ_func_0_0(26)) +
              (0.707107 * occ_func_0_0(8) * occ_func_0_1(11) *
                   occ_func_0_0(84) +
               0.707107 * occ_func_0_1(8) * occ_func_0_0(11) *
                   occ_func_0_0(84)) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(10) * occ_func_0_0(36) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_0(31) +
              (0.707107 * occ_func_0_0(81) * occ_func_0_0(25) *
                   occ_func_0_1(30) +
               0.707107 * occ_func_0_0(81) * occ_func_0_1(25) *
                   occ_func_0_0(30)) +
              (0.707107 * occ_func_0_0(86) * occ_func_0_0(41) *
                   occ_func_0_1(42) +
               0.707107 * occ_func_0_0(86) * occ_func_0_1(41) *
                   occ_func_0_0(42)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(8) * occ_func_0_0(20) +
              0.707107 * occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_0(19) +
              (0.707107 * occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_0(79) +
               0.707107 * occ_func_0_1(2) * occ_func_0_0(3) *
                   occ_func_0_0(79)) +
              (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) *
                   occ_func_0_0(38) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(12) *
                   occ_func_0_0(38)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_0(84) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(1) * occ_func_0_0(31) +
              (0.707107 * occ_func_0_0(81) * occ_func_0_1(30) *
                   occ_func_0_0(23) +
               0.707107 * occ_func_0_1(81) * occ_func_0_0(30) *
                   occ_func_0_0(23)) +
              (0.707107 * occ_func_0_0(12) * occ_func_0_1(9) *
                   occ_func_0_0(85) +
               0.707107 * occ_func_0_1(12) * occ_func_0_0(9) *
                   occ_func_0_0(85)) +
              0.707107 * occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_0(37) +
              0.707107 * occ_func_0_0(1) * occ_func_0_1(3) * occ_func_0_0(32) +
              (0.707107 * occ_func_0_0(80) * occ_func_0_0(29) *
                   occ_func_0_1(24) +
               0.707107 * occ_func_0_0(80) * occ_func_0_1(29) *
                   occ_func_0_0(24)) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_0(12) *
                   occ_func_0_1(35) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(12) *
                   occ_func_0_0(35)) +
              0.707107 * occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_1(83) +
              0.707107 * occ_func_0_1(82) * occ_func_0_0(26) *
                  occ_func_0_0(33) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_1(28) +
               0.707107 * occ_func_0_1(3) * occ_func_0_0(1) *
                   occ_func_0_0(28)) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_0(35) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(7) *
                   occ_func_0_0(35)) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(6) * occ_func_0_0(34) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_0(83) +
              (0.707107 * occ_func_0_0(82) * occ_func_0_1(27) *
                   occ_func_0_0(26) +
               0.707107 * occ_func_0_1(82) * occ_func_0_0(27) *
                   occ_func_0_0(26)) +
              (0.707107 * occ_func_0_0(86) * occ_func_0_0(40) *
                   occ_func_0_1(41) +
               0.707107 * occ_func_0_0(86) * occ_func_0_1(40) *
                   occ_func_0_0(41)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(7) * occ_func_0_0(21) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_0(20) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_0(79) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(2) *
                   occ_func_0_0(79)) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_0(85) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(7) *
                   occ_func_0_0(85)) +
              0.707107 * occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_0(39) +
              0.707107 * occ_func_0_0(4) * occ_func_0_1(5) * occ_func_0_0(37) +
              (0.707107 * occ_func_0_0(80) * occ_func_0_0(24) *
                   occ_func_0_1(22) +
               0.707107 * occ_func_0_0(80) * occ_func_0_1(24) *
                   occ_func_0_0(22)) +
              (0.707107 * occ_func_0_0(85) * occ_func_0_0(32) *
                   occ_func_0_1(39) +
               0.707107 * occ_func_0_0(85) * occ_func_0_1(32) *
                   occ_func_0_0(39)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(11) *
                  occ_func_0_0(29) +
              0.707107 * occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_0(22) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_0(80) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(6) *
                   occ_func_0_0(80)) +
              (0.707107 * occ_func_0_0(85) * occ_func_0_0(39) *
                   occ_func_0_1(37) +
               0.707107 * occ_func_0_0(85) * occ_func_0_1(39) *
                   occ_func_0_0(37)) +
              0.707107 * occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_0(24) +
              0.707107 * occ_func_0_0(7) * occ_func_0_1(5) * occ_func_0_0(22) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_0(80) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(4) *
                   occ_func_0_0(80)) +
              (0.707107 * occ_func_0_0(85) * occ_func_0_0(37) *
                   occ_func_0_1(32) +
               0.707107 * occ_func_0_0(85) * occ_func_0_1(37) *
                   occ_func_0_0(32)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(10) *
                  occ_func_0_0(29) +
              0.707107 * occ_func_0_0(9) * occ_func_0_1(3) * occ_func_0_0(24) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_0(80) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(1) *
                   occ_func_0_0(80)) +
              (0.707107 * occ_func_0_0(84) * occ_func_0_0(38) *
                   occ_func_0_1(31) +
               0.707107 * occ_func_0_1(84) * occ_func_0_0(38) *
                   occ_func_0_0(31)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(12) *
                  occ_func_0_0(30) +
              0.707107 * occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_0(81) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(1) * occ_func_0_0(23) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(1) *
                   occ_func_0_0(23)) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_0(11) *
                   occ_func_0_1(33) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(11) *
                   occ_func_0_0(33)) +
              0.707107 * occ_func_0_1(83) * occ_func_0_0(34) *
                  occ_func_0_0(28) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_1(82) +
              (0.707107 * occ_func_0_0(5) * occ_func_0_0(2) * occ_func_0_1(27) +
               0.707107 * occ_func_0_1(5) * occ_func_0_0(2) *
                   occ_func_0_0(27)) +
              (0.707107 * occ_func_0_0(11) * occ_func_0_1(12) *
                   occ_func_0_0(86) +
               0.707107 * occ_func_0_1(11) * occ_func_0_0(12) *
                   occ_func_0_0(86)) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(7) * occ_func_0_0(41) +
              0.707107 * occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_0(40) +
              (0.707107 * occ_func_0_0(79) * occ_func_0_0(20) *
                   occ_func_0_1(21) +
               0.707107 * occ_func_0_0(79) * occ_func_0_1(20) *
                   occ_func_0_0(21)) +
              (0.707107 * occ_func_0_0(86) * occ_func_0_0(42) *
                   occ_func_0_1(40) +
               0.707107 * occ_func_0_0(86) * occ_func_0_1(42) *
                   occ_func_0_0(40)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(9) * occ_func_0_0(21) +
              0.707107 * occ_func_0_0(10) * occ_func_0_1(4) * occ_func_0_0(19) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_0(79) +
               0.707107 * occ_func_0_1(3) * occ_func_0_0(1) *
                   occ_func_0_0(79)) +
              (0.707107 * occ_func_0_0(8) * occ_func_0_0(11) *
                   occ_func_0_1(34) +
               0.707107 * occ_func_0_1(8) * occ_func_0_0(11) *
                   occ_func_0_0(34)) +
              0.707107 * occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_1(83) +
              0.707107 * occ_func_0_1(82) * occ_func_0_0(33) *
                  occ_func_0_0(27) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_0(2) * occ_func_0_1(28) +
               0.707107 * occ_func_0_1(3) * occ_func_0_0(2) *
                   occ_func_0_0(28)) +
              (0.707107 * occ_func_0_0(7) * occ_func_0_1(9) * occ_func_0_0(38) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(9) *
                   occ_func_0_0(38)) +
              0.707107 * occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_0(84) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_0(36) +
              (0.707107 * occ_func_0_0(81) * occ_func_0_0(23) *
                   occ_func_0_1(25) +
               0.707107 * occ_func_0_1(81) * occ_func_0_0(23) *
                   occ_func_0_0(25))) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(6) * occ_func_0_0(11) * occ_func_0_0(39) +
              0.707107 * occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_0(32) +
              0.707107 * occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_0(82) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_0(27) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(9) * occ_func_0_0(25) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_0(81) +
              0.707107 * occ_func_0_0(3) * occ_func_0_0(8) * occ_func_0_0(42) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_0(41) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(10) *
                  occ_func_0_0(30) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_0(25) +
              0.707107 * occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_0(42) +
              0.707107 * occ_func_0_0(1) * occ_func_0_0(4) * occ_func_0_0(40) +
              0.707107 * occ_func_0_0(83) * occ_func_0_0(28) *
                  occ_func_0_0(35) +
              0.707107 * occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_0(82) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(10) * occ_func_0_0(36) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_0(31) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(8) * occ_func_0_0(20) +
              0.707107 * occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_0(19) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_0(84) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(1) * occ_func_0_0(31) +
              0.707107 * occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_0(37) +
              0.707107 * occ_func_0_0(1) * occ_func_0_0(3) * occ_func_0_0(32) +
              0.707107 * occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_0(83) +
              0.707107 * occ_func_0_0(82) * occ_func_0_0(26) *
                  occ_func_0_0(33) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(6) * occ_func_0_0(34) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_0(83) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(7) * occ_func_0_0(21) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_0(20) +
              0.707107 * occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_0(39) +
              0.707107 * occ_func_0_0(4) * occ_func_0_0(5) * occ_func_0_0(37) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(11) *
                  occ_func_0_0(29) +
              0.707107 * occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_0(22) +
              0.707107 * occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_0(24) +
              0.707107 * occ_func_0_0(7) * occ_func_0_0(5) * occ_func_0_0(22) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(10) *
                  occ_func_0_0(29) +
              0.707107 * occ_func_0_0(9) * occ_func_0_0(3) * occ_func_0_0(24) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(12) *
                  occ_func_0_0(30) +
              0.707107 * occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_0(81) +
              0.707107 * occ_func_0_0(83) * occ_func_0_0(34) *
                  occ_func_0_0(28) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_0(82) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(7) * occ_func_0_0(41) +
              0.707107 * occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_0(40) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_0(21) +
              0.707107 * occ_func_0_0(10) * occ_func_0_0(4) * occ_func_0_0(19) +
              0.707107 * occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_0(83) +
              0.707107 * occ_func_0_0(82) * occ_func_0_0(33) *
                  occ_func_0_0(27) +
              0.707107 * occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_0(84) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_0(36)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_3_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(6) * occ_func_0_1(11) * occ_func_0_0(39) +
              0.707107 * occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_0(32) +
              (0.707107 * occ_func_0_1(80) * occ_func_0_0(22) *
                   occ_func_0_1(29) +
               0.707107 * occ_func_0_1(80) * occ_func_0_1(22) *
                   occ_func_0_0(29)) +
              0.707107 * occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_1(82) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_1(27) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(6) * occ_func_0_1(26) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(6) *
                   occ_func_0_1(26)) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(9) * occ_func_0_1(25) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_1(81) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_1(23) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(4) *
                   occ_func_0_1(23)) +
              0.707107 * occ_func_0_1(3) * occ_func_0_1(8) * occ_func_0_0(42) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_0(41) +
              (0.707107 * occ_func_0_1(79) * occ_func_0_0(19) *
                   occ_func_0_1(20) +
               0.707107 * occ_func_0_1(79) * occ_func_0_1(19) *
                   occ_func_0_0(20)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(10) *
                  occ_func_0_1(30) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_1(25) +
              (0.707107 * occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_1(81) +
               0.707107 * occ_func_0_1(2) * occ_func_0_0(5) *
                   occ_func_0_1(81)) +
              0.707107 * occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_0(42) +
              0.707107 * occ_func_0_1(1) * occ_func_0_1(4) * occ_func_0_0(40) +
              (0.707107 * occ_func_0_1(79) * occ_func_0_0(21) *
                   occ_func_0_1(19) +
               0.707107 * occ_func_0_1(79) * occ_func_0_1(21) *
                   occ_func_0_0(19)) +
              0.707107 * occ_func_0_1(83) * occ_func_0_1(28) *
                  occ_func_0_0(35) +
              0.707107 * occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_1(82) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_1(26) +
               0.707107 * occ_func_0_1(4) * occ_func_0_1(1) *
                   occ_func_0_0(26)) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(10) * occ_func_0_0(36) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_0(31) +
              (0.707107 * occ_func_0_1(81) * occ_func_0_0(25) *
                   occ_func_0_1(30) +
               0.707107 * occ_func_0_1(81) * occ_func_0_1(25) *
                   occ_func_0_0(30)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(8) * occ_func_0_1(20) +
              0.707107 * occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_1(19) +
              (0.707107 * occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_1(79) +
               0.707107 * occ_func_0_1(2) * occ_func_0_0(3) *
                   occ_func_0_1(79)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_0(84) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(1) * occ_func_0_0(31) +
              (0.707107 * occ_func_0_0(81) * occ_func_0_1(30) *
                   occ_func_0_1(23) +
               0.707107 * occ_func_0_1(81) * occ_func_0_0(30) *
                   occ_func_0_1(23)) +
              0.707107 * occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_0(37) +
              0.707107 * occ_func_0_1(1) * occ_func_0_1(3) * occ_func_0_0(32) +
              (0.707107 * occ_func_0_1(80) * occ_func_0_0(29) *
                   occ_func_0_1(24) +
               0.707107 * occ_func_0_1(80) * occ_func_0_1(29) *
                   occ_func_0_0(24)) +
              0.707107 * occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_1(83) +
              0.707107 * occ_func_0_1(82) * occ_func_0_1(26) *
                  occ_func_0_0(33) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_1(28) +
               0.707107 * occ_func_0_1(3) * occ_func_0_1(1) *
                   occ_func_0_0(28)) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(6) * occ_func_0_0(34) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_0(83) +
              (0.707107 * occ_func_0_0(82) * occ_func_0_1(27) *
                   occ_func_0_1(26) +
               0.707107 * occ_func_0_1(82) * occ_func_0_0(27) *
                   occ_func_0_1(26)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(7) * occ_func_0_1(21) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_1(20) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_1(79) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(2) *
                   occ_func_0_1(79)) +
              0.707107 * occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_0(39) +
              0.707107 * occ_func_0_1(4) * occ_func_0_1(5) * occ_func_0_0(37) +
              (0.707107 * occ_func_0_1(80) * occ_func_0_0(24) *
                   occ_func_0_1(22) +
               0.707107 * occ_func_0_1(80) * occ_func_0_1(24) *
                   occ_func_0_0(22)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(11) *
                  occ_func_0_1(29) +
              0.707107 * occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_1(22) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_1(80) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(6) *
                   occ_func_0_1(80)) +
              0.707107 * occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_1(24) +
              0.707107 * occ_func_0_0(7) * occ_func_0_1(5) * occ_func_0_1(22) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_1(80) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(4) *
                   occ_func_0_1(80)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(10) *
                  occ_func_0_1(29) +
              0.707107 * occ_func_0_0(9) * occ_func_0_1(3) * occ_func_0_1(24) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_1(80) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(1) *
                   occ_func_0_1(80)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(12) *
                  occ_func_0_1(30) +
              0.707107 * occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_1(81) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(1) * occ_func_0_1(23) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(1) *
                   occ_func_0_1(23)) +
              0.707107 * occ_func_0_1(83) * occ_func_0_0(34) *
                  occ_func_0_1(28) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_1(82) +
              (0.707107 * occ_func_0_0(5) * occ_func_0_1(2) * occ_func_0_1(27) +
               0.707107 * occ_func_0_1(5) * occ_func_0_1(2) *
                   occ_func_0_0(27)) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(7) * occ_func_0_0(41) +
              0.707107 * occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_0(40) +
              (0.707107 * occ_func_0_1(79) * occ_func_0_0(20) *
                   occ_func_0_1(21) +
               0.707107 * occ_func_0_1(79) * occ_func_0_1(20) *
                   occ_func_0_0(21)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(9) * occ_func_0_1(21) +
              0.707107 * occ_func_0_0(10) * occ_func_0_1(4) * occ_func_0_1(19) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_1(79) +
               0.707107 * occ_func_0_1(3) * occ_func_0_0(1) *
                   occ_func_0_1(79)) +
              0.707107 * occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_1(83) +
              0.707107 * occ_func_0_1(82) * occ_func_0_0(33) *
                  occ_func_0_1(27) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_1(2) * occ_func_0_1(28) +
               0.707107 * occ_func_0_1(3) * occ_func_0_1(2) *
                   occ_func_0_0(28)) +
              0.707107 * occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_0(84) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_0(36) +
              (0.707107 * occ_func_0_0(81) * occ_func_0_1(23) *
                   occ_func_0_1(25) +
               0.707107 * occ_func_0_1(81) * occ_func_0_1(23) *
                   occ_func_0_0(25))) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             ((0.707107 * occ_func_0_0(7) * occ_func_0_1(12) *
                   occ_func_0_0(85) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(12) *
                   occ_func_0_0(85)) +
              0.707107 * occ_func_0_1(6) * occ_func_0_0(11) * occ_func_0_0(39) +
              0.707107 * occ_func_0_1(1) * occ_func_0_0(2) * occ_func_0_0(32) +
              (0.707107 * occ_func_0_0(83) * occ_func_0_0(35) *
                   occ_func_0_1(34) +
               0.707107 * occ_func_0_1(83) * occ_func_0_0(35) *
                   occ_func_0_0(34)) +
              0.707107 * occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_1(82) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_1(27) +
              (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) *
                   occ_func_0_0(38) +
               0.707107 * occ_func_0_1(84) * occ_func_0_0(36) *
                   occ_func_0_0(38)) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(9) * occ_func_0_1(25) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(7) * occ_func_0_1(81) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(11) *
                   occ_func_0_0(86) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(11) *
                   occ_func_0_0(86)) +
              0.707107 * occ_func_0_1(3) * occ_func_0_0(8) * occ_func_0_0(42) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(5) * occ_func_0_0(41) +
              (0.707107 * occ_func_0_0(84) * occ_func_0_0(31) *
                   occ_func_0_1(36) +
               0.707107 * occ_func_0_0(84) * occ_func_0_1(31) *
                   occ_func_0_0(36)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(10) *
                  occ_func_0_1(30) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_1(25) +
              (0.707107 * occ_func_0_0(12) * occ_func_0_1(10) *
                   occ_func_0_0(86) +
               0.707107 * occ_func_0_1(12) * occ_func_0_0(10) *
                   occ_func_0_0(86)) +
              0.707107 * occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_0(42) +
              0.707107 * occ_func_0_1(1) * occ_func_0_0(4) * occ_func_0_0(40) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_0(12) *
                   occ_func_0_1(33) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(12) *
                   occ_func_0_0(33)) +
              0.707107 * occ_func_0_0(83) * occ_func_0_1(28) *
                  occ_func_0_0(35) +
              0.707107 * occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_0(82) +
              (0.707107 * occ_func_0_0(8) * occ_func_0_1(11) *
                   occ_func_0_0(84) +
               0.707107 * occ_func_0_1(8) * occ_func_0_0(11) *
                   occ_func_0_0(84)) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(10) * occ_func_0_0(36) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(3) * occ_func_0_0(31) +
              (0.707107 * occ_func_0_0(86) * occ_func_0_0(41) *
                   occ_func_0_1(42) +
               0.707107 * occ_func_0_0(86) * occ_func_0_1(41) *
                   occ_func_0_0(42)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(8) * occ_func_0_1(20) +
              0.707107 * occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_1(19) +
              (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) *
                   occ_func_0_0(38) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(12) *
                   occ_func_0_0(38)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_0(84) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(1) * occ_func_0_0(31) +
              (0.707107 * occ_func_0_0(12) * occ_func_0_1(9) *
                   occ_func_0_0(85) +
               0.707107 * occ_func_0_1(12) * occ_func_0_0(9) *
                   occ_func_0_0(85)) +
              0.707107 * occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_0(37) +
              0.707107 * occ_func_0_1(1) * occ_func_0_0(3) * occ_func_0_0(32) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_0(12) *
                   occ_func_0_1(35) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(12) *
                   occ_func_0_0(35)) +
              0.707107 * occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_0(83) +
              0.707107 * occ_func_0_0(82) * occ_func_0_1(26) *
                  occ_func_0_0(33) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_0(35) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(7) *
                   occ_func_0_0(35)) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(6) * occ_func_0_0(34) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_0(83) +
              (0.707107 * occ_func_0_0(86) * occ_func_0_0(40) *
                   occ_func_0_1(41) +
               0.707107 * occ_func_0_0(86) * occ_func_0_1(40) *
                   occ_func_0_0(41)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(7) * occ_func_0_1(21) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_1(20) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_0(85) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(7) *
                   occ_func_0_0(85)) +
              0.707107 * occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_0(39) +
              0.707107 * occ_func_0_1(4) * occ_func_0_0(5) * occ_func_0_0(37) +
              (0.707107 * occ_func_0_0(85) * occ_func_0_0(32) *
                   occ_func_0_1(39) +
               0.707107 * occ_func_0_0(85) * occ_func_0_1(32) *
                   occ_func_0_0(39)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(11) *
                  occ_func_0_1(29) +
              0.707107 * occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_1(22) +
              (0.707107 * occ_func_0_0(85) * occ_func_0_0(39) *
                   occ_func_0_1(37) +
               0.707107 * occ_func_0_0(85) * occ_func_0_1(39) *
                   occ_func_0_0(37)) +
              0.707107 * occ_func_0_0(9) * occ_func_0_0(8) * occ_func_0_1(24) +
              0.707107 * occ_func_0_0(7) * occ_func_0_0(5) * occ_func_0_1(22) +
              (0.707107 * occ_func_0_0(85) * occ_func_0_0(37) *
                   occ_func_0_1(32) +
               0.707107 * occ_func_0_0(85) * occ_func_0_1(37) *
                   occ_func_0_0(32)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(10) *
                  occ_func_0_1(29) +
              0.707107 * occ_func_0_0(9) * occ_func_0_0(3) * occ_func_0_1(24) +
              (0.707107 * occ_func_0_0(84) * occ_func_0_0(38) *
                   occ_func_0_1(31) +
               0.707107 * occ_func_0_1(84) * occ_func_0_0(38) *
                   occ_func_0_0(31)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(12) *
                  occ_func_0_1(30) +
              0.707107 * occ_func_0_0(7) * occ_func_0_0(2) * occ_func_0_1(81) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_0(11) *
                   occ_func_0_1(33) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(11) *
                   occ_func_0_0(33)) +
              0.707107 * occ_func_0_0(83) * occ_func_0_0(34) *
                  occ_func_0_1(28) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_0(82) +
              (0.707107 * occ_func_0_0(11) * occ_func_0_1(12) *
                   occ_func_0_0(86) +
               0.707107 * occ_func_0_1(11) * occ_func_0_0(12) *
                   occ_func_0_0(86)) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(7) * occ_func_0_0(41) +
              0.707107 * occ_func_0_1(1) * occ_func_0_0(6) * occ_func_0_0(40) +
              (0.707107 * occ_func_0_0(86) * occ_func_0_0(42) *
                   occ_func_0_1(40) +
               0.707107 * occ_func_0_0(86) * occ_func_0_1(42) *
                   occ_func_0_0(40)) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_1(21) +
              0.707107 * occ_func_0_0(10) * occ_func_0_0(4) * occ_func_0_1(19) +
              (0.707107 * occ_func_0_0(8) * occ_func_0_0(11) *
                   occ_func_0_1(34) +
               0.707107 * occ_func_0_1(8) * occ_func_0_0(11) *
                   occ_func_0_0(34)) +
              0.707107 * occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_0(83) +
              0.707107 * occ_func_0_0(82) * occ_func_0_0(33) *
                  occ_func_0_1(27) +
              (0.707107 * occ_func_0_0(7) * occ_func_0_1(9) * occ_func_0_0(38) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(9) *
                   occ_func_0_0(38)) +
              0.707107 * occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_0(84) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_0(36)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_4_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_0(85) +
              occ_func_0_0(80) * occ_func_0_1(22) * occ_func_0_1(29) +
              occ_func_0_1(83) * occ_func_0_0(35) * occ_func_0_1(34) +
              occ_func_0_1(4) * occ_func_0_1(6) * occ_func_0_0(26) +
              occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_0(38) +
              occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_0(23) +
              occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_0(86) +
              occ_func_0_0(79) * occ_func_0_1(19) * occ_func_0_1(20) +
              occ_func_0_0(84) * occ_func_0_1(31) * occ_func_0_1(36) +
              occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_0(81) +
              occ_func_0_1(12) * occ_func_0_1(10) * occ_func_0_0(86) +
              occ_func_0_0(79) * occ_func_0_1(21) * occ_func_0_1(19) +
              occ_func_0_1(10) * occ_func_0_0(12) * occ_func_0_1(33) +
              occ_func_0_1(4) * occ_func_0_0(1) * occ_func_0_1(26) +
              occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_0(84) +
              occ_func_0_0(81) * occ_func_0_1(25) * occ_func_0_1(30) +
              occ_func_0_0(86) * occ_func_0_1(41) * occ_func_0_1(42) +
              occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_0(79) +
              occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_0(38) +
              occ_func_0_1(81) * occ_func_0_1(30) * occ_func_0_0(23) +
              occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_0(85) +
              occ_func_0_0(80) * occ_func_0_1(29) * occ_func_0_1(24) +
              occ_func_0_1(9) * occ_func_0_0(12) * occ_func_0_1(35) +
              occ_func_0_1(3) * occ_func_0_0(1) * occ_func_0_1(28) +
              occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_0(35) +
              occ_func_0_1(82) * occ_func_0_1(27) * occ_func_0_0(26) +
              occ_func_0_0(86) * occ_func_0_1(40) * occ_func_0_1(41) +
              occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_0(79) +
              occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_0(85) +
              occ_func_0_0(80) * occ_func_0_1(24) * occ_func_0_1(22) +
              occ_func_0_0(85) * occ_func_0_1(32) * occ_func_0_1(39) +
              occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_0(80) +
              occ_func_0_0(85) * occ_func_0_1(39) * occ_func_0_1(37) +
              occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_0(80) +
              occ_func_0_0(85) * occ_func_0_1(37) * occ_func_0_1(32) +
              occ_func_0_1(4) * occ_func_0_1(1) * occ_func_0_0(80) +
              occ_func_0_1(84) * occ_func_0_0(38) * occ_func_0_1(31) +
              occ_func_0_1(6) * occ_func_0_1(1) * occ_func_0_0(23) +
              occ_func_0_1(10) * occ_func_0_0(11) * occ_func_0_1(33) +
              occ_func_0_1(5) * occ_func_0_0(2) * occ_func_0_1(27) +
              occ_func_0_1(11) * occ_func_0_1(12) * occ_func_0_0(86) +
              occ_func_0_0(79) * occ_func_0_1(20) * occ_func_0_1(21) +
              occ_func_0_0(86) * occ_func_0_1(42) * occ_func_0_1(40) +
              occ_func_0_1(3) * occ_func_0_1(1) * occ_func_0_0(79) +
              occ_func_0_1(8) * occ_func_0_0(11) * occ_func_0_1(34) +
              occ_func_0_1(3) * occ_func_0_0(2) * occ_func_0_1(28) +
              occ_func_0_1(7) * occ_func_0_1(9) * occ_func_0_0(38) +
              occ_func_0_1(81) * occ_func_0_0(23) * occ_func_0_1(25)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(6) * occ_func_0_1(11) * occ_func_0_0(39) +
              occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_0(32) +
              occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_0(82) +
              occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_0(27) +
              occ_func_0_1(8) * occ_func_0_0(9) * occ_func_0_0(25) +
              occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_0(81) +
              occ_func_0_0(3) * occ_func_0_1(8) * occ_func_0_0(42) +
              occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_0(41) +
              occ_func_0_0(11) * occ_func_0_1(10) * occ_func_0_0(30) +
              occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_0(25) +
              occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_0(42) +
              occ_func_0_0(1) * occ_func_0_1(4) * occ_func_0_0(40) +
              occ_func_0_1(83) * occ_func_0_0(28) * occ_func_0_0(35) +
              occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_1(82) +
              occ_func_0_0(5) * occ_func_0_1(10) * occ_func_0_0(36) +
              occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_0(31) +
              occ_func_0_0(11) * occ_func_0_1(8) * occ_func_0_0(20) +
              occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_0(19) +
              occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_0(84) +
              occ_func_0_1(2) * occ_func_0_0(1) * occ_func_0_0(31) +
              occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_0(37) +
              occ_func_0_0(1) * occ_func_0_1(3) * occ_func_0_0(32) +
              occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_1(83) +
              occ_func_0_1(82) * occ_func_0_0(26) * occ_func_0_0(33) +
              occ_func_0_1(8) * occ_func_0_0(6) * occ_func_0_0(34) +
              occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_0(83) +
              occ_func_0_0(12) * occ_func_0_1(7) * occ_func_0_0(21) +
              occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_0(20) +
              occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_0(39) +
              occ_func_0_0(4) * occ_func_0_1(5) * occ_func_0_0(37) +
              occ_func_0_0(12) * occ_func_0_1(11) * occ_func_0_0(29) +
              occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_0(22) +
              occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_0(24) +
              occ_func_0_0(7) * occ_func_0_1(5) * occ_func_0_0(22) +
              occ_func_0_0(12) * occ_func_0_1(10) * occ_func_0_0(29) +
              occ_func_0_0(9) * occ_func_0_1(3) * occ_func_0_0(24) +
              occ_func_0_1(11) * occ_func_0_0(12) * occ_func_0_0(30) +
              occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_0(81) +
              occ_func_0_1(83) * occ_func_0_0(34) * occ_func_0_0(28) +
              occ_func_0_0(8) * occ_func_0_0(3) * occ_func_0_1(82) +
              occ_func_0_0(2) * occ_func_0_1(7) * occ_func_0_0(41) +
              occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_0(40) +
              occ_func_0_0(12) * occ_func_0_1(9) * occ_func_0_0(21) +
              occ_func_0_0(10) * occ_func_0_1(4) * occ_func_0_0(19) +
              occ_func_0_0(10) * occ_func_0_0(5) * occ_func_0_1(83) +
              occ_func_0_1(82) * occ_func_0_0(33) * occ_func_0_0(27) +
              occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_0(84) +
              occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_0(36)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_5_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(80) * occ_func_0_1(22) * occ_func_0_1(29) +
              occ_func_0_1(4) * occ_func_0_1(6) * occ_func_0_1(26) +
              occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_1(23) +
              occ_func_0_1(79) * occ_func_0_1(19) * occ_func_0_1(20) +
              occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_1(81) +
              occ_func_0_1(79) * occ_func_0_1(21) * occ_func_0_1(19) +
              occ_func_0_1(4) * occ_func_0_1(1) * occ_func_0_1(26) +
              occ_func_0_1(81) * occ_func_0_1(25) * occ_func_0_1(30) +
              occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_1(79) +
              occ_func_0_1(81) * occ_func_0_1(30) * occ_func_0_1(23) +
              occ_func_0_1(80) * occ_func_0_1(29) * occ_func_0_1(24) +
              occ_func_0_1(3) * occ_func_0_1(1) * occ_func_0_1(28) +
              occ_func_0_1(82) * occ_func_0_1(27) * occ_func_0_1(26) +
              occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_1(79) +
              occ_func_0_1(80) * occ_func_0_1(24) * occ_func_0_1(22) +
              occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_1(80) +
              occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_1(80) +
              occ_func_0_1(4) * occ_func_0_1(1) * occ_func_0_1(80) +
              occ_func_0_1(6) * occ_func_0_1(1) * occ_func_0_1(23) +
              occ_func_0_1(5) * occ_func_0_1(2) * occ_func_0_1(27) +
              occ_func_0_1(79) * occ_func_0_1(20) * occ_func_0_1(21) +
              occ_func_0_1(3) * occ_func_0_1(1) * occ_func_0_1(79) +
              occ_func_0_1(3) * occ_func_0_1(2) * occ_func_0_1(28) +
              occ_func_0_1(81) * occ_func_0_1(23) * occ_func_0_1(25)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_0(85) +
              occ_func_0_1(6) * occ_func_0_1(11) * occ_func_0_0(39) +
              occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_0(32) +
              occ_func_0_1(83) * occ_func_0_0(35) * occ_func_0_1(34) +
              occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_1(82) +
              occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_1(27) +
              occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_0(38) +
              occ_func_0_1(8) * occ_func_0_0(9) * occ_func_0_1(25) +
              occ_func_0_1(5) * occ_func_0_0(7) * occ_func_0_1(81) +
              occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_0(86) +
              occ_func_0_1(3) * occ_func_0_1(8) * occ_func_0_0(42) +
              occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_0(41) +
              occ_func_0_0(84) * occ_func_0_1(31) * occ_func_0_1(36) +
              occ_func_0_0(11) * occ_func_0_1(10) * occ_func_0_1(30) +
              occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_1(25) +
              occ_func_0_1(12) * occ_func_0_1(10) * occ_func_0_0(86) +
              occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_0(42) +
              occ_func_0_1(1) * occ_func_0_1(4) * occ_func_0_0(40) +
              occ_func_0_1(10) * occ_func_0_0(12) * occ_func_0_1(33) +
              occ_func_0_1(83) * occ_func_0_1(28) * occ_func_0_0(35) +
              occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_1(82) +
              occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_0(84) +
              occ_func_0_1(5) * occ_func_0_1(10) * occ_func_0_0(36) +
              occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_0(31) +
              occ_func_0_0(86) * occ_func_0_1(41) * occ_func_0_1(42) +
              occ_func_0_0(11) * occ_func_0_1(8) * occ_func_0_1(20) +
              occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_1(19) +
              occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_0(38) +
              occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_0(84) +
              occ_func_0_1(2) * occ_func_0_1(1) * occ_func_0_0(31) +
              occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_0(85) +
              occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_0(37) +
              occ_func_0_1(1) * occ_func_0_1(3) * occ_func_0_0(32) +
              occ_func_0_1(9) * occ_func_0_0(12) * occ_func_0_1(35) +
              occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_1(83) +
              occ_func_0_1(82) * occ_func_0_1(26) * occ_func_0_0(33) +
              occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_0(35) +
              occ_func_0_1(8) * occ_func_0_1(6) * occ_func_0_0(34) +
              occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_0(83) +
              occ_func_0_0(86) * occ_func_0_1(40) * occ_func_0_1(41) +
              occ_func_0_0(12) * occ_func_0_1(7) * occ_func_0_1(21) +
              occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_1(20) +
              occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_0(85) +
              occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_0(39) +
              occ_func_0_1(4) * occ_func_0_1(5) * occ_func_0_0(37) +
              occ_func_0_0(85) * occ_func_0_1(32) * occ_func_0_1(39) +
              occ_func_0_0(12) * occ_func_0_1(11) * occ_func_0_1(29) +
              occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_1(22) +
              occ_func_0_0(85) * occ_func_0_1(39) * occ_func_0_1(37) +
              occ_func_0_0(9) * occ_func_0_1(8) * occ_func_0_1(24) +
              occ_func_0_0(7) * occ_func_0_1(5) * occ_func_0_1(22) +
              occ_func_0_0(85) * occ_func_0_1(37) * occ_func_0_1(32) +
              occ_func_0_0(12) * occ_func_0_1(10) * occ_func_0_1(29) +
              occ_func_0_0(9) * occ_func_0_1(3) * occ_func_0_1(24) +
              occ_func_0_1(84) * occ_func_0_0(38) * occ_func_0_1(31) +
              occ_func_0_1(11) * occ_func_0_0(12) * occ_func_0_1(30) +
              occ_func_0_0(7) * occ_func_0_1(2) * occ_func_0_1(81) +
              occ_func_0_1(10) * occ_func_0_0(11) * occ_func_0_1(33) +
              occ_func_0_1(83) * occ_func_0_0(34) * occ_func_0_1(28) +
              occ_func_0_0(8) * occ_func_0_1(3) * occ_func_0_1(82) +
              occ_func_0_1(11) * occ_func_0_1(12) * occ_func_0_0(86) +
              occ_func_0_1(2) * occ_func_0_1(7) * occ_func_0_0(41) +
              occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_0(40) +
              occ_func_0_0(86) * occ_func_0_1(42) * occ_func_0_1(40) +
              occ_func_0_0(12) * occ_func_0_1(9) * occ_func_0_1(21) +
              occ_func_0_0(10) * occ_func_0_1(4) * occ_func_0_1(19) +
              occ_func_0_1(8) * occ_func_0_0(11) * occ_func_0_1(34) +
              occ_func_0_0(10) * occ_func_0_1(5) * occ_func_0_1(83) +
              occ_func_0_1(82) * occ_func_0_0(33) * occ_func_0_1(27) +
              occ_func_0_1(7) * occ_func_0_1(9) * occ_func_0_0(38) +
              occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_0(84) +
              occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_0(36)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_6_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_1(85) +
              occ_func_0_0(6) * occ_func_0_0(11) * occ_func_0_1(39) +
              occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_1(32) +
              occ_func_0_0(83) * occ_func_0_1(35) * occ_func_0_0(34) +
              occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_0(82) +
              occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_0(27) +
              occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_1(38) +
              occ_func_0_0(8) * occ_func_0_1(9) * occ_func_0_0(25) +
              occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_0(81) +
              occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_1(86) +
              occ_func_0_0(3) * occ_func_0_0(8) * occ_func_0_1(42) +
              occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_1(41) +
              occ_func_0_1(84) * occ_func_0_0(31) * occ_func_0_0(36) +
              occ_func_0_1(11) * occ_func_0_0(10) * occ_func_0_0(30) +
              occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_0(25) +
              occ_func_0_0(12) * occ_func_0_0(10) * occ_func_0_1(86) +
              occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_1(42) +
              occ_func_0_0(1) * occ_func_0_0(4) * occ_func_0_1(40) +
              occ_func_0_0(10) * occ_func_0_1(12) * occ_func_0_0(33) +
              occ_func_0_0(83) * occ_func_0_0(28) * occ_func_0_1(35) +
              occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_0(82) +
              occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_1(84) +
              occ_func_0_0(5) * occ_func_0_0(10) * occ_func_0_1(36) +
              occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_1(31) +
              occ_func_0_1(86) * occ_func_0_0(41) * occ_func_0_0(42) +
              occ_func_0_1(11) * occ_func_0_0(8) * occ_func_0_0(20) +
              occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_0(19) +
              occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_1(38) +
              occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_1(84) +
              occ_func_0_0(2) * occ_func_0_0(1) * occ_func_0_1(31) +
              occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_1(85) +
              occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_1(37) +
              occ_func_0_0(1) * occ_func_0_0(3) * occ_func_0_1(32) +
              occ_func_0_0(9) * occ_func_0_1(12) * occ_func_0_0(35) +
              occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_0(83) +
              occ_func_0_0(82) * occ_func_0_0(26) * occ_func_0_1(33) +
              occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_1(35) +
              occ_func_0_0(8) * occ_func_0_0(6) * occ_func_0_1(34) +
              occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_1(83) +
              occ_func_0_1(86) * occ_func_0_0(40) * occ_func_0_0(41) +
              occ_func_0_1(12) * occ_func_0_0(7) * occ_func_0_0(21) +
              occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_0(20) +
              occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_1(85) +
              occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_1(39) +
              occ_func_0_0(4) * occ_func_0_0(5) * occ_func_0_1(37) +
              occ_func_0_1(85) * occ_func_0_0(32) * occ_func_0_0(39) +
              occ_func_0_1(12) * occ_func_0_0(11) * occ_func_0_0(29) +
              occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_0(22) +
              occ_func_0_1(85) * occ_func_0_0(39) * occ_func_0_0(37) +
              occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_0(24) +
              occ_func_0_1(7) * occ_func_0_0(5) * occ_func_0_0(22) +
              occ_func_0_1(85) * occ_func_0_0(37) * occ_func_0_0(32) +
              occ_func_0_1(12) * occ_func_0_0(10) * occ_func_0_0(29) +
              occ_func_0_1(9) * occ_func_0_0(3) * occ_func_0_0(24) +
              occ_func_0_0(84) * occ_func_0_1(38) * occ_func_0_0(31) +
              occ_func_0_0(11) * occ_func_0_1(12) * occ_func_0_0(30) +
              occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_0(81) +
              occ_func_0_0(10) * occ_func_0_1(11) * occ_func_0_0(33) +
              occ_func_0_0(83) * occ_func_0_1(34) * occ_func_0_0(28) +
              occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_0(82) +
              occ_func_0_0(11) * occ_func_0_0(12) * occ_func_0_1(86) +
              occ_func_0_0(2) * occ_func_0_0(7) * occ_func_0_1(41) +
              occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_1(40) +
              occ_func_0_1(86) * occ_func_0_0(42) * occ_func_0_0(40) +
              occ_func_0_1(12) * occ_func_0_0(9) * occ_func_0_0(21) +
              occ_func_0_1(10) * occ_func_0_0(4) * occ_func_0_0(19) +
              occ_func_0_0(8) * occ_func_0_1(11) * occ_func_0_0(34) +
              occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_0(83) +
              occ_func_0_0(82) * occ_func_0_1(33) * occ_func_0_0(27) +
              occ_func_0_0(7) * occ_func_0_0(9) * occ_func_0_1(38) +
              occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_1(84) +
              occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_1(36)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(80) * occ_func_0_0(22) * occ_func_0_0(29) +
              occ_func_0_0(4) * occ_func_0_0(6) * occ_func_0_0(26) +
              occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_0(23) +
              occ_func_0_0(79) * occ_func_0_0(19) * occ_func_0_0(20) +
              occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_0(81) +
              occ_func_0_0(79) * occ_func_0_0(21) * occ_func_0_0(19) +
              occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_0(26) +
              occ_func_0_0(81) * occ_func_0_0(25) * occ_func_0_0(30) +
              occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_0(79) +
              occ_func_0_0(81) * occ_func_0_0(30) * occ_func_0_0(23) +
              occ_func_0_0(80) * occ_func_0_0(29) * occ_func_0_0(24) +
              occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_0(28) +
              occ_func_0_0(82) * occ_func_0_0(27) * occ_func_0_0(26) +
              occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_0(79) +
              occ_func_0_0(80) * occ_func_0_0(24) * occ_func_0_0(22) +
              occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_0(80) +
              occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_0(80) +
              occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_0(80) +
              occ_func_0_0(6) * occ_func_0_0(1) * occ_func_0_0(23) +
              occ_func_0_0(5) * occ_func_0_0(2) * occ_func_0_0(27) +
              occ_func_0_0(79) * occ_func_0_0(20) * occ_func_0_0(21) +
              occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_0(79) +
              occ_func_0_0(3) * occ_func_0_0(2) * occ_func_0_0(28) +
              occ_func_0_0(81) * occ_func_0_0(23) * occ_func_0_0(25)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_7_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(6) * occ_func_0_0(11) * occ_func_0_1(39) +
              occ_func_0_1(1) * occ_func_0_0(2) * occ_func_0_1(32) +
              occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_1(82) +
              occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_1(27) +
              occ_func_0_0(8) * occ_func_0_1(9) * occ_func_0_1(25) +
              occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_1(81) +
              occ_func_0_1(3) * occ_func_0_0(8) * occ_func_0_1(42) +
              occ_func_0_1(2) * occ_func_0_0(5) * occ_func_0_1(41) +
              occ_func_0_1(11) * occ_func_0_0(10) * occ_func_0_1(30) +
              occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_1(25) +
              occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_1(42) +
              occ_func_0_1(1) * occ_func_0_0(4) * occ_func_0_1(40) +
              occ_func_0_0(83) * occ_func_0_1(28) * occ_func_0_1(35) +
              occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_0(82) +
              occ_func_0_1(5) * occ_func_0_0(10) * occ_func_0_1(36) +
              occ_func_0_1(2) * occ_func_0_0(3) * occ_func_0_1(31) +
              occ_func_0_1(11) * occ_func_0_0(8) * occ_func_0_1(20) +
              occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_1(19) +
              occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_1(84) +
              occ_func_0_0(2) * occ_func_0_1(1) * occ_func_0_1(31) +
              occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_1(37) +
              occ_func_0_1(1) * occ_func_0_0(3) * occ_func_0_1(32) +
              occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_0(83) +
              occ_func_0_0(82) * occ_func_0_1(26) * occ_func_0_1(33) +
              occ_func_0_0(8) * occ_func_0_1(6) * occ_func_0_1(34) +
              occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_1(83) +
              occ_func_0_1(12) * occ_func_0_0(7) * occ_func_0_1(21) +
              occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_1(20) +
              occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_1(39) +
              occ_func_0_1(4) * occ_func_0_0(5) * occ_func_0_1(37) +
              occ_func_0_1(12) * occ_func_0_0(11) * occ_func_0_1(29) +
              occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_1(22) +
              occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_1(24) +
              occ_func_0_1(7) * occ_func_0_0(5) * occ_func_0_1(22) +
              occ_func_0_1(12) * occ_func_0_0(10) * occ_func_0_1(29) +
              occ_func_0_1(9) * occ_func_0_0(3) * occ_func_0_1(24) +
              occ_func_0_0(11) * occ_func_0_1(12) * occ_func_0_1(30) +
              occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_1(81) +
              occ_func_0_0(83) * occ_func_0_1(34) * occ_func_0_1(28) +
              occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_0(82) +
              occ_func_0_1(2) * occ_func_0_0(7) * occ_func_0_1(41) +
              occ_func_0_1(1) * occ_func_0_0(6) * occ_func_0_1(40) +
              occ_func_0_1(12) * occ_func_0_0(9) * occ_func_0_1(21) +
              occ_func_0_1(10) * occ_func_0_0(4) * occ_func_0_1(19) +
              occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_0(83) +
              occ_func_0_0(82) * occ_func_0_1(33) * occ_func_0_1(27) +
              occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_1(84) +
              occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_1(36)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_1(85) +
              occ_func_0_1(80) * occ_func_0_0(22) * occ_func_0_0(29) +
              occ_func_0_0(83) * occ_func_0_1(35) * occ_func_0_0(34) +
              occ_func_0_0(4) * occ_func_0_0(6) * occ_func_0_1(26) +
              occ_func_0_0(84) * occ_func_0_0(36) * occ_func_0_1(38) +
              occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_1(23) +
              occ_func_0_0(10) * occ_func_0_0(11) * occ_func_0_1(86) +
              occ_func_0_1(79) * occ_func_0_0(19) * occ_func_0_0(20) +
              occ_func_0_1(84) * occ_func_0_0(31) * occ_func_0_0(36) +
              occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_1(81) +
              occ_func_0_0(12) * occ_func_0_0(10) * occ_func_0_1(86) +
              occ_func_0_1(79) * occ_func_0_0(21) * occ_func_0_0(19) +
              occ_func_0_0(10) * occ_func_0_1(12) * occ_func_0_0(33) +
              occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_0(26) +
              occ_func_0_0(8) * occ_func_0_0(11) * occ_func_0_1(84) +
              occ_func_0_1(81) * occ_func_0_0(25) * occ_func_0_0(30) +
              occ_func_0_1(86) * occ_func_0_0(41) * occ_func_0_0(42) +
              occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_1(79) +
              occ_func_0_0(7) * occ_func_0_0(12) * occ_func_0_1(38) +
              occ_func_0_0(81) * occ_func_0_0(30) * occ_func_0_1(23) +
              occ_func_0_0(12) * occ_func_0_0(9) * occ_func_0_1(85) +
              occ_func_0_1(80) * occ_func_0_0(29) * occ_func_0_0(24) +
              occ_func_0_0(9) * occ_func_0_1(12) * occ_func_0_0(35) +
              occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_0(28) +
              occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_1(35) +
              occ_func_0_0(82) * occ_func_0_0(27) * occ_func_0_1(26) +
              occ_func_0_1(86) * occ_func_0_0(40) * occ_func_0_0(41) +
              occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_1(79) +
              occ_func_0_0(9) * occ_func_0_0(7) * occ_func_0_1(85) +
              occ_func_0_1(80) * occ_func_0_0(24) * occ_func_0_0(22) +
              occ_func_0_1(85) * occ_func_0_0(32) * occ_func_0_0(39) +
              occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_1(80) +
              occ_func_0_1(85) * occ_func_0_0(39) * occ_func_0_0(37) +
              occ_func_0_0(6) * occ_func_0_0(4) * occ_func_0_1(80) +
              occ_func_0_1(85) * occ_func_0_0(37) * occ_func_0_0(32) +
              occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_1(80) +
              occ_func_0_0(84) * occ_func_0_1(38) * occ_func_0_0(31) +
              occ_func_0_0(6) * occ_func_0_0(1) * occ_func_0_1(23) +
              occ_func_0_0(10) * occ_func_0_1(11) * occ_func_0_0(33) +
              occ_func_0_0(5) * occ_func_0_1(2) * occ_func_0_0(27) +
              occ_func_0_0(11) * occ_func_0_0(12) * occ_func_0_1(86) +
              occ_func_0_1(79) * occ_func_0_0(20) * occ_func_0_0(21) +
              occ_func_0_1(86) * occ_func_0_0(42) * occ_func_0_0(40) +
              occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_1(79) +
              occ_func_0_0(8) * occ_func_0_1(11) * occ_func_0_0(34) +
              occ_func_0_0(3) * occ_func_0_1(2) * occ_func_0_0(28) +
              occ_func_0_0(7) * occ_func_0_0(9) * occ_func_0_1(38) +
              occ_func_0_0(81) * occ_func_0_1(23) * occ_func_0_0(25)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_8_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             ((0.707107 * occ_func_0_0(7) * occ_func_0_1(12) *
                   occ_func_0_1(85) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(12) *
                   occ_func_0_1(85)) +
              0.707107 * occ_func_0_0(6) * occ_func_0_1(11) * occ_func_0_1(39) +
              0.707107 * occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_1(32) +
              (0.707107 * occ_func_0_0(83) * occ_func_0_1(35) *
                   occ_func_0_1(34) +
               0.707107 * occ_func_0_1(83) * occ_func_0_1(35) *
                   occ_func_0_0(34)) +
              0.707107 * occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_0(82) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_0(27) +
              (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) *
                   occ_func_0_1(38) +
               0.707107 * occ_func_0_1(84) * occ_func_0_0(36) *
                   occ_func_0_1(38)) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(9) * occ_func_0_0(25) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_0(81) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(11) *
                   occ_func_0_1(86) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(11) *
                   occ_func_0_1(86)) +
              0.707107 * occ_func_0_0(3) * occ_func_0_1(8) * occ_func_0_1(42) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_1(41) +
              (0.707107 * occ_func_0_1(84) * occ_func_0_0(31) *
                   occ_func_0_1(36) +
               0.707107 * occ_func_0_1(84) * occ_func_0_1(31) *
                   occ_func_0_0(36)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(10) *
                  occ_func_0_0(30) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_0(25) +
              (0.707107 * occ_func_0_0(12) * occ_func_0_1(10) *
                   occ_func_0_1(86) +
               0.707107 * occ_func_0_1(12) * occ_func_0_0(10) *
                   occ_func_0_1(86)) +
              0.707107 * occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_1(42) +
              0.707107 * occ_func_0_0(1) * occ_func_0_1(4) * occ_func_0_1(40) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(12) *
                   occ_func_0_1(33) +
               0.707107 * occ_func_0_1(10) * occ_func_0_1(12) *
                   occ_func_0_0(33)) +
              0.707107 * occ_func_0_1(83) * occ_func_0_0(28) *
                  occ_func_0_1(35) +
              0.707107 * occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_1(82) +
              (0.707107 * occ_func_0_0(8) * occ_func_0_1(11) *
                   occ_func_0_1(84) +
               0.707107 * occ_func_0_1(8) * occ_func_0_0(11) *
                   occ_func_0_1(84)) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(10) * occ_func_0_1(36) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_1(31) +
              (0.707107 * occ_func_0_1(86) * occ_func_0_0(41) *
                   occ_func_0_1(42) +
               0.707107 * occ_func_0_1(86) * occ_func_0_1(41) *
                   occ_func_0_0(42)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(8) * occ_func_0_0(20) +
              0.707107 * occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_0(19) +
              (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) *
                   occ_func_0_1(38) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(12) *
                   occ_func_0_1(38)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_1(84) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(1) * occ_func_0_1(31) +
              (0.707107 * occ_func_0_0(12) * occ_func_0_1(9) *
                   occ_func_0_1(85) +
               0.707107 * occ_func_0_1(12) * occ_func_0_0(9) *
                   occ_func_0_1(85)) +
              0.707107 * occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_1(37) +
              0.707107 * occ_func_0_0(1) * occ_func_0_1(3) * occ_func_0_1(32) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_1(12) *
                   occ_func_0_1(35) +
               0.707107 * occ_func_0_1(9) * occ_func_0_1(12) *
                   occ_func_0_0(35)) +
              0.707107 * occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_1(83) +
              0.707107 * occ_func_0_1(82) * occ_func_0_0(26) *
                  occ_func_0_1(33) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_1(35) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(7) *
                   occ_func_0_1(35)) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(6) * occ_func_0_1(34) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_1(83) +
              (0.707107 * occ_func_0_1(86) * occ_func_0_0(40) *
                   occ_func_0_1(41) +
               0.707107 * occ_func_0_1(86) * occ_func_0_1(40) *
                   occ_func_0_0(41)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(7) * occ_func_0_0(21) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_0(20) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_1(85) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(7) *
                   occ_func_0_1(85)) +
              0.707107 * occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_1(39) +
              0.707107 * occ_func_0_0(4) * occ_func_0_1(5) * occ_func_0_1(37) +
              (0.707107 * occ_func_0_1(85) * occ_func_0_0(32) *
                   occ_func_0_1(39) +
               0.707107 * occ_func_0_1(85) * occ_func_0_1(32) *
                   occ_func_0_0(39)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(11) *
                  occ_func_0_0(29) +
              0.707107 * occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_0(22) +
              (0.707107 * occ_func_0_1(85) * occ_func_0_0(39) *
                   occ_func_0_1(37) +
               0.707107 * occ_func_0_1(85) * occ_func_0_1(39) *
                   occ_func_0_0(37)) +
              0.707107 * occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_0(24) +
              0.707107 * occ_func_0_1(7) * occ_func_0_1(5) * occ_func_0_0(22) +
              (0.707107 * occ_func_0_1(85) * occ_func_0_0(37) *
                   occ_func_0_1(32) +
               0.707107 * occ_func_0_1(85) * occ_func_0_1(37) *
                   occ_func_0_0(32)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(10) *
                  occ_func_0_0(29) +
              0.707107 * occ_func_0_1(9) * occ_func_0_1(3) * occ_func_0_0(24) +
              (0.707107 * occ_func_0_0(84) * occ_func_0_1(38) *
                   occ_func_0_1(31) +
               0.707107 * occ_func_0_1(84) * occ_func_0_1(38) *
                   occ_func_0_0(31)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(12) *
                  occ_func_0_0(30) +
              0.707107 * occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_0(81) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(11) *
                   occ_func_0_1(33) +
               0.707107 * occ_func_0_1(10) * occ_func_0_1(11) *
                   occ_func_0_0(33)) +
              0.707107 * occ_func_0_1(83) * occ_func_0_1(34) *
                  occ_func_0_0(28) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_1(82) +
              (0.707107 * occ_func_0_0(11) * occ_func_0_1(12) *
                   occ_func_0_1(86) +
               0.707107 * occ_func_0_1(11) * occ_func_0_0(12) *
                   occ_func_0_1(86)) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(7) * occ_func_0_1(41) +
              0.707107 * occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_1(40) +
              (0.707107 * occ_func_0_1(86) * occ_func_0_0(42) *
                   occ_func_0_1(40) +
               0.707107 * occ_func_0_1(86) * occ_func_0_1(42) *
                   occ_func_0_0(40)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_0(21) +
              0.707107 * occ_func_0_1(10) * occ_func_0_1(4) * occ_func_0_0(19) +
              (0.707107 * occ_func_0_0(8) * occ_func_0_1(11) *
                   occ_func_0_1(34) +
               0.707107 * occ_func_0_1(8) * occ_func_0_1(11) *
                   occ_func_0_0(34)) +
              0.707107 * occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_1(83) +
              0.707107 * occ_func_0_1(82) * occ_func_0_1(33) *
                  occ_func_0_0(27) +
              (0.707107 * occ_func_0_0(7) * occ_func_0_1(9) * occ_func_0_1(38) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(9) *
                   occ_func_0_1(38)) +
              0.707107 * occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_1(84) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_1(36)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(6) * occ_func_0_0(11) * occ_func_0_1(39) +
              0.707107 * occ_func_0_0(1) * occ_func_0_0(2) * occ_func_0_1(32) +
              (0.707107 * occ_func_0_0(80) * occ_func_0_0(22) *
                   occ_func_0_1(29) +
               0.707107 * occ_func_0_0(80) * occ_func_0_1(22) *
                   occ_func_0_0(29)) +
              0.707107 * occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_0(82) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_0(27) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(6) * occ_func_0_0(26) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(6) *
                   occ_func_0_0(26)) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(9) * occ_func_0_0(25) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_0(81) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_0(23) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(4) *
                   occ_func_0_0(23)) +
              0.707107 * occ_func_0_0(3) * occ_func_0_0(8) * occ_func_0_1(42) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(5) * occ_func_0_1(41) +
              (0.707107 * occ_func_0_0(79) * occ_func_0_0(19) *
                   occ_func_0_1(20) +
               0.707107 * occ_func_0_0(79) * occ_func_0_1(19) *
                   occ_func_0_0(20)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(10) *
                  occ_func_0_0(30) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_0(25) +
              (0.707107 * occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_0(81) +
               0.707107 * occ_func_0_1(2) * occ_func_0_0(5) *
                   occ_func_0_0(81)) +
              0.707107 * occ_func_0_0(3) * occ_func_0_0(9) * occ_func_0_1(42) +
              0.707107 * occ_func_0_0(1) * occ_func_0_0(4) * occ_func_0_1(40) +
              (0.707107 * occ_func_0_0(79) * occ_func_0_0(21) *
                   occ_func_0_1(19) +
               0.707107 * occ_func_0_0(79) * occ_func_0_1(21) *
                   occ_func_0_0(19)) +
              0.707107 * occ_func_0_0(83) * occ_func_0_0(28) *
                  occ_func_0_1(35) +
              0.707107 * occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_0(82) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_0(1) * occ_func_0_1(26) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(1) *
                   occ_func_0_0(26)) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(10) * occ_func_0_1(36) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(3) * occ_func_0_1(31) +
              (0.707107 * occ_func_0_0(81) * occ_func_0_0(25) *
                   occ_func_0_1(30) +
               0.707107 * occ_func_0_0(81) * occ_func_0_1(25) *
                   occ_func_0_0(30)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(8) * occ_func_0_0(20) +
              0.707107 * occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_0(19) +
              (0.707107 * occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_0(79) +
               0.707107 * occ_func_0_1(2) * occ_func_0_0(3) *
                   occ_func_0_0(79)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(6) * occ_func_0_1(84) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(1) * occ_func_0_1(31) +
              (0.707107 * occ_func_0_0(81) * occ_func_0_1(30) *
                   occ_func_0_0(23) +
               0.707107 * occ_func_0_1(81) * occ_func_0_0(30) *
                   occ_func_0_0(23)) +
              0.707107 * occ_func_0_0(4) * occ_func_0_0(10) * occ_func_0_1(37) +
              0.707107 * occ_func_0_0(1) * occ_func_0_0(3) * occ_func_0_1(32) +
              (0.707107 * occ_func_0_0(80) * occ_func_0_0(29) *
                   occ_func_0_1(24) +
               0.707107 * occ_func_0_0(80) * occ_func_0_1(29) *
                   occ_func_0_0(24)) +
              0.707107 * occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_0(83) +
              0.707107 * occ_func_0_0(82) * occ_func_0_0(26) *
                  occ_func_0_1(33) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_0(1) * occ_func_0_1(28) +
               0.707107 * occ_func_0_1(3) * occ_func_0_0(1) *
                   occ_func_0_0(28)) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(6) * occ_func_0_1(34) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_1(83) +
              (0.707107 * occ_func_0_0(82) * occ_func_0_1(27) *
                   occ_func_0_0(26) +
               0.707107 * occ_func_0_1(82) * occ_func_0_0(27) *
                   occ_func_0_0(26)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(7) * occ_func_0_0(21) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_0(20) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_0(79) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(2) *
                   occ_func_0_0(79)) +
              0.707107 * occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_1(39) +
              0.707107 * occ_func_0_0(4) * occ_func_0_0(5) * occ_func_0_1(37) +
              (0.707107 * occ_func_0_0(80) * occ_func_0_0(24) *
                   occ_func_0_1(22) +
               0.707107 * occ_func_0_0(80) * occ_func_0_1(24) *
                   occ_func_0_0(22)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(11) *
                  occ_func_0_0(29) +
              0.707107 * occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_0(22) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_0(80) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(6) *
                   occ_func_0_0(80)) +
              0.707107 * occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_0(24) +
              0.707107 * occ_func_0_1(7) * occ_func_0_0(5) * occ_func_0_0(22) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_0(80) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(4) *
                   occ_func_0_0(80)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(10) *
                  occ_func_0_0(29) +
              0.707107 * occ_func_0_1(9) * occ_func_0_0(3) * occ_func_0_0(24) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_0(80) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(1) *
                   occ_func_0_0(80)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(12) *
                  occ_func_0_0(30) +
              0.707107 * occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_0(81) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(1) * occ_func_0_0(23) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(1) *
                   occ_func_0_0(23)) +
              0.707107 * occ_func_0_0(83) * occ_func_0_1(34) *
                  occ_func_0_0(28) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_0(82) +
              (0.707107 * occ_func_0_0(5) * occ_func_0_0(2) * occ_func_0_1(27) +
               0.707107 * occ_func_0_1(5) * occ_func_0_0(2) *
                   occ_func_0_0(27)) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(7) * occ_func_0_1(41) +
              0.707107 * occ_func_0_0(1) * occ_func_0_0(6) * occ_func_0_1(40) +
              (0.707107 * occ_func_0_0(79) * occ_func_0_0(20) *
                   occ_func_0_1(21) +
               0.707107 * occ_func_0_0(79) * occ_func_0_1(20) *
                   occ_func_0_0(21)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(9) * occ_func_0_0(21) +
              0.707107 * occ_func_0_1(10) * occ_func_0_0(4) * occ_func_0_0(19) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_0(79) +
               0.707107 * occ_func_0_1(3) * occ_func_0_0(1) *
                   occ_func_0_0(79)) +
              0.707107 * occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_0(83) +
              0.707107 * occ_func_0_0(82) * occ_func_0_1(33) *
                  occ_func_0_0(27) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_0(2) * occ_func_0_1(28) +
               0.707107 * occ_func_0_1(3) * occ_func_0_0(2) *
                   occ_func_0_0(28)) +
              0.707107 * occ_func_0_0(6) * occ_func_0_0(8) * occ_func_0_1(84) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(4) * occ_func_0_1(36) +
              (0.707107 * occ_func_0_0(81) * occ_func_0_0(23) *
                   occ_func_0_1(25) +
               0.707107 * occ_func_0_1(81) * occ_func_0_0(23) *
                   occ_func_0_0(25))) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_9_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(6) * occ_func_0_1(11) * occ_func_0_1(39) +
              0.707107 * occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_1(32) +
              0.707107 * occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_1(82) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_1(27) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(9) * occ_func_0_1(25) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_1(81) +
              0.707107 * occ_func_0_1(3) * occ_func_0_1(8) * occ_func_0_1(42) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_1(41) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(10) *
                  occ_func_0_1(30) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_1(25) +
              0.707107 * occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_1(42) +
              0.707107 * occ_func_0_1(1) * occ_func_0_1(4) * occ_func_0_1(40) +
              0.707107 * occ_func_0_1(83) * occ_func_0_1(28) *
                  occ_func_0_1(35) +
              0.707107 * occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_1(82) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(10) * occ_func_0_1(36) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_1(31) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(8) * occ_func_0_1(20) +
              0.707107 * occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_1(19) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_1(84) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(1) * occ_func_0_1(31) +
              0.707107 * occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_1(37) +
              0.707107 * occ_func_0_1(1) * occ_func_0_1(3) * occ_func_0_1(32) +
              0.707107 * occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_1(83) +
              0.707107 * occ_func_0_1(82) * occ_func_0_1(26) *
                  occ_func_0_1(33) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(6) * occ_func_0_1(34) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_1(83) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(7) * occ_func_0_1(21) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_1(20) +
              0.707107 * occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_1(39) +
              0.707107 * occ_func_0_1(4) * occ_func_0_1(5) * occ_func_0_1(37) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(11) *
                  occ_func_0_1(29) +
              0.707107 * occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_1(22) +
              0.707107 * occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_1(24) +
              0.707107 * occ_func_0_1(7) * occ_func_0_1(5) * occ_func_0_1(22) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(10) *
                  occ_func_0_1(29) +
              0.707107 * occ_func_0_1(9) * occ_func_0_1(3) * occ_func_0_1(24) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(12) *
                  occ_func_0_1(30) +
              0.707107 * occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_1(81) +
              0.707107 * occ_func_0_1(83) * occ_func_0_1(34) *
                  occ_func_0_1(28) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_1(82) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(7) * occ_func_0_1(41) +
              0.707107 * occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_1(40) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_1(21) +
              0.707107 * occ_func_0_1(10) * occ_func_0_1(4) * occ_func_0_1(19) +
              0.707107 * occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_1(83) +
              0.707107 * occ_func_0_1(82) * occ_func_0_1(33) *
                  occ_func_0_1(27) +
              0.707107 * occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_1(84) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_1(36)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             ((0.707107 * occ_func_0_0(7) * occ_func_0_1(12) *
                   occ_func_0_1(85) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(12) *
                   occ_func_0_1(85)) +
              0.707107 * occ_func_0_1(6) * occ_func_0_0(11) * occ_func_0_1(39) +
              0.707107 * occ_func_0_1(1) * occ_func_0_0(2) * occ_func_0_1(32) +
              (0.707107 * occ_func_0_1(80) * occ_func_0_0(22) *
                   occ_func_0_1(29) +
               0.707107 * occ_func_0_1(80) * occ_func_0_1(22) *
                   occ_func_0_0(29)) +
              (0.707107 * occ_func_0_0(83) * occ_func_0_1(35) *
                   occ_func_0_1(34) +
               0.707107 * occ_func_0_1(83) * occ_func_0_1(35) *
                   occ_func_0_0(34)) +
              0.707107 * occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_1(82) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_1(27) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(6) * occ_func_0_1(26) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(6) *
                   occ_func_0_1(26)) +
              (0.707107 * occ_func_0_0(84) * occ_func_0_1(36) *
                   occ_func_0_1(38) +
               0.707107 * occ_func_0_1(84) * occ_func_0_0(36) *
                   occ_func_0_1(38)) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(9) * occ_func_0_1(25) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(7) * occ_func_0_1(81) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_1(23) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(4) *
                   occ_func_0_1(23)) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(11) *
                   occ_func_0_1(86) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(11) *
                   occ_func_0_1(86)) +
              0.707107 * occ_func_0_1(3) * occ_func_0_0(8) * occ_func_0_1(42) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(5) * occ_func_0_1(41) +
              (0.707107 * occ_func_0_1(79) * occ_func_0_0(19) *
                   occ_func_0_1(20) +
               0.707107 * occ_func_0_1(79) * occ_func_0_1(19) *
                   occ_func_0_0(20)) +
              (0.707107 * occ_func_0_1(84) * occ_func_0_0(31) *
                   occ_func_0_1(36) +
               0.707107 * occ_func_0_1(84) * occ_func_0_1(31) *
                   occ_func_0_0(36)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(10) *
                  occ_func_0_1(30) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_1(25) +
              (0.707107 * occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_1(81) +
               0.707107 * occ_func_0_1(2) * occ_func_0_0(5) *
                   occ_func_0_1(81)) +
              (0.707107 * occ_func_0_0(12) * occ_func_0_1(10) *
                   occ_func_0_1(86) +
               0.707107 * occ_func_0_1(12) * occ_func_0_0(10) *
                   occ_func_0_1(86)) +
              0.707107 * occ_func_0_1(3) * occ_func_0_0(9) * occ_func_0_1(42) +
              0.707107 * occ_func_0_1(1) * occ_func_0_0(4) * occ_func_0_1(40) +
              (0.707107 * occ_func_0_1(79) * occ_func_0_0(21) *
                   occ_func_0_1(19) +
               0.707107 * occ_func_0_1(79) * occ_func_0_1(21) *
                   occ_func_0_0(19)) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(12) *
                   occ_func_0_1(33) +
               0.707107 * occ_func_0_1(10) * occ_func_0_1(12) *
                   occ_func_0_0(33)) +
              0.707107 * occ_func_0_0(83) * occ_func_0_1(28) *
                  occ_func_0_1(35) +
              0.707107 * occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_0(82) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_1(26) +
               0.707107 * occ_func_0_1(4) * occ_func_0_1(1) *
                   occ_func_0_0(26)) +
              (0.707107 * occ_func_0_0(8) * occ_func_0_1(11) *
                   occ_func_0_1(84) +
               0.707107 * occ_func_0_1(8) * occ_func_0_0(11) *
                   occ_func_0_1(84)) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(10) * occ_func_0_1(36) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(3) * occ_func_0_1(31) +
              (0.707107 * occ_func_0_1(81) * occ_func_0_0(25) *
                   occ_func_0_1(30) +
               0.707107 * occ_func_0_1(81) * occ_func_0_1(25) *
                   occ_func_0_0(30)) +
              (0.707107 * occ_func_0_1(86) * occ_func_0_0(41) *
                   occ_func_0_1(42) +
               0.707107 * occ_func_0_1(86) * occ_func_0_1(41) *
                   occ_func_0_0(42)) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(8) * occ_func_0_1(20) +
              0.707107 * occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_1(19) +
              (0.707107 * occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_1(79) +
               0.707107 * occ_func_0_1(2) * occ_func_0_0(3) *
                   occ_func_0_1(79)) +
              (0.707107 * occ_func_0_0(7) * occ_func_0_1(12) *
                   occ_func_0_1(38) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(12) *
                   occ_func_0_1(38)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(6) * occ_func_0_1(84) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(1) * occ_func_0_1(31) +
              (0.707107 * occ_func_0_0(81) * occ_func_0_1(30) *
                   occ_func_0_1(23) +
               0.707107 * occ_func_0_1(81) * occ_func_0_0(30) *
                   occ_func_0_1(23)) +
              (0.707107 * occ_func_0_0(12) * occ_func_0_1(9) *
                   occ_func_0_1(85) +
               0.707107 * occ_func_0_1(12) * occ_func_0_0(9) *
                   occ_func_0_1(85)) +
              0.707107 * occ_func_0_1(4) * occ_func_0_0(10) * occ_func_0_1(37) +
              0.707107 * occ_func_0_1(1) * occ_func_0_0(3) * occ_func_0_1(32) +
              (0.707107 * occ_func_0_1(80) * occ_func_0_0(29) *
                   occ_func_0_1(24) +
               0.707107 * occ_func_0_1(80) * occ_func_0_1(29) *
                   occ_func_0_0(24)) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_1(12) *
                   occ_func_0_1(35) +
               0.707107 * occ_func_0_1(9) * occ_func_0_1(12) *
                   occ_func_0_0(35)) +
              0.707107 * occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_0(83) +
              0.707107 * occ_func_0_0(82) * occ_func_0_1(26) *
                  occ_func_0_1(33) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_1(28) +
               0.707107 * occ_func_0_1(3) * occ_func_0_1(1) *
                   occ_func_0_0(28)) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_1(35) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(7) *
                   occ_func_0_1(35)) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(6) * occ_func_0_1(34) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_1(83) +
              (0.707107 * occ_func_0_0(82) * occ_func_0_1(27) *
                   occ_func_0_1(26) +
               0.707107 * occ_func_0_1(82) * occ_func_0_0(27) *
                   occ_func_0_1(26)) +
              (0.707107 * occ_func_0_1(86) * occ_func_0_0(40) *
                   occ_func_0_1(41) +
               0.707107 * occ_func_0_1(86) * occ_func_0_1(40) *
                   occ_func_0_0(41)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(7) * occ_func_0_1(21) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_1(20) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_1(79) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(2) *
                   occ_func_0_1(79)) +
              (0.707107 * occ_func_0_0(9) * occ_func_0_1(7) * occ_func_0_1(85) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(7) *
                   occ_func_0_1(85)) +
              0.707107 * occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_1(39) +
              0.707107 * occ_func_0_1(4) * occ_func_0_0(5) * occ_func_0_1(37) +
              (0.707107 * occ_func_0_1(80) * occ_func_0_0(24) *
                   occ_func_0_1(22) +
               0.707107 * occ_func_0_1(80) * occ_func_0_1(24) *
                   occ_func_0_0(22)) +
              (0.707107 * occ_func_0_1(85) * occ_func_0_0(32) *
                   occ_func_0_1(39) +
               0.707107 * occ_func_0_1(85) * occ_func_0_1(32) *
                   occ_func_0_0(39)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(11) *
                  occ_func_0_1(29) +
              0.707107 * occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_1(22) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_1(80) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(6) *
                   occ_func_0_1(80)) +
              (0.707107 * occ_func_0_1(85) * occ_func_0_0(39) *
                   occ_func_0_1(37) +
               0.707107 * occ_func_0_1(85) * occ_func_0_1(39) *
                   occ_func_0_0(37)) +
              0.707107 * occ_func_0_1(9) * occ_func_0_0(8) * occ_func_0_1(24) +
              0.707107 * occ_func_0_1(7) * occ_func_0_0(5) * occ_func_0_1(22) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(4) * occ_func_0_1(80) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(4) *
                   occ_func_0_1(80)) +
              (0.707107 * occ_func_0_1(85) * occ_func_0_0(37) *
                   occ_func_0_1(32) +
               0.707107 * occ_func_0_1(85) * occ_func_0_1(37) *
                   occ_func_0_0(32)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(10) *
                  occ_func_0_1(29) +
              0.707107 * occ_func_0_1(9) * occ_func_0_0(3) * occ_func_0_1(24) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(1) * occ_func_0_1(80) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(1) *
                   occ_func_0_1(80)) +
              (0.707107 * occ_func_0_0(84) * occ_func_0_1(38) *
                   occ_func_0_1(31) +
               0.707107 * occ_func_0_1(84) * occ_func_0_1(38) *
                   occ_func_0_0(31)) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(12) *
                  occ_func_0_1(30) +
              0.707107 * occ_func_0_1(7) * occ_func_0_0(2) * occ_func_0_1(81) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(1) * occ_func_0_1(23) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(1) *
                   occ_func_0_1(23)) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(11) *
                   occ_func_0_1(33) +
               0.707107 * occ_func_0_1(10) * occ_func_0_1(11) *
                   occ_func_0_0(33)) +
              0.707107 * occ_func_0_0(83) * occ_func_0_1(34) *
                  occ_func_0_1(28) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_0(82) +
              (0.707107 * occ_func_0_0(5) * occ_func_0_1(2) * occ_func_0_1(27) +
               0.707107 * occ_func_0_1(5) * occ_func_0_1(2) *
                   occ_func_0_0(27)) +
              (0.707107 * occ_func_0_0(11) * occ_func_0_1(12) *
                   occ_func_0_1(86) +
               0.707107 * occ_func_0_1(11) * occ_func_0_0(12) *
                   occ_func_0_1(86)) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(7) * occ_func_0_1(41) +
              0.707107 * occ_func_0_1(1) * occ_func_0_0(6) * occ_func_0_1(40) +
              (0.707107 * occ_func_0_1(79) * occ_func_0_0(20) *
                   occ_func_0_1(21) +
               0.707107 * occ_func_0_1(79) * occ_func_0_1(20) *
                   occ_func_0_0(21)) +
              (0.707107 * occ_func_0_1(86) * occ_func_0_0(42) *
                   occ_func_0_1(40) +
               0.707107 * occ_func_0_1(86) * occ_func_0_1(42) *
                   occ_func_0_0(40)) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(9) * occ_func_0_1(21) +
              0.707107 * occ_func_0_1(10) * occ_func_0_0(4) * occ_func_0_1(19) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_1(1) * occ_func_0_1(79) +
               0.707107 * occ_func_0_1(3) * occ_func_0_0(1) *
                   occ_func_0_1(79)) +
              (0.707107 * occ_func_0_0(8) * occ_func_0_1(11) *
                   occ_func_0_1(34) +
               0.707107 * occ_func_0_1(8) * occ_func_0_1(11) *
                   occ_func_0_0(34)) +
              0.707107 * occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_0(83) +
              0.707107 * occ_func_0_0(82) * occ_func_0_1(33) *
                  occ_func_0_1(27) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_1(2) * occ_func_0_1(28) +
               0.707107 * occ_func_0_1(3) * occ_func_0_1(2) *
                   occ_func_0_0(28)) +
              (0.707107 * occ_func_0_0(7) * occ_func_0_1(9) * occ_func_0_1(38) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(9) *
                   occ_func_0_1(38)) +
              0.707107 * occ_func_0_1(6) * occ_func_0_0(8) * occ_func_0_1(84) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(4) * occ_func_0_1(36) +
              (0.707107 * occ_func_0_0(81) * occ_func_0_1(23) *
                   occ_func_0_1(25) +
               0.707107 * occ_func_0_1(81) * occ_func_0_1(23) *
                   occ_func_0_0(25))) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_10_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_1(85) +
              occ_func_0_1(83) * occ_func_0_1(35) * occ_func_0_1(34) +
              occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_1(38) +
              occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_1(86) +
              occ_func_0_1(84) * occ_func_0_1(31) * occ_func_0_1(36) +
              occ_func_0_1(12) * occ_func_0_1(10) * occ_func_0_1(86) +
              occ_func_0_1(10) * occ_func_0_1(12) * occ_func_0_1(33) +
              occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_1(84) +
              occ_func_0_1(86) * occ_func_0_1(41) * occ_func_0_1(42) +
              occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_1(38) +
              occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_1(85) +
              occ_func_0_1(9) * occ_func_0_1(12) * occ_func_0_1(35) +
              occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_1(35) +
              occ_func_0_1(86) * occ_func_0_1(40) * occ_func_0_1(41) +
              occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_1(85) +
              occ_func_0_1(85) * occ_func_0_1(32) * occ_func_0_1(39) +
              occ_func_0_1(85) * occ_func_0_1(39) * occ_func_0_1(37) +
              occ_func_0_1(85) * occ_func_0_1(37) * occ_func_0_1(32) +
              occ_func_0_1(84) * occ_func_0_1(38) * occ_func_0_1(31) +
              occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_1(33) +
              occ_func_0_1(11) * occ_func_0_1(12) * occ_func_0_1(86) +
              occ_func_0_1(86) * occ_func_0_1(42) * occ_func_0_1(40) +
              occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_1(34) +
              occ_func_0_1(7) * occ_func_0_1(9) * occ_func_0_1(38)) /
             24. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(6) * occ_func_0_1(11) * occ_func_0_1(39) +
              occ_func_0_0(1) * occ_func_0_1(2) * occ_func_0_1(32) +
              occ_func_0_0(80) * occ_func_0_1(22) * occ_func_0_1(29) +
              occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_0(82) +
              occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_0(27) +
              occ_func_0_1(4) * occ_func_0_1(6) * occ_func_0_0(26) +
              occ_func_0_1(8) * occ_func_0_1(9) * occ_func_0_0(25) +
              occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_0(81) +
              occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_0(23) +
              occ_func_0_0(3) * occ_func_0_1(8) * occ_func_0_1(42) +
              occ_func_0_0(2) * occ_func_0_1(5) * occ_func_0_1(41) +
              occ_func_0_0(79) * occ_func_0_1(19) * occ_func_0_1(20) +
              occ_func_0_1(11) * occ_func_0_1(10) * occ_func_0_0(30) +
              occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_0(25) +
              occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_0(81) +
              occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_1(42) +
              occ_func_0_0(1) * occ_func_0_1(4) * occ_func_0_1(40) +
              occ_func_0_0(79) * occ_func_0_1(21) * occ_func_0_1(19) +
              occ_func_0_1(83) * occ_func_0_0(28) * occ_func_0_1(35) +
              occ_func_0_0(3) * occ_func_0_1(9) * occ_func_0_1(82) +
              occ_func_0_1(4) * occ_func_0_0(1) * occ_func_0_1(26) +
              occ_func_0_0(5) * occ_func_0_1(10) * occ_func_0_1(36) +
              occ_func_0_0(2) * occ_func_0_1(3) * occ_func_0_1(31) +
              occ_func_0_0(81) * occ_func_0_1(25) * occ_func_0_1(30) +
              occ_func_0_1(11) * occ_func_0_1(8) * occ_func_0_0(20) +
              occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_0(19) +
              occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_0(79) +
              occ_func_0_1(11) * occ_func_0_0(6) * occ_func_0_1(84) +
              occ_func_0_1(2) * occ_func_0_0(1) * occ_func_0_1(31) +
              occ_func_0_1(81) * occ_func_0_1(30) * occ_func_0_0(23) +
              occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_1(37) +
              occ_func_0_0(1) * occ_func_0_1(3) * occ_func_0_1(32) +
              occ_func_0_0(80) * occ_func_0_1(29) * occ_func_0_1(24) +
              occ_func_0_0(4) * occ_func_0_1(10) * occ_func_0_1(83) +
              occ_func_0_1(82) * occ_func_0_0(26) * occ_func_0_1(33) +
              occ_func_0_1(3) * occ_func_0_0(1) * occ_func_0_1(28) +
              occ_func_0_1(8) * occ_func_0_0(6) * occ_func_0_1(34) +
              occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_1(83) +
              occ_func_0_1(82) * occ_func_0_1(27) * occ_func_0_0(26) +
              occ_func_0_1(12) * occ_func_0_1(7) * occ_func_0_0(21) +
              occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_0(20) +
              occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_0(79) +
              occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_1(39) +
              occ_func_0_0(4) * occ_func_0_1(5) * occ_func_0_1(37) +
              occ_func_0_0(80) * occ_func_0_1(24) * occ_func_0_1(22) +
              occ_func_0_1(12) * occ_func_0_1(11) * occ_func_0_0(29) +
              occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_0(22) +
              occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_0(80) +
              occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_0(24) +
              occ_func_0_1(7) * occ_func_0_1(5) * occ_func_0_0(22) +
              occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_0(80) +
              occ_func_0_1(12) * occ_func_0_1(10) * occ_func_0_0(29) +
              occ_func_0_1(9) * occ_func_0_1(3) * occ_func_0_0(24) +
              occ_func_0_1(4) * occ_func_0_1(1) * occ_func_0_0(80) +
              occ_func_0_1(11) * occ_func_0_1(12) * occ_func_0_0(30) +
              occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_0(81) +
              occ_func_0_1(6) * occ_func_0_1(1) * occ_func_0_0(23) +
              occ_func_0_1(83) * occ_func_0_1(34) * occ_func_0_0(28) +
              occ_func_0_1(8) * occ_func_0_0(3) * occ_func_0_1(82) +
              occ_func_0_1(5) * occ_func_0_0(2) * occ_func_0_1(27) +
              occ_func_0_0(2) * occ_func_0_1(7) * occ_func_0_1(41) +
              occ_func_0_0(1) * occ_func_0_1(6) * occ_func_0_1(40) +
              occ_func_0_0(79) * occ_func_0_1(20) * occ_func_0_1(21) +
              occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_0(21) +
              occ_func_0_1(10) * occ_func_0_1(4) * occ_func_0_0(19) +
              occ_func_0_1(3) * occ_func_0_1(1) * occ_func_0_0(79) +
              occ_func_0_1(10) * occ_func_0_0(5) * occ_func_0_1(83) +
              occ_func_0_1(82) * occ_func_0_1(33) * occ_func_0_0(27) +
              occ_func_0_1(3) * occ_func_0_0(2) * occ_func_0_1(28) +
              occ_func_0_0(6) * occ_func_0_1(8) * occ_func_0_1(84) +
              occ_func_0_1(5) * occ_func_0_0(4) * occ_func_0_1(36) +
              occ_func_0_1(81) * occ_func_0_0(23) * occ_func_0_1(25)) /
             24.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_13_11_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_1(85) +
          occ_func_0_1(6) * occ_func_0_1(11) * occ_func_0_1(39) +
          occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_1(32) +
          occ_func_0_1(80) * occ_func_0_1(22) * occ_func_0_1(29) +
          occ_func_0_1(83) * occ_func_0_1(35) * occ_func_0_1(34) +
          occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_1(82) +
          occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_1(27) +
          occ_func_0_1(4) * occ_func_0_1(6) * occ_func_0_1(26) +
          occ_func_0_1(84) * occ_func_0_1(36) * occ_func_0_1(38) +
          occ_func_0_1(8) * occ_func_0_1(9) * occ_func_0_1(25) +
          occ_func_0_1(5) * occ_func_0_1(7) * occ_func_0_1(81) +
          occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_1(23) +
          occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_1(86) +
          occ_func_0_1(3) * occ_func_0_1(8) * occ_func_0_1(42) +
          occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_1(41) +
          occ_func_0_1(79) * occ_func_0_1(19) * occ_func_0_1(20) +
          occ_func_0_1(84) * occ_func_0_1(31) * occ_func_0_1(36) +
          occ_func_0_1(11) * occ_func_0_1(10) * occ_func_0_1(30) +
          occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_1(25) +
          occ_func_0_1(2) * occ_func_0_1(5) * occ_func_0_1(81) +
          occ_func_0_1(12) * occ_func_0_1(10) * occ_func_0_1(86) +
          occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_1(42) +
          occ_func_0_1(1) * occ_func_0_1(4) * occ_func_0_1(40) +
          occ_func_0_1(79) * occ_func_0_1(21) * occ_func_0_1(19) +
          occ_func_0_1(10) * occ_func_0_1(12) * occ_func_0_1(33) +
          occ_func_0_1(83) * occ_func_0_1(28) * occ_func_0_1(35) +
          occ_func_0_1(3) * occ_func_0_1(9) * occ_func_0_1(82) +
          occ_func_0_1(4) * occ_func_0_1(1) * occ_func_0_1(26) +
          occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_1(84) +
          occ_func_0_1(5) * occ_func_0_1(10) * occ_func_0_1(36) +
          occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_1(31) +
          occ_func_0_1(81) * occ_func_0_1(25) * occ_func_0_1(30) +
          occ_func_0_1(86) * occ_func_0_1(41) * occ_func_0_1(42) +
          occ_func_0_1(11) * occ_func_0_1(8) * occ_func_0_1(20) +
          occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_1(19) +
          occ_func_0_1(2) * occ_func_0_1(3) * occ_func_0_1(79) +
          occ_func_0_1(7) * occ_func_0_1(12) * occ_func_0_1(38) +
          occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_1(84) +
          occ_func_0_1(2) * occ_func_0_1(1) * occ_func_0_1(31) +
          occ_func_0_1(81) * occ_func_0_1(30) * occ_func_0_1(23) +
          occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_1(85) +
          occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_1(37) +
          occ_func_0_1(1) * occ_func_0_1(3) * occ_func_0_1(32) +
          occ_func_0_1(80) * occ_func_0_1(29) * occ_func_0_1(24) +
          occ_func_0_1(9) * occ_func_0_1(12) * occ_func_0_1(35) +
          occ_func_0_1(4) * occ_func_0_1(10) * occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_1(26) * occ_func_0_1(33) +
          occ_func_0_1(3) * occ_func_0_1(1) * occ_func_0_1(28) +
          occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_1(35) +
          occ_func_0_1(8) * occ_func_0_1(6) * occ_func_0_1(34) +
          occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_1(27) * occ_func_0_1(26) +
          occ_func_0_1(86) * occ_func_0_1(40) * occ_func_0_1(41) +
          occ_func_0_1(12) * occ_func_0_1(7) * occ_func_0_1(21) +
          occ_func_0_1(11) * occ_func_0_1(6) * occ_func_0_1(20) +
          occ_func_0_1(1) * occ_func_0_1(2) * occ_func_0_1(79) +
          occ_func_0_1(9) * occ_func_0_1(7) * occ_func_0_1(85) +
          occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_1(39) +
          occ_func_0_1(4) * occ_func_0_1(5) * occ_func_0_1(37) +
          occ_func_0_1(80) * occ_func_0_1(24) * occ_func_0_1(22) +
          occ_func_0_1(85) * occ_func_0_1(32) * occ_func_0_1(39) +
          occ_func_0_1(12) * occ_func_0_1(11) * occ_func_0_1(29) +
          occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_1(22) +
          occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_1(80) +
          occ_func_0_1(85) * occ_func_0_1(39) * occ_func_0_1(37) +
          occ_func_0_1(9) * occ_func_0_1(8) * occ_func_0_1(24) +
          occ_func_0_1(7) * occ_func_0_1(5) * occ_func_0_1(22) +
          occ_func_0_1(6) * occ_func_0_1(4) * occ_func_0_1(80) +
          occ_func_0_1(85) * occ_func_0_1(37) * occ_func_0_1(32) +
          occ_func_0_1(12) * occ_func_0_1(10) * occ_func_0_1(29) +
          occ_func_0_1(9) * occ_func_0_1(3) * occ_func_0_1(24) +
          occ_func_0_1(4) * occ_func_0_1(1) * occ_func_0_1(80) +
          occ_func_0_1(84) * occ_func_0_1(38) * occ_func_0_1(31) +
          occ_func_0_1(11) * occ_func_0_1(12) * occ_func_0_1(30) +
          occ_func_0_1(7) * occ_func_0_1(2) * occ_func_0_1(81) +
          occ_func_0_1(6) * occ_func_0_1(1) * occ_func_0_1(23) +
          occ_func_0_1(10) * occ_func_0_1(11) * occ_func_0_1(33) +
          occ_func_0_1(83) * occ_func_0_1(34) * occ_func_0_1(28) +
          occ_func_0_1(8) * occ_func_0_1(3) * occ_func_0_1(82) +
          occ_func_0_1(5) * occ_func_0_1(2) * occ_func_0_1(27) +
          occ_func_0_1(11) * occ_func_0_1(12) * occ_func_0_1(86) +
          occ_func_0_1(2) * occ_func_0_1(7) * occ_func_0_1(41) +
          occ_func_0_1(1) * occ_func_0_1(6) * occ_func_0_1(40) +
          occ_func_0_1(79) * occ_func_0_1(20) * occ_func_0_1(21) +
          occ_func_0_1(86) * occ_func_0_1(42) * occ_func_0_1(40) +
          occ_func_0_1(12) * occ_func_0_1(9) * occ_func_0_1(21) +
          occ_func_0_1(10) * occ_func_0_1(4) * occ_func_0_1(19) +
          occ_func_0_1(3) * occ_func_0_1(1) * occ_func_0_1(79) +
          occ_func_0_1(8) * occ_func_0_1(11) * occ_func_0_1(34) +
          occ_func_0_1(10) * occ_func_0_1(5) * occ_func_0_1(83) +
          occ_func_0_1(82) * occ_func_0_1(33) * occ_func_0_1(27) +
          occ_func_0_1(3) * occ_func_0_1(2) * occ_func_0_1(28) +
          occ_func_0_1(7) * occ_func_0_1(9) * occ_func_0_1(38) +
          occ_func_0_1(6) * occ_func_0_1(8) * occ_func_0_1(84) +
          occ_func_0_1(5) * occ_func_0_1(4) * occ_func_0_1(36) +
          occ_func_0_1(81) * occ_func_0_1(23) * occ_func_0_1(25)) /
         24.;
}

/**** Basis functions for orbit 14****
0.0000000 0.0000000 0.0000000 A  B  C

0.0000000 1.0000000 0.0000000 A  B  C

0.0000000 2.0000000 0.0000000 A  B  C

0.0000000 3.0000000 0.0000000 A  B  C

****/
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_14_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(51) *
              occ_func_0_0(161) +
          occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_0(10) *
              occ_func_0_0(0) +
          occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_0(11) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(54) *
              occ_func_0_0(175) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(49) *
              occ_func_0_0(159) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(50) *
              occ_func_0_0(160)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_14_1() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(51) *
               occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(51) *
               occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_0(10) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_0(10) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_0(11) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_0(11) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(54) *
               occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(54) *
               occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(49) *
               occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(49) *
               occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(50) *
               occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(50) *
               occ_func_0_0(160))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_14_2() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(51) *
               occ_func_0_0(161) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(51) *
               occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_1(10) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_0(10) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_1(11) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_0(11) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(54) *
               occ_func_0_0(175) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(54) *
               occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(49) *
               occ_func_0_0(159) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(49) *
               occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(50) *
               occ_func_0_0(160) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(50) *
               occ_func_0_0(160))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_14_3() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(51) *
               occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(51) *
               occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_1(10) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_0(10) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_1(11) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_0(11) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(54) *
               occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(54) *
               occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(49) *
               occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(49) *
               occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(50) *
               occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(50) *
               occ_func_0_0(160))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_14_4() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(51) *
               occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(51) *
               occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_0(10) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_1(10) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_0(11) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_1(11) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(54) *
               occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(54) *
               occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(49) *
               occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(49) *
               occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(50) *
               occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(50) *
               occ_func_0_0(160))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_14_5() const {
  return (occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(51) *
              occ_func_0_0(161) +
          occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_1(10) *
              occ_func_0_0(0) +
          occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_1(11) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(54) *
              occ_func_0_0(175) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(49) *
              occ_func_0_0(159) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(50) *
              occ_func_0_0(160)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_14_6() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(51) *
               occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(51) *
               occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_1(10) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_1(10) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_1(11) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_1(11) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(54) *
               occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(54) *
               occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(49) *
               occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(49) *
               occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(50) *
               occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(50) *
               occ_func_0_0(160))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_14_7() const {
  return (occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(51) *
              occ_func_0_1(161) +
          occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_0(10) *
              occ_func_0_1(0) +
          occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_0(11) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(54) *
              occ_func_0_1(175) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(49) *
              occ_func_0_1(159) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(50) *
              occ_func_0_1(160)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_14_8() const {
  return ((0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(51) *
               occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(51) *
               occ_func_0_1(161)) +
          (0.707107 * occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_1(10) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_0(10) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_1(11) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_0(11) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(54) *
               occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(54) *
               occ_func_0_1(175)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(49) *
               occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(49) *
               occ_func_0_1(159)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(50) *
               occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(50) *
               occ_func_0_1(160))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::eval_bfunc_14_9() const {
  return (occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(51) *
              occ_func_0_1(161) +
          occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_1(10) *
              occ_func_0_1(0) +
          occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_1(11) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(54) *
              occ_func_0_1(175) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(49) *
              occ_func_0_1(159) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(50) *
              occ_func_0_1(160)) /
         6.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_0_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(51) *
              occ_func_0_0(161) +
          occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(9) *
              occ_func_0_0(51) +
          occ_func_0_0(46) * occ_func_0_0(4) * occ_func_0_0(0) *
              occ_func_0_0(9) +
          occ_func_0_0(156) * occ_func_0_0(46) * occ_func_0_0(4) *
              occ_func_0_0(0) +
          occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_0(10) *
              occ_func_0_0(0) +
          occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_0(0) *
              occ_func_0_0(3) +
          occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(3) *
              occ_func_0_0(45) +
          occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_0(45) *
              occ_func_0_0(146) +
          occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_0(11) *
              occ_func_0_0(0) +
          occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_0(0) *
              occ_func_0_0(2) +
          occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(2) *
              occ_func_0_0(44) +
          occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(44) *
              occ_func_0_0(143) +
          occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(54) *
              occ_func_0_0(175) +
          occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_0(12) *
              occ_func_0_0(54) +
          occ_func_0_0(43) * occ_func_0_0(1) * occ_func_0_0(0) *
              occ_func_0_0(12) +
          occ_func_0_0(142) * occ_func_0_0(43) * occ_func_0_0(1) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(49) *
              occ_func_0_0(159) +
          occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(7) *
              occ_func_0_0(49) +
          occ_func_0_0(48) * occ_func_0_0(6) * occ_func_0_0(0) *
              occ_func_0_0(7) +
          occ_func_0_0(158) * occ_func_0_0(48) * occ_func_0_0(6) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(50) *
              occ_func_0_0(160) +
          occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_0(8) *
              occ_func_0_0(50) +
          occ_func_0_0(47) * occ_func_0_0(5) * occ_func_0_0(0) *
              occ_func_0_0(8) +
          occ_func_0_0(157) * occ_func_0_0(47) * occ_func_0_0(5) *
              occ_func_0_0(0)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_1_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_0(51) *
               occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(51) *
               occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_0(9) *
               occ_func_0_1(51) +
           0.707107 * occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(9) *
               occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(46) * occ_func_0_0(4) * occ_func_0_0(0) *
               occ_func_0_1(9) +
           0.707107 * occ_func_0_1(46) * occ_func_0_0(4) * occ_func_0_0(0) *
               occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(156) * occ_func_0_0(46) * occ_func_0_0(4) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(156) * occ_func_0_0(46) * occ_func_0_0(4) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_0(10) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_0(10) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_0(0) *
               occ_func_0_1(3) +
           0.707107 * occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_0(0) *
               occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_0(3) *
               occ_func_0_1(45) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(3) *
               occ_func_0_0(45)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_0(45) *
               occ_func_0_1(146) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_0(45) *
               occ_func_0_0(146)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_0(11) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_0(11) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_0(0) *
               occ_func_0_1(2) +
           0.707107 * occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_0(0) *
               occ_func_0_0(2)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_0(2) *
               occ_func_0_1(44) +
           0.707107 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(2) *
               occ_func_0_0(44)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_0(44) *
               occ_func_0_1(143) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(44) *
               occ_func_0_0(143)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_0(54) *
               occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(54) *
               occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_0(12) *
               occ_func_0_1(54) +
           0.707107 * occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_0(12) *
               occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(43) * occ_func_0_0(1) * occ_func_0_0(0) *
               occ_func_0_1(12) +
           0.707107 * occ_func_0_1(43) * occ_func_0_0(1) * occ_func_0_0(0) *
               occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(142) * occ_func_0_0(43) * occ_func_0_0(1) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(142) * occ_func_0_0(43) * occ_func_0_0(1) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_0(49) *
               occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(49) *
               occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_0(7) *
               occ_func_0_1(49) +
           0.707107 * occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(7) *
               occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(48) * occ_func_0_0(6) * occ_func_0_0(0) *
               occ_func_0_1(7) +
           0.707107 * occ_func_0_1(48) * occ_func_0_0(6) * occ_func_0_0(0) *
               occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(158) * occ_func_0_0(48) * occ_func_0_0(6) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(158) * occ_func_0_0(48) * occ_func_0_0(6) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_0(50) *
               occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(50) *
               occ_func_0_0(160)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_0(8) *
               occ_func_0_1(50) +
           0.707107 * occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_0(8) *
               occ_func_0_0(50)) +
          (0.707107 * occ_func_0_0(47) * occ_func_0_0(5) * occ_func_0_0(0) *
               occ_func_0_1(8) +
           0.707107 * occ_func_0_1(47) * occ_func_0_0(5) * occ_func_0_0(0) *
               occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(157) * occ_func_0_0(47) * occ_func_0_0(5) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(157) * occ_func_0_0(47) * occ_func_0_0(5) *
               occ_func_0_0(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_2_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(51) *
               occ_func_0_0(161) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(51) *
               occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(9) *
               occ_func_0_0(51) +
           0.707107 * occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(9) *
               occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(46) * occ_func_0_0(4) * occ_func_0_1(0) *
               occ_func_0_0(9) +
           0.707107 * occ_func_0_0(46) * occ_func_0_1(4) * occ_func_0_0(0) *
               occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(156) * occ_func_0_0(46) * occ_func_0_1(4) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(156) * occ_func_0_1(46) * occ_func_0_0(4) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_1(10) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_0(10) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_0(3) +
           0.707107 * occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_0(45) +
           0.707107 * occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_0(45)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_1(45) *
               occ_func_0_0(146) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_0(45) *
               occ_func_0_0(146)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_1(11) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_0(11) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_0(2) +
           0.707107 * occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_0(2)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(2) *
               occ_func_0_0(44) +
           0.707107 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(2) *
               occ_func_0_0(44)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(44) *
               occ_func_0_0(143) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(44) *
               occ_func_0_0(143)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(54) *
               occ_func_0_0(175) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(54) *
               occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_0(54) +
           0.707107 * occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(43) * occ_func_0_0(1) * occ_func_0_1(0) *
               occ_func_0_0(12) +
           0.707107 * occ_func_0_0(43) * occ_func_0_1(1) * occ_func_0_0(0) *
               occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(142) * occ_func_0_0(43) * occ_func_0_1(1) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(142) * occ_func_0_1(43) * occ_func_0_0(1) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(49) *
               occ_func_0_0(159) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(49) *
               occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_0(49) +
           0.707107 * occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(48) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_0(7) +
           0.707107 * occ_func_0_0(48) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(158) * occ_func_0_0(48) * occ_func_0_1(6) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(158) * occ_func_0_1(48) * occ_func_0_0(6) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(50) *
               occ_func_0_0(160) +
           0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(50) *
               occ_func_0_0(160)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_0(50) +
           0.707107 * occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_0(50)) +
          (0.707107 * occ_func_0_0(47) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_0(8) +
           0.707107 * occ_func_0_0(47) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(157) * occ_func_0_0(47) * occ_func_0_1(5) *
               occ_func_0_0(0) +
           0.707107 * occ_func_0_0(157) * occ_func_0_1(47) * occ_func_0_0(5) *
               occ_func_0_0(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_3_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_0(9) * occ_func_0_1(51) *
               occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(51) *
               occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_0(0) * occ_func_0_1(9) *
               occ_func_0_1(51) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(9) *
               occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(46) * occ_func_0_0(4) * occ_func_0_1(0) *
               occ_func_0_1(9) +
           0.707107 * occ_func_0_1(46) * occ_func_0_1(4) * occ_func_0_0(0) *
               occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(156) * occ_func_0_0(46) * occ_func_0_1(4) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(156) * occ_func_0_1(46) * occ_func_0_0(4) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_1(10) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_0(10) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_1(3) +
           0.707107 * occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_1(45) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_0(45)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(3) * occ_func_0_1(45) *
               occ_func_0_1(146) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_0(45) *
               occ_func_0_0(146)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_1(11) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_0(11) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_1(2) +
           0.707107 * occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_0(2)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_0(0) * occ_func_0_1(2) *
               occ_func_0_1(44) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(2) *
               occ_func_0_0(44)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(2) * occ_func_0_1(44) *
               occ_func_0_1(143) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(44) *
               occ_func_0_0(143)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(12) * occ_func_0_1(54) *
               occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(54) *
               occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_1(54) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(43) * occ_func_0_0(1) * occ_func_0_1(0) *
               occ_func_0_1(12) +
           0.707107 * occ_func_0_1(43) * occ_func_0_1(1) * occ_func_0_0(0) *
               occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(142) * occ_func_0_0(43) * occ_func_0_1(1) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(142) * occ_func_0_1(43) * occ_func_0_0(1) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(7) * occ_func_0_1(49) *
               occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(49) *
               occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_1(49) +
           0.707107 * occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(48) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_1(7) +
           0.707107 * occ_func_0_1(48) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(158) * occ_func_0_0(48) * occ_func_0_1(6) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(158) * occ_func_0_1(48) * occ_func_0_0(6) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_0(8) * occ_func_0_1(50) *
               occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(50) *
               occ_func_0_0(160)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_1(50) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_0(50)) +
          (0.707107 * occ_func_0_0(47) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_1(8) +
           0.707107 * occ_func_0_1(47) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(157) * occ_func_0_0(47) * occ_func_0_1(5) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(157) * occ_func_0_1(47) * occ_func_0_0(5) *
               occ_func_0_0(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_4_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_0(51) *
               occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(51) *
               occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_0(9) *
               occ_func_0_1(51) +
           0.707107 * occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(9) *
               occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(46) * occ_func_0_1(4) * occ_func_0_0(0) *
               occ_func_0_1(9) +
           0.707107 * occ_func_0_1(46) * occ_func_0_0(4) * occ_func_0_1(0) *
               occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(156) * occ_func_0_1(46) * occ_func_0_0(4) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(156) * occ_func_0_0(46) * occ_func_0_1(4) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_0(10) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_1(10) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_1(3) +
           0.707107 * occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_1(45) +
           0.707107 * occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_0(45)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_0(45) *
               occ_func_0_1(146) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_1(45) *
               occ_func_0_0(146)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_0(11) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_1(11) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_1(2) +
           0.707107 * occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_0(2)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_0(2) *
               occ_func_0_1(44) +
           0.707107 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(2) *
               occ_func_0_0(44)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_0(44) *
               occ_func_0_1(143) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(44) *
               occ_func_0_0(143)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_0(54) *
               occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(54) *
               occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_1(54) +
           0.707107 * occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(43) * occ_func_0_1(1) * occ_func_0_0(0) *
               occ_func_0_1(12) +
           0.707107 * occ_func_0_1(43) * occ_func_0_0(1) * occ_func_0_1(0) *
               occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(142) * occ_func_0_1(43) * occ_func_0_0(1) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(142) * occ_func_0_0(43) * occ_func_0_1(1) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_0(49) *
               occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(49) *
               occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_1(49) +
           0.707107 * occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(48) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_1(7) +
           0.707107 * occ_func_0_1(48) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(158) * occ_func_0_1(48) * occ_func_0_0(6) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(158) * occ_func_0_0(48) * occ_func_0_1(6) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_0(50) *
               occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(50) *
               occ_func_0_0(160)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_1(50) +
           0.707107 * occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_0(50)) +
          (0.707107 * occ_func_0_0(47) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_1(8) +
           0.707107 * occ_func_0_1(47) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(157) * occ_func_0_1(47) * occ_func_0_0(5) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(157) * occ_func_0_0(47) * occ_func_0_1(5) *
               occ_func_0_0(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_5_at_0() const {
  return (occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(51) *
              occ_func_0_0(161) +
          occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(9) *
              occ_func_0_0(51) +
          occ_func_0_0(46) * occ_func_0_1(4) * occ_func_0_1(0) *
              occ_func_0_0(9) +
          occ_func_0_0(156) * occ_func_0_1(46) * occ_func_0_1(4) *
              occ_func_0_0(0) +
          occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_1(10) *
              occ_func_0_0(0) +
          occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_1(0) *
              occ_func_0_0(3) +
          occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(3) *
              occ_func_0_0(45) +
          occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_1(45) *
              occ_func_0_0(146) +
          occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_1(11) *
              occ_func_0_0(0) +
          occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_1(0) *
              occ_func_0_0(2) +
          occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(2) *
              occ_func_0_0(44) +
          occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(44) *
              occ_func_0_0(143) +
          occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(54) *
              occ_func_0_0(175) +
          occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_1(12) *
              occ_func_0_0(54) +
          occ_func_0_0(43) * occ_func_0_1(1) * occ_func_0_1(0) *
              occ_func_0_0(12) +
          occ_func_0_0(142) * occ_func_0_1(43) * occ_func_0_1(1) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(49) *
              occ_func_0_0(159) +
          occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(7) *
              occ_func_0_0(49) +
          occ_func_0_0(48) * occ_func_0_1(6) * occ_func_0_1(0) *
              occ_func_0_0(7) +
          occ_func_0_0(158) * occ_func_0_1(48) * occ_func_0_1(6) *
              occ_func_0_0(0) +
          occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(50) *
              occ_func_0_0(160) +
          occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_1(8) *
              occ_func_0_0(50) +
          occ_func_0_0(47) * occ_func_0_1(5) * occ_func_0_1(0) *
              occ_func_0_0(8) +
          occ_func_0_0(157) * occ_func_0_1(47) * occ_func_0_1(5) *
              occ_func_0_0(0)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_6_at_0() const {
  return ((0.707107 * occ_func_0_0(0) * occ_func_0_1(9) * occ_func_0_1(51) *
               occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(51) *
               occ_func_0_0(161)) +
          (0.707107 * occ_func_0_0(4) * occ_func_0_1(0) * occ_func_0_1(9) *
               occ_func_0_1(51) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(9) *
               occ_func_0_0(51)) +
          (0.707107 * occ_func_0_0(46) * occ_func_0_1(4) * occ_func_0_1(0) *
               occ_func_0_1(9) +
           0.707107 * occ_func_0_1(46) * occ_func_0_1(4) * occ_func_0_1(0) *
               occ_func_0_0(9)) +
          (0.707107 * occ_func_0_0(156) * occ_func_0_1(46) * occ_func_0_1(4) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(156) * occ_func_0_1(46) * occ_func_0_1(4) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_1(10) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_1(10) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_1(0) *
               occ_func_0_1(3) +
           0.707107 * occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_1(0) *
               occ_func_0_0(3)) +
          (0.707107 * occ_func_0_0(10) * occ_func_0_1(0) * occ_func_0_1(3) *
               occ_func_0_1(45) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(3) *
               occ_func_0_0(45)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(3) * occ_func_0_1(45) *
               occ_func_0_1(146) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_1(45) *
               occ_func_0_0(146)) +
          (0.707107 * occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_1(11) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_1(11) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_1(0) *
               occ_func_0_1(2) +
           0.707107 * occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_1(0) *
               occ_func_0_0(2)) +
          (0.707107 * occ_func_0_0(11) * occ_func_0_1(0) * occ_func_0_1(2) *
               occ_func_0_1(44) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(2) *
               occ_func_0_0(44)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(2) * occ_func_0_1(44) *
               occ_func_0_1(143) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(44) *
               occ_func_0_0(143)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(12) * occ_func_0_1(54) *
               occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(54) *
               occ_func_0_0(175)) +
          (0.707107 * occ_func_0_0(1) * occ_func_0_1(0) * occ_func_0_1(12) *
               occ_func_0_1(54) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_1(12) *
               occ_func_0_0(54)) +
          (0.707107 * occ_func_0_0(43) * occ_func_0_1(1) * occ_func_0_1(0) *
               occ_func_0_1(12) +
           0.707107 * occ_func_0_1(43) * occ_func_0_1(1) * occ_func_0_1(0) *
               occ_func_0_0(12)) +
          (0.707107 * occ_func_0_0(142) * occ_func_0_1(43) * occ_func_0_1(1) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(142) * occ_func_0_1(43) * occ_func_0_1(1) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(7) * occ_func_0_1(49) *
               occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(49) *
               occ_func_0_0(159)) +
          (0.707107 * occ_func_0_0(6) * occ_func_0_1(0) * occ_func_0_1(7) *
               occ_func_0_1(49) +
           0.707107 * occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(7) *
               occ_func_0_0(49)) +
          (0.707107 * occ_func_0_0(48) * occ_func_0_1(6) * occ_func_0_1(0) *
               occ_func_0_1(7) +
           0.707107 * occ_func_0_1(48) * occ_func_0_1(6) * occ_func_0_1(0) *
               occ_func_0_0(7)) +
          (0.707107 * occ_func_0_0(158) * occ_func_0_1(48) * occ_func_0_1(6) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(158) * occ_func_0_1(48) * occ_func_0_1(6) *
               occ_func_0_0(0)) +
          (0.707107 * occ_func_0_0(0) * occ_func_0_1(8) * occ_func_0_1(50) *
               occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(50) *
               occ_func_0_0(160)) +
          (0.707107 * occ_func_0_0(5) * occ_func_0_1(0) * occ_func_0_1(8) *
               occ_func_0_1(50) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_1(8) *
               occ_func_0_0(50)) +
          (0.707107 * occ_func_0_0(47) * occ_func_0_1(5) * occ_func_0_1(0) *
               occ_func_0_1(8) +
           0.707107 * occ_func_0_1(47) * occ_func_0_1(5) * occ_func_0_1(0) *
               occ_func_0_0(8)) +
          (0.707107 * occ_func_0_0(157) * occ_func_0_1(47) * occ_func_0_1(5) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(157) * occ_func_0_1(47) * occ_func_0_1(5) *
               occ_func_0_0(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_7_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_0(51) *
              occ_func_0_1(161) +
          occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_0(9) *
              occ_func_0_1(51) +
          occ_func_0_1(46) * occ_func_0_0(4) * occ_func_0_0(0) *
              occ_func_0_1(9) +
          occ_func_0_1(156) * occ_func_0_0(46) * occ_func_0_0(4) *
              occ_func_0_1(0) +
          occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_0(10) *
              occ_func_0_1(0) +
          occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_0(0) *
              occ_func_0_1(3) +
          occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_0(3) *
              occ_func_0_1(45) +
          occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_0(45) *
              occ_func_0_1(146) +
          occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_0(11) *
              occ_func_0_1(0) +
          occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_0(0) *
              occ_func_0_1(2) +
          occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_0(2) *
              occ_func_0_1(44) +
          occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_0(44) *
              occ_func_0_1(143) +
          occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_0(54) *
              occ_func_0_1(175) +
          occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_0(12) *
              occ_func_0_1(54) +
          occ_func_0_1(43) * occ_func_0_0(1) * occ_func_0_0(0) *
              occ_func_0_1(12) +
          occ_func_0_1(142) * occ_func_0_0(43) * occ_func_0_0(1) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_0(49) *
              occ_func_0_1(159) +
          occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_0(7) *
              occ_func_0_1(49) +
          occ_func_0_1(48) * occ_func_0_0(6) * occ_func_0_0(0) *
              occ_func_0_1(7) +
          occ_func_0_1(158) * occ_func_0_0(48) * occ_func_0_0(6) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_0(50) *
              occ_func_0_1(160) +
          occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_0(8) *
              occ_func_0_1(50) +
          occ_func_0_1(47) * occ_func_0_0(5) * occ_func_0_0(0) *
              occ_func_0_1(8) +
          occ_func_0_1(157) * occ_func_0_0(47) * occ_func_0_0(5) *
              occ_func_0_1(0)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_8_at_0() const {
  return ((0.707107 * occ_func_0_1(0) * occ_func_0_0(9) * occ_func_0_1(51) *
               occ_func_0_1(161) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_0(51) *
               occ_func_0_1(161)) +
          (0.707107 * occ_func_0_1(4) * occ_func_0_0(0) * occ_func_0_1(9) *
               occ_func_0_1(51) +
           0.707107 * occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_0(9) *
               occ_func_0_1(51)) +
          (0.707107 * occ_func_0_1(46) * occ_func_0_0(4) * occ_func_0_1(0) *
               occ_func_0_1(9) +
           0.707107 * occ_func_0_1(46) * occ_func_0_1(4) * occ_func_0_0(0) *
               occ_func_0_1(9)) +
          (0.707107 * occ_func_0_1(156) * occ_func_0_0(46) * occ_func_0_1(4) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(156) * occ_func_0_1(46) * occ_func_0_0(4) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_1(10) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_0(10) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_1(0) *
               occ_func_0_1(3) +
           0.707107 * occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_0(0) *
               occ_func_0_1(3)) +
          (0.707107 * occ_func_0_1(10) * occ_func_0_0(0) * occ_func_0_1(3) *
               occ_func_0_1(45) +
           0.707107 * occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_0(3) *
               occ_func_0_1(45)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(3) * occ_func_0_1(45) *
               occ_func_0_1(146) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_0(45) *
               occ_func_0_1(146)) +
          (0.707107 * occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_1(11) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_0(11) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_1(0) *
               occ_func_0_1(2) +
           0.707107 * occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_0(0) *
               occ_func_0_1(2)) +
          (0.707107 * occ_func_0_1(11) * occ_func_0_0(0) * occ_func_0_1(2) *
               occ_func_0_1(44) +
           0.707107 * occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_0(2) *
               occ_func_0_1(44)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(2) * occ_func_0_1(44) *
               occ_func_0_1(143) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_0(44) *
               occ_func_0_1(143)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(12) * occ_func_0_1(54) *
               occ_func_0_1(175) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_0(54) *
               occ_func_0_1(175)) +
          (0.707107 * occ_func_0_1(1) * occ_func_0_0(0) * occ_func_0_1(12) *
               occ_func_0_1(54) +
           0.707107 * occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_0(12) *
               occ_func_0_1(54)) +
          (0.707107 * occ_func_0_1(43) * occ_func_0_0(1) * occ_func_0_1(0) *
               occ_func_0_1(12) +
           0.707107 * occ_func_0_1(43) * occ_func_0_1(1) * occ_func_0_0(0) *
               occ_func_0_1(12)) +
          (0.707107 * occ_func_0_1(142) * occ_func_0_0(43) * occ_func_0_1(1) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(142) * occ_func_0_1(43) * occ_func_0_0(1) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(7) * occ_func_0_1(49) *
               occ_func_0_1(159) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_0(49) *
               occ_func_0_1(159)) +
          (0.707107 * occ_func_0_1(6) * occ_func_0_0(0) * occ_func_0_1(7) *
               occ_func_0_1(49) +
           0.707107 * occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_0(7) *
               occ_func_0_1(49)) +
          (0.707107 * occ_func_0_1(48) * occ_func_0_0(6) * occ_func_0_1(0) *
               occ_func_0_1(7) +
           0.707107 * occ_func_0_1(48) * occ_func_0_1(6) * occ_func_0_0(0) *
               occ_func_0_1(7)) +
          (0.707107 * occ_func_0_1(158) * occ_func_0_0(48) * occ_func_0_1(6) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(158) * occ_func_0_1(48) * occ_func_0_0(6) *
               occ_func_0_1(0)) +
          (0.707107 * occ_func_0_1(0) * occ_func_0_0(8) * occ_func_0_1(50) *
               occ_func_0_1(160) +
           0.707107 * occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_0(50) *
               occ_func_0_1(160)) +
          (0.707107 * occ_func_0_1(5) * occ_func_0_0(0) * occ_func_0_1(8) *
               occ_func_0_1(50) +
           0.707107 * occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_0(8) *
               occ_func_0_1(50)) +
          (0.707107 * occ_func_0_1(47) * occ_func_0_0(5) * occ_func_0_1(0) *
               occ_func_0_1(8) +
           0.707107 * occ_func_0_1(47) * occ_func_0_1(5) * occ_func_0_0(0) *
               occ_func_0_1(8)) +
          (0.707107 * occ_func_0_1(157) * occ_func_0_0(47) * occ_func_0_1(5) *
               occ_func_0_1(0) +
           0.707107 * occ_func_0_1(157) * occ_func_0_1(47) * occ_func_0_0(5) *
               occ_func_0_1(0))) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_eval_bfunc_14_9_at_0() const {
  return (occ_func_0_1(0) * occ_func_0_1(9) * occ_func_0_1(51) *
              occ_func_0_1(161) +
          occ_func_0_1(4) * occ_func_0_1(0) * occ_func_0_1(9) *
              occ_func_0_1(51) +
          occ_func_0_1(46) * occ_func_0_1(4) * occ_func_0_1(0) *
              occ_func_0_1(9) +
          occ_func_0_1(156) * occ_func_0_1(46) * occ_func_0_1(4) *
              occ_func_0_1(0) +
          occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_1(10) *
              occ_func_0_1(0) +
          occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_1(0) *
              occ_func_0_1(3) +
          occ_func_0_1(10) * occ_func_0_1(0) * occ_func_0_1(3) *
              occ_func_0_1(45) +
          occ_func_0_1(0) * occ_func_0_1(3) * occ_func_0_1(45) *
              occ_func_0_1(146) +
          occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_1(11) *
              occ_func_0_1(0) +
          occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_1(0) *
              occ_func_0_1(2) +
          occ_func_0_1(11) * occ_func_0_1(0) * occ_func_0_1(2) *
              occ_func_0_1(44) +
          occ_func_0_1(0) * occ_func_0_1(2) * occ_func_0_1(44) *
              occ_func_0_1(143) +
          occ_func_0_1(0) * occ_func_0_1(12) * occ_func_0_1(54) *
              occ_func_0_1(175) +
          occ_func_0_1(1) * occ_func_0_1(0) * occ_func_0_1(12) *
              occ_func_0_1(54) +
          occ_func_0_1(43) * occ_func_0_1(1) * occ_func_0_1(0) *
              occ_func_0_1(12) +
          occ_func_0_1(142) * occ_func_0_1(43) * occ_func_0_1(1) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(7) * occ_func_0_1(49) *
              occ_func_0_1(159) +
          occ_func_0_1(6) * occ_func_0_1(0) * occ_func_0_1(7) *
              occ_func_0_1(49) +
          occ_func_0_1(48) * occ_func_0_1(6) * occ_func_0_1(0) *
              occ_func_0_1(7) +
          occ_func_0_1(158) * occ_func_0_1(48) * occ_func_0_1(6) *
              occ_func_0_1(0) +
          occ_func_0_1(0) * occ_func_0_1(8) * occ_func_0_1(50) *
              occ_func_0_1(160) +
          occ_func_0_1(5) * occ_func_0_1(0) * occ_func_0_1(8) *
              occ_func_0_1(50) +
          occ_func_0_1(47) * occ_func_0_1(5) * occ_func_0_1(0) *
              occ_func_0_1(8) +
          occ_func_0_1(157) * occ_func_0_1(47) * occ_func_0_1(5) *
              occ_func_0_1(0)) /
         6.;
}

template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_0_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
         (occ_func_0_0(9) * occ_func_0_0(51) * occ_func_0_0(161) +
          occ_func_0_0(4) * occ_func_0_0(9) * occ_func_0_0(51) +
          occ_func_0_0(46) * occ_func_0_0(4) * occ_func_0_0(9) +
          occ_func_0_0(156) * occ_func_0_0(46) * occ_func_0_0(4) +
          occ_func_0_0(171) * occ_func_0_0(52) * occ_func_0_0(10) +
          occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_0(3) +
          occ_func_0_0(10) * occ_func_0_0(3) * occ_func_0_0(45) +
          occ_func_0_0(3) * occ_func_0_0(45) * occ_func_0_0(146) +
          occ_func_0_0(174) * occ_func_0_0(53) * occ_func_0_0(11) +
          occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_0(2) +
          occ_func_0_0(11) * occ_func_0_0(2) * occ_func_0_0(44) +
          occ_func_0_0(2) * occ_func_0_0(44) * occ_func_0_0(143) +
          occ_func_0_0(12) * occ_func_0_0(54) * occ_func_0_0(175) +
          occ_func_0_0(1) * occ_func_0_0(12) * occ_func_0_0(54) +
          occ_func_0_0(43) * occ_func_0_0(1) * occ_func_0_0(12) +
          occ_func_0_0(142) * occ_func_0_0(43) * occ_func_0_0(1) +
          occ_func_0_0(7) * occ_func_0_0(49) * occ_func_0_0(159) +
          occ_func_0_0(6) * occ_func_0_0(7) * occ_func_0_0(49) +
          occ_func_0_0(48) * occ_func_0_0(6) * occ_func_0_0(7) +
          occ_func_0_0(158) * occ_func_0_0(48) * occ_func_0_0(6) +
          occ_func_0_0(8) * occ_func_0_0(50) * occ_func_0_0(160) +
          occ_func_0_0(5) * occ_func_0_0(8) * occ_func_0_0(50) +
          occ_func_0_0(47) * occ_func_0_0(5) * occ_func_0_0(8) +
          occ_func_0_0(157) * occ_func_0_0(47) * occ_func_0_0(5)) /
         6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_1_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_0(9) * occ_func_0_0(51) *
                  occ_func_0_1(161) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_0(9) * occ_func_0_1(51) +
               0.707107 * occ_func_0_1(4) * occ_func_0_0(9) *
                   occ_func_0_0(51)) +
              (0.707107 * occ_func_0_0(46) * occ_func_0_0(4) * occ_func_0_1(9) +
               0.707107 * occ_func_0_1(46) * occ_func_0_0(4) *
                   occ_func_0_0(9)) +
              0.707107 * occ_func_0_1(156) * occ_func_0_0(46) *
                  occ_func_0_0(4) +
              0.707107 * occ_func_0_1(171) * occ_func_0_0(52) *
                  occ_func_0_0(10) +
              (0.707107 * occ_func_0_0(52) * occ_func_0_0(10) *
                   occ_func_0_1(3) +
               0.707107 * occ_func_0_1(52) * occ_func_0_0(10) *
                   occ_func_0_0(3)) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_0(3) *
                   occ_func_0_1(45) +
               0.707107 * occ_func_0_1(10) * occ_func_0_0(3) *
                   occ_func_0_0(45)) +
              0.707107 * occ_func_0_0(3) * occ_func_0_0(45) *
                  occ_func_0_1(146) +
              0.707107 * occ_func_0_1(174) * occ_func_0_0(53) *
                  occ_func_0_0(11) +
              (0.707107 * occ_func_0_0(53) * occ_func_0_0(11) *
                   occ_func_0_1(2) +
               0.707107 * occ_func_0_1(53) * occ_func_0_0(11) *
                   occ_func_0_0(2)) +
              (0.707107 * occ_func_0_0(11) * occ_func_0_0(2) *
                   occ_func_0_1(44) +
               0.707107 * occ_func_0_1(11) * occ_func_0_0(2) *
                   occ_func_0_0(44)) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(44) *
                  occ_func_0_1(143) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(54) *
                  occ_func_0_1(175) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_0(12) *
                   occ_func_0_1(54) +
               0.707107 * occ_func_0_1(1) * occ_func_0_0(12) *
                   occ_func_0_0(54)) +
              (0.707107 * occ_func_0_0(43) * occ_func_0_0(1) *
                   occ_func_0_1(12) +
               0.707107 * occ_func_0_1(43) * occ_func_0_0(1) *
                   occ_func_0_0(12)) +
              0.707107 * occ_func_0_1(142) * occ_func_0_0(43) *
                  occ_func_0_0(1) +
              0.707107 * occ_func_0_0(7) * occ_func_0_0(49) *
                  occ_func_0_1(159) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_0(7) * occ_func_0_1(49) +
               0.707107 * occ_func_0_1(6) * occ_func_0_0(7) *
                   occ_func_0_0(49)) +
              (0.707107 * occ_func_0_0(48) * occ_func_0_0(6) * occ_func_0_1(7) +
               0.707107 * occ_func_0_1(48) * occ_func_0_0(6) *
                   occ_func_0_0(7)) +
              0.707107 * occ_func_0_1(158) * occ_func_0_0(48) *
                  occ_func_0_0(6) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(50) *
                  occ_func_0_1(160) +
              (0.707107 * occ_func_0_0(5) * occ_func_0_0(8) * occ_func_0_1(50) +
               0.707107 * occ_func_0_1(5) * occ_func_0_0(8) *
                   occ_func_0_0(50)) +
              (0.707107 * occ_func_0_0(47) * occ_func_0_0(5) * occ_func_0_1(8) +
               0.707107 * occ_func_0_1(47) * occ_func_0_0(5) *
                   occ_func_0_0(8)) +
              0.707107 * occ_func_0_1(157) * occ_func_0_0(47) *
                  occ_func_0_0(5)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(9) * occ_func_0_0(51) *
                  occ_func_0_0(161) +
              0.707107 * occ_func_0_0(156) * occ_func_0_0(46) *
                  occ_func_0_0(4) +
              0.707107 * occ_func_0_0(171) * occ_func_0_0(52) *
                  occ_func_0_0(10) +
              0.707107 * occ_func_0_0(3) * occ_func_0_0(45) *
                  occ_func_0_0(146) +
              0.707107 * occ_func_0_0(174) * occ_func_0_0(53) *
                  occ_func_0_0(11) +
              0.707107 * occ_func_0_0(2) * occ_func_0_0(44) *
                  occ_func_0_0(143) +
              0.707107 * occ_func_0_0(12) * occ_func_0_0(54) *
                  occ_func_0_0(175) +
              0.707107 * occ_func_0_0(142) * occ_func_0_0(43) *
                  occ_func_0_0(1) +
              0.707107 * occ_func_0_0(7) * occ_func_0_0(49) *
                  occ_func_0_0(159) +
              0.707107 * occ_func_0_0(158) * occ_func_0_0(48) *
                  occ_func_0_0(6) +
              0.707107 * occ_func_0_0(8) * occ_func_0_0(50) *
                  occ_func_0_0(160) +
              0.707107 * occ_func_0_0(157) * occ_func_0_0(47) *
                  occ_func_0_0(5)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_2_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             ((0.707107 * occ_func_0_0(9) * occ_func_0_1(51) *
                   occ_func_0_0(161) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(51) *
                   occ_func_0_0(161)) +
              0.707107 * occ_func_0_0(4) * occ_func_0_1(9) * occ_func_0_0(51) +
              0.707107 * occ_func_0_0(46) * occ_func_0_1(4) * occ_func_0_0(9) +
              (0.707107 * occ_func_0_0(156) * occ_func_0_0(46) *
                   occ_func_0_1(4) +
               0.707107 * occ_func_0_0(156) * occ_func_0_1(46) *
                   occ_func_0_0(4)) +
              (0.707107 * occ_func_0_0(171) * occ_func_0_0(52) *
                   occ_func_0_1(10) +
               0.707107 * occ_func_0_0(171) * occ_func_0_1(52) *
                   occ_func_0_0(10)) +
              0.707107 * occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_0(3) +
              0.707107 * occ_func_0_0(10) * occ_func_0_1(3) * occ_func_0_0(45) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_1(45) *
                   occ_func_0_0(146) +
               0.707107 * occ_func_0_1(3) * occ_func_0_0(45) *
                   occ_func_0_0(146)) +
              (0.707107 * occ_func_0_0(174) * occ_func_0_0(53) *
                   occ_func_0_1(11) +
               0.707107 * occ_func_0_0(174) * occ_func_0_1(53) *
                   occ_func_0_0(11)) +
              0.707107 * occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_0(2) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(2) * occ_func_0_0(44) +
              (0.707107 * occ_func_0_0(2) * occ_func_0_1(44) *
                   occ_func_0_0(143) +
               0.707107 * occ_func_0_1(2) * occ_func_0_0(44) *
                   occ_func_0_0(143)) +
              (0.707107 * occ_func_0_0(12) * occ_func_0_1(54) *
                   occ_func_0_0(175) +
               0.707107 * occ_func_0_1(12) * occ_func_0_0(54) *
                   occ_func_0_0(175)) +
              0.707107 * occ_func_0_0(1) * occ_func_0_1(12) * occ_func_0_0(54) +
              0.707107 * occ_func_0_0(43) * occ_func_0_1(1) * occ_func_0_0(12) +
              (0.707107 * occ_func_0_0(142) * occ_func_0_0(43) *
                   occ_func_0_1(1) +
               0.707107 * occ_func_0_0(142) * occ_func_0_1(43) *
                   occ_func_0_0(1)) +
              (0.707107 * occ_func_0_0(7) * occ_func_0_1(49) *
                   occ_func_0_0(159) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(49) *
                   occ_func_0_0(159)) +
              0.707107 * occ_func_0_0(6) * occ_func_0_1(7) * occ_func_0_0(49) +
              0.707107 * occ_func_0_0(48) * occ_func_0_1(6) * occ_func_0_0(7) +
              (0.707107 * occ_func_0_0(158) * occ_func_0_0(48) *
                   occ_func_0_1(6) +
               0.707107 * occ_func_0_0(158) * occ_func_0_1(48) *
                   occ_func_0_0(6)) +
              (0.707107 * occ_func_0_0(8) * occ_func_0_1(50) *
                   occ_func_0_0(160) +
               0.707107 * occ_func_0_1(8) * occ_func_0_0(50) *
                   occ_func_0_0(160)) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(8) * occ_func_0_0(50) +
              0.707107 * occ_func_0_0(47) * occ_func_0_1(5) * occ_func_0_0(8) +
              (0.707107 * occ_func_0_0(157) * occ_func_0_0(47) *
                   occ_func_0_1(5) +
               0.707107 * occ_func_0_0(157) * occ_func_0_1(47) *
                   occ_func_0_0(5))) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(4) * occ_func_0_0(9) * occ_func_0_0(51) +
              0.707107 * occ_func_0_0(46) * occ_func_0_0(4) * occ_func_0_0(9) +
              0.707107 * occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_0(3) +
              0.707107 * occ_func_0_0(10) * occ_func_0_0(3) * occ_func_0_0(45) +
              0.707107 * occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_0(2) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(2) * occ_func_0_0(44) +
              0.707107 * occ_func_0_0(1) * occ_func_0_0(12) * occ_func_0_0(54) +
              0.707107 * occ_func_0_0(43) * occ_func_0_0(1) * occ_func_0_0(12) +
              0.707107 * occ_func_0_0(6) * occ_func_0_0(7) * occ_func_0_0(49) +
              0.707107 * occ_func_0_0(48) * occ_func_0_0(6) * occ_func_0_0(7) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(8) * occ_func_0_0(50) +
              0.707107 * occ_func_0_0(47) * occ_func_0_0(5) * occ_func_0_0(8)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_3_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_0(9) * occ_func_0_1(51) *
                  occ_func_0_1(161) +
              0.707107 * occ_func_0_0(4) * occ_func_0_1(9) * occ_func_0_1(51) +
              0.707107 * occ_func_0_1(46) * occ_func_0_1(4) * occ_func_0_0(9) +
              0.707107 * occ_func_0_1(156) * occ_func_0_1(46) *
                  occ_func_0_0(4) +
              0.707107 * occ_func_0_1(171) * occ_func_0_1(52) *
                  occ_func_0_0(10) +
              0.707107 * occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_0(3) +
              0.707107 * occ_func_0_0(10) * occ_func_0_1(3) * occ_func_0_1(45) +
              0.707107 * occ_func_0_0(3) * occ_func_0_1(45) *
                  occ_func_0_1(146) +
              0.707107 * occ_func_0_1(174) * occ_func_0_1(53) *
                  occ_func_0_0(11) +
              0.707107 * occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_0(2) +
              0.707107 * occ_func_0_0(11) * occ_func_0_1(2) * occ_func_0_1(44) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(44) *
                  occ_func_0_1(143) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(54) *
                  occ_func_0_1(175) +
              0.707107 * occ_func_0_0(1) * occ_func_0_1(12) * occ_func_0_1(54) +
              0.707107 * occ_func_0_1(43) * occ_func_0_1(1) * occ_func_0_0(12) +
              0.707107 * occ_func_0_1(142) * occ_func_0_1(43) *
                  occ_func_0_0(1) +
              0.707107 * occ_func_0_0(7) * occ_func_0_1(49) *
                  occ_func_0_1(159) +
              0.707107 * occ_func_0_0(6) * occ_func_0_1(7) * occ_func_0_1(49) +
              0.707107 * occ_func_0_1(48) * occ_func_0_1(6) * occ_func_0_0(7) +
              0.707107 * occ_func_0_1(158) * occ_func_0_1(48) *
                  occ_func_0_0(6) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(50) *
                  occ_func_0_1(160) +
              0.707107 * occ_func_0_0(5) * occ_func_0_1(8) * occ_func_0_1(50) +
              0.707107 * occ_func_0_1(47) * occ_func_0_1(5) * occ_func_0_0(8) +
              0.707107 * occ_func_0_1(157) * occ_func_0_1(47) *
                  occ_func_0_0(5)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_1(9) * occ_func_0_0(51) *
                  occ_func_0_0(161) +
              0.707107 * occ_func_0_1(4) * occ_func_0_0(9) * occ_func_0_0(51) +
              0.707107 * occ_func_0_0(46) * occ_func_0_0(4) * occ_func_0_1(9) +
              0.707107 * occ_func_0_0(156) * occ_func_0_0(46) *
                  occ_func_0_1(4) +
              0.707107 * occ_func_0_0(171) * occ_func_0_0(52) *
                  occ_func_0_1(10) +
              0.707107 * occ_func_0_0(52) * occ_func_0_0(10) * occ_func_0_1(3) +
              0.707107 * occ_func_0_1(10) * occ_func_0_0(3) * occ_func_0_0(45) +
              0.707107 * occ_func_0_1(3) * occ_func_0_0(45) *
                  occ_func_0_0(146) +
              0.707107 * occ_func_0_0(174) * occ_func_0_0(53) *
                  occ_func_0_1(11) +
              0.707107 * occ_func_0_0(53) * occ_func_0_0(11) * occ_func_0_1(2) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(2) * occ_func_0_0(44) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(44) *
                  occ_func_0_0(143) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(54) *
                  occ_func_0_0(175) +
              0.707107 * occ_func_0_1(1) * occ_func_0_0(12) * occ_func_0_0(54) +
              0.707107 * occ_func_0_0(43) * occ_func_0_0(1) * occ_func_0_1(12) +
              0.707107 * occ_func_0_0(142) * occ_func_0_0(43) *
                  occ_func_0_1(1) +
              0.707107 * occ_func_0_1(7) * occ_func_0_0(49) *
                  occ_func_0_0(159) +
              0.707107 * occ_func_0_1(6) * occ_func_0_0(7) * occ_func_0_0(49) +
              0.707107 * occ_func_0_0(48) * occ_func_0_0(6) * occ_func_0_1(7) +
              0.707107 * occ_func_0_0(158) * occ_func_0_0(48) *
                  occ_func_0_1(6) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(50) *
                  occ_func_0_0(160) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(8) * occ_func_0_0(50) +
              0.707107 * occ_func_0_0(47) * occ_func_0_0(5) * occ_func_0_1(8) +
              0.707107 * occ_func_0_0(157) * occ_func_0_0(47) *
                  occ_func_0_1(5)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_4_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(9) * occ_func_0_0(51) *
                  occ_func_0_1(161) +
              0.707107 * occ_func_0_1(4) * occ_func_0_1(9) * occ_func_0_0(51) +
              0.707107 * occ_func_0_0(46) * occ_func_0_1(4) * occ_func_0_1(9) +
              0.707107 * occ_func_0_1(156) * occ_func_0_0(46) *
                  occ_func_0_1(4) +
              0.707107 * occ_func_0_1(171) * occ_func_0_0(52) *
                  occ_func_0_1(10) +
              0.707107 * occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_1(3) +
              0.707107 * occ_func_0_1(10) * occ_func_0_1(3) * occ_func_0_0(45) +
              0.707107 * occ_func_0_1(3) * occ_func_0_0(45) *
                  occ_func_0_1(146) +
              0.707107 * occ_func_0_1(174) * occ_func_0_0(53) *
                  occ_func_0_1(11) +
              0.707107 * occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_1(2) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(2) * occ_func_0_0(44) +
              0.707107 * occ_func_0_1(2) * occ_func_0_0(44) *
                  occ_func_0_1(143) +
              0.707107 * occ_func_0_1(12) * occ_func_0_0(54) *
                  occ_func_0_1(175) +
              0.707107 * occ_func_0_1(1) * occ_func_0_1(12) * occ_func_0_0(54) +
              0.707107 * occ_func_0_0(43) * occ_func_0_1(1) * occ_func_0_1(12) +
              0.707107 * occ_func_0_1(142) * occ_func_0_0(43) *
                  occ_func_0_1(1) +
              0.707107 * occ_func_0_1(7) * occ_func_0_0(49) *
                  occ_func_0_1(159) +
              0.707107 * occ_func_0_1(6) * occ_func_0_1(7) * occ_func_0_0(49) +
              0.707107 * occ_func_0_0(48) * occ_func_0_1(6) * occ_func_0_1(7) +
              0.707107 * occ_func_0_1(158) * occ_func_0_0(48) *
                  occ_func_0_1(6) +
              0.707107 * occ_func_0_1(8) * occ_func_0_0(50) *
                  occ_func_0_1(160) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(8) * occ_func_0_0(50) +
              0.707107 * occ_func_0_0(47) * occ_func_0_1(5) * occ_func_0_1(8) +
              0.707107 * occ_func_0_1(157) * occ_func_0_0(47) *
                  occ_func_0_1(5)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_0(9) * occ_func_0_1(51) *
                  occ_func_0_0(161) +
              0.707107 * occ_func_0_0(4) * occ_func_0_0(9) * occ_func_0_1(51) +
              0.707107 * occ_func_0_1(46) * occ_func_0_0(4) * occ_func_0_0(9) +
              0.707107 * occ_func_0_0(156) * occ_func_0_1(46) *
                  occ_func_0_0(4) +
              0.707107 * occ_func_0_0(171) * occ_func_0_1(52) *
                  occ_func_0_0(10) +
              0.707107 * occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_0(3) +
              0.707107 * occ_func_0_0(10) * occ_func_0_0(3) * occ_func_0_1(45) +
              0.707107 * occ_func_0_0(3) * occ_func_0_1(45) *
                  occ_func_0_0(146) +
              0.707107 * occ_func_0_0(174) * occ_func_0_1(53) *
                  occ_func_0_0(11) +
              0.707107 * occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_0(2) +
              0.707107 * occ_func_0_0(11) * occ_func_0_0(2) * occ_func_0_1(44) +
              0.707107 * occ_func_0_0(2) * occ_func_0_1(44) *
                  occ_func_0_0(143) +
              0.707107 * occ_func_0_0(12) * occ_func_0_1(54) *
                  occ_func_0_0(175) +
              0.707107 * occ_func_0_0(1) * occ_func_0_0(12) * occ_func_0_1(54) +
              0.707107 * occ_func_0_1(43) * occ_func_0_0(1) * occ_func_0_0(12) +
              0.707107 * occ_func_0_0(142) * occ_func_0_1(43) *
                  occ_func_0_0(1) +
              0.707107 * occ_func_0_0(7) * occ_func_0_1(49) *
                  occ_func_0_0(159) +
              0.707107 * occ_func_0_0(6) * occ_func_0_0(7) * occ_func_0_1(49) +
              0.707107 * occ_func_0_1(48) * occ_func_0_0(6) * occ_func_0_0(7) +
              0.707107 * occ_func_0_0(158) * occ_func_0_1(48) *
                  occ_func_0_0(6) +
              0.707107 * occ_func_0_0(8) * occ_func_0_1(50) *
                  occ_func_0_0(160) +
              0.707107 * occ_func_0_0(5) * occ_func_0_0(8) * occ_func_0_1(50) +
              0.707107 * occ_func_0_1(47) * occ_func_0_0(5) * occ_func_0_0(8) +
              0.707107 * occ_func_0_0(157) * occ_func_0_1(47) *
                  occ_func_0_0(5)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_5_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(9) * occ_func_0_1(51) * occ_func_0_0(161) +
              occ_func_0_0(156) * occ_func_0_1(46) * occ_func_0_1(4) +
              occ_func_0_0(171) * occ_func_0_1(52) * occ_func_0_1(10) +
              occ_func_0_1(3) * occ_func_0_1(45) * occ_func_0_0(146) +
              occ_func_0_0(174) * occ_func_0_1(53) * occ_func_0_1(11) +
              occ_func_0_1(2) * occ_func_0_1(44) * occ_func_0_0(143) +
              occ_func_0_1(12) * occ_func_0_1(54) * occ_func_0_0(175) +
              occ_func_0_0(142) * occ_func_0_1(43) * occ_func_0_1(1) +
              occ_func_0_1(7) * occ_func_0_1(49) * occ_func_0_0(159) +
              occ_func_0_0(158) * occ_func_0_1(48) * occ_func_0_1(6) +
              occ_func_0_1(8) * occ_func_0_1(50) * occ_func_0_0(160) +
              occ_func_0_0(157) * occ_func_0_1(47) * occ_func_0_1(5)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(4) * occ_func_0_1(9) * occ_func_0_0(51) +
              occ_func_0_0(46) * occ_func_0_1(4) * occ_func_0_0(9) +
              occ_func_0_0(52) * occ_func_0_1(10) * occ_func_0_0(3) +
              occ_func_0_0(10) * occ_func_0_1(3) * occ_func_0_0(45) +
              occ_func_0_0(53) * occ_func_0_1(11) * occ_func_0_0(2) +
              occ_func_0_0(11) * occ_func_0_1(2) * occ_func_0_0(44) +
              occ_func_0_0(1) * occ_func_0_1(12) * occ_func_0_0(54) +
              occ_func_0_0(43) * occ_func_0_1(1) * occ_func_0_0(12) +
              occ_func_0_0(6) * occ_func_0_1(7) * occ_func_0_0(49) +
              occ_func_0_0(48) * occ_func_0_1(6) * occ_func_0_0(7) +
              occ_func_0_0(5) * occ_func_0_1(8) * occ_func_0_0(50) +
              occ_func_0_0(47) * occ_func_0_1(5) * occ_func_0_0(8)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_6_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(9) * occ_func_0_1(51) *
                  occ_func_0_1(161) +
              0.707107 * occ_func_0_1(156) * occ_func_0_1(46) *
                  occ_func_0_1(4) +
              0.707107 * occ_func_0_1(171) * occ_func_0_1(52) *
                  occ_func_0_1(10) +
              0.707107 * occ_func_0_1(3) * occ_func_0_1(45) *
                  occ_func_0_1(146) +
              0.707107 * occ_func_0_1(174) * occ_func_0_1(53) *
                  occ_func_0_1(11) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(44) *
                  occ_func_0_1(143) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(54) *
                  occ_func_0_1(175) +
              0.707107 * occ_func_0_1(142) * occ_func_0_1(43) *
                  occ_func_0_1(1) +
              0.707107 * occ_func_0_1(7) * occ_func_0_1(49) *
                  occ_func_0_1(159) +
              0.707107 * occ_func_0_1(158) * occ_func_0_1(48) *
                  occ_func_0_1(6) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(50) *
                  occ_func_0_1(160) +
              0.707107 * occ_func_0_1(157) * occ_func_0_1(47) *
                  occ_func_0_1(5)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (0.707107 * occ_func_0_1(9) * occ_func_0_1(51) *
                  occ_func_0_0(161) +
              (0.707107 * occ_func_0_0(4) * occ_func_0_1(9) * occ_func_0_1(51) +
               0.707107 * occ_func_0_1(4) * occ_func_0_1(9) *
                   occ_func_0_0(51)) +
              (0.707107 * occ_func_0_0(46) * occ_func_0_1(4) * occ_func_0_1(9) +
               0.707107 * occ_func_0_1(46) * occ_func_0_1(4) *
                   occ_func_0_0(9)) +
              0.707107 * occ_func_0_0(156) * occ_func_0_1(46) *
                  occ_func_0_1(4) +
              0.707107 * occ_func_0_0(171) * occ_func_0_1(52) *
                  occ_func_0_1(10) +
              (0.707107 * occ_func_0_0(52) * occ_func_0_1(10) *
                   occ_func_0_1(3) +
               0.707107 * occ_func_0_1(52) * occ_func_0_1(10) *
                   occ_func_0_0(3)) +
              (0.707107 * occ_func_0_0(10) * occ_func_0_1(3) *
                   occ_func_0_1(45) +
               0.707107 * occ_func_0_1(10) * occ_func_0_1(3) *
                   occ_func_0_0(45)) +
              0.707107 * occ_func_0_1(3) * occ_func_0_1(45) *
                  occ_func_0_0(146) +
              0.707107 * occ_func_0_0(174) * occ_func_0_1(53) *
                  occ_func_0_1(11) +
              (0.707107 * occ_func_0_0(53) * occ_func_0_1(11) *
                   occ_func_0_1(2) +
               0.707107 * occ_func_0_1(53) * occ_func_0_1(11) *
                   occ_func_0_0(2)) +
              (0.707107 * occ_func_0_0(11) * occ_func_0_1(2) *
                   occ_func_0_1(44) +
               0.707107 * occ_func_0_1(11) * occ_func_0_1(2) *
                   occ_func_0_0(44)) +
              0.707107 * occ_func_0_1(2) * occ_func_0_1(44) *
                  occ_func_0_0(143) +
              0.707107 * occ_func_0_1(12) * occ_func_0_1(54) *
                  occ_func_0_0(175) +
              (0.707107 * occ_func_0_0(1) * occ_func_0_1(12) *
                   occ_func_0_1(54) +
               0.707107 * occ_func_0_1(1) * occ_func_0_1(12) *
                   occ_func_0_0(54)) +
              (0.707107 * occ_func_0_0(43) * occ_func_0_1(1) *
                   occ_func_0_1(12) +
               0.707107 * occ_func_0_1(43) * occ_func_0_1(1) *
                   occ_func_0_0(12)) +
              0.707107 * occ_func_0_0(142) * occ_func_0_1(43) *
                  occ_func_0_1(1) +
              0.707107 * occ_func_0_1(7) * occ_func_0_1(49) *
                  occ_func_0_0(159) +
              (0.707107 * occ_func_0_0(6) * occ_func_0_1(7) * occ_func_0_1(49) +
               0.707107 * occ_func_0_1(6) * occ_func_0_1(7) *
                   occ_func_0_0(49)) +
              (0.707107 * occ_func_0_0(48) * occ_func_0_1(6) * occ_func_0_1(7) +
               0.707107 * occ_func_0_1(48) * occ_func_0_1(6) *
                   occ_func_0_0(7)) +
              0.707107 * occ_func_0_0(158) * occ_func_0_1(48) *
                  occ_func_0_1(6) +
              0.707107 * occ_func_0_1(8) * occ_func_0_1(50) *
                  occ_func_0_0(160) +
              (0.707107 * occ_func_0_0(5) * occ_func_0_1(8) * occ_func_0_1(50) +
               0.707107 * occ_func_0_1(5) * occ_func_0_1(8) *
                   occ_func_0_0(50)) +
              (0.707107 * occ_func_0_0(47) * occ_func_0_1(5) * occ_func_0_1(8) +
               0.707107 * occ_func_0_1(47) * occ_func_0_1(5) *
                   occ_func_0_0(8)) +
              0.707107 * occ_func_0_0(157) * occ_func_0_1(47) *
                  occ_func_0_1(5)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_7_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (occ_func_0_1(4) * occ_func_0_0(9) * occ_func_0_1(51) +
              occ_func_0_1(46) * occ_func_0_0(4) * occ_func_0_1(9) +
              occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_1(3) +
              occ_func_0_1(10) * occ_func_0_0(3) * occ_func_0_1(45) +
              occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_1(2) +
              occ_func_0_1(11) * occ_func_0_0(2) * occ_func_0_1(44) +
              occ_func_0_1(1) * occ_func_0_0(12) * occ_func_0_1(54) +
              occ_func_0_1(43) * occ_func_0_0(1) * occ_func_0_1(12) +
              occ_func_0_1(6) * occ_func_0_0(7) * occ_func_0_1(49) +
              occ_func_0_1(48) * occ_func_0_0(6) * occ_func_0_1(7) +
              occ_func_0_1(5) * occ_func_0_0(8) * occ_func_0_1(50) +
              occ_func_0_1(47) * occ_func_0_0(5) * occ_func_0_1(8)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             (occ_func_0_0(9) * occ_func_0_0(51) * occ_func_0_1(161) +
              occ_func_0_1(156) * occ_func_0_0(46) * occ_func_0_0(4) +
              occ_func_0_1(171) * occ_func_0_0(52) * occ_func_0_0(10) +
              occ_func_0_0(3) * occ_func_0_0(45) * occ_func_0_1(146) +
              occ_func_0_1(174) * occ_func_0_0(53) * occ_func_0_0(11) +
              occ_func_0_0(2) * occ_func_0_0(44) * occ_func_0_1(143) +
              occ_func_0_0(12) * occ_func_0_0(54) * occ_func_0_1(175) +
              occ_func_0_1(142) * occ_func_0_0(43) * occ_func_0_0(1) +
              occ_func_0_0(7) * occ_func_0_0(49) * occ_func_0_1(159) +
              occ_func_0_1(158) * occ_func_0_0(48) * occ_func_0_0(6) +
              occ_func_0_0(8) * occ_func_0_0(50) * occ_func_0_1(160) +
              occ_func_0_1(157) * occ_func_0_0(47) * occ_func_0_0(5)) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_8_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_0[occ_f] - m_occ_func_0_0[occ_i]) *
             (0.707107 * occ_func_0_1(4) * occ_func_0_1(9) * occ_func_0_1(51) +
              0.707107 * occ_func_0_1(46) * occ_func_0_1(4) * occ_func_0_1(9) +
              0.707107 * occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_1(3) +
              0.707107 * occ_func_0_1(10) * occ_func_0_1(3) * occ_func_0_1(45) +
              0.707107 * occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_1(2) +
              0.707107 * occ_func_0_1(11) * occ_func_0_1(2) * occ_func_0_1(44) +
              0.707107 * occ_func_0_1(1) * occ_func_0_1(12) * occ_func_0_1(54) +
              0.707107 * occ_func_0_1(43) * occ_func_0_1(1) * occ_func_0_1(12) +
              0.707107 * occ_func_0_1(6) * occ_func_0_1(7) * occ_func_0_1(49) +
              0.707107 * occ_func_0_1(48) * occ_func_0_1(6) * occ_func_0_1(7) +
              0.707107 * occ_func_0_1(5) * occ_func_0_1(8) * occ_func_0_1(50) +
              0.707107 * occ_func_0_1(47) * occ_func_0_1(5) * occ_func_0_1(8)) /
             6. +
         (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
             ((0.707107 * occ_func_0_0(9) * occ_func_0_1(51) *
                   occ_func_0_1(161) +
               0.707107 * occ_func_0_1(9) * occ_func_0_0(51) *
                   occ_func_0_1(161)) +
              0.707107 * occ_func_0_1(4) * occ_func_0_0(9) * occ_func_0_1(51) +
              0.707107 * occ_func_0_1(46) * occ_func_0_0(4) * occ_func_0_1(9) +
              (0.707107 * occ_func_0_1(156) * occ_func_0_0(46) *
                   occ_func_0_1(4) +
               0.707107 * occ_func_0_1(156) * occ_func_0_1(46) *
                   occ_func_0_0(4)) +
              (0.707107 * occ_func_0_1(171) * occ_func_0_0(52) *
                   occ_func_0_1(10) +
               0.707107 * occ_func_0_1(171) * occ_func_0_1(52) *
                   occ_func_0_0(10)) +
              0.707107 * occ_func_0_1(52) * occ_func_0_0(10) * occ_func_0_1(3) +
              0.707107 * occ_func_0_1(10) * occ_func_0_0(3) * occ_func_0_1(45) +
              (0.707107 * occ_func_0_0(3) * occ_func_0_1(45) *
                   occ_func_0_1(146) +
               0.707107 * occ_func_0_1(3) * occ_func_0_0(45) *
                   occ_func_0_1(146)) +
              (0.707107 * occ_func_0_1(174) * occ_func_0_0(53) *
                   occ_func_0_1(11) +
               0.707107 * occ_func_0_1(174) * occ_func_0_1(53) *
                   occ_func_0_0(11)) +
              0.707107 * occ_func_0_1(53) * occ_func_0_0(11) * occ_func_0_1(2) +
              0.707107 * occ_func_0_1(11) * occ_func_0_0(2) * occ_func_0_1(44) +
              (0.707107 * occ_func_0_0(2) * occ_func_0_1(44) *
                   occ_func_0_1(143) +
               0.707107 * occ_func_0_1(2) * occ_func_0_0(44) *
                   occ_func_0_1(143)) +
              (0.707107 * occ_func_0_0(12) * occ_func_0_1(54) *
                   occ_func_0_1(175) +
               0.707107 * occ_func_0_1(12) * occ_func_0_0(54) *
                   occ_func_0_1(175)) +
              0.707107 * occ_func_0_1(1) * occ_func_0_0(12) * occ_func_0_1(54) +
              0.707107 * occ_func_0_1(43) * occ_func_0_0(1) * occ_func_0_1(12) +
              (0.707107 * occ_func_0_1(142) * occ_func_0_0(43) *
                   occ_func_0_1(1) +
               0.707107 * occ_func_0_1(142) * occ_func_0_1(43) *
                   occ_func_0_0(1)) +
              (0.707107 * occ_func_0_0(7) * occ_func_0_1(49) *
                   occ_func_0_1(159) +
               0.707107 * occ_func_0_1(7) * occ_func_0_0(49) *
                   occ_func_0_1(159)) +
              0.707107 * occ_func_0_1(6) * occ_func_0_0(7) * occ_func_0_1(49) +
              0.707107 * occ_func_0_1(48) * occ_func_0_0(6) * occ_func_0_1(7) +
              (0.707107 * occ_func_0_1(158) * occ_func_0_0(48) *
                   occ_func_0_1(6) +
               0.707107 * occ_func_0_1(158) * occ_func_0_1(48) *
                   occ_func_0_0(6)) +
              (0.707107 * occ_func_0_0(8) * occ_func_0_1(50) *
                   occ_func_0_1(160) +
               0.707107 * occ_func_0_1(8) * occ_func_0_0(50) *
                   occ_func_0_1(160)) +
              0.707107 * occ_func_0_1(5) * occ_func_0_0(8) * occ_func_0_1(50) +
              0.707107 * occ_func_0_1(47) * occ_func_0_0(5) * occ_func_0_1(8) +
              (0.707107 * occ_func_0_1(157) * occ_func_0_0(47) *
                   occ_func_0_1(5) +
               0.707107 * occ_func_0_1(157) * occ_func_0_1(47) *
                   occ_func_0_0(5))) /
             6.;
}
template <typename Scalar>
Scalar OccClexulatorTest_Clexulator_default::site_deval_bfunc_14_9_at_0(
    int occ_i, int occ_f) const {
  return (m_occ_func_0_1[occ_f] - m_occ_func_0_1[occ_i]) *
         (occ_func_0_1(9) * occ_func_0_1(51) * occ_func_0_1(161) +
          occ_func_0_1(4) * occ_func_0_1(9) * occ_func_0_1(51) +
          occ_func_0_1(46) * occ_func_0_1(4) * occ_func_0_1(9) +
          occ_func_0_1(156) * occ_func_0_1(46) * occ_func_0_1(4) +
          occ_func_0_1(171) * occ_func_0_1(52) * occ_func_0_1(10) +
          occ_func_0_1(52) * occ_func_0_1(10) * occ_func_0_1(3) +
          occ_func_0_1(10) * occ_func_0_1(3) * occ_func_0_1(45) +
          occ_func_0_1(3) * occ_func_0_1(45) * occ_func_0_1(146) +
          occ_func_0_1(174) * occ_func_0_1(53) * occ_func_0_1(11) +
          occ_func_0_1(53) * occ_func_0_1(11) * occ_func_0_1(2) +
          occ_func_0_1(11) * occ_func_0_1(2) * occ_func_0_1(44) +
          occ_func_0_1(2) * occ_func_0_1(44) * occ_func_0_1(143) +
          occ_func_0_1(12) * occ_func_0_1(54) * occ_func_0_1(175) +
          occ_func_0_1(1) * occ_func_0_1(12) * occ_func_0_1(54) +
          occ_func_0_1(43) * occ_func_0_1(1) * occ_func_0_1(12) +
          occ_func_0_1(142) * occ_func_0_1(43) * occ_func_0_1(1) +
          occ_func_0_1(7) * occ_func_0_1(49) * occ_func_0_1(159) +
          occ_func_0_1(6) * occ_func_0_1(7) * occ_func_0_1(49) +
          occ_func_0_1(48) * occ_func_0_1(6) * occ_func_0_1(7) +
          occ_func_0_1(158) * occ_func_0_1(48) * occ_func_0_1(6) +
          occ_func_0_1(8) * occ_func_0_1(50) * occ_func_0_1(160) +
          occ_func_0_1(5) * occ_func_0_1(8) * occ_func_0_1(50) +
          occ_func_0_1(47) * occ_func_0_1(5) * occ_func_0_1(8) +
          occ_func_0_1(157) * occ_func_0_1(47) * occ_func_0_1(5)) /
         6.;
}

}  // namespace clexulator
}  // namespace CASM

extern "C" {
/// \brief Returns a clexulator::BaseClexulator* owning a
/// OccClexulatorTest_Clexulator_default
CASM::clexulator::BaseClexulator *make_OccClexulatorTest_Clexulator_default() {
  return new CASM::clexulator::OccClexulatorTest_Clexulator_default();
}
}
