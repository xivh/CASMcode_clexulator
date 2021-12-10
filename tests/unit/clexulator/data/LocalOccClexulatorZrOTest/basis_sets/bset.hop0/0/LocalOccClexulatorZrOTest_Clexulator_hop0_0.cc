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
      "occupants" : [ "Zr" ]
    },
    {
      "coordinate" : [ 0.666666666667, 0.333333333333, 0.500000000000 ],
      "occupants" : [ "Zr" ]
    },
    {
      "coordinate" : [ 0.333333333333, 0.666666666667, 0.250000000000 ],
      "occupants" : [ "Va", "O" ]
    },
    {
      "coordinate" : [ 0.333333333333, 0.666666666667, 0.750000000000 ],
      "occupants" : [ "Va", "O" ]
    }
  ],
  "coordinate_mode" : "Fractional",
  "lattice_vectors" : [
    [ 3.233986860000, 0.000000000000, 0.000000000000 ],
    [ -1.616993430000, 2.800714770000, 0.000000000000 ],
    [ 0.000000000000, 0.000000000000, 5.168678340000 ]
  ],
  "title" : "ZrO"
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
    "method" : "local_max_length",
    "params" : {
      "generating_group" : [ 0, 3, 4, 9, 10, 11, 12, 13, 14, 15, 21, 22 ],
      "orbit_branch_specs" : {
        "0" : {
          "cutoff_radius" : 0.000000000000,
          "max_length" : 0.000000000000
        },
        "1" : {
          "cutoff_radius" : 6.010000000000,
          "max_length" : 0.000000000000
        },
        "2" : {
          "cutoff_radius" : 6.010000000000,
          "max_length" : 6.010000000000
        }
      },
      "phenomenal" : {
        "max_length" : 2.584339170000,
        "min_length" : 2.584339170000,
        "sites" : [
          [ 2, 0, 0, 0 ],
          [ 3, 0, 0, 0 ]
        ]
      }
    }
  }
}

**/

/// \brief Returns a clexulator::BaseClexulator* owning a
/// LocalOccClexulatorZrOTest_Clexulator_hop0_0
extern "C" CASM::clexulator::BaseClexulator *
make_LocalOccClexulatorZrOTest_Clexulator_hop0_0();

namespace CASM {
namespace clexulator {

/****** GENERATED CLEXPARAMPACK DEFINITION ******/

typedef BasicClexParamPack ParamPack;

/****** GENERATED CLEXULATOR DEFINITION ******/

class LocalOccClexulatorZrOTest_Clexulator_hop0_0
    : public clexulator::BaseClexulator {
 public:
  LocalOccClexulatorZrOTest_Clexulator_hop0_0();

  ~LocalOccClexulatorZrOTest_Clexulator_hop0_0();

  ClexParamPack const &param_pack() const override { return m_params; }

  ClexParamPack &param_pack() override { return m_params; }

  template <typename Scalar>
  Scalar eval_bfunc_0_0() const;

  template <typename Scalar>
  Scalar eval_bfunc_1_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_1_0_at_15() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_1_0_at_16() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_1_0_at_15(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_1_0_at_16(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_2_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_2_0_at_14() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_2_0_at_17() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_2_0_at_14(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_2_0_at_17(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_3_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_3_0_at_13() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_3_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_4_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_4_0_at_52() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_4_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_5_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_5_0_at_18() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_5_0_at_19() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_5_0_at_24() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_5_0_at_25() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_5_0_at_26() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_5_0_at_27() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_5_0_at_18(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_5_0_at_19(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_5_0_at_24(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_5_0_at_25(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_5_0_at_26(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_5_0_at_27(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_6_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_6_0_at_20() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_6_0_at_21() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_6_0_at_22() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_6_0_at_23() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_6_0_at_28() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_6_0_at_29() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_6_0_at_20(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_6_0_at_21(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_6_0_at_22(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_6_0_at_23(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_6_0_at_28(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_6_0_at_29(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_7_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_7_0_at_14() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_7_0_at_15() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_7_0_at_16() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_7_0_at_17() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_7_0_at_14(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_7_0_at_15(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_7_0_at_16(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_7_0_at_17(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_8_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_8_0_at_13() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_8_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_9_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_13() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_9_0_at_52() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_9_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_10_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_10_0_at_18() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_10_0_at_19() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_10_0_at_24() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_10_0_at_25() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_10_0_at_26() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_10_0_at_27() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_10_0_at_18(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_10_0_at_19(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_10_0_at_24(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_10_0_at_25(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_10_0_at_26(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_10_0_at_27(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_11_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_11_0_at_20() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_0_at_21() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_0_at_22() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_0_at_23() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_0_at_28() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_11_0_at_29() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_11_0_at_20(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_11_0_at_21(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_11_0_at_22(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_11_0_at_23(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_11_0_at_28(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_11_0_at_29(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_12_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_15() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_16() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_12_0_at_52() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_15(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_16(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_12_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_13_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_13_0_at_13() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_13_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_14_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_14_0_at_52() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_14_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_15_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_15_0_at_13() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_15_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_16_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_16_0_at_52() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_16_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_17_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_18() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_19() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_24() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_25() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_13() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_26() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_17_0_at_27() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_18(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_19(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_24(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_25(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_26(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_17_0_at_27(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_18_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_20() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_21() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_22() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_23() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_13() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_28() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_18_0_at_29() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_20(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_21(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_22(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_23(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_28(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_18_0_at_29(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_19_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_15() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_16() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_19_0_at_13() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_15(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_16(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_19_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_20_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_14() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_17() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_20_0_at_52() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_14(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_17(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_20_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_21_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_21_0_at_13() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_21_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_22_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_13() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_22_0_at_52() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_22_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_23_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_23_0_at_13() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_23_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_24_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_13() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_24_0_at_52() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_24_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_25_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_18() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_19() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_24() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_25() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_13() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_26() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_25_0_at_27() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_18(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_19(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_24(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_25(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_26(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_25_0_at_27(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_26_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_20() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_21() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_22() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_23() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_13() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_28() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_26_0_at_29() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_20(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_21(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_22(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_23(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_28(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_26_0_at_29(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_27_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_18() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_19() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_24() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_25() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_52() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_26() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_27_0_at_27() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_18(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_19(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_24(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_25(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_26(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_27_0_at_27(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_28_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_20() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_21() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_22() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_23() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_52() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_28() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_28_0_at_29() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_20(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_21(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_22(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_23(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_28(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_28_0_at_29(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_29_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_13() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_29_0_at_52() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_29_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_30_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_2() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_3() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_4() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_5() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_6() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_7() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_8() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_9() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_10() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_11() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_12() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_30_0_at_13() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_2(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_3(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_4(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_5(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_6(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_7(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_8(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_9(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_10(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_11(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_12(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_30_0_at_13(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_31_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_31() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_32() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_35() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_36() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_39() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_40() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_43() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_44() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_47() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_48() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_51() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_31_0_at_52() const;
  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_31(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_32(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_35(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_36(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_39(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_40(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_43(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_44(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_47(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_48(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_51(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_31_0_at_52(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar eval_bfunc_32_0() const;

  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_18() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_19() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_20() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_21() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_22() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_23() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_24() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_25() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_26() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_27() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_28() const;
  template <typename Scalar>
  Scalar site_eval_bfunc_32_0_at_29() const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_18(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_19(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_20(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_21(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_22(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_23(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_24(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_25(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_26(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_27(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_28(int occ_i, int occ_f) const;

  template <typename Scalar>
  Scalar site_deval_bfunc_32_0_at_29(int occ_i, int occ_f) const;

 private:
  // ParamPack object, which stores temporary data for calculations
  mutable ParamPack m_params;

  // typedef for method pointers of scalar type double
  typedef double (
      LocalOccClexulatorZrOTest_Clexulator_hop0_0::*BasisFuncPtr_0)() const;

  // typedef for method pointers
  typedef double (LocalOccClexulatorZrOTest_Clexulator_hop0_0::*
                      DeltaBasisFuncPtr_0)(int, int) const;

  // array of pointers to member functions for calculating basis functions of
  // scalar type double
  BasisFuncPtr_0 m_orbit_func_table_0[33];

  // array of pointers to member functions for calculating flower functions of
  // scalar type double
  BasisFuncPtr_0 m_flower_func_table_0[53][33];

  // array of pointers to member functions for calculating DELTA flower
  // functions of scalar type double
  DeltaBasisFuncPtr_0 m_delta_func_table_0[53][33];

  // Occupation Function tables for basis sites in asymmetric unit 1:
  //   - basis site 2:
  double m_occ_func_2_0[2];

  //   - basis site 3:
  double m_occ_func_3_0[2];

  // ClexParamPack allocation for evaluated correlations
  ParamPack::Key m_corr_param_key;
  // ClexParamPack allocation for DoF occ
  ParamPack::Key m_occ_site_func_param_key;

  /// \brief Clone the LocalOccClexulatorZrOTest_Clexulator_hop0_0
  BaseClexulator *_clone() const override {
    return new LocalOccClexulatorZrOTest_Clexulator_hop0_0(*this);
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

  // Occupation Function evaluators and accessors for basis site 2:
  double const &eval_occ_func_2_0(const int &nlist_ind) const {
    return m_occ_func_2_0[_occ(nlist_ind)];
  }

  double const &occ_func_2_0(const int &nlist_ind) const {
    return m_params.read(m_occ_site_func_param_key, 0, nlist_ind);
  }

  // Occupation Function evaluators and accessors for basis site 3:
  double const &eval_occ_func_3_0(const int &nlist_ind) const {
    return m_occ_func_3_0[_occ(nlist_ind)];
  }

  double const &occ_func_3_0(const int &nlist_ind) const {
    return m_params.read(m_occ_site_func_param_key, 0, nlist_ind);
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

LocalOccClexulatorZrOTest_Clexulator_hop0_0::
    LocalOccClexulatorZrOTest_Clexulator_hop0_0()
    : BaseClexulator(53, 33, 53) {
  m_occ_func_2_0[0] = -0.0000000000, m_occ_func_2_0[1] = 1.0000000000;

  m_occ_func_3_0[0] = -0.0000000000, m_occ_func_3_0[1] = 1.0000000000;

  m_occ_site_func_param_key = m_params.allocate("occ_site_func", 1, 53, true);

  m_corr_param_key = m_params.allocate("corr", corr_size(), 1, false);

  m_orbit_func_table_0[0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_0_0<double>;
  m_orbit_func_table_0[1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_1_0<double>;
  m_orbit_func_table_0[2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_2_0<double>;
  m_orbit_func_table_0[3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_3_0<double>;
  m_orbit_func_table_0[4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_4_0<double>;
  m_orbit_func_table_0[5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_5_0<double>;
  m_orbit_func_table_0[6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_6_0<double>;
  m_orbit_func_table_0[7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_7_0<double>;
  m_orbit_func_table_0[8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_8_0<double>;
  m_orbit_func_table_0[9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_9_0<double>;
  m_orbit_func_table_0[10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_10_0<double>;
  m_orbit_func_table_0[11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_11_0<double>;
  m_orbit_func_table_0[12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_12_0<double>;
  m_orbit_func_table_0[13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_13_0<double>;
  m_orbit_func_table_0[14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_14_0<double>;
  m_orbit_func_table_0[15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_15_0<double>;
  m_orbit_func_table_0[16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_16_0<double>;
  m_orbit_func_table_0[17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_17_0<double>;
  m_orbit_func_table_0[18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_18_0<double>;
  m_orbit_func_table_0[19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_19_0<double>;
  m_orbit_func_table_0[20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_20_0<double>;
  m_orbit_func_table_0[21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_21_0<double>;
  m_orbit_func_table_0[22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_22_0<double>;
  m_orbit_func_table_0[23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_23_0<double>;
  m_orbit_func_table_0[24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_24_0<double>;
  m_orbit_func_table_0[25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_25_0<double>;
  m_orbit_func_table_0[26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_26_0<double>;
  m_orbit_func_table_0[27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_27_0<double>;
  m_orbit_func_table_0[28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_28_0<double>;
  m_orbit_func_table_0[29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_29_0<double>;
  m_orbit_func_table_0[30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_30_0<double>;
  m_orbit_func_table_0[31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_31_0<double>;
  m_orbit_func_table_0[32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_32_0<double>;

  m_flower_func_table_0[0][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[0][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[1][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[1][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[2][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_2<
          double>;
  m_flower_func_table_0[2][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_2<
          double>;
  m_flower_func_table_0[2][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_2<
          double>;
  m_flower_func_table_0[2][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_2<
          double>;
  m_flower_func_table_0[2][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_2<
          double>;
  m_flower_func_table_0[2][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_2<
          double>;
  m_flower_func_table_0[2][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_2<
          double>;
  m_flower_func_table_0[2][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_2<
          double>;
  m_flower_func_table_0[2][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_2<
          double>;
  m_flower_func_table_0[2][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_2<
          double>;
  m_flower_func_table_0[2][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_2<
          double>;
  m_flower_func_table_0[2][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_2<
          double>;
  m_flower_func_table_0[2][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_2<
          double>;
  m_flower_func_table_0[2][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_2<
          double>;
  m_flower_func_table_0[2][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_2<
          double>;
  m_flower_func_table_0[2][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_2<
          double>;
  m_flower_func_table_0[2][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[2][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[3][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_3<
          double>;
  m_flower_func_table_0[3][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_3<
          double>;
  m_flower_func_table_0[3][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_3<
          double>;
  m_flower_func_table_0[3][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_3<
          double>;
  m_flower_func_table_0[3][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_3<
          double>;
  m_flower_func_table_0[3][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_3<
          double>;
  m_flower_func_table_0[3][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_3<
          double>;
  m_flower_func_table_0[3][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_3<
          double>;
  m_flower_func_table_0[3][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_3<
          double>;
  m_flower_func_table_0[3][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_3<
          double>;
  m_flower_func_table_0[3][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_3<
          double>;
  m_flower_func_table_0[3][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_3<
          double>;
  m_flower_func_table_0[3][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_3<
          double>;
  m_flower_func_table_0[3][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_3<
          double>;
  m_flower_func_table_0[3][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_3<
          double>;
  m_flower_func_table_0[3][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_3<
          double>;
  m_flower_func_table_0[3][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[3][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[4][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_4<
          double>;
  m_flower_func_table_0[4][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_4<
          double>;
  m_flower_func_table_0[4][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_4<
          double>;
  m_flower_func_table_0[4][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_4<
          double>;
  m_flower_func_table_0[4][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_4<
          double>;
  m_flower_func_table_0[4][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_4<
          double>;
  m_flower_func_table_0[4][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_4<
          double>;
  m_flower_func_table_0[4][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_4<
          double>;
  m_flower_func_table_0[4][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_4<
          double>;
  m_flower_func_table_0[4][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_4<
          double>;
  m_flower_func_table_0[4][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_4<
          double>;
  m_flower_func_table_0[4][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_4<
          double>;
  m_flower_func_table_0[4][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_4<
          double>;
  m_flower_func_table_0[4][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_4<
          double>;
  m_flower_func_table_0[4][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_4<
          double>;
  m_flower_func_table_0[4][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_4<
          double>;
  m_flower_func_table_0[4][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[4][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[5][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_5<
          double>;
  m_flower_func_table_0[5][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_5<
          double>;
  m_flower_func_table_0[5][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_5<
          double>;
  m_flower_func_table_0[5][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_5<
          double>;
  m_flower_func_table_0[5][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_5<
          double>;
  m_flower_func_table_0[5][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_5<
          double>;
  m_flower_func_table_0[5][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_5<
          double>;
  m_flower_func_table_0[5][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_5<
          double>;
  m_flower_func_table_0[5][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_5<
          double>;
  m_flower_func_table_0[5][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_5<
          double>;
  m_flower_func_table_0[5][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_5<
          double>;
  m_flower_func_table_0[5][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_5<
          double>;
  m_flower_func_table_0[5][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_5<
          double>;
  m_flower_func_table_0[5][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_5<
          double>;
  m_flower_func_table_0[5][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_5<
          double>;
  m_flower_func_table_0[5][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_5<
          double>;
  m_flower_func_table_0[5][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[5][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[6][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_6<
          double>;
  m_flower_func_table_0[6][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_6<
          double>;
  m_flower_func_table_0[6][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_6<
          double>;
  m_flower_func_table_0[6][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_6<
          double>;
  m_flower_func_table_0[6][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_6<
          double>;
  m_flower_func_table_0[6][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_6<
          double>;
  m_flower_func_table_0[6][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_6<
          double>;
  m_flower_func_table_0[6][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_6<
          double>;
  m_flower_func_table_0[6][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_6<
          double>;
  m_flower_func_table_0[6][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_6<
          double>;
  m_flower_func_table_0[6][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_6<
          double>;
  m_flower_func_table_0[6][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_6<
          double>;
  m_flower_func_table_0[6][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_6<
          double>;
  m_flower_func_table_0[6][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_6<
          double>;
  m_flower_func_table_0[6][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_6<
          double>;
  m_flower_func_table_0[6][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_6<
          double>;
  m_flower_func_table_0[6][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[6][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[7][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_7<
          double>;
  m_flower_func_table_0[7][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_7<
          double>;
  m_flower_func_table_0[7][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_7<
          double>;
  m_flower_func_table_0[7][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_7<
          double>;
  m_flower_func_table_0[7][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_7<
          double>;
  m_flower_func_table_0[7][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_7<
          double>;
  m_flower_func_table_0[7][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_7<
          double>;
  m_flower_func_table_0[7][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_7<
          double>;
  m_flower_func_table_0[7][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_7<
          double>;
  m_flower_func_table_0[7][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_7<
          double>;
  m_flower_func_table_0[7][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_7<
          double>;
  m_flower_func_table_0[7][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_7<
          double>;
  m_flower_func_table_0[7][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_7<
          double>;
  m_flower_func_table_0[7][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_7<
          double>;
  m_flower_func_table_0[7][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_7<
          double>;
  m_flower_func_table_0[7][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_7<
          double>;
  m_flower_func_table_0[7][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[7][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[8][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_8<
          double>;
  m_flower_func_table_0[8][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_8<
          double>;
  m_flower_func_table_0[8][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_8<
          double>;
  m_flower_func_table_0[8][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_8<
          double>;
  m_flower_func_table_0[8][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_8<
          double>;
  m_flower_func_table_0[8][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_8<
          double>;
  m_flower_func_table_0[8][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_8<
          double>;
  m_flower_func_table_0[8][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_8<
          double>;
  m_flower_func_table_0[8][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_8<
          double>;
  m_flower_func_table_0[8][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_8<
          double>;
  m_flower_func_table_0[8][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_8<
          double>;
  m_flower_func_table_0[8][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_8<
          double>;
  m_flower_func_table_0[8][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_8<
          double>;
  m_flower_func_table_0[8][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_8<
          double>;
  m_flower_func_table_0[8][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_8<
          double>;
  m_flower_func_table_0[8][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_8<
          double>;
  m_flower_func_table_0[8][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[8][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[9][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_9<
          double>;
  m_flower_func_table_0[9][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_9<
          double>;
  m_flower_func_table_0[9][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_9<
          double>;
  m_flower_func_table_0[9][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_9<
          double>;
  m_flower_func_table_0[9][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_9<
          double>;
  m_flower_func_table_0[9][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_9<
          double>;
  m_flower_func_table_0[9][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_9<
          double>;
  m_flower_func_table_0[9][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_9<
          double>;
  m_flower_func_table_0[9][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_9<
          double>;
  m_flower_func_table_0[9][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_9<
          double>;
  m_flower_func_table_0[9][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_9<
          double>;
  m_flower_func_table_0[9][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_9<
          double>;
  m_flower_func_table_0[9][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_9<
          double>;
  m_flower_func_table_0[9][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_9<
          double>;
  m_flower_func_table_0[9][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_9<
          double>;
  m_flower_func_table_0[9][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_9<
          double>;
  m_flower_func_table_0[9][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[9][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[10][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_10<
          double>;
  m_flower_func_table_0[10][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_10<
          double>;
  m_flower_func_table_0[10][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_10<
          double>;
  m_flower_func_table_0[10][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_10<
          double>;
  m_flower_func_table_0[10][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_10<
          double>;
  m_flower_func_table_0[10][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_10<
          double>;
  m_flower_func_table_0[10][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_10<
          double>;
  m_flower_func_table_0[10][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_10<
          double>;
  m_flower_func_table_0[10][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_10<
          double>;
  m_flower_func_table_0[10][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_10<
          double>;
  m_flower_func_table_0[10][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_10<
          double>;
  m_flower_func_table_0[10][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_10<
          double>;
  m_flower_func_table_0[10][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_10<
          double>;
  m_flower_func_table_0[10][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_10<
          double>;
  m_flower_func_table_0[10][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_10<
          double>;
  m_flower_func_table_0[10][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_10<
          double>;
  m_flower_func_table_0[10][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[10][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[11][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_11<
          double>;
  m_flower_func_table_0[11][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_11<
          double>;
  m_flower_func_table_0[11][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_11<
          double>;
  m_flower_func_table_0[11][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_11<
          double>;
  m_flower_func_table_0[11][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_11<
          double>;
  m_flower_func_table_0[11][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_11<
          double>;
  m_flower_func_table_0[11][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_11<
          double>;
  m_flower_func_table_0[11][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_11<
          double>;
  m_flower_func_table_0[11][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_11<
          double>;
  m_flower_func_table_0[11][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_11<
          double>;
  m_flower_func_table_0[11][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_11<
          double>;
  m_flower_func_table_0[11][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_11<
          double>;
  m_flower_func_table_0[11][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_11<
          double>;
  m_flower_func_table_0[11][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_11<
          double>;
  m_flower_func_table_0[11][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_11<
          double>;
  m_flower_func_table_0[11][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_11<
          double>;
  m_flower_func_table_0[11][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[11][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[12][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_12<
          double>;
  m_flower_func_table_0[12][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_12<
          double>;
  m_flower_func_table_0[12][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_12<
          double>;
  m_flower_func_table_0[12][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_12<
          double>;
  m_flower_func_table_0[12][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_12<
          double>;
  m_flower_func_table_0[12][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_12<
          double>;
  m_flower_func_table_0[12][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_12<
          double>;
  m_flower_func_table_0[12][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_12<
          double>;
  m_flower_func_table_0[12][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_12<
          double>;
  m_flower_func_table_0[12][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_12<
          double>;
  m_flower_func_table_0[12][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_12<
          double>;
  m_flower_func_table_0[12][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_12<
          double>;
  m_flower_func_table_0[12][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_12<
          double>;
  m_flower_func_table_0[12][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_12<
          double>;
  m_flower_func_table_0[12][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_12<
          double>;
  m_flower_func_table_0[12][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_12<
          double>;
  m_flower_func_table_0[12][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[12][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[13][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_13<
          double>;
  m_flower_func_table_0[13][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_13<
          double>;
  m_flower_func_table_0[13][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_13<
          double>;
  m_flower_func_table_0[13][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_13<
          double>;
  m_flower_func_table_0[13][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_13<
          double>;
  m_flower_func_table_0[13][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_13<
          double>;
  m_flower_func_table_0[13][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_13<
          double>;
  m_flower_func_table_0[13][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_13<
          double>;
  m_flower_func_table_0[13][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_13<
          double>;
  m_flower_func_table_0[13][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_13<
          double>;
  m_flower_func_table_0[13][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_13<
          double>;
  m_flower_func_table_0[13][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_13<
          double>;
  m_flower_func_table_0[13][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_13<
          double>;
  m_flower_func_table_0[13][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_13<
          double>;
  m_flower_func_table_0[13][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_13<
          double>;
  m_flower_func_table_0[13][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_13<
          double>;
  m_flower_func_table_0[13][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[13][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[14][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_2_0_at_14<
          double>;
  m_flower_func_table_0[14][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_7_0_at_14<
          double>;
  m_flower_func_table_0[14][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_14<
          double>;
  m_flower_func_table_0[14][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[14][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[15][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_1_0_at_15<
          double>;
  m_flower_func_table_0[15][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_7_0_at_15<
          double>;
  m_flower_func_table_0[15][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_15<
          double>;
  m_flower_func_table_0[15][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_15<
          double>;
  m_flower_func_table_0[15][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[15][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[16][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_1_0_at_16<
          double>;
  m_flower_func_table_0[16][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_7_0_at_16<
          double>;
  m_flower_func_table_0[16][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_16<
          double>;
  m_flower_func_table_0[16][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_16<
          double>;
  m_flower_func_table_0[16][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[16][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[17][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_2_0_at_17<
          double>;
  m_flower_func_table_0[17][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_7_0_at_17<
          double>;
  m_flower_func_table_0[17][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_17<
          double>;
  m_flower_func_table_0[17][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[17][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[18][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_18<
          double>;
  m_flower_func_table_0[18][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_18<
          double>;
  m_flower_func_table_0[18][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_18<
          double>;
  m_flower_func_table_0[18][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_18<
          double>;
  m_flower_func_table_0[18][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_18<
          double>;
  m_flower_func_table_0[18][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[18][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_18<
          double>;

  m_flower_func_table_0[19][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_19<
          double>;
  m_flower_func_table_0[19][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_19<
          double>;
  m_flower_func_table_0[19][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_19<
          double>;
  m_flower_func_table_0[19][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_19<
          double>;
  m_flower_func_table_0[19][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_19<
          double>;
  m_flower_func_table_0[19][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[19][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_19<
          double>;

  m_flower_func_table_0[20][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_20<
          double>;
  m_flower_func_table_0[20][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_20<
          double>;
  m_flower_func_table_0[20][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_20<
          double>;
  m_flower_func_table_0[20][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_20<
          double>;
  m_flower_func_table_0[20][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_20<
          double>;
  m_flower_func_table_0[20][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[20][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_20<
          double>;

  m_flower_func_table_0[21][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_21<
          double>;
  m_flower_func_table_0[21][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_21<
          double>;
  m_flower_func_table_0[21][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_21<
          double>;
  m_flower_func_table_0[21][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_21<
          double>;
  m_flower_func_table_0[21][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_21<
          double>;
  m_flower_func_table_0[21][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[21][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_21<
          double>;

  m_flower_func_table_0[22][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_22<
          double>;
  m_flower_func_table_0[22][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_22<
          double>;
  m_flower_func_table_0[22][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_22<
          double>;
  m_flower_func_table_0[22][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_22<
          double>;
  m_flower_func_table_0[22][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_22<
          double>;
  m_flower_func_table_0[22][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[22][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_22<
          double>;

  m_flower_func_table_0[23][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_23<
          double>;
  m_flower_func_table_0[23][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_23<
          double>;
  m_flower_func_table_0[23][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_23<
          double>;
  m_flower_func_table_0[23][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_23<
          double>;
  m_flower_func_table_0[23][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_23<
          double>;
  m_flower_func_table_0[23][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[23][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_23<
          double>;

  m_flower_func_table_0[24][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_24<
          double>;
  m_flower_func_table_0[24][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_24<
          double>;
  m_flower_func_table_0[24][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_24<
          double>;
  m_flower_func_table_0[24][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_24<
          double>;
  m_flower_func_table_0[24][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_24<
          double>;
  m_flower_func_table_0[24][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[24][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_24<
          double>;

  m_flower_func_table_0[25][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_25<
          double>;
  m_flower_func_table_0[25][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_25<
          double>;
  m_flower_func_table_0[25][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_25<
          double>;
  m_flower_func_table_0[25][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_25<
          double>;
  m_flower_func_table_0[25][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_25<
          double>;
  m_flower_func_table_0[25][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[25][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_25<
          double>;

  m_flower_func_table_0[26][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_26<
          double>;
  m_flower_func_table_0[26][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_26<
          double>;
  m_flower_func_table_0[26][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_26<
          double>;
  m_flower_func_table_0[26][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_26<
          double>;
  m_flower_func_table_0[26][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_26<
          double>;
  m_flower_func_table_0[26][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[26][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_26<
          double>;

  m_flower_func_table_0[27][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_27<
          double>;
  m_flower_func_table_0[27][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_27<
          double>;
  m_flower_func_table_0[27][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_27<
          double>;
  m_flower_func_table_0[27][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_27<
          double>;
  m_flower_func_table_0[27][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_27<
          double>;
  m_flower_func_table_0[27][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[27][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_27<
          double>;

  m_flower_func_table_0[28][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_28<
          double>;
  m_flower_func_table_0[28][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_28<
          double>;
  m_flower_func_table_0[28][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_28<
          double>;
  m_flower_func_table_0[28][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_28<
          double>;
  m_flower_func_table_0[28][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_28<
          double>;
  m_flower_func_table_0[28][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[28][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_28<
          double>;

  m_flower_func_table_0[29][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_29<
          double>;
  m_flower_func_table_0[29][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_29<
          double>;
  m_flower_func_table_0[29][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_29<
          double>;
  m_flower_func_table_0[29][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_29<
          double>;
  m_flower_func_table_0[29][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_29<
          double>;
  m_flower_func_table_0[29][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[29][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_29<
          double>;

  m_flower_func_table_0[30][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[30][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[31][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_31<
          double>;
  m_flower_func_table_0[31][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_31<
          double>;
  m_flower_func_table_0[31][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_31<
          double>;
  m_flower_func_table_0[31][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_31<
          double>;
  m_flower_func_table_0[31][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_31<
          double>;
  m_flower_func_table_0[31][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_31<
          double>;
  m_flower_func_table_0[31][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_31<
          double>;
  m_flower_func_table_0[31][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_31<
          double>;
  m_flower_func_table_0[31][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_31<
          double>;
  m_flower_func_table_0[31][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_31<
          double>;
  m_flower_func_table_0[31][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_31<
          double>;
  m_flower_func_table_0[31][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[31][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_31<
          double>;
  m_flower_func_table_0[31][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[32][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_32<
          double>;
  m_flower_func_table_0[32][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_32<
          double>;
  m_flower_func_table_0[32][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_32<
          double>;
  m_flower_func_table_0[32][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_32<
          double>;
  m_flower_func_table_0[32][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_32<
          double>;
  m_flower_func_table_0[32][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_32<
          double>;
  m_flower_func_table_0[32][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_32<
          double>;
  m_flower_func_table_0[32][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_32<
          double>;
  m_flower_func_table_0[32][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_32<
          double>;
  m_flower_func_table_0[32][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_32<
          double>;
  m_flower_func_table_0[32][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_32<
          double>;
  m_flower_func_table_0[32][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[32][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_32<
          double>;
  m_flower_func_table_0[32][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[33][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[33][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[34][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[34][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[35][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_35<
          double>;
  m_flower_func_table_0[35][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_35<
          double>;
  m_flower_func_table_0[35][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_35<
          double>;
  m_flower_func_table_0[35][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_35<
          double>;
  m_flower_func_table_0[35][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_35<
          double>;
  m_flower_func_table_0[35][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_35<
          double>;
  m_flower_func_table_0[35][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_35<
          double>;
  m_flower_func_table_0[35][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_35<
          double>;
  m_flower_func_table_0[35][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_35<
          double>;
  m_flower_func_table_0[35][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_35<
          double>;
  m_flower_func_table_0[35][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_35<
          double>;
  m_flower_func_table_0[35][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[35][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_35<
          double>;
  m_flower_func_table_0[35][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[36][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_36<
          double>;
  m_flower_func_table_0[36][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_36<
          double>;
  m_flower_func_table_0[36][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_36<
          double>;
  m_flower_func_table_0[36][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_36<
          double>;
  m_flower_func_table_0[36][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_36<
          double>;
  m_flower_func_table_0[36][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_36<
          double>;
  m_flower_func_table_0[36][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_36<
          double>;
  m_flower_func_table_0[36][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_36<
          double>;
  m_flower_func_table_0[36][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_36<
          double>;
  m_flower_func_table_0[36][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_36<
          double>;
  m_flower_func_table_0[36][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_36<
          double>;
  m_flower_func_table_0[36][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[36][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_36<
          double>;
  m_flower_func_table_0[36][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[37][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[37][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[38][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[38][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[39][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_39<
          double>;
  m_flower_func_table_0[39][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_39<
          double>;
  m_flower_func_table_0[39][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_39<
          double>;
  m_flower_func_table_0[39][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_39<
          double>;
  m_flower_func_table_0[39][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_39<
          double>;
  m_flower_func_table_0[39][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_39<
          double>;
  m_flower_func_table_0[39][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_39<
          double>;
  m_flower_func_table_0[39][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_39<
          double>;
  m_flower_func_table_0[39][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_39<
          double>;
  m_flower_func_table_0[39][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_39<
          double>;
  m_flower_func_table_0[39][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_39<
          double>;
  m_flower_func_table_0[39][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[39][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_39<
          double>;
  m_flower_func_table_0[39][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[40][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_40<
          double>;
  m_flower_func_table_0[40][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_40<
          double>;
  m_flower_func_table_0[40][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_40<
          double>;
  m_flower_func_table_0[40][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_40<
          double>;
  m_flower_func_table_0[40][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_40<
          double>;
  m_flower_func_table_0[40][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_40<
          double>;
  m_flower_func_table_0[40][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_40<
          double>;
  m_flower_func_table_0[40][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_40<
          double>;
  m_flower_func_table_0[40][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_40<
          double>;
  m_flower_func_table_0[40][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_40<
          double>;
  m_flower_func_table_0[40][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_40<
          double>;
  m_flower_func_table_0[40][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[40][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_40<
          double>;
  m_flower_func_table_0[40][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[41][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[41][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[42][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[42][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[43][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_43<
          double>;
  m_flower_func_table_0[43][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_43<
          double>;
  m_flower_func_table_0[43][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_43<
          double>;
  m_flower_func_table_0[43][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_43<
          double>;
  m_flower_func_table_0[43][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_43<
          double>;
  m_flower_func_table_0[43][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_43<
          double>;
  m_flower_func_table_0[43][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_43<
          double>;
  m_flower_func_table_0[43][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_43<
          double>;
  m_flower_func_table_0[43][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_43<
          double>;
  m_flower_func_table_0[43][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_43<
          double>;
  m_flower_func_table_0[43][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_43<
          double>;
  m_flower_func_table_0[43][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[43][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_43<
          double>;
  m_flower_func_table_0[43][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[44][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_44<
          double>;
  m_flower_func_table_0[44][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_44<
          double>;
  m_flower_func_table_0[44][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_44<
          double>;
  m_flower_func_table_0[44][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_44<
          double>;
  m_flower_func_table_0[44][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_44<
          double>;
  m_flower_func_table_0[44][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_44<
          double>;
  m_flower_func_table_0[44][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_44<
          double>;
  m_flower_func_table_0[44][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_44<
          double>;
  m_flower_func_table_0[44][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_44<
          double>;
  m_flower_func_table_0[44][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_44<
          double>;
  m_flower_func_table_0[44][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_44<
          double>;
  m_flower_func_table_0[44][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[44][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_44<
          double>;
  m_flower_func_table_0[44][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[45][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[45][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[46][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[46][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[47][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_47<
          double>;
  m_flower_func_table_0[47][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_47<
          double>;
  m_flower_func_table_0[47][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_47<
          double>;
  m_flower_func_table_0[47][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_47<
          double>;
  m_flower_func_table_0[47][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_47<
          double>;
  m_flower_func_table_0[47][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_47<
          double>;
  m_flower_func_table_0[47][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_47<
          double>;
  m_flower_func_table_0[47][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_47<
          double>;
  m_flower_func_table_0[47][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_47<
          double>;
  m_flower_func_table_0[47][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_47<
          double>;
  m_flower_func_table_0[47][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_47<
          double>;
  m_flower_func_table_0[47][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[47][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_47<
          double>;
  m_flower_func_table_0[47][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[48][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_48<
          double>;
  m_flower_func_table_0[48][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_48<
          double>;
  m_flower_func_table_0[48][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_48<
          double>;
  m_flower_func_table_0[48][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_48<
          double>;
  m_flower_func_table_0[48][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_48<
          double>;
  m_flower_func_table_0[48][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_48<
          double>;
  m_flower_func_table_0[48][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_48<
          double>;
  m_flower_func_table_0[48][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_48<
          double>;
  m_flower_func_table_0[48][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_48<
          double>;
  m_flower_func_table_0[48][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_48<
          double>;
  m_flower_func_table_0[48][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_48<
          double>;
  m_flower_func_table_0[48][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[48][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_48<
          double>;
  m_flower_func_table_0[48][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[49][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[49][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[50][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[50][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[51][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_51<
          double>;
  m_flower_func_table_0[51][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_51<
          double>;
  m_flower_func_table_0[51][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_51<
          double>;
  m_flower_func_table_0[51][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_51<
          double>;
  m_flower_func_table_0[51][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_51<
          double>;
  m_flower_func_table_0[51][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_51<
          double>;
  m_flower_func_table_0[51][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_51<
          double>;
  m_flower_func_table_0[51][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_51<
          double>;
  m_flower_func_table_0[51][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_51<
          double>;
  m_flower_func_table_0[51][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_51<
          double>;
  m_flower_func_table_0[51][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_51<
          double>;
  m_flower_func_table_0[51][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[51][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_51<
          double>;
  m_flower_func_table_0[51][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_flower_func_table_0[52][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_52<
          double>;
  m_flower_func_table_0[52][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_52<
          double>;
  m_flower_func_table_0[52][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_52<
          double>;
  m_flower_func_table_0[52][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_52<
          double>;
  m_flower_func_table_0[52][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_52<
          double>;
  m_flower_func_table_0[52][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_52<
          double>;
  m_flower_func_table_0[52][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_52<
          double>;
  m_flower_func_table_0[52][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_52<
          double>;
  m_flower_func_table_0[52][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_52<
          double>;
  m_flower_func_table_0[52][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_52<
          double>;
  m_flower_func_table_0[52][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_52<
          double>;
  m_flower_func_table_0[52][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_flower_func_table_0[52][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_52<
          double>;
  m_flower_func_table_0[52][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[0][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[0][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[1][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[1][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[2][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_2<
          double>;
  m_delta_func_table_0[2][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_2<
          double>;
  m_delta_func_table_0[2][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_2<
          double>;
  m_delta_func_table_0[2][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_2<
          double>;
  m_delta_func_table_0[2][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_2<
          double>;
  m_delta_func_table_0[2][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_2<
          double>;
  m_delta_func_table_0[2][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_2<
          double>;
  m_delta_func_table_0[2][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_2<
          double>;
  m_delta_func_table_0[2][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_2<
          double>;
  m_delta_func_table_0[2][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_2<
          double>;
  m_delta_func_table_0[2][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_2<
          double>;
  m_delta_func_table_0[2][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_2<
          double>;
  m_delta_func_table_0[2][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_2<
          double>;
  m_delta_func_table_0[2][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_2<
          double>;
  m_delta_func_table_0[2][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_2<
          double>;
  m_delta_func_table_0[2][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_2<
          double>;
  m_delta_func_table_0[2][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[2][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[3][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_3<
          double>;
  m_delta_func_table_0[3][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_3<
          double>;
  m_delta_func_table_0[3][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_3<
          double>;
  m_delta_func_table_0[3][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_3<
          double>;
  m_delta_func_table_0[3][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_3<
          double>;
  m_delta_func_table_0[3][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_3<
          double>;
  m_delta_func_table_0[3][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_3<
          double>;
  m_delta_func_table_0[3][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_3<
          double>;
  m_delta_func_table_0[3][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_3<
          double>;
  m_delta_func_table_0[3][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_3<
          double>;
  m_delta_func_table_0[3][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_3<
          double>;
  m_delta_func_table_0[3][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_3<
          double>;
  m_delta_func_table_0[3][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_3<
          double>;
  m_delta_func_table_0[3][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_3<
          double>;
  m_delta_func_table_0[3][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_3<
          double>;
  m_delta_func_table_0[3][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_3<
          double>;
  m_delta_func_table_0[3][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[3][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[4][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_4<
          double>;
  m_delta_func_table_0[4][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_4<
          double>;
  m_delta_func_table_0[4][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_4<
          double>;
  m_delta_func_table_0[4][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_4<
          double>;
  m_delta_func_table_0[4][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_4<
          double>;
  m_delta_func_table_0[4][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_4<
          double>;
  m_delta_func_table_0[4][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_4<
          double>;
  m_delta_func_table_0[4][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_4<
          double>;
  m_delta_func_table_0[4][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_4<
          double>;
  m_delta_func_table_0[4][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_4<
          double>;
  m_delta_func_table_0[4][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_4<
          double>;
  m_delta_func_table_0[4][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_4<
          double>;
  m_delta_func_table_0[4][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_4<
          double>;
  m_delta_func_table_0[4][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_4<
          double>;
  m_delta_func_table_0[4][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_4<
          double>;
  m_delta_func_table_0[4][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_4<
          double>;
  m_delta_func_table_0[4][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[4][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[5][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_5<
          double>;
  m_delta_func_table_0[5][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_5<
          double>;
  m_delta_func_table_0[5][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_5<
          double>;
  m_delta_func_table_0[5][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_5<
          double>;
  m_delta_func_table_0[5][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_5<
          double>;
  m_delta_func_table_0[5][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_5<
          double>;
  m_delta_func_table_0[5][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_5<
          double>;
  m_delta_func_table_0[5][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_5<
          double>;
  m_delta_func_table_0[5][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_5<
          double>;
  m_delta_func_table_0[5][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_5<
          double>;
  m_delta_func_table_0[5][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_5<
          double>;
  m_delta_func_table_0[5][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_5<
          double>;
  m_delta_func_table_0[5][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_5<
          double>;
  m_delta_func_table_0[5][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_5<
          double>;
  m_delta_func_table_0[5][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_5<
          double>;
  m_delta_func_table_0[5][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_5<
          double>;
  m_delta_func_table_0[5][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[5][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[6][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_6<
          double>;
  m_delta_func_table_0[6][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_6<
          double>;
  m_delta_func_table_0[6][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_6<
          double>;
  m_delta_func_table_0[6][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_6<
          double>;
  m_delta_func_table_0[6][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_6<
          double>;
  m_delta_func_table_0[6][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_6<
          double>;
  m_delta_func_table_0[6][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_6<
          double>;
  m_delta_func_table_0[6][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_6<
          double>;
  m_delta_func_table_0[6][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_6<
          double>;
  m_delta_func_table_0[6][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_6<
          double>;
  m_delta_func_table_0[6][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_6<
          double>;
  m_delta_func_table_0[6][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_6<
          double>;
  m_delta_func_table_0[6][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_6<
          double>;
  m_delta_func_table_0[6][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_6<
          double>;
  m_delta_func_table_0[6][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_6<
          double>;
  m_delta_func_table_0[6][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_6<
          double>;
  m_delta_func_table_0[6][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[6][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[7][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_7<
          double>;
  m_delta_func_table_0[7][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_7<
          double>;
  m_delta_func_table_0[7][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_7<
          double>;
  m_delta_func_table_0[7][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_7<
          double>;
  m_delta_func_table_0[7][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_7<
          double>;
  m_delta_func_table_0[7][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_7<
          double>;
  m_delta_func_table_0[7][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_7<
          double>;
  m_delta_func_table_0[7][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_7<
          double>;
  m_delta_func_table_0[7][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_7<
          double>;
  m_delta_func_table_0[7][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_7<
          double>;
  m_delta_func_table_0[7][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_7<
          double>;
  m_delta_func_table_0[7][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_7<
          double>;
  m_delta_func_table_0[7][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_7<
          double>;
  m_delta_func_table_0[7][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_7<
          double>;
  m_delta_func_table_0[7][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_7<
          double>;
  m_delta_func_table_0[7][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_7<
          double>;
  m_delta_func_table_0[7][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[7][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[8][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_8<
          double>;
  m_delta_func_table_0[8][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_8<
          double>;
  m_delta_func_table_0[8][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_8<
          double>;
  m_delta_func_table_0[8][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_8<
          double>;
  m_delta_func_table_0[8][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_8<
          double>;
  m_delta_func_table_0[8][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_8<
          double>;
  m_delta_func_table_0[8][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_8<
          double>;
  m_delta_func_table_0[8][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_8<
          double>;
  m_delta_func_table_0[8][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_8<
          double>;
  m_delta_func_table_0[8][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_8<
          double>;
  m_delta_func_table_0[8][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_8<
          double>;
  m_delta_func_table_0[8][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_8<
          double>;
  m_delta_func_table_0[8][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_8<
          double>;
  m_delta_func_table_0[8][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_8<
          double>;
  m_delta_func_table_0[8][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_8<
          double>;
  m_delta_func_table_0[8][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_8<
          double>;
  m_delta_func_table_0[8][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[8][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[9][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_9<
          double>;
  m_delta_func_table_0[9][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_9<
          double>;
  m_delta_func_table_0[9][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_9<
          double>;
  m_delta_func_table_0[9][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_9<
          double>;
  m_delta_func_table_0[9][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_9<
          double>;
  m_delta_func_table_0[9][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_9<
          double>;
  m_delta_func_table_0[9][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_9<
          double>;
  m_delta_func_table_0[9][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_9<
          double>;
  m_delta_func_table_0[9][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_9<
          double>;
  m_delta_func_table_0[9][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_9<
          double>;
  m_delta_func_table_0[9][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_9<
          double>;
  m_delta_func_table_0[9][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_9<
          double>;
  m_delta_func_table_0[9][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_9<
          double>;
  m_delta_func_table_0[9][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_9<
          double>;
  m_delta_func_table_0[9][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_9<
          double>;
  m_delta_func_table_0[9][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_9<
          double>;
  m_delta_func_table_0[9][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[9][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[10][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_10<
          double>;
  m_delta_func_table_0[10][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_10<
          double>;
  m_delta_func_table_0[10][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_10<
          double>;
  m_delta_func_table_0[10][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_10<
          double>;
  m_delta_func_table_0[10][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_10<
          double>;
  m_delta_func_table_0[10][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_10<
          double>;
  m_delta_func_table_0[10][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_10<
          double>;
  m_delta_func_table_0[10][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_10<
          double>;
  m_delta_func_table_0[10][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_10<
          double>;
  m_delta_func_table_0[10][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_10<
          double>;
  m_delta_func_table_0[10][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_10<
          double>;
  m_delta_func_table_0[10][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_10<
          double>;
  m_delta_func_table_0[10][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_10<
          double>;
  m_delta_func_table_0[10][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_10<
          double>;
  m_delta_func_table_0[10][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_10<
          double>;
  m_delta_func_table_0[10][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_10<
          double>;
  m_delta_func_table_0[10][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[10][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[11][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_11<
          double>;
  m_delta_func_table_0[11][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_11<
          double>;
  m_delta_func_table_0[11][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_11<
          double>;
  m_delta_func_table_0[11][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_11<
          double>;
  m_delta_func_table_0[11][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_11<
          double>;
  m_delta_func_table_0[11][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_11<
          double>;
  m_delta_func_table_0[11][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_11<
          double>;
  m_delta_func_table_0[11][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_11<
          double>;
  m_delta_func_table_0[11][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_11<
          double>;
  m_delta_func_table_0[11][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_11<
          double>;
  m_delta_func_table_0[11][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_11<
          double>;
  m_delta_func_table_0[11][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_11<
          double>;
  m_delta_func_table_0[11][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_11<
          double>;
  m_delta_func_table_0[11][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_11<
          double>;
  m_delta_func_table_0[11][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_11<
          double>;
  m_delta_func_table_0[11][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_11<
          double>;
  m_delta_func_table_0[11][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[11][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[12][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_12<
          double>;
  m_delta_func_table_0[12][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_12<
          double>;
  m_delta_func_table_0[12][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_12<
          double>;
  m_delta_func_table_0[12][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_12<
          double>;
  m_delta_func_table_0[12][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_12<
          double>;
  m_delta_func_table_0[12][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_12<
          double>;
  m_delta_func_table_0[12][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_12<
          double>;
  m_delta_func_table_0[12][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_12<
          double>;
  m_delta_func_table_0[12][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_12<
          double>;
  m_delta_func_table_0[12][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_12<
          double>;
  m_delta_func_table_0[12][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_12<
          double>;
  m_delta_func_table_0[12][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_12<
          double>;
  m_delta_func_table_0[12][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_12<
          double>;
  m_delta_func_table_0[12][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_12<
          double>;
  m_delta_func_table_0[12][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_12<
          double>;
  m_delta_func_table_0[12][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_12<
          double>;
  m_delta_func_table_0[12][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[12][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[13][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_13<
          double>;
  m_delta_func_table_0[13][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_13<
          double>;
  m_delta_func_table_0[13][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_13<
          double>;
  m_delta_func_table_0[13][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_13<
          double>;
  m_delta_func_table_0[13][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_13<
          double>;
  m_delta_func_table_0[13][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_13<
          double>;
  m_delta_func_table_0[13][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_13<
          double>;
  m_delta_func_table_0[13][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_13<
          double>;
  m_delta_func_table_0[13][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_13<
          double>;
  m_delta_func_table_0[13][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_13<
          double>;
  m_delta_func_table_0[13][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_13<
          double>;
  m_delta_func_table_0[13][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_13<
          double>;
  m_delta_func_table_0[13][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_13<
          double>;
  m_delta_func_table_0[13][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_13<
          double>;
  m_delta_func_table_0[13][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_13<
          double>;
  m_delta_func_table_0[13][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_13<
          double>;
  m_delta_func_table_0[13][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[13][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[14][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_2_0_at_14<
          double>;
  m_delta_func_table_0[14][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_7_0_at_14<
          double>;
  m_delta_func_table_0[14][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_14<
          double>;
  m_delta_func_table_0[14][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[14][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[15][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_1_0_at_15<
          double>;
  m_delta_func_table_0[15][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_7_0_at_15<
          double>;
  m_delta_func_table_0[15][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_15<
          double>;
  m_delta_func_table_0[15][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_15<
          double>;
  m_delta_func_table_0[15][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[15][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[16][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_1_0_at_16<
          double>;
  m_delta_func_table_0[16][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_7_0_at_16<
          double>;
  m_delta_func_table_0[16][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_16<
          double>;
  m_delta_func_table_0[16][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_16<
          double>;
  m_delta_func_table_0[16][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[16][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[17][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_2_0_at_17<
          double>;
  m_delta_func_table_0[17][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_7_0_at_17<
          double>;
  m_delta_func_table_0[17][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_17<
          double>;
  m_delta_func_table_0[17][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[17][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[18][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_18<
          double>;
  m_delta_func_table_0[18][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_18<
          double>;
  m_delta_func_table_0[18][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_18<
          double>;
  m_delta_func_table_0[18][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_18<
          double>;
  m_delta_func_table_0[18][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_18<
          double>;
  m_delta_func_table_0[18][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[18][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_18<
          double>;

  m_delta_func_table_0[19][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_19<
          double>;
  m_delta_func_table_0[19][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_19<
          double>;
  m_delta_func_table_0[19][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_19<
          double>;
  m_delta_func_table_0[19][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_19<
          double>;
  m_delta_func_table_0[19][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_19<
          double>;
  m_delta_func_table_0[19][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[19][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_19<
          double>;

  m_delta_func_table_0[20][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_20<
          double>;
  m_delta_func_table_0[20][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_20<
          double>;
  m_delta_func_table_0[20][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_20<
          double>;
  m_delta_func_table_0[20][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_20<
          double>;
  m_delta_func_table_0[20][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_20<
          double>;
  m_delta_func_table_0[20][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[20][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_20<
          double>;

  m_delta_func_table_0[21][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_21<
          double>;
  m_delta_func_table_0[21][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_21<
          double>;
  m_delta_func_table_0[21][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_21<
          double>;
  m_delta_func_table_0[21][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_21<
          double>;
  m_delta_func_table_0[21][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_21<
          double>;
  m_delta_func_table_0[21][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[21][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_21<
          double>;

  m_delta_func_table_0[22][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_22<
          double>;
  m_delta_func_table_0[22][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_22<
          double>;
  m_delta_func_table_0[22][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_22<
          double>;
  m_delta_func_table_0[22][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_22<
          double>;
  m_delta_func_table_0[22][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_22<
          double>;
  m_delta_func_table_0[22][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[22][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_22<
          double>;

  m_delta_func_table_0[23][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_23<
          double>;
  m_delta_func_table_0[23][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_23<
          double>;
  m_delta_func_table_0[23][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_23<
          double>;
  m_delta_func_table_0[23][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_23<
          double>;
  m_delta_func_table_0[23][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_23<
          double>;
  m_delta_func_table_0[23][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[23][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_23<
          double>;

  m_delta_func_table_0[24][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_24<
          double>;
  m_delta_func_table_0[24][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_24<
          double>;
  m_delta_func_table_0[24][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_24<
          double>;
  m_delta_func_table_0[24][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_24<
          double>;
  m_delta_func_table_0[24][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_24<
          double>;
  m_delta_func_table_0[24][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[24][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_24<
          double>;

  m_delta_func_table_0[25][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_25<
          double>;
  m_delta_func_table_0[25][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_25<
          double>;
  m_delta_func_table_0[25][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_25<
          double>;
  m_delta_func_table_0[25][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_25<
          double>;
  m_delta_func_table_0[25][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_25<
          double>;
  m_delta_func_table_0[25][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[25][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_25<
          double>;

  m_delta_func_table_0[26][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_26<
          double>;
  m_delta_func_table_0[26][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_26<
          double>;
  m_delta_func_table_0[26][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_26<
          double>;
  m_delta_func_table_0[26][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_26<
          double>;
  m_delta_func_table_0[26][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_26<
          double>;
  m_delta_func_table_0[26][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[26][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_26<
          double>;

  m_delta_func_table_0[27][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_27<
          double>;
  m_delta_func_table_0[27][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_27<
          double>;
  m_delta_func_table_0[27][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_27<
          double>;
  m_delta_func_table_0[27][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_27<
          double>;
  m_delta_func_table_0[27][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_27<
          double>;
  m_delta_func_table_0[27][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[27][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_27<
          double>;

  m_delta_func_table_0[28][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_28<
          double>;
  m_delta_func_table_0[28][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_28<
          double>;
  m_delta_func_table_0[28][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_28<
          double>;
  m_delta_func_table_0[28][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_28<
          double>;
  m_delta_func_table_0[28][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_28<
          double>;
  m_delta_func_table_0[28][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[28][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_28<
          double>;

  m_delta_func_table_0[29][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_29<
          double>;
  m_delta_func_table_0[29][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_29<
          double>;
  m_delta_func_table_0[29][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_29<
          double>;
  m_delta_func_table_0[29][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_29<
          double>;
  m_delta_func_table_0[29][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_29<
          double>;
  m_delta_func_table_0[29][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[29][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_29<
          double>;

  m_delta_func_table_0[30][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[30][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[31][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_31<
          double>;
  m_delta_func_table_0[31][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_31<
          double>;
  m_delta_func_table_0[31][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_31<
          double>;
  m_delta_func_table_0[31][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_31<
          double>;
  m_delta_func_table_0[31][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_31<
          double>;
  m_delta_func_table_0[31][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_31<
          double>;
  m_delta_func_table_0[31][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_31<
          double>;
  m_delta_func_table_0[31][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_31<
          double>;
  m_delta_func_table_0[31][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_31<
          double>;
  m_delta_func_table_0[31][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_31<
          double>;
  m_delta_func_table_0[31][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_31<
          double>;
  m_delta_func_table_0[31][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[31][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_31<
          double>;
  m_delta_func_table_0[31][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[32][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_32<
          double>;
  m_delta_func_table_0[32][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_32<
          double>;
  m_delta_func_table_0[32][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_32<
          double>;
  m_delta_func_table_0[32][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_32<
          double>;
  m_delta_func_table_0[32][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_32<
          double>;
  m_delta_func_table_0[32][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_32<
          double>;
  m_delta_func_table_0[32][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_32<
          double>;
  m_delta_func_table_0[32][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_32<
          double>;
  m_delta_func_table_0[32][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_32<
          double>;
  m_delta_func_table_0[32][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_32<
          double>;
  m_delta_func_table_0[32][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_32<
          double>;
  m_delta_func_table_0[32][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[32][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_32<
          double>;
  m_delta_func_table_0[32][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[33][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[33][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[34][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[34][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[35][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_35<
          double>;
  m_delta_func_table_0[35][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_35<
          double>;
  m_delta_func_table_0[35][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_35<
          double>;
  m_delta_func_table_0[35][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_35<
          double>;
  m_delta_func_table_0[35][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_35<
          double>;
  m_delta_func_table_0[35][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_35<
          double>;
  m_delta_func_table_0[35][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_35<
          double>;
  m_delta_func_table_0[35][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_35<
          double>;
  m_delta_func_table_0[35][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_35<
          double>;
  m_delta_func_table_0[35][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_35<
          double>;
  m_delta_func_table_0[35][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_35<
          double>;
  m_delta_func_table_0[35][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[35][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_35<
          double>;
  m_delta_func_table_0[35][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[36][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_36<
          double>;
  m_delta_func_table_0[36][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_36<
          double>;
  m_delta_func_table_0[36][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_36<
          double>;
  m_delta_func_table_0[36][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_36<
          double>;
  m_delta_func_table_0[36][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_36<
          double>;
  m_delta_func_table_0[36][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_36<
          double>;
  m_delta_func_table_0[36][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_36<
          double>;
  m_delta_func_table_0[36][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_36<
          double>;
  m_delta_func_table_0[36][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_36<
          double>;
  m_delta_func_table_0[36][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_36<
          double>;
  m_delta_func_table_0[36][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_36<
          double>;
  m_delta_func_table_0[36][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[36][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_36<
          double>;
  m_delta_func_table_0[36][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[37][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[37][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[38][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[38][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[39][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_39<
          double>;
  m_delta_func_table_0[39][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_39<
          double>;
  m_delta_func_table_0[39][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_39<
          double>;
  m_delta_func_table_0[39][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_39<
          double>;
  m_delta_func_table_0[39][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_39<
          double>;
  m_delta_func_table_0[39][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_39<
          double>;
  m_delta_func_table_0[39][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_39<
          double>;
  m_delta_func_table_0[39][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_39<
          double>;
  m_delta_func_table_0[39][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_39<
          double>;
  m_delta_func_table_0[39][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_39<
          double>;
  m_delta_func_table_0[39][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_39<
          double>;
  m_delta_func_table_0[39][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[39][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_39<
          double>;
  m_delta_func_table_0[39][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[40][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_40<
          double>;
  m_delta_func_table_0[40][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_40<
          double>;
  m_delta_func_table_0[40][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_40<
          double>;
  m_delta_func_table_0[40][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_40<
          double>;
  m_delta_func_table_0[40][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_40<
          double>;
  m_delta_func_table_0[40][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_40<
          double>;
  m_delta_func_table_0[40][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_40<
          double>;
  m_delta_func_table_0[40][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_40<
          double>;
  m_delta_func_table_0[40][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_40<
          double>;
  m_delta_func_table_0[40][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_40<
          double>;
  m_delta_func_table_0[40][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_40<
          double>;
  m_delta_func_table_0[40][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[40][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_40<
          double>;
  m_delta_func_table_0[40][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[41][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[41][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[42][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[42][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[43][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_43<
          double>;
  m_delta_func_table_0[43][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_43<
          double>;
  m_delta_func_table_0[43][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_43<
          double>;
  m_delta_func_table_0[43][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_43<
          double>;
  m_delta_func_table_0[43][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_43<
          double>;
  m_delta_func_table_0[43][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_43<
          double>;
  m_delta_func_table_0[43][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_43<
          double>;
  m_delta_func_table_0[43][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_43<
          double>;
  m_delta_func_table_0[43][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_43<
          double>;
  m_delta_func_table_0[43][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_43<
          double>;
  m_delta_func_table_0[43][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_43<
          double>;
  m_delta_func_table_0[43][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[43][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_43<
          double>;
  m_delta_func_table_0[43][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[44][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_44<
          double>;
  m_delta_func_table_0[44][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_44<
          double>;
  m_delta_func_table_0[44][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_44<
          double>;
  m_delta_func_table_0[44][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_44<
          double>;
  m_delta_func_table_0[44][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_44<
          double>;
  m_delta_func_table_0[44][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_44<
          double>;
  m_delta_func_table_0[44][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_44<
          double>;
  m_delta_func_table_0[44][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_44<
          double>;
  m_delta_func_table_0[44][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_44<
          double>;
  m_delta_func_table_0[44][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_44<
          double>;
  m_delta_func_table_0[44][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_44<
          double>;
  m_delta_func_table_0[44][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[44][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_44<
          double>;
  m_delta_func_table_0[44][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[45][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[45][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[46][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[46][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[47][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_47<
          double>;
  m_delta_func_table_0[47][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_47<
          double>;
  m_delta_func_table_0[47][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_47<
          double>;
  m_delta_func_table_0[47][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_47<
          double>;
  m_delta_func_table_0[47][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_47<
          double>;
  m_delta_func_table_0[47][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_47<
          double>;
  m_delta_func_table_0[47][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_47<
          double>;
  m_delta_func_table_0[47][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_47<
          double>;
  m_delta_func_table_0[47][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_47<
          double>;
  m_delta_func_table_0[47][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_47<
          double>;
  m_delta_func_table_0[47][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_47<
          double>;
  m_delta_func_table_0[47][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[47][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_47<
          double>;
  m_delta_func_table_0[47][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[48][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_48<
          double>;
  m_delta_func_table_0[48][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_48<
          double>;
  m_delta_func_table_0[48][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_48<
          double>;
  m_delta_func_table_0[48][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_48<
          double>;
  m_delta_func_table_0[48][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_48<
          double>;
  m_delta_func_table_0[48][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_48<
          double>;
  m_delta_func_table_0[48][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_48<
          double>;
  m_delta_func_table_0[48][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_48<
          double>;
  m_delta_func_table_0[48][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_48<
          double>;
  m_delta_func_table_0[48][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_48<
          double>;
  m_delta_func_table_0[48][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_48<
          double>;
  m_delta_func_table_0[48][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[48][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_48<
          double>;
  m_delta_func_table_0[48][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[49][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[49][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[50][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[50][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[51][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_51<
          double>;
  m_delta_func_table_0[51][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_51<
          double>;
  m_delta_func_table_0[51][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_51<
          double>;
  m_delta_func_table_0[51][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_51<
          double>;
  m_delta_func_table_0[51][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_51<
          double>;
  m_delta_func_table_0[51][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_51<
          double>;
  m_delta_func_table_0[51][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_51<
          double>;
  m_delta_func_table_0[51][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_51<
          double>;
  m_delta_func_table_0[51][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_51<
          double>;
  m_delta_func_table_0[51][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_51<
          double>;
  m_delta_func_table_0[51][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_51<
          double>;
  m_delta_func_table_0[51][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[51][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_51<
          double>;
  m_delta_func_table_0[51][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_delta_func_table_0[52][0] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][1] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][2] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][3] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][4] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_52<
          double>;
  m_delta_func_table_0[52][5] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][6] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][7] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][8] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][9] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_52<
          double>;
  m_delta_func_table_0[52][10] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][11] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][12] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_52<
          double>;
  m_delta_func_table_0[52][13] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][14] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_52<
          double>;
  m_delta_func_table_0[52][15] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][16] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_52<
          double>;
  m_delta_func_table_0[52][17] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][18] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][19] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][20] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_52<
          double>;
  m_delta_func_table_0[52][21] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][22] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_52<
          double>;
  m_delta_func_table_0[52][23] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][24] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_52<
          double>;
  m_delta_func_table_0[52][25] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][26] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][27] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_52<
          double>;
  m_delta_func_table_0[52][28] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_52<
          double>;
  m_delta_func_table_0[52][29] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_52<
          double>;
  m_delta_func_table_0[52][30] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;
  m_delta_func_table_0[52][31] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_52<
          double>;
  m_delta_func_table_0[52][32] =
      &LocalOccClexulatorZrOTest_Clexulator_hop0_0::zero_func<double>;

  m_weight_matrix.row(0) << 2, -1, 0;
  m_weight_matrix.row(1) << -1, 2, 0;
  m_weight_matrix.row(2) << 0, 0, 5;

  m_sublat_indices = std::set<int>{2, 3};

  m_n_sublattices = 4;

  m_neighborhood = std::set<xtal::UnitCell>{
      xtal::UnitCell(-2, -1, 0),  xtal::UnitCell(-1, -2, 0),
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, -1, 1),  xtal::UnitCell(-1, 0, -1),
      xtal::UnitCell(-1, 0, 0),   xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(-1, 1, 0),   xtal::UnitCell(0, -1, -1),
      xtal::UnitCell(0, -1, 0),   xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, 0, -1),   xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 1, -1),   xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(0, 1, 1),    xtal::UnitCell(1, -1, 0),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 0),
      xtal::UnitCell(1, 0, 1),    xtal::UnitCell(1, 1, -1),
      xtal::UnitCell(1, 1, 0),    xtal::UnitCell(1, 1, 1),
      xtal::UnitCell(1, 2, 0),    xtal::UnitCell(2, 1, 0)};

  m_orbit_neighborhood.resize(corr_size());
  m_orbit_site_neighborhood.resize(corr_size());
  m_orbit_neighborhood[1] = std::set<xtal::UnitCell>{xtal::UnitCell(0, 0, -1),
                                                     xtal::UnitCell(0, 0, 1)};

  m_orbit_site_neighborhood[1] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, 0, 0, -1), xtal::UnitCellCoord(2, 0, 0, 1)};

  m_orbit_neighborhood[2] = std::set<xtal::UnitCell>{xtal::UnitCell(0, 0, -1),
                                                     xtal::UnitCell(0, 0, 1)};

  m_orbit_site_neighborhood[2] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, 0, 0, -1), xtal::UnitCellCoord(3, 0, 0, 1)};

  m_orbit_neighborhood[3] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, 0), xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0)};

  m_orbit_site_neighborhood[3] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0)};

  m_orbit_neighborhood[4] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 1),
      xtal::UnitCell(-1, 0, -1),  xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, 1, -1),   xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -1),   xtal::UnitCell(1, 1, 1)};

  m_orbit_site_neighborhood[4] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 1)};

  m_orbit_neighborhood[5] = std::set<xtal::UnitCell>{xtal::UnitCell(-2, -1, 0),
                                                     xtal::UnitCell(1, -1, 0),
                                                     xtal::UnitCell(1, 2, 0)};

  m_orbit_site_neighborhood[5] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -2, -1, 0), xtal::UnitCellCoord(3, -2, -1, 0),
      xtal::UnitCellCoord(2, 1, -1, 0),  xtal::UnitCellCoord(3, 1, -1, 0),
      xtal::UnitCellCoord(2, 1, 2, 0),   xtal::UnitCellCoord(3, 1, 2, 0)};

  m_orbit_neighborhood[6] = std::set<xtal::UnitCell>{xtal::UnitCell(-1, -2, 0),
                                                     xtal::UnitCell(-1, 1, 0),
                                                     xtal::UnitCell(2, 1, 0)};

  m_orbit_site_neighborhood[6] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -2, 0), xtal::UnitCellCoord(3, -1, -2, 0),
      xtal::UnitCellCoord(2, -1, 1, 0),  xtal::UnitCellCoord(3, -1, 1, 0),
      xtal::UnitCellCoord(2, 2, 1, 0),   xtal::UnitCellCoord(3, 2, 1, 0)};

  m_orbit_neighborhood[7] = std::set<xtal::UnitCell>{xtal::UnitCell(0, 0, -1),
                                                     xtal::UnitCell(0, 0, 1)};

  m_orbit_site_neighborhood[7] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, 0, 0, -1), xtal::UnitCellCoord(3, 0, 0, -1),
      xtal::UnitCellCoord(2, 0, 0, 1), xtal::UnitCellCoord(3, 0, 0, 1)};

  m_orbit_neighborhood[8] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, 0), xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0)};

  m_orbit_site_neighborhood[8] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0)};

  m_orbit_neighborhood[9] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, -1, 1),  xtal::UnitCell(-1, 0, -1),
      xtal::UnitCell(-1, 0, 0),   xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, -1, 1),   xtal::UnitCell(0, 1, -1),
      xtal::UnitCell(0, 1, 0),    xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 0),
      xtal::UnitCell(1, 0, 1),    xtal::UnitCell(1, 1, -1),
      xtal::UnitCell(1, 1, 0),    xtal::UnitCell(1, 1, 1)};

  m_orbit_site_neighborhood[9] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 0),
      xtal::UnitCellCoord(3, -1, -1, 0),  xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 0),
      xtal::UnitCellCoord(3, -1, 0, 0),   xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 0),
      xtal::UnitCellCoord(3, 0, -1, 0),   xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 0),
      xtal::UnitCellCoord(3, 0, 1, 0),    xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 0),
      xtal::UnitCellCoord(3, 1, 0, 0),    xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 0),
      xtal::UnitCellCoord(3, 1, 1, 0),    xtal::UnitCellCoord(2, 1, 1, 1)};

  m_orbit_neighborhood[10] = std::set<xtal::UnitCell>{xtal::UnitCell(-2, -1, 0),
                                                      xtal::UnitCell(1, -1, 0),
                                                      xtal::UnitCell(1, 2, 0)};

  m_orbit_site_neighborhood[10] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -2, -1, 0), xtal::UnitCellCoord(3, -2, -1, 0),
      xtal::UnitCellCoord(2, 1, -1, 0),  xtal::UnitCellCoord(3, 1, -1, 0),
      xtal::UnitCellCoord(2, 1, 2, 0),   xtal::UnitCellCoord(3, 1, 2, 0)};

  m_orbit_neighborhood[11] = std::set<xtal::UnitCell>{xtal::UnitCell(-1, -2, 0),
                                                      xtal::UnitCell(-1, 1, 0),
                                                      xtal::UnitCell(2, 1, 0)};

  m_orbit_site_neighborhood[11] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -2, 0), xtal::UnitCellCoord(3, -1, -2, 0),
      xtal::UnitCellCoord(2, -1, 1, 0),  xtal::UnitCellCoord(3, -1, 1, 0),
      xtal::UnitCellCoord(2, 2, 1, 0),   xtal::UnitCellCoord(3, 2, 1, 0)};

  m_orbit_neighborhood[12] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 1),
      xtal::UnitCell(-1, 0, -1),  xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, 0, -1),   xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 1, -1),   xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -1),   xtal::UnitCell(1, 1, 1)};

  m_orbit_site_neighborhood[12] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 0, -1),   xtal::UnitCellCoord(2, 0, 0, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 1)};

  m_orbit_neighborhood[13] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, 0), xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0)};

  m_orbit_site_neighborhood[13] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0)};

  m_orbit_neighborhood[14] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 1),
      xtal::UnitCell(-1, 0, -1),  xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, 1, -1),   xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -1),   xtal::UnitCell(1, 1, 1)};

  m_orbit_site_neighborhood[14] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 1)};

  m_orbit_neighborhood[15] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, 0), xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0)};

  m_orbit_site_neighborhood[15] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0)};

  m_orbit_neighborhood[16] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 1),
      xtal::UnitCell(-1, 0, -1),  xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, 1, -1),   xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -1),   xtal::UnitCell(1, 1, 1)};

  m_orbit_site_neighborhood[16] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 1)};

  m_orbit_neighborhood[17] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-2, -1, 0), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, 0, 0),  xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, 1, 0),   xtal::UnitCell(1, -1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(1, 2, 0)};

  m_orbit_site_neighborhood[17] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -2, -1, 0), xtal::UnitCellCoord(3, -2, -1, 0),
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, -1, 0),  xtal::UnitCellCoord(3, 1, -1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0),
      xtal::UnitCellCoord(2, 1, 2, 0),   xtal::UnitCellCoord(3, 1, 2, 0)};

  m_orbit_neighborhood[18] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -2, 0), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, 0, 0),  xtal::UnitCell(-1, 1, 0),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(2, 1, 0)};

  m_orbit_site_neighborhood[18] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -2, 0), xtal::UnitCellCoord(3, -1, -2, 0),
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, -1, 1, 0),  xtal::UnitCellCoord(3, -1, 1, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0),
      xtal::UnitCellCoord(2, 2, 1, 0),   xtal::UnitCellCoord(3, 2, 1, 0)};

  m_orbit_neighborhood[19] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, 0), xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, 0, -1),
      xtal::UnitCell(0, 0, 1),   xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0)};

  m_orbit_site_neighborhood[19] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(3, 0, 0, -1),  xtal::UnitCellCoord(2, 0, 0, 1),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0)};

  m_orbit_neighborhood[20] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 1),
      xtal::UnitCell(-1, 0, -1),  xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, 0, -1),   xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 1, -1),   xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -1),   xtal::UnitCell(1, 1, 1)};

  m_orbit_site_neighborhood[20] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(2, 0, 0, -1),   xtal::UnitCellCoord(3, 0, 0, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 1)};

  m_orbit_neighborhood[21] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, 0), xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0)};

  m_orbit_site_neighborhood[21] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0)};

  m_orbit_neighborhood[22] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, -1, 1),  xtal::UnitCell(-1, 0, -1),
      xtal::UnitCell(-1, 0, 0),   xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, -1, 1),   xtal::UnitCell(0, 1, -1),
      xtal::UnitCell(0, 1, 0),    xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 0),
      xtal::UnitCell(1, 0, 1),    xtal::UnitCell(1, 1, -1),
      xtal::UnitCell(1, 1, 0),    xtal::UnitCell(1, 1, 1)};

  m_orbit_site_neighborhood[22] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 0),
      xtal::UnitCellCoord(3, -1, -1, 0),  xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 0),
      xtal::UnitCellCoord(3, -1, 0, 0),   xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 0),
      xtal::UnitCellCoord(3, 0, -1, 0),   xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 0),
      xtal::UnitCellCoord(3, 0, 1, 0),    xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 0),
      xtal::UnitCellCoord(3, 1, 0, 0),    xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 0),
      xtal::UnitCellCoord(3, 1, 1, 0),    xtal::UnitCellCoord(2, 1, 1, 1)};

  m_orbit_neighborhood[23] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, 0), xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0)};

  m_orbit_site_neighborhood[23] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0)};

  m_orbit_neighborhood[24] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, -1, 1),  xtal::UnitCell(-1, 0, -1),
      xtal::UnitCell(-1, 0, 0),   xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, -1, 1),   xtal::UnitCell(0, 1, -1),
      xtal::UnitCell(0, 1, 0),    xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 0),
      xtal::UnitCell(1, 0, 1),    xtal::UnitCell(1, 1, -1),
      xtal::UnitCell(1, 1, 0),    xtal::UnitCell(1, 1, 1)};

  m_orbit_site_neighborhood[24] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 0),
      xtal::UnitCellCoord(3, -1, -1, 0),  xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 0),
      xtal::UnitCellCoord(3, -1, 0, 0),   xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 0),
      xtal::UnitCellCoord(3, 0, -1, 0),   xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 0),
      xtal::UnitCellCoord(3, 0, 1, 0),    xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 0),
      xtal::UnitCellCoord(3, 1, 0, 0),    xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 0),
      xtal::UnitCellCoord(3, 1, 1, 0),    xtal::UnitCellCoord(2, 1, 1, 1)};

  m_orbit_neighborhood[25] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-2, -1, 0), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, 0, 0),  xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, 1, 0),   xtal::UnitCell(1, -1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(1, 2, 0)};

  m_orbit_site_neighborhood[25] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -2, -1, 0), xtal::UnitCellCoord(3, -2, -1, 0),
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, -1, 0),  xtal::UnitCellCoord(3, 1, -1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0),
      xtal::UnitCellCoord(2, 1, 2, 0),   xtal::UnitCellCoord(3, 1, 2, 0)};

  m_orbit_neighborhood[26] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -2, 0), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, 0, 0),  xtal::UnitCell(-1, 1, 0),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(2, 1, 0)};

  m_orbit_site_neighborhood[26] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -2, 0), xtal::UnitCellCoord(3, -1, -2, 0),
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, -1, 1, 0),  xtal::UnitCellCoord(3, -1, 1, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0),
      xtal::UnitCellCoord(2, 2, 1, 0),   xtal::UnitCellCoord(3, 2, 1, 0)};

  m_orbit_neighborhood[27] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-2, -1, 0), xtal::UnitCell(-1, -1, -1),
      xtal::UnitCell(-1, -1, 1), xtal::UnitCell(-1, 0, -1),
      xtal::UnitCell(-1, 0, 1),  xtal::UnitCell(0, -1, -1),
      xtal::UnitCell(0, -1, 1),  xtal::UnitCell(0, 1, -1),
      xtal::UnitCell(0, 1, 1),   xtal::UnitCell(1, -1, 0),
      xtal::UnitCell(1, 0, -1),  xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -1),  xtal::UnitCell(1, 1, 1),
      xtal::UnitCell(1, 2, 0)};

  m_orbit_site_neighborhood[27] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -2, -1, 0),  xtal::UnitCellCoord(3, -2, -1, 0),
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(2, 1, -1, 0),   xtal::UnitCellCoord(3, 1, -1, 0),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 1),
      xtal::UnitCellCoord(2, 1, 2, 0),    xtal::UnitCellCoord(3, 1, 2, 0)};

  m_orbit_neighborhood[28] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -2, 0), xtal::UnitCell(-1, -1, -1),
      xtal::UnitCell(-1, -1, 1), xtal::UnitCell(-1, 0, -1),
      xtal::UnitCell(-1, 0, 1),  xtal::UnitCell(-1, 1, 0),
      xtal::UnitCell(0, -1, -1), xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, 1, -1),  xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),  xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -1),  xtal::UnitCell(1, 1, 1),
      xtal::UnitCell(2, 1, 0)};

  m_orbit_site_neighborhood[28] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -2, 0),  xtal::UnitCellCoord(3, -1, -2, 0),
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(2, -1, 1, 0),   xtal::UnitCellCoord(3, -1, 1, 0),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 1),
      xtal::UnitCellCoord(2, 2, 1, 0),    xtal::UnitCellCoord(3, 2, 1, 0)};

  m_orbit_neighborhood[29] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, -1, 1),  xtal::UnitCell(-1, 0, -1),
      xtal::UnitCell(-1, 0, 0),   xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, -1, 1),   xtal::UnitCell(0, 1, -1),
      xtal::UnitCell(0, 1, 0),    xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 0),
      xtal::UnitCell(1, 0, 1),    xtal::UnitCell(1, 1, -1),
      xtal::UnitCell(1, 1, 0),    xtal::UnitCell(1, 1, 1)};

  m_orbit_site_neighborhood[29] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 0),
      xtal::UnitCellCoord(3, -1, -1, 0),  xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 0),
      xtal::UnitCellCoord(3, -1, 0, 0),   xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 0),
      xtal::UnitCellCoord(3, 0, -1, 0),   xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 0),
      xtal::UnitCellCoord(3, 0, 1, 0),    xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 0),
      xtal::UnitCellCoord(3, 1, 0, 0),    xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 0),
      xtal::UnitCellCoord(3, 1, 1, 0),    xtal::UnitCellCoord(2, 1, 1, 1)};

  m_orbit_neighborhood[30] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, 0), xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),  xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),   xtal::UnitCell(1, 1, 0)};

  m_orbit_site_neighborhood[30] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -1, -1, 0), xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(2, -1, 0, 0),  xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(2, 0, -1, 0),  xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(2, 0, 1, 0),   xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(2, 1, 0, 0),   xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(2, 1, 1, 0),   xtal::UnitCellCoord(3, 1, 1, 0)};

  m_orbit_neighborhood[31] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-1, -1, -1), xtal::UnitCell(-1, -1, 1),
      xtal::UnitCell(-1, 0, -1),  xtal::UnitCell(-1, 0, 1),
      xtal::UnitCell(0, -1, -1),  xtal::UnitCell(0, -1, 1),
      xtal::UnitCell(0, 1, -1),   xtal::UnitCell(0, 1, 1),
      xtal::UnitCell(1, 0, -1),   xtal::UnitCell(1, 0, 1),
      xtal::UnitCell(1, 1, -1),   xtal::UnitCell(1, 1, 1)};

  m_orbit_site_neighborhood[31] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(3, -1, -1, -1), xtal::UnitCellCoord(2, -1, -1, 1),
      xtal::UnitCellCoord(3, -1, 0, -1),  xtal::UnitCellCoord(2, -1, 0, 1),
      xtal::UnitCellCoord(3, 0, -1, -1),  xtal::UnitCellCoord(2, 0, -1, 1),
      xtal::UnitCellCoord(3, 0, 1, -1),   xtal::UnitCellCoord(2, 0, 1, 1),
      xtal::UnitCellCoord(3, 1, 0, -1),   xtal::UnitCellCoord(2, 1, 0, 1),
      xtal::UnitCellCoord(3, 1, 1, -1),   xtal::UnitCellCoord(2, 1, 1, 1)};

  m_orbit_neighborhood[32] = std::set<xtal::UnitCell>{
      xtal::UnitCell(-2, -1, 0), xtal::UnitCell(-1, -2, 0),
      xtal::UnitCell(-1, 1, 0),  xtal::UnitCell(1, -1, 0),
      xtal::UnitCell(1, 2, 0),   xtal::UnitCell(2, 1, 0)};

  m_orbit_site_neighborhood[32] = std::set<xtal::UnitCellCoord>{
      xtal::UnitCellCoord(2, -2, -1, 0), xtal::UnitCellCoord(3, -2, -1, 0),
      xtal::UnitCellCoord(2, -1, -2, 0), xtal::UnitCellCoord(3, -1, -2, 0),
      xtal::UnitCellCoord(2, -1, 1, 0),  xtal::UnitCellCoord(3, -1, 1, 0),
      xtal::UnitCellCoord(2, 1, -1, 0),  xtal::UnitCellCoord(3, 1, -1, 0),
      xtal::UnitCellCoord(2, 1, 2, 0),   xtal::UnitCellCoord(3, 1, 2, 0),
      xtal::UnitCellCoord(2, 2, 1, 0),   xtal::UnitCellCoord(3, 2, 1, 0)};
}

LocalOccClexulatorZrOTest_Clexulator_hop0_0::
    ~LocalOccClexulatorZrOTest_Clexulator_hop0_0() {
  // nothing here for now
}

/// \brief Calculate contribution to global correlations from one unit cell
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::
    _calc_global_corr_contribution(double *corr_begin) const {
  _calc_global_corr_contribution();
  for (size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) =
        ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate contribution to global correlations from one unit cell
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::
    _calc_global_corr_contribution() const {
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
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::
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
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::
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
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::_calc_point_corr(
    int nlist_ind, double *corr_begin) const {
  _calc_point_corr(nlist_ind);
  for (size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) =
        ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate point correlations about basis site 'nlist_ind'
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::_calc_point_corr(
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
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::_calc_restricted_point_corr(
    int nlist_ind, double *corr_begin, size_type const *ind_list_begin,
    size_type const *ind_list_end) const {
  _calc_restricted_point_corr(nlist_ind, ind_list_begin, ind_list_end);
  for (; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(
        m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate select point correlations about basis site 'nlist_ind'
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::_calc_restricted_point_corr(
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
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::_calc_delta_point_corr(
    int nlist_ind, int occ_i, int occ_f, double *corr_begin) const {
  _calc_delta_point_corr(nlist_ind, occ_i, occ_f);
  for (size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) =
        ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate the change in point correlations due to changing an
/// occupant
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::_calc_delta_point_corr(
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
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::
    _calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f,
                                      double *corr_begin,
                                      size_type const *ind_list_begin,
                                      size_type const *ind_list_end) const {
  _calc_restricted_delta_point_corr(nlist_ind, occ_i, occ_f, ind_list_begin,
                                    ind_list_end);
  for (; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(
        m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate the change in select point correlations due to changing an
/// occupant
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::
    _calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f,
                                      size_type const *ind_list_begin,
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
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::_point_prepare(
    int nlist_ind) const {
  switch (nlist_ind) {
    case 18:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_2_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_2_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_2_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_3_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
      }
      break;
    case 19:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_2_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_3_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_3_0(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_3_0(23));
      }
      break;
    case 20:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_2_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_2_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_2_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_3_0(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
      }
      break;
    case 21:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_2_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_3_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_3_0(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_3_0(25));
      }
      break;
    case 31:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                    eval_occ_func_2_0(14));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_2_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_2_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
      }
      break;
    case 2:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_2_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_2_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_3_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_3_0(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
      }
      break;
    case 3:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_2_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_2_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_3_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_3_0(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
      }
      break;
    case 32:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                    eval_occ_func_3_0(17));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_3_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_3_0(21));
      }
      break;
    case 35:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                    eval_occ_func_2_0(14));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_2_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_2_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 4:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_2_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_2_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_3_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_3_0(23));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
      }
      break;
    case 5:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_2_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_2_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_3_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_3_0(23));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
      }
      break;
    case 36:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                    eval_occ_func_3_0(17));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_3_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_3_0(23));
      }
      break;
    case 22:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                    eval_occ_func_2_0(18));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_2_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_2_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_3_0(23));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
      }
      break;
    case 23:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_2_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                    eval_occ_func_3_0(19));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_3_0(23));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_3_0(27));
      }
      break;
    case 39:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                    eval_occ_func_2_0(14));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_2_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_2_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 6:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_2_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_2_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_3_0(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_3_0(25));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
      }
      break;
    case 7:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_2_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_2_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_3_0(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_3_0(25));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
      }
      break;
    case 40:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                    eval_occ_func_3_0(17));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_3_0(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_3_0(25));
      }
      break;
    case 14:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                    eval_occ_func_2_0(14));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 15:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                    eval_occ_func_2_0(14));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 16:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                    eval_occ_func_3_0(17));
      }
      break;
    case 17:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                    eval_occ_func_3_0(17));
      }
      break;
    case 43:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                    eval_occ_func_2_0(14));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_2_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_2_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 8:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_2_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_2_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_3_0(23));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_3_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 9:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_2_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_2_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_3_0(23));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_3_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
      }
      break;
    case 44:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                    eval_occ_func_3_0(17));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_3_0(23));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_3_0(27));
      }
      break;
    case 24:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                    eval_occ_func_2_0(20));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_2_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_2_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_3_0(25));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
      }
      break;
    case 25:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_2_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                    eval_occ_func_3_0(21));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_3_0(25));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_3_0(29));
      }
      break;
    case 47:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                    eval_occ_func_2_0(14));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_2_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_2_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                    eval_occ_func_3_0(31));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 10:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                    eval_occ_func_2_0(2));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_2_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_2_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_3_0(25));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_3_0(29));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 11:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_2_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_2_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                    eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_3_0(25));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_3_0(29));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
      }
      break;
    case 48:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                    eval_occ_func_2_0(32));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                    eval_occ_func_3_0(17));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_3_0(25));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_3_0(29));
      }
      break;
    case 51:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                    eval_occ_func_2_0(14));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_2_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_2_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                    eval_occ_func_3_0(35));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                    eval_occ_func_3_0(39));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 12:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                    eval_occ_func_2_0(4));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                    eval_occ_func_2_0(6));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_2_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_2_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                    eval_occ_func_3_0(15));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_3_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_3_0(29));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 13:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_2_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_2_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                    eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                    eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_3_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_3_0(29));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 52:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                    eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                    eval_occ_func_2_0(36));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                    eval_occ_func_2_0(40));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                    eval_occ_func_3_0(17));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_3_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_3_0(29));
      }
      break;
    case 26:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                    eval_occ_func_2_0(22));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_2_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_2_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_3_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                    eval_occ_func_3_0(43));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 27:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                    eval_occ_func_2_0(8));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_2_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                    eval_occ_func_2_0(44));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                    eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                    eval_occ_func_3_0(23));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_3_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_3_0(29));
      }
      break;
    case 28:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                    eval_occ_func_2_0(24));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                    eval_occ_func_2_0(26));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_2_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_3_0(29));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                    eval_occ_func_3_0(47));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                    eval_occ_func_3_0(51));
      }
      break;
    case 29:
      if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                    eval_occ_func_2_0(10));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                    eval_occ_func_2_0(12));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                    eval_occ_func_2_0(28));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                    eval_occ_func_2_0(48));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                    eval_occ_func_2_0(52));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                    eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                    eval_occ_func_3_0(13));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                    eval_occ_func_3_0(25));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                    eval_occ_func_3_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                    eval_occ_func_3_0(29));
      }
      break;
  }
}
template <typename Scalar>
void LocalOccClexulatorZrOTest_Clexulator_hop0_0::_global_prepare() const {
  if (m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2,
                                eval_occ_func_2_0(2));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4,
                                eval_occ_func_2_0(4));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6,
                                eval_occ_func_2_0(6));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8,
                                eval_occ_func_2_0(8));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10,
                                eval_occ_func_2_0(10));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12,
                                eval_occ_func_2_0(12));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14,
                                eval_occ_func_2_0(14));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16,
                                eval_occ_func_2_0(16));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18,
                                eval_occ_func_2_0(18));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20,
                                eval_occ_func_2_0(20));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22,
                                eval_occ_func_2_0(22));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24,
                                eval_occ_func_2_0(24));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26,
                                eval_occ_func_2_0(26));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28,
                                eval_occ_func_2_0(28));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32,
                                eval_occ_func_2_0(32));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36,
                                eval_occ_func_2_0(36));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40,
                                eval_occ_func_2_0(40));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44,
                                eval_occ_func_2_0(44));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48,
                                eval_occ_func_2_0(48));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52,
                                eval_occ_func_2_0(52));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3,
                                eval_occ_func_3_0(3));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5,
                                eval_occ_func_3_0(5));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7,
                                eval_occ_func_3_0(7));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9,
                                eval_occ_func_3_0(9));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11,
                                eval_occ_func_3_0(11));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13,
                                eval_occ_func_3_0(13));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15,
                                eval_occ_func_3_0(15));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17,
                                eval_occ_func_3_0(17));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19,
                                eval_occ_func_3_0(19));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21,
                                eval_occ_func_3_0(21));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23,
                                eval_occ_func_3_0(23));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25,
                                eval_occ_func_3_0(25));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27,
                                eval_occ_func_3_0(27));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29,
                                eval_occ_func_3_0(29));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31,
                                eval_occ_func_3_0(31));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35,
                                eval_occ_func_3_0(35));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39,
                                eval_occ_func_3_0(39));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43,
                                eval_occ_func_3_0(43));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47,
                                eval_occ_func_3_0(47));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51,
                                eval_occ_func_3_0(51));
  }
}

// Basis functions for empty cluster:
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_0_0() const {
  return 1;
}

/**** Basis functions for orbit 1****
0.3333333 0.6666667 -0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_1_0() const {
  return (occ_func_3_0(15) + occ_func_3_0(16)) / 2.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_1_0_at_15()
    const {
  return (occ_func_3_0(15)) / 2.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_1_0_at_16()
    const {
  return (occ_func_3_0(16)) / 2.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_1_0_at_15(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 2.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_1_0_at_16(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 2.;
}

/**** Basis functions for orbit 2****
0.3333333 0.6666667 -0.7500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_2_0() const {
  return (occ_func_2_0(14) + occ_func_2_0(17)) / 2.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_2_0_at_14()
    const {
  return (occ_func_2_0(14)) / 2.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_2_0_at_17()
    const {
  return (occ_func_2_0(17)) / 2.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_2_0_at_14(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 2.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_2_0_at_17(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 2.;
}

/**** Basis functions for orbit 3****
-0.6666667 -0.3333333 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_3_0() const {
  return (occ_func_2_0(2) + occ_func_2_0(10) + occ_func_2_0(8) +
          occ_func_2_0(13) + occ_func_2_0(7) + occ_func_2_0(5) +
          occ_func_2_0(4) + occ_func_2_0(6) + occ_func_2_0(12) +
          occ_func_2_0(3) + occ_func_2_0(9) + occ_func_2_0(11)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_2()
    const {
  return (occ_func_2_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_3()
    const {
  return (occ_func_2_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_4()
    const {
  return (occ_func_2_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_5()
    const {
  return (occ_func_2_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_6()
    const {
  return (occ_func_2_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_7()
    const {
  return (occ_func_2_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_8()
    const {
  return (occ_func_2_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_9()
    const {
  return (occ_func_2_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_10()
    const {
  return (occ_func_2_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_11()
    const {
  return (occ_func_2_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_12()
    const {
  return (occ_func_2_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_3_0_at_13()
    const {
  return (occ_func_2_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_3_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

/**** Basis functions for orbit 4****
-0.6666667 -0.3333333 -0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_4_0() const {
  return (occ_func_3_0(31) + occ_func_3_0(47) + occ_func_3_0(43) +
          occ_func_3_0(52) + occ_func_3_0(40) + occ_func_3_0(36) +
          occ_func_3_0(35) + occ_func_3_0(39) + occ_func_3_0(51) +
          occ_func_3_0(32) + occ_func_3_0(44) + occ_func_3_0(48)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_31()
    const {
  return (occ_func_3_0(31)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_32()
    const {
  return (occ_func_3_0(32)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_35()
    const {
  return (occ_func_3_0(35)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_36()
    const {
  return (occ_func_3_0(36)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_39()
    const {
  return (occ_func_3_0(39)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_40()
    const {
  return (occ_func_3_0(40)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_43()
    const {
  return (occ_func_3_0(43)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_44()
    const {
  return (occ_func_3_0(44)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_47()
    const {
  return (occ_func_3_0(47)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_48()
    const {
  return (occ_func_3_0(48)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_51()
    const {
  return (occ_func_3_0(51)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_4_0_at_52()
    const {
  return (occ_func_3_0(52)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_4_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 12.;
}

/**** Basis functions for orbit 5****
-1.6666667 -0.3333333 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_5_0() const {
  return (occ_func_2_0(18) + occ_func_2_0(24) + occ_func_2_0(26) +
          occ_func_2_0(27) + occ_func_2_0(25) + occ_func_2_0(19)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_18()
    const {
  return (occ_func_2_0(18)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_19()
    const {
  return (occ_func_2_0(19)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_24()
    const {
  return (occ_func_2_0(24)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_25()
    const {
  return (occ_func_2_0(25)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_26()
    const {
  return (occ_func_2_0(26)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_5_0_at_27()
    const {
  return (occ_func_2_0(27)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_18(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_19(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_24(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_25(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_26(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_5_0_at_27(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 6.;
}

/**** Basis functions for orbit 6****
2.3333333 1.6666667 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_6_0() const {
  return (occ_func_2_0(28) + occ_func_2_0(22) + occ_func_2_0(20) +
          occ_func_2_0(21) + occ_func_2_0(23) + occ_func_2_0(29)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_20()
    const {
  return (occ_func_2_0(20)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_21()
    const {
  return (occ_func_2_0(21)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_22()
    const {
  return (occ_func_2_0(22)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_23()
    const {
  return (occ_func_2_0(23)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_28()
    const {
  return (occ_func_2_0(28)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_6_0_at_29()
    const {
  return (occ_func_2_0(29)) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_20(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_21(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_22(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_23(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_28(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_6_0_at_29(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 6.;
}

/**** Basis functions for orbit 7****
0.3333333 0.6666667 -0.7500000 Va  O

0.3333333 0.6666667 -0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_7_0() const {
  return (occ_func_2_0(14) * occ_func_3_0(15) +
          occ_func_2_0(17) * occ_func_3_0(16)) /
         2.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_7_0_at_14()
    const {
  return (occ_func_2_0(14) * occ_func_3_0(15)) / 2.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_7_0_at_15()
    const {
  return (occ_func_2_0(14) * occ_func_3_0(15)) / 2.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_7_0_at_16()
    const {
  return (occ_func_2_0(17) * occ_func_3_0(16)) / 2.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_7_0_at_17()
    const {
  return (occ_func_2_0(17) * occ_func_3_0(16)) / 2.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_7_0_at_14(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(15)) /
         2.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_7_0_at_15(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(14)) /
         2.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_7_0_at_16(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(17)) /
         2.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_7_0_at_17(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(16)) /
         2.;
}

/**** Basis functions for orbit 8****
-0.6666667 -0.3333333 0.2500000 Va  O

-0.6666667 -0.3333333 0.7500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_8_0() const {
  return (occ_func_2_0(2) * occ_func_3_0(3) +
          occ_func_2_0(10) * occ_func_3_0(11) +
          occ_func_2_0(8) * occ_func_3_0(9) +
          occ_func_2_0(13) * occ_func_3_0(12) +
          occ_func_2_0(7) * occ_func_3_0(6) +
          occ_func_2_0(5) * occ_func_3_0(4)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_2()
    const {
  return (occ_func_2_0(2) * occ_func_3_0(3)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_3()
    const {
  return (occ_func_2_0(2) * occ_func_3_0(3)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_4()
    const {
  return (occ_func_2_0(5) * occ_func_3_0(4)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_5()
    const {
  return (occ_func_2_0(5) * occ_func_3_0(4)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_6()
    const {
  return (occ_func_2_0(7) * occ_func_3_0(6)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_7()
    const {
  return (occ_func_2_0(7) * occ_func_3_0(6)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_8()
    const {
  return (occ_func_2_0(8) * occ_func_3_0(9)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_9()
    const {
  return (occ_func_2_0(8) * occ_func_3_0(9)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_10()
    const {
  return (occ_func_2_0(10) * occ_func_3_0(11)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_11()
    const {
  return (occ_func_2_0(10) * occ_func_3_0(11)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_12()
    const {
  return (occ_func_2_0(13) * occ_func_3_0(12)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_8_0_at_13()
    const {
  return (occ_func_2_0(13) * occ_func_3_0(12)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(3)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(2)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(5)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(4)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(7)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(6)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(9)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(8)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(11)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(10)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(13)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_8_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(12)) /
         6.;
}

/**** Basis functions for orbit 9****
-0.6666667 -0.3333333 -0.2500000 Va  O

-0.6666667 -0.3333333 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_9_0() const {
  return (occ_func_3_0(31) * occ_func_2_0(2) +
          occ_func_3_0(47) * occ_func_2_0(10) +
          occ_func_3_0(43) * occ_func_2_0(8) +
          occ_func_3_0(52) * occ_func_2_0(13) +
          occ_func_3_0(40) * occ_func_2_0(7) +
          occ_func_3_0(36) * occ_func_2_0(5) +
          occ_func_3_0(35) * occ_func_2_0(4) +
          occ_func_3_0(39) * occ_func_2_0(6) +
          occ_func_3_0(51) * occ_func_2_0(12) +
          occ_func_3_0(32) * occ_func_2_0(3) +
          occ_func_3_0(44) * occ_func_2_0(9) +
          occ_func_3_0(48) * occ_func_2_0(11)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_31()
    const {
  return (occ_func_3_0(31) * occ_func_2_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_2()
    const {
  return (occ_func_3_0(31) * occ_func_2_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_3()
    const {
  return (occ_func_3_0(32) * occ_func_2_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_32()
    const {
  return (occ_func_3_0(32) * occ_func_2_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_35()
    const {
  return (occ_func_3_0(35) * occ_func_2_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_4()
    const {
  return (occ_func_3_0(35) * occ_func_2_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_5()
    const {
  return (occ_func_3_0(36) * occ_func_2_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_36()
    const {
  return (occ_func_3_0(36) * occ_func_2_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_39()
    const {
  return (occ_func_3_0(39) * occ_func_2_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_6()
    const {
  return (occ_func_3_0(39) * occ_func_2_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_7()
    const {
  return (occ_func_3_0(40) * occ_func_2_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_40()
    const {
  return (occ_func_3_0(40) * occ_func_2_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_43()
    const {
  return (occ_func_3_0(43) * occ_func_2_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_8()
    const {
  return (occ_func_3_0(43) * occ_func_2_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_9()
    const {
  return (occ_func_3_0(44) * occ_func_2_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_44()
    const {
  return (occ_func_3_0(44) * occ_func_2_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_47()
    const {
  return (occ_func_3_0(47) * occ_func_2_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_10()
    const {
  return (occ_func_3_0(47) * occ_func_2_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_11()
    const {
  return (occ_func_3_0(48) * occ_func_2_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_48()
    const {
  return (occ_func_3_0(48) * occ_func_2_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_51()
    const {
  return (occ_func_3_0(51) * occ_func_2_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_12()
    const {
  return (occ_func_3_0(51) * occ_func_2_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_13()
    const {
  return (occ_func_3_0(52) * occ_func_2_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_9_0_at_52()
    const {
  return (occ_func_3_0(52) * occ_func_2_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(2)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(31)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(32)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(3)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(4)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(35)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(36)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(5)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(6)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(39)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(40)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(7)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(8)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(43)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(44)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(9)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(10)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(47)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(48)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(11)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(12)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(51)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(52)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_9_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(13)) /
         12.;
}

/**** Basis functions for orbit 10****
1.3333333 -0.3333333 0.2500000 Va  O

1.3333333 -0.3333333 0.7500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_10_0() const {
  return (occ_func_2_0(24) * occ_func_3_0(25) +
          occ_func_2_0(26) * occ_func_3_0(27) +
          occ_func_2_0(18) * occ_func_3_0(19)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_18()
    const {
  return (occ_func_2_0(18) * occ_func_3_0(19)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_19()
    const {
  return (occ_func_2_0(18) * occ_func_3_0(19)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_24()
    const {
  return (occ_func_2_0(24) * occ_func_3_0(25)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_25()
    const {
  return (occ_func_2_0(24) * occ_func_3_0(25)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_26()
    const {
  return (occ_func_2_0(26) * occ_func_3_0(27)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_10_0_at_27()
    const {
  return (occ_func_2_0(26) * occ_func_3_0(27)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_18(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(19)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_19(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(18)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_24(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(25)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_25(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(24)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_26(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(27)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_10_0_at_27(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(26)) /
         3.;
}

/**** Basis functions for orbit 11****
-0.6666667 1.6666667 0.2500000 Va  O

-0.6666667 1.6666667 0.7500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_11_0() const {
  return (occ_func_2_0(22) * occ_func_3_0(23) +
          occ_func_2_0(20) * occ_func_3_0(21) +
          occ_func_2_0(28) * occ_func_3_0(29)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_20()
    const {
  return (occ_func_2_0(20) * occ_func_3_0(21)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_21()
    const {
  return (occ_func_2_0(20) * occ_func_3_0(21)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_22()
    const {
  return (occ_func_2_0(22) * occ_func_3_0(23)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_23()
    const {
  return (occ_func_2_0(22) * occ_func_3_0(23)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_28()
    const {
  return (occ_func_2_0(28) * occ_func_3_0(29)) / 3.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_11_0_at_29()
    const {
  return (occ_func_2_0(28) * occ_func_3_0(29)) / 3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_20(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(21)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_21(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(20)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_22(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(23)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_23(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(22)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_28(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(29)) /
         3.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_11_0_at_29(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(28)) /
         3.;
}

/**** Basis functions for orbit 12****
-0.6666667 -0.3333333 -0.2500000 Va  O

0.3333333 0.6666667 -0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_12_0() const {
  return (occ_func_3_0(31) * occ_func_3_0(15) +
          occ_func_3_0(47) * occ_func_3_0(15) +
          occ_func_3_0(43) * occ_func_3_0(15) +
          occ_func_3_0(52) * occ_func_3_0(16) +
          occ_func_3_0(40) * occ_func_3_0(16) +
          occ_func_3_0(36) * occ_func_3_0(16) +
          occ_func_3_0(35) * occ_func_3_0(15) +
          occ_func_3_0(39) * occ_func_3_0(15) +
          occ_func_3_0(51) * occ_func_3_0(15) +
          occ_func_3_0(32) * occ_func_3_0(16) +
          occ_func_3_0(44) * occ_func_3_0(16) +
          occ_func_3_0(48) * occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_31()
    const {
  return (occ_func_3_0(31) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_32()
    const {
  return (occ_func_3_0(32) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_35()
    const {
  return (occ_func_3_0(35) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_36()
    const {
  return (occ_func_3_0(36) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_39()
    const {
  return (occ_func_3_0(39) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_40()
    const {
  return (occ_func_3_0(40) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_15()
    const {
  return (occ_func_3_0(31) * occ_func_3_0(15) +
          occ_func_3_0(47) * occ_func_3_0(15) +
          occ_func_3_0(43) * occ_func_3_0(15) +
          occ_func_3_0(35) * occ_func_3_0(15) +
          occ_func_3_0(39) * occ_func_3_0(15) +
          occ_func_3_0(51) * occ_func_3_0(15)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_16()
    const {
  return (occ_func_3_0(52) * occ_func_3_0(16) +
          occ_func_3_0(40) * occ_func_3_0(16) +
          occ_func_3_0(36) * occ_func_3_0(16) +
          occ_func_3_0(32) * occ_func_3_0(16) +
          occ_func_3_0(44) * occ_func_3_0(16) +
          occ_func_3_0(48) * occ_func_3_0(16)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_43()
    const {
  return (occ_func_3_0(43) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_44()
    const {
  return (occ_func_3_0(44) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_47()
    const {
  return (occ_func_3_0(47) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_48()
    const {
  return (occ_func_3_0(48) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_51()
    const {
  return (occ_func_3_0(51) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_12_0_at_52()
    const {
  return (occ_func_3_0(52) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_15(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(31) + occ_func_3_0(47) + occ_func_3_0(43) +
          occ_func_3_0(35) + occ_func_3_0(39) + occ_func_3_0(51)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_16(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(52) + occ_func_3_0(40) + occ_func_3_0(36) +
          occ_func_3_0(32) + occ_func_3_0(44) + occ_func_3_0(48)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_12_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

/**** Basis functions for orbit 13****
-0.6666667 -0.3333333 0.2500000 Va  O

-0.6666667 0.6666667 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_13_0() const {
  return (occ_func_2_0(2) * occ_func_2_0(4) +
          occ_func_2_0(10) * occ_func_2_0(6) +
          occ_func_2_0(8) * occ_func_2_0(12) +
          occ_func_2_0(13) * occ_func_2_0(9) +
          occ_func_2_0(7) * occ_func_2_0(11) +
          occ_func_2_0(5) * occ_func_2_0(3)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_2()
    const {
  return (occ_func_2_0(2) * occ_func_2_0(4)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_3()
    const {
  return (occ_func_2_0(5) * occ_func_2_0(3)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_4()
    const {
  return (occ_func_2_0(2) * occ_func_2_0(4)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_5()
    const {
  return (occ_func_2_0(5) * occ_func_2_0(3)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_6()
    const {
  return (occ_func_2_0(10) * occ_func_2_0(6)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_7()
    const {
  return (occ_func_2_0(7) * occ_func_2_0(11)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_8()
    const {
  return (occ_func_2_0(8) * occ_func_2_0(12)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_9()
    const {
  return (occ_func_2_0(13) * occ_func_2_0(9)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_10()
    const {
  return (occ_func_2_0(10) * occ_func_2_0(6)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_11()
    const {
  return (occ_func_2_0(7) * occ_func_2_0(11)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_12()
    const {
  return (occ_func_2_0(8) * occ_func_2_0(12)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_13_0_at_13()
    const {
  return (occ_func_2_0(13) * occ_func_2_0(9)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(4)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(5)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(2)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(3)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(10)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(11)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(12)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(13)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(6)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(7)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(8)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_13_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(9)) /
         6.;
}

/**** Basis functions for orbit 14****
-0.6666667 -0.3333333 -0.2500000 Va  O

-0.6666667 0.6666667 -0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_14_0() const {
  return (occ_func_3_0(31) * occ_func_3_0(35) +
          occ_func_3_0(47) * occ_func_3_0(39) +
          occ_func_3_0(43) * occ_func_3_0(51) +
          occ_func_3_0(52) * occ_func_3_0(44) +
          occ_func_3_0(40) * occ_func_3_0(48) +
          occ_func_3_0(36) * occ_func_3_0(32)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_31()
    const {
  return (occ_func_3_0(31) * occ_func_3_0(35)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_32()
    const {
  return (occ_func_3_0(36) * occ_func_3_0(32)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_35()
    const {
  return (occ_func_3_0(31) * occ_func_3_0(35)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_36()
    const {
  return (occ_func_3_0(36) * occ_func_3_0(32)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_39()
    const {
  return (occ_func_3_0(47) * occ_func_3_0(39)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_40()
    const {
  return (occ_func_3_0(40) * occ_func_3_0(48)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_43()
    const {
  return (occ_func_3_0(43) * occ_func_3_0(51)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_44()
    const {
  return (occ_func_3_0(52) * occ_func_3_0(44)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_47()
    const {
  return (occ_func_3_0(47) * occ_func_3_0(39)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_48()
    const {
  return (occ_func_3_0(40) * occ_func_3_0(48)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_51()
    const {
  return (occ_func_3_0(43) * occ_func_3_0(51)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_14_0_at_52()
    const {
  return (occ_func_3_0(52) * occ_func_3_0(44)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(35)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(36)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(31)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(32)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(47)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(48)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(51)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(52)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(39)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(40)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(43)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_14_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(44)) /
         6.;
}

/**** Basis functions for orbit 15****
1.3333333 0.6666667 0.2500000 Va  O

1.3333333 1.6666667 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_15_0() const {
  return (occ_func_2_0(10) * occ_func_2_0(12) +
          occ_func_2_0(8) * occ_func_2_0(4) +
          occ_func_2_0(2) * occ_func_2_0(6) +
          occ_func_2_0(7) * occ_func_2_0(3) +
          occ_func_2_0(5) * occ_func_2_0(9) +
          occ_func_2_0(13) * occ_func_2_0(11)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_2()
    const {
  return (occ_func_2_0(2) * occ_func_2_0(6)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_3()
    const {
  return (occ_func_2_0(7) * occ_func_2_0(3)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_4()
    const {
  return (occ_func_2_0(8) * occ_func_2_0(4)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_5()
    const {
  return (occ_func_2_0(5) * occ_func_2_0(9)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_6()
    const {
  return (occ_func_2_0(2) * occ_func_2_0(6)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_7()
    const {
  return (occ_func_2_0(7) * occ_func_2_0(3)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_8()
    const {
  return (occ_func_2_0(8) * occ_func_2_0(4)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_9()
    const {
  return (occ_func_2_0(5) * occ_func_2_0(9)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_10()
    const {
  return (occ_func_2_0(10) * occ_func_2_0(12)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_11()
    const {
  return (occ_func_2_0(13) * occ_func_2_0(11)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_12()
    const {
  return (occ_func_2_0(10) * occ_func_2_0(12)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_15_0_at_13()
    const {
  return (occ_func_2_0(13) * occ_func_2_0(11)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(6)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(7)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(8)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(9)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(2)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(3)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(4)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(5)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(12)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(13)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(10)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_15_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(11)) /
         6.;
}

/**** Basis functions for orbit 16****
1.3333333 0.6666667 -0.2500000 Va  O

1.3333333 1.6666667 -0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_16_0() const {
  return (occ_func_3_0(47) * occ_func_3_0(51) +
          occ_func_3_0(43) * occ_func_3_0(35) +
          occ_func_3_0(31) * occ_func_3_0(39) +
          occ_func_3_0(40) * occ_func_3_0(32) +
          occ_func_3_0(36) * occ_func_3_0(44) +
          occ_func_3_0(52) * occ_func_3_0(48)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_31()
    const {
  return (occ_func_3_0(31) * occ_func_3_0(39)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_32()
    const {
  return (occ_func_3_0(40) * occ_func_3_0(32)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_35()
    const {
  return (occ_func_3_0(43) * occ_func_3_0(35)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_36()
    const {
  return (occ_func_3_0(36) * occ_func_3_0(44)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_39()
    const {
  return (occ_func_3_0(31) * occ_func_3_0(39)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_40()
    const {
  return (occ_func_3_0(40) * occ_func_3_0(32)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_43()
    const {
  return (occ_func_3_0(43) * occ_func_3_0(35)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_44()
    const {
  return (occ_func_3_0(36) * occ_func_3_0(44)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_47()
    const {
  return (occ_func_3_0(47) * occ_func_3_0(51)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_48()
    const {
  return (occ_func_3_0(52) * occ_func_3_0(48)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_51()
    const {
  return (occ_func_3_0(47) * occ_func_3_0(51)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_16_0_at_52()
    const {
  return (occ_func_3_0(52) * occ_func_3_0(48)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(39)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(40)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(43)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(44)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(31)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(32)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(35)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(36)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(51)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(52)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(47)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_16_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(48)) /
         6.;
}

/**** Basis functions for orbit 17****
-1.6666667 -0.3333333 0.2500000 Va  O

-0.6666667 -0.3333333 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_17_0() const {
  return (occ_func_2_0(18) * occ_func_2_0(2) +
          occ_func_2_0(24) * occ_func_2_0(10) +
          occ_func_2_0(26) * occ_func_2_0(8) +
          occ_func_2_0(27) * occ_func_2_0(13) +
          occ_func_2_0(25) * occ_func_2_0(7) +
          occ_func_2_0(19) * occ_func_2_0(5) +
          occ_func_2_0(18) * occ_func_2_0(4) +
          occ_func_2_0(24) * occ_func_2_0(6) +
          occ_func_2_0(26) * occ_func_2_0(12) +
          occ_func_2_0(19) * occ_func_2_0(3) +
          occ_func_2_0(27) * occ_func_2_0(9) +
          occ_func_2_0(25) * occ_func_2_0(11)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_18()
    const {
  return (occ_func_2_0(18) * occ_func_2_0(2) +
          occ_func_2_0(18) * occ_func_2_0(4)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_19()
    const {
  return (occ_func_2_0(19) * occ_func_2_0(5) +
          occ_func_2_0(19) * occ_func_2_0(3)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_2()
    const {
  return (occ_func_2_0(18) * occ_func_2_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_3()
    const {
  return (occ_func_2_0(19) * occ_func_2_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_4()
    const {
  return (occ_func_2_0(18) * occ_func_2_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_5()
    const {
  return (occ_func_2_0(19) * occ_func_2_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_6()
    const {
  return (occ_func_2_0(24) * occ_func_2_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_7()
    const {
  return (occ_func_2_0(25) * occ_func_2_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_8()
    const {
  return (occ_func_2_0(26) * occ_func_2_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_9()
    const {
  return (occ_func_2_0(27) * occ_func_2_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_24()
    const {
  return (occ_func_2_0(24) * occ_func_2_0(10) +
          occ_func_2_0(24) * occ_func_2_0(6)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_25()
    const {
  return (occ_func_2_0(25) * occ_func_2_0(7) +
          occ_func_2_0(25) * occ_func_2_0(11)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_10()
    const {
  return (occ_func_2_0(24) * occ_func_2_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_11()
    const {
  return (occ_func_2_0(25) * occ_func_2_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_12()
    const {
  return (occ_func_2_0(26) * occ_func_2_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_13()
    const {
  return (occ_func_2_0(27) * occ_func_2_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_26()
    const {
  return (occ_func_2_0(26) * occ_func_2_0(8) +
          occ_func_2_0(26) * occ_func_2_0(12)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_17_0_at_27()
    const {
  return (occ_func_2_0(27) * occ_func_2_0(13) +
          occ_func_2_0(27) * occ_func_2_0(9)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_18(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(2) + occ_func_2_0(4)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_19(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(5) + occ_func_2_0(3)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(18)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(19)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(18)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(19)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(24)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(25)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(26)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(27)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_24(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(10) + occ_func_2_0(6)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_25(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(7) + occ_func_2_0(11)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(24)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(25)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(26)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(27)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_26(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(8) + occ_func_2_0(12)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_17_0_at_27(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(13) + occ_func_2_0(9)) / 12.;
}

/**** Basis functions for orbit 18****
-0.6666667 -1.3333333 0.2500000 Va  O

-0.6666667 -0.3333333 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_18_0() const {
  return (occ_func_2_0(20) * occ_func_2_0(2) +
          occ_func_2_0(28) * occ_func_2_0(10) +
          occ_func_2_0(22) * occ_func_2_0(8) +
          occ_func_2_0(29) * occ_func_2_0(13) +
          occ_func_2_0(21) * occ_func_2_0(7) +
          occ_func_2_0(23) * occ_func_2_0(5) +
          occ_func_2_0(22) * occ_func_2_0(4) +
          occ_func_2_0(20) * occ_func_2_0(6) +
          occ_func_2_0(28) * occ_func_2_0(12) +
          occ_func_2_0(21) * occ_func_2_0(3) +
          occ_func_2_0(23) * occ_func_2_0(9) +
          occ_func_2_0(29) * occ_func_2_0(11)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_20()
    const {
  return (occ_func_2_0(20) * occ_func_2_0(2) +
          occ_func_2_0(20) * occ_func_2_0(6)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_21()
    const {
  return (occ_func_2_0(21) * occ_func_2_0(7) +
          occ_func_2_0(21) * occ_func_2_0(3)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_2()
    const {
  return (occ_func_2_0(20) * occ_func_2_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_3()
    const {
  return (occ_func_2_0(21) * occ_func_2_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_4()
    const {
  return (occ_func_2_0(22) * occ_func_2_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_5()
    const {
  return (occ_func_2_0(23) * occ_func_2_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_22()
    const {
  return (occ_func_2_0(22) * occ_func_2_0(8) +
          occ_func_2_0(22) * occ_func_2_0(4)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_23()
    const {
  return (occ_func_2_0(23) * occ_func_2_0(5) +
          occ_func_2_0(23) * occ_func_2_0(9)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_6()
    const {
  return (occ_func_2_0(20) * occ_func_2_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_7()
    const {
  return (occ_func_2_0(21) * occ_func_2_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_8()
    const {
  return (occ_func_2_0(22) * occ_func_2_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_9()
    const {
  return (occ_func_2_0(23) * occ_func_2_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_10()
    const {
  return (occ_func_2_0(28) * occ_func_2_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_11()
    const {
  return (occ_func_2_0(29) * occ_func_2_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_12()
    const {
  return (occ_func_2_0(28) * occ_func_2_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_13()
    const {
  return (occ_func_2_0(29) * occ_func_2_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_28()
    const {
  return (occ_func_2_0(28) * occ_func_2_0(10) +
          occ_func_2_0(28) * occ_func_2_0(12)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_18_0_at_29()
    const {
  return (occ_func_2_0(29) * occ_func_2_0(13) +
          occ_func_2_0(29) * occ_func_2_0(11)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_20(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(2) + occ_func_2_0(6)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_21(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(7) + occ_func_2_0(3)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(20)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(21)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(22)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(23)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_22(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(8) + occ_func_2_0(4)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_23(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(5) + occ_func_2_0(9)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(20)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(21)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(22)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(23)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(28)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(29)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(28)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(29)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_28(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(10) + occ_func_2_0(12)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_18_0_at_29(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(13) + occ_func_2_0(11)) / 12.;
}

/**** Basis functions for orbit 19****
-0.6666667 -0.3333333 0.2500000 Va  O

0.3333333 0.6666667 -0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_19_0() const {
  return (occ_func_2_0(2) * occ_func_3_0(15) +
          occ_func_2_0(10) * occ_func_3_0(15) +
          occ_func_2_0(8) * occ_func_3_0(15) +
          occ_func_2_0(13) * occ_func_3_0(16) +
          occ_func_2_0(7) * occ_func_3_0(16) +
          occ_func_2_0(5) * occ_func_3_0(16) +
          occ_func_2_0(4) * occ_func_3_0(15) +
          occ_func_2_0(6) * occ_func_3_0(15) +
          occ_func_2_0(12) * occ_func_3_0(15) +
          occ_func_2_0(3) * occ_func_3_0(16) +
          occ_func_2_0(9) * occ_func_3_0(16) +
          occ_func_2_0(11) * occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_2()
    const {
  return (occ_func_2_0(2) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_3()
    const {
  return (occ_func_2_0(3) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_4()
    const {
  return (occ_func_2_0(4) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_5()
    const {
  return (occ_func_2_0(5) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_6()
    const {
  return (occ_func_2_0(6) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_7()
    const {
  return (occ_func_2_0(7) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_15()
    const {
  return (occ_func_2_0(2) * occ_func_3_0(15) +
          occ_func_2_0(10) * occ_func_3_0(15) +
          occ_func_2_0(8) * occ_func_3_0(15) +
          occ_func_2_0(4) * occ_func_3_0(15) +
          occ_func_2_0(6) * occ_func_3_0(15) +
          occ_func_2_0(12) * occ_func_3_0(15)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_16()
    const {
  return (occ_func_2_0(13) * occ_func_3_0(16) +
          occ_func_2_0(7) * occ_func_3_0(16) +
          occ_func_2_0(5) * occ_func_3_0(16) +
          occ_func_2_0(3) * occ_func_3_0(16) +
          occ_func_2_0(9) * occ_func_3_0(16) +
          occ_func_2_0(11) * occ_func_3_0(16)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_8()
    const {
  return (occ_func_2_0(8) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_9()
    const {
  return (occ_func_2_0(9) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_10()
    const {
  return (occ_func_2_0(10) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_11()
    const {
  return (occ_func_2_0(11) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_12()
    const {
  return (occ_func_2_0(12) * occ_func_3_0(15)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_19_0_at_13()
    const {
  return (occ_func_2_0(13) * occ_func_3_0(16)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_15(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(2) + occ_func_2_0(10) + occ_func_2_0(8) +
          occ_func_2_0(4) + occ_func_2_0(6) + occ_func_2_0(12)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_16(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(13) + occ_func_2_0(7) + occ_func_2_0(5) +
          occ_func_2_0(3) + occ_func_2_0(9) + occ_func_2_0(11)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(15)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_19_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(16)) /
         12.;
}

/**** Basis functions for orbit 20****
-0.6666667 -0.3333333 -0.2500000 Va  O

0.3333333 0.6666667 -0.7500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_20_0() const {
  return (occ_func_3_0(31) * occ_func_2_0(14) +
          occ_func_3_0(47) * occ_func_2_0(14) +
          occ_func_3_0(43) * occ_func_2_0(14) +
          occ_func_3_0(52) * occ_func_2_0(17) +
          occ_func_3_0(40) * occ_func_2_0(17) +
          occ_func_3_0(36) * occ_func_2_0(17) +
          occ_func_3_0(35) * occ_func_2_0(14) +
          occ_func_3_0(39) * occ_func_2_0(14) +
          occ_func_3_0(51) * occ_func_2_0(14) +
          occ_func_3_0(32) * occ_func_2_0(17) +
          occ_func_3_0(44) * occ_func_2_0(17) +
          occ_func_3_0(48) * occ_func_2_0(17)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_31()
    const {
  return (occ_func_3_0(31) * occ_func_2_0(14)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_32()
    const {
  return (occ_func_3_0(32) * occ_func_2_0(17)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_35()
    const {
  return (occ_func_3_0(35) * occ_func_2_0(14)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_36()
    const {
  return (occ_func_3_0(36) * occ_func_2_0(17)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_39()
    const {
  return (occ_func_3_0(39) * occ_func_2_0(14)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_40()
    const {
  return (occ_func_3_0(40) * occ_func_2_0(17)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_14()
    const {
  return (occ_func_3_0(31) * occ_func_2_0(14) +
          occ_func_3_0(47) * occ_func_2_0(14) +
          occ_func_3_0(43) * occ_func_2_0(14) +
          occ_func_3_0(35) * occ_func_2_0(14) +
          occ_func_3_0(39) * occ_func_2_0(14) +
          occ_func_3_0(51) * occ_func_2_0(14)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_17()
    const {
  return (occ_func_3_0(52) * occ_func_2_0(17) +
          occ_func_3_0(40) * occ_func_2_0(17) +
          occ_func_3_0(36) * occ_func_2_0(17) +
          occ_func_3_0(32) * occ_func_2_0(17) +
          occ_func_3_0(44) * occ_func_2_0(17) +
          occ_func_3_0(48) * occ_func_2_0(17)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_43()
    const {
  return (occ_func_3_0(43) * occ_func_2_0(14)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_44()
    const {
  return (occ_func_3_0(44) * occ_func_2_0(17)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_47()
    const {
  return (occ_func_3_0(47) * occ_func_2_0(14)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_48()
    const {
  return (occ_func_3_0(48) * occ_func_2_0(17)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_51()
    const {
  return (occ_func_3_0(51) * occ_func_2_0(14)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_20_0_at_52()
    const {
  return (occ_func_3_0(52) * occ_func_2_0(17)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(14)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(17)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(14)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(17)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(14)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(17)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_14(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(31) + occ_func_3_0(47) + occ_func_3_0(43) +
          occ_func_3_0(35) + occ_func_3_0(39) + occ_func_3_0(51)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_17(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(52) + occ_func_3_0(40) + occ_func_3_0(36) +
          occ_func_3_0(32) + occ_func_3_0(44) + occ_func_3_0(48)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(14)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(17)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(14)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(17)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(14)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_20_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(17)) /
         12.;
}

/**** Basis functions for orbit 21****
0.3333333 -0.3333333 0.2500000 Va  O

1.3333333 0.6666667 0.7500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_21_0() const {
  return (occ_func_2_0(6) * occ_func_3_0(11) +
          occ_func_2_0(12) * occ_func_3_0(9) +
          occ_func_2_0(4) * occ_func_3_0(3) +
          occ_func_2_0(8) * occ_func_3_0(13) +
          occ_func_2_0(2) * occ_func_3_0(5) +
          occ_func_2_0(10) * occ_func_3_0(7)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_2()
    const {
  return (occ_func_2_0(2) * occ_func_3_0(5)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_3()
    const {
  return (occ_func_2_0(4) * occ_func_3_0(3)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_4()
    const {
  return (occ_func_2_0(4) * occ_func_3_0(3)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_5()
    const {
  return (occ_func_2_0(2) * occ_func_3_0(5)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_6()
    const {
  return (occ_func_2_0(6) * occ_func_3_0(11)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_7()
    const {
  return (occ_func_2_0(10) * occ_func_3_0(7)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_8()
    const {
  return (occ_func_2_0(8) * occ_func_3_0(13)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_9()
    const {
  return (occ_func_2_0(12) * occ_func_3_0(9)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_10()
    const {
  return (occ_func_2_0(10) * occ_func_3_0(7)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_11()
    const {
  return (occ_func_2_0(6) * occ_func_3_0(11)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_12()
    const {
  return (occ_func_2_0(12) * occ_func_3_0(9)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_21_0_at_13()
    const {
  return (occ_func_2_0(8) * occ_func_3_0(13)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(5)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(4)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(3)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(2)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(11)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(10)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(13)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(12)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(7)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(6)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(9)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_21_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(8)) /
         6.;
}

/**** Basis functions for orbit 22****
-0.6666667 -0.3333333 -0.2500000 Va  O

-0.6666667 0.6666667 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_22_0() const {
  return (occ_func_3_0(31) * occ_func_2_0(4) +
          occ_func_3_0(47) * occ_func_2_0(6) +
          occ_func_3_0(43) * occ_func_2_0(12) +
          occ_func_3_0(52) * occ_func_2_0(9) +
          occ_func_3_0(40) * occ_func_2_0(11) +
          occ_func_3_0(36) * occ_func_2_0(3) +
          occ_func_3_0(35) * occ_func_2_0(2) +
          occ_func_3_0(39) * occ_func_2_0(10) +
          occ_func_3_0(51) * occ_func_2_0(8) +
          occ_func_3_0(32) * occ_func_2_0(5) +
          occ_func_3_0(44) * occ_func_2_0(13) +
          occ_func_3_0(48) * occ_func_2_0(7)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_31()
    const {
  return (occ_func_3_0(31) * occ_func_2_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_2()
    const {
  return (occ_func_3_0(35) * occ_func_2_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_3()
    const {
  return (occ_func_3_0(36) * occ_func_2_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_32()
    const {
  return (occ_func_3_0(32) * occ_func_2_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_35()
    const {
  return (occ_func_3_0(35) * occ_func_2_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_4()
    const {
  return (occ_func_3_0(31) * occ_func_2_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_5()
    const {
  return (occ_func_3_0(32) * occ_func_2_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_36()
    const {
  return (occ_func_3_0(36) * occ_func_2_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_39()
    const {
  return (occ_func_3_0(39) * occ_func_2_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_6()
    const {
  return (occ_func_3_0(47) * occ_func_2_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_7()
    const {
  return (occ_func_3_0(48) * occ_func_2_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_40()
    const {
  return (occ_func_3_0(40) * occ_func_2_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_43()
    const {
  return (occ_func_3_0(43) * occ_func_2_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_8()
    const {
  return (occ_func_3_0(51) * occ_func_2_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_9()
    const {
  return (occ_func_3_0(52) * occ_func_2_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_44()
    const {
  return (occ_func_3_0(44) * occ_func_2_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_47()
    const {
  return (occ_func_3_0(47) * occ_func_2_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_10()
    const {
  return (occ_func_3_0(39) * occ_func_2_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_11()
    const {
  return (occ_func_3_0(40) * occ_func_2_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_48()
    const {
  return (occ_func_3_0(48) * occ_func_2_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_51()
    const {
  return (occ_func_3_0(51) * occ_func_2_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_12()
    const {
  return (occ_func_3_0(43) * occ_func_2_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_13()
    const {
  return (occ_func_3_0(44) * occ_func_2_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_22_0_at_52()
    const {
  return (occ_func_3_0(52) * occ_func_2_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(4)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(35)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(36)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(5)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(2)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(31)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(32)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(3)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(10)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(47)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(48)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(11)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(12)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(51)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(52)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(13)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(6)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(39)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(40)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(7)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(8)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(43)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(44)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_22_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(9)) /
         12.;
}

/**** Basis functions for orbit 23****
-0.6666667 0.6666667 0.2500000 Va  O

0.3333333 1.6666667 0.7500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_23_0() const {
  return (occ_func_2_0(4) * occ_func_3_0(9) +
          occ_func_2_0(6) * occ_func_3_0(3) +
          occ_func_2_0(12) * occ_func_3_0(11) +
          occ_func_2_0(2) * occ_func_3_0(7) +
          occ_func_2_0(10) * occ_func_3_0(13) +
          occ_func_2_0(8) * occ_func_3_0(5)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_2()
    const {
  return (occ_func_2_0(2) * occ_func_3_0(7)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_3()
    const {
  return (occ_func_2_0(6) * occ_func_3_0(3)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_4()
    const {
  return (occ_func_2_0(4) * occ_func_3_0(9)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_5()
    const {
  return (occ_func_2_0(8) * occ_func_3_0(5)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_6()
    const {
  return (occ_func_2_0(6) * occ_func_3_0(3)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_7()
    const {
  return (occ_func_2_0(2) * occ_func_3_0(7)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_8()
    const {
  return (occ_func_2_0(8) * occ_func_3_0(5)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_9()
    const {
  return (occ_func_2_0(4) * occ_func_3_0(9)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_10()
    const {
  return (occ_func_2_0(10) * occ_func_3_0(13)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_11()
    const {
  return (occ_func_2_0(12) * occ_func_3_0(11)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_12()
    const {
  return (occ_func_2_0(12) * occ_func_3_0(11)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_23_0_at_13()
    const {
  return (occ_func_2_0(10) * occ_func_3_0(13)) / 6.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(7)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(6)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(9)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(8)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(3)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(2)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(5)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(4)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(13)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(12)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(11)) /
         6.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_23_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(10)) /
         6.;
}

/**** Basis functions for orbit 24****
-0.6666667 -0.3333333 -0.2500000 Va  O

0.3333333 -0.3333333 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_24_0() const {
  return (occ_func_3_0(31) * occ_func_2_0(6) +
          occ_func_3_0(47) * occ_func_2_0(12) +
          occ_func_3_0(43) * occ_func_2_0(4) +
          occ_func_3_0(52) * occ_func_2_0(11) +
          occ_func_3_0(40) * occ_func_2_0(3) +
          occ_func_3_0(36) * occ_func_2_0(9) +
          occ_func_3_0(35) * occ_func_2_0(8) +
          occ_func_3_0(39) * occ_func_2_0(2) +
          occ_func_3_0(51) * occ_func_2_0(10) +
          occ_func_3_0(32) * occ_func_2_0(7) +
          occ_func_3_0(44) * occ_func_2_0(5) +
          occ_func_3_0(48) * occ_func_2_0(13)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_31()
    const {
  return (occ_func_3_0(31) * occ_func_2_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_2()
    const {
  return (occ_func_3_0(39) * occ_func_2_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_3()
    const {
  return (occ_func_3_0(40) * occ_func_2_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_32()
    const {
  return (occ_func_3_0(32) * occ_func_2_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_35()
    const {
  return (occ_func_3_0(35) * occ_func_2_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_4()
    const {
  return (occ_func_3_0(43) * occ_func_2_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_5()
    const {
  return (occ_func_3_0(44) * occ_func_2_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_36()
    const {
  return (occ_func_3_0(36) * occ_func_2_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_39()
    const {
  return (occ_func_3_0(39) * occ_func_2_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_6()
    const {
  return (occ_func_3_0(31) * occ_func_2_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_7()
    const {
  return (occ_func_3_0(32) * occ_func_2_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_40()
    const {
  return (occ_func_3_0(40) * occ_func_2_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_43()
    const {
  return (occ_func_3_0(43) * occ_func_2_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_8()
    const {
  return (occ_func_3_0(35) * occ_func_2_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_9()
    const {
  return (occ_func_3_0(36) * occ_func_2_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_44()
    const {
  return (occ_func_3_0(44) * occ_func_2_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_47()
    const {
  return (occ_func_3_0(47) * occ_func_2_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_10()
    const {
  return (occ_func_3_0(51) * occ_func_2_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_11()
    const {
  return (occ_func_3_0(52) * occ_func_2_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_48()
    const {
  return (occ_func_3_0(48) * occ_func_2_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_51()
    const {
  return (occ_func_3_0(51) * occ_func_2_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_12()
    const {
  return (occ_func_3_0(47) * occ_func_2_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_13()
    const {
  return (occ_func_3_0(48) * occ_func_2_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_24_0_at_52()
    const {
  return (occ_func_3_0(52) * occ_func_2_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(6)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(39)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(40)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(7)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(8)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(43)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(44)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(9)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(2)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(31)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(32)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(3)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(4)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(35)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(36)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(5)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(12)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(51)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(52)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(13)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(10)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(47)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(48)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_24_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(11)) /
         12.;
}

/**** Basis functions for orbit 25****
-1.6666667 -0.3333333 0.2500000 Va  O

-0.6666667 -0.3333333 0.7500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_25_0() const {
  return (occ_func_2_0(18) * occ_func_3_0(3) +
          occ_func_2_0(24) * occ_func_3_0(11) +
          occ_func_2_0(26) * occ_func_3_0(9) +
          occ_func_2_0(27) * occ_func_3_0(12) +
          occ_func_2_0(25) * occ_func_3_0(6) +
          occ_func_2_0(19) * occ_func_3_0(4) +
          occ_func_2_0(18) * occ_func_3_0(5) +
          occ_func_2_0(24) * occ_func_3_0(7) +
          occ_func_2_0(26) * occ_func_3_0(13) +
          occ_func_2_0(19) * occ_func_3_0(2) +
          occ_func_2_0(27) * occ_func_3_0(8) +
          occ_func_2_0(25) * occ_func_3_0(10)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_18()
    const {
  return (occ_func_2_0(18) * occ_func_3_0(3) +
          occ_func_2_0(18) * occ_func_3_0(5)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_19()
    const {
  return (occ_func_2_0(19) * occ_func_3_0(4) +
          occ_func_2_0(19) * occ_func_3_0(2)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_2()
    const {
  return (occ_func_2_0(19) * occ_func_3_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_3()
    const {
  return (occ_func_2_0(18) * occ_func_3_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_4()
    const {
  return (occ_func_2_0(19) * occ_func_3_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_5()
    const {
  return (occ_func_2_0(18) * occ_func_3_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_6()
    const {
  return (occ_func_2_0(25) * occ_func_3_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_7()
    const {
  return (occ_func_2_0(24) * occ_func_3_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_8()
    const {
  return (occ_func_2_0(27) * occ_func_3_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_9()
    const {
  return (occ_func_2_0(26) * occ_func_3_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_24()
    const {
  return (occ_func_2_0(24) * occ_func_3_0(11) +
          occ_func_2_0(24) * occ_func_3_0(7)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_25()
    const {
  return (occ_func_2_0(25) * occ_func_3_0(6) +
          occ_func_2_0(25) * occ_func_3_0(10)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_10()
    const {
  return (occ_func_2_0(25) * occ_func_3_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_11()
    const {
  return (occ_func_2_0(24) * occ_func_3_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_12()
    const {
  return (occ_func_2_0(27) * occ_func_3_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_13()
    const {
  return (occ_func_2_0(26) * occ_func_3_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_26()
    const {
  return (occ_func_2_0(26) * occ_func_3_0(9) +
          occ_func_2_0(26) * occ_func_3_0(13)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_25_0_at_27()
    const {
  return (occ_func_2_0(27) * occ_func_3_0(12) +
          occ_func_2_0(27) * occ_func_3_0(8)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_18(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(3) + occ_func_3_0(5)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_19(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(4) + occ_func_3_0(2)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(19)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(18)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(19)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(18)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(25)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(24)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(27)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(26)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_24(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(11) + occ_func_3_0(7)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_25(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(6) + occ_func_3_0(10)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(25)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(24)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(27)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(26)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_26(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(9) + occ_func_3_0(13)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_25_0_at_27(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(12) + occ_func_3_0(8)) / 12.;
}

/**** Basis functions for orbit 26****
-0.6666667 -1.3333333 0.2500000 Va  O

-0.6666667 -0.3333333 0.7500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_26_0() const {
  return (occ_func_2_0(20) * occ_func_3_0(3) +
          occ_func_2_0(28) * occ_func_3_0(11) +
          occ_func_2_0(22) * occ_func_3_0(9) +
          occ_func_2_0(29) * occ_func_3_0(12) +
          occ_func_2_0(21) * occ_func_3_0(6) +
          occ_func_2_0(23) * occ_func_3_0(4) +
          occ_func_2_0(22) * occ_func_3_0(5) +
          occ_func_2_0(20) * occ_func_3_0(7) +
          occ_func_2_0(28) * occ_func_3_0(13) +
          occ_func_2_0(21) * occ_func_3_0(2) +
          occ_func_2_0(23) * occ_func_3_0(8) +
          occ_func_2_0(29) * occ_func_3_0(10)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_20()
    const {
  return (occ_func_2_0(20) * occ_func_3_0(3) +
          occ_func_2_0(20) * occ_func_3_0(7)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_21()
    const {
  return (occ_func_2_0(21) * occ_func_3_0(6) +
          occ_func_2_0(21) * occ_func_3_0(2)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_2()
    const {
  return (occ_func_2_0(21) * occ_func_3_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_3()
    const {
  return (occ_func_2_0(20) * occ_func_3_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_4()
    const {
  return (occ_func_2_0(23) * occ_func_3_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_5()
    const {
  return (occ_func_2_0(22) * occ_func_3_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_22()
    const {
  return (occ_func_2_0(22) * occ_func_3_0(9) +
          occ_func_2_0(22) * occ_func_3_0(5)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_23()
    const {
  return (occ_func_2_0(23) * occ_func_3_0(4) +
          occ_func_2_0(23) * occ_func_3_0(8)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_6()
    const {
  return (occ_func_2_0(21) * occ_func_3_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_7()
    const {
  return (occ_func_2_0(20) * occ_func_3_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_8()
    const {
  return (occ_func_2_0(23) * occ_func_3_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_9()
    const {
  return (occ_func_2_0(22) * occ_func_3_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_10()
    const {
  return (occ_func_2_0(29) * occ_func_3_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_11()
    const {
  return (occ_func_2_0(28) * occ_func_3_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_12()
    const {
  return (occ_func_2_0(29) * occ_func_3_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_13()
    const {
  return (occ_func_2_0(28) * occ_func_3_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_28()
    const {
  return (occ_func_2_0(28) * occ_func_3_0(11) +
          occ_func_2_0(28) * occ_func_3_0(13)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_26_0_at_29()
    const {
  return (occ_func_2_0(29) * occ_func_3_0(12) +
          occ_func_2_0(29) * occ_func_3_0(10)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_20(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(3) + occ_func_3_0(7)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_21(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(6) + occ_func_3_0(2)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(21)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(20)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(23)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(22)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_22(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(9) + occ_func_3_0(5)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_23(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(4) + occ_func_3_0(8)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(21)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(20)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(23)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(22)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(29)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(28)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(29)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(28)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_28(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(11) + occ_func_3_0(13)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_26_0_at_29(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(12) + occ_func_3_0(10)) / 12.;
}

/**** Basis functions for orbit 27****
-1.6666667 -0.3333333 0.2500000 Va  O

-0.6666667 -0.3333333 -0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_27_0() const {
  return (occ_func_2_0(18) * occ_func_3_0(31) +
          occ_func_2_0(24) * occ_func_3_0(47) +
          occ_func_2_0(26) * occ_func_3_0(43) +
          occ_func_2_0(27) * occ_func_3_0(52) +
          occ_func_2_0(25) * occ_func_3_0(40) +
          occ_func_2_0(19) * occ_func_3_0(36) +
          occ_func_2_0(18) * occ_func_3_0(35) +
          occ_func_2_0(24) * occ_func_3_0(39) +
          occ_func_2_0(26) * occ_func_3_0(51) +
          occ_func_2_0(19) * occ_func_3_0(32) +
          occ_func_2_0(27) * occ_func_3_0(44) +
          occ_func_2_0(25) * occ_func_3_0(48)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_18()
    const {
  return (occ_func_2_0(18) * occ_func_3_0(31) +
          occ_func_2_0(18) * occ_func_3_0(35)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_19()
    const {
  return (occ_func_2_0(19) * occ_func_3_0(36) +
          occ_func_2_0(19) * occ_func_3_0(32)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_31()
    const {
  return (occ_func_2_0(18) * occ_func_3_0(31)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_32()
    const {
  return (occ_func_2_0(19) * occ_func_3_0(32)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_35()
    const {
  return (occ_func_2_0(18) * occ_func_3_0(35)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_36()
    const {
  return (occ_func_2_0(19) * occ_func_3_0(36)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_39()
    const {
  return (occ_func_2_0(24) * occ_func_3_0(39)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_40()
    const {
  return (occ_func_2_0(25) * occ_func_3_0(40)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_43()
    const {
  return (occ_func_2_0(26) * occ_func_3_0(43)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_44()
    const {
  return (occ_func_2_0(27) * occ_func_3_0(44)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_24()
    const {
  return (occ_func_2_0(24) * occ_func_3_0(47) +
          occ_func_2_0(24) * occ_func_3_0(39)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_25()
    const {
  return (occ_func_2_0(25) * occ_func_3_0(40) +
          occ_func_2_0(25) * occ_func_3_0(48)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_47()
    const {
  return (occ_func_2_0(24) * occ_func_3_0(47)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_48()
    const {
  return (occ_func_2_0(25) * occ_func_3_0(48)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_51()
    const {
  return (occ_func_2_0(26) * occ_func_3_0(51)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_52()
    const {
  return (occ_func_2_0(27) * occ_func_3_0(52)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_26()
    const {
  return (occ_func_2_0(26) * occ_func_3_0(43) +
          occ_func_2_0(26) * occ_func_3_0(51)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_27_0_at_27()
    const {
  return (occ_func_2_0(27) * occ_func_3_0(52) +
          occ_func_2_0(27) * occ_func_3_0(44)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_18(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(31) + occ_func_3_0(35)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_19(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(36) + occ_func_3_0(32)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(18)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(19)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(18)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(19)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(24)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(25)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(26)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(27)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_24(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(47) + occ_func_3_0(39)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_25(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(40) + occ_func_3_0(48)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(24)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(25)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(26)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(27)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_26(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(43) + occ_func_3_0(51)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_27_0_at_27(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(52) + occ_func_3_0(44)) / 12.;
}

/**** Basis functions for orbit 28****
-0.6666667 -1.3333333 0.2500000 Va  O

-0.6666667 -0.3333333 -0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_28_0() const {
  return (occ_func_2_0(20) * occ_func_3_0(31) +
          occ_func_2_0(28) * occ_func_3_0(47) +
          occ_func_2_0(22) * occ_func_3_0(43) +
          occ_func_2_0(29) * occ_func_3_0(52) +
          occ_func_2_0(21) * occ_func_3_0(40) +
          occ_func_2_0(23) * occ_func_3_0(36) +
          occ_func_2_0(22) * occ_func_3_0(35) +
          occ_func_2_0(20) * occ_func_3_0(39) +
          occ_func_2_0(28) * occ_func_3_0(51) +
          occ_func_2_0(21) * occ_func_3_0(32) +
          occ_func_2_0(23) * occ_func_3_0(44) +
          occ_func_2_0(29) * occ_func_3_0(48)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_20()
    const {
  return (occ_func_2_0(20) * occ_func_3_0(31) +
          occ_func_2_0(20) * occ_func_3_0(39)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_21()
    const {
  return (occ_func_2_0(21) * occ_func_3_0(40) +
          occ_func_2_0(21) * occ_func_3_0(32)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_31()
    const {
  return (occ_func_2_0(20) * occ_func_3_0(31)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_32()
    const {
  return (occ_func_2_0(21) * occ_func_3_0(32)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_35()
    const {
  return (occ_func_2_0(22) * occ_func_3_0(35)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_36()
    const {
  return (occ_func_2_0(23) * occ_func_3_0(36)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_22()
    const {
  return (occ_func_2_0(22) * occ_func_3_0(43) +
          occ_func_2_0(22) * occ_func_3_0(35)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_23()
    const {
  return (occ_func_2_0(23) * occ_func_3_0(36) +
          occ_func_2_0(23) * occ_func_3_0(44)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_39()
    const {
  return (occ_func_2_0(20) * occ_func_3_0(39)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_40()
    const {
  return (occ_func_2_0(21) * occ_func_3_0(40)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_43()
    const {
  return (occ_func_2_0(22) * occ_func_3_0(43)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_44()
    const {
  return (occ_func_2_0(23) * occ_func_3_0(44)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_47()
    const {
  return (occ_func_2_0(28) * occ_func_3_0(47)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_48()
    const {
  return (occ_func_2_0(29) * occ_func_3_0(48)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_51()
    const {
  return (occ_func_2_0(28) * occ_func_3_0(51)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_52()
    const {
  return (occ_func_2_0(29) * occ_func_3_0(52)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_28()
    const {
  return (occ_func_2_0(28) * occ_func_3_0(47) +
          occ_func_2_0(28) * occ_func_3_0(51)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_28_0_at_29()
    const {
  return (occ_func_2_0(29) * occ_func_3_0(52) +
          occ_func_2_0(29) * occ_func_3_0(48)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_20(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(31) + occ_func_3_0(39)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_21(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(40) + occ_func_3_0(32)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(20)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(21)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(22)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(23)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_22(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(43) + occ_func_3_0(35)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_23(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(36) + occ_func_3_0(44)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(20)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(21)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(22)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(23)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(28)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(29)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_2_0(28)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(29)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_28(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(47) + occ_func_3_0(51)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_28_0_at_29(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(52) + occ_func_3_0(48)) / 12.;
}

/**** Basis functions for orbit 29****
-0.6666667 -0.3333333 -0.2500000 Va  O

-0.6666667 -0.3333333 0.7500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_29_0() const {
  return (occ_func_3_0(31) * occ_func_3_0(3) +
          occ_func_3_0(47) * occ_func_3_0(11) +
          occ_func_3_0(43) * occ_func_3_0(9) +
          occ_func_3_0(52) * occ_func_3_0(12) +
          occ_func_3_0(40) * occ_func_3_0(6) +
          occ_func_3_0(36) * occ_func_3_0(4) +
          occ_func_3_0(35) * occ_func_3_0(5) +
          occ_func_3_0(39) * occ_func_3_0(7) +
          occ_func_3_0(51) * occ_func_3_0(13) +
          occ_func_3_0(32) * occ_func_3_0(2) +
          occ_func_3_0(44) * occ_func_3_0(8) +
          occ_func_3_0(48) * occ_func_3_0(10)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_31()
    const {
  return (occ_func_3_0(31) * occ_func_3_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_2()
    const {
  return (occ_func_3_0(32) * occ_func_3_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_3()
    const {
  return (occ_func_3_0(31) * occ_func_3_0(3)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_32()
    const {
  return (occ_func_3_0(32) * occ_func_3_0(2)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_35()
    const {
  return (occ_func_3_0(35) * occ_func_3_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_4()
    const {
  return (occ_func_3_0(36) * occ_func_3_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_5()
    const {
  return (occ_func_3_0(35) * occ_func_3_0(5)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_36()
    const {
  return (occ_func_3_0(36) * occ_func_3_0(4)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_39()
    const {
  return (occ_func_3_0(39) * occ_func_3_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_6()
    const {
  return (occ_func_3_0(40) * occ_func_3_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_7()
    const {
  return (occ_func_3_0(39) * occ_func_3_0(7)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_40()
    const {
  return (occ_func_3_0(40) * occ_func_3_0(6)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_43()
    const {
  return (occ_func_3_0(43) * occ_func_3_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_8()
    const {
  return (occ_func_3_0(44) * occ_func_3_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_9()
    const {
  return (occ_func_3_0(43) * occ_func_3_0(9)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_44()
    const {
  return (occ_func_3_0(44) * occ_func_3_0(8)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_47()
    const {
  return (occ_func_3_0(47) * occ_func_3_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_10()
    const {
  return (occ_func_3_0(48) * occ_func_3_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_11()
    const {
  return (occ_func_3_0(47) * occ_func_3_0(11)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_48()
    const {
  return (occ_func_3_0(48) * occ_func_3_0(10)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_51()
    const {
  return (occ_func_3_0(51) * occ_func_3_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_12()
    const {
  return (occ_func_3_0(52) * occ_func_3_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_13()
    const {
  return (occ_func_3_0(51) * occ_func_3_0(13)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_29_0_at_52()
    const {
  return (occ_func_3_0(52) * occ_func_3_0(12)) / 12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(3)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(32)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(31)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(2)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(5)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(36)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(35)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(4)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(7)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(40)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(39)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(6)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(9)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(44)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(43)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(8)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(11)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(48)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(47)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(10)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(13)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(52)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(51)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_29_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_3_0(12)) /
         12.;
}

/**** Basis functions for orbit 30****
-0.6666667 -0.3333333 0.2500000 Va  O

0.3333333 1.6666667 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_30_0() const {
  return (occ_func_2_0(2) * occ_func_2_0(8) +
          occ_func_2_0(10) * occ_func_2_0(2) +
          occ_func_2_0(8) * occ_func_2_0(10) +
          occ_func_2_0(13) * occ_func_2_0(5) +
          occ_func_2_0(7) * occ_func_2_0(13) +
          occ_func_2_0(5) * occ_func_2_0(7) +
          occ_func_2_0(4) * occ_func_2_0(6) +
          occ_func_2_0(6) * occ_func_2_0(12) +
          occ_func_2_0(12) * occ_func_2_0(4) +
          occ_func_2_0(3) * occ_func_2_0(9) +
          occ_func_2_0(9) * occ_func_2_0(11) +
          occ_func_2_0(11) * occ_func_2_0(3)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_2()
    const {
  return (occ_func_2_0(2) * occ_func_2_0(8) +
          occ_func_2_0(10) * occ_func_2_0(2)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_3()
    const {
  return (occ_func_2_0(3) * occ_func_2_0(9) +
          occ_func_2_0(11) * occ_func_2_0(3)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_4()
    const {
  return (occ_func_2_0(4) * occ_func_2_0(6) +
          occ_func_2_0(12) * occ_func_2_0(4)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_5()
    const {
  return (occ_func_2_0(13) * occ_func_2_0(5) +
          occ_func_2_0(5) * occ_func_2_0(7)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_6()
    const {
  return (occ_func_2_0(4) * occ_func_2_0(6) +
          occ_func_2_0(6) * occ_func_2_0(12)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_7()
    const {
  return (occ_func_2_0(7) * occ_func_2_0(13) +
          occ_func_2_0(5) * occ_func_2_0(7)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_8()
    const {
  return (occ_func_2_0(2) * occ_func_2_0(8) +
          occ_func_2_0(8) * occ_func_2_0(10)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_9()
    const {
  return (occ_func_2_0(3) * occ_func_2_0(9) +
          occ_func_2_0(9) * occ_func_2_0(11)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_10()
    const {
  return (occ_func_2_0(10) * occ_func_2_0(2) +
          occ_func_2_0(8) * occ_func_2_0(10)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_11()
    const {
  return (occ_func_2_0(9) * occ_func_2_0(11) +
          occ_func_2_0(11) * occ_func_2_0(3)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_12()
    const {
  return (occ_func_2_0(6) * occ_func_2_0(12) +
          occ_func_2_0(12) * occ_func_2_0(4)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_30_0_at_13()
    const {
  return (occ_func_2_0(13) * occ_func_2_0(5) +
          occ_func_2_0(7) * occ_func_2_0(13)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_2(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(8) + occ_func_2_0(10)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_3(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(9) + occ_func_2_0(11)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_4(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(6) + occ_func_2_0(12)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_5(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(13) + occ_func_2_0(7)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_6(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(4) + occ_func_2_0(12)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_7(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(13) + occ_func_2_0(5)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_8(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(2) + occ_func_2_0(10)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_9(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(3) + occ_func_2_0(11)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_10(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(2) + occ_func_2_0(8)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_11(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(9) + occ_func_2_0(3)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_12(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(6) + occ_func_2_0(4)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_30_0_at_13(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(5) + occ_func_2_0(7)) / 12.;
}

/**** Basis functions for orbit 31****
-0.6666667 -0.3333333 -0.2500000 Va  O

0.3333333 1.6666667 -0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_31_0() const {
  return (occ_func_3_0(31) * occ_func_3_0(43) +
          occ_func_3_0(47) * occ_func_3_0(31) +
          occ_func_3_0(43) * occ_func_3_0(47) +
          occ_func_3_0(52) * occ_func_3_0(36) +
          occ_func_3_0(40) * occ_func_3_0(52) +
          occ_func_3_0(36) * occ_func_3_0(40) +
          occ_func_3_0(35) * occ_func_3_0(39) +
          occ_func_3_0(39) * occ_func_3_0(51) +
          occ_func_3_0(51) * occ_func_3_0(35) +
          occ_func_3_0(32) * occ_func_3_0(44) +
          occ_func_3_0(44) * occ_func_3_0(48) +
          occ_func_3_0(48) * occ_func_3_0(32)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_31()
    const {
  return (occ_func_3_0(31) * occ_func_3_0(43) +
          occ_func_3_0(47) * occ_func_3_0(31)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_32()
    const {
  return (occ_func_3_0(32) * occ_func_3_0(44) +
          occ_func_3_0(48) * occ_func_3_0(32)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_35()
    const {
  return (occ_func_3_0(35) * occ_func_3_0(39) +
          occ_func_3_0(51) * occ_func_3_0(35)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_36()
    const {
  return (occ_func_3_0(52) * occ_func_3_0(36) +
          occ_func_3_0(36) * occ_func_3_0(40)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_39()
    const {
  return (occ_func_3_0(35) * occ_func_3_0(39) +
          occ_func_3_0(39) * occ_func_3_0(51)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_40()
    const {
  return (occ_func_3_0(40) * occ_func_3_0(52) +
          occ_func_3_0(36) * occ_func_3_0(40)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_43()
    const {
  return (occ_func_3_0(31) * occ_func_3_0(43) +
          occ_func_3_0(43) * occ_func_3_0(47)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_44()
    const {
  return (occ_func_3_0(32) * occ_func_3_0(44) +
          occ_func_3_0(44) * occ_func_3_0(48)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_47()
    const {
  return (occ_func_3_0(47) * occ_func_3_0(31) +
          occ_func_3_0(43) * occ_func_3_0(47)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_48()
    const {
  return (occ_func_3_0(44) * occ_func_3_0(48) +
          occ_func_3_0(48) * occ_func_3_0(32)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_51()
    const {
  return (occ_func_3_0(39) * occ_func_3_0(51) +
          occ_func_3_0(51) * occ_func_3_0(35)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_31_0_at_52()
    const {
  return (occ_func_3_0(52) * occ_func_3_0(36) +
          occ_func_3_0(40) * occ_func_3_0(52)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_31(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(43) + occ_func_3_0(47)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_32(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(44) + occ_func_3_0(48)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_35(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(39) + occ_func_3_0(51)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_36(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(52) + occ_func_3_0(40)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_39(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(35) + occ_func_3_0(51)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_40(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(52) + occ_func_3_0(36)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_43(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(31) + occ_func_3_0(47)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_44(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(32) + occ_func_3_0(48)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_47(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(31) + occ_func_3_0(43)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_48(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(44) + occ_func_3_0(32)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_51(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_3_0(39) + occ_func_3_0(35)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_31_0_at_52(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_3_0(36) + occ_func_3_0(40)) / 12.;
}

/**** Basis functions for orbit 32****
-1.6666667 -0.3333333 0.2500000 Va  O

-0.6666667 -1.3333333 0.2500000 Va  O

****/
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::eval_bfunc_32_0() const {
  return (occ_func_2_0(18) * occ_func_2_0(20) +
          occ_func_2_0(24) * occ_func_2_0(28) +
          occ_func_2_0(26) * occ_func_2_0(22) +
          occ_func_2_0(27) * occ_func_2_0(29) +
          occ_func_2_0(25) * occ_func_2_0(21) +
          occ_func_2_0(19) * occ_func_2_0(23) +
          occ_func_2_0(18) * occ_func_2_0(22) +
          occ_func_2_0(24) * occ_func_2_0(20) +
          occ_func_2_0(26) * occ_func_2_0(28) +
          occ_func_2_0(19) * occ_func_2_0(21) +
          occ_func_2_0(27) * occ_func_2_0(23) +
          occ_func_2_0(25) * occ_func_2_0(29)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_18()
    const {
  return (occ_func_2_0(18) * occ_func_2_0(20) +
          occ_func_2_0(18) * occ_func_2_0(22)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_19()
    const {
  return (occ_func_2_0(19) * occ_func_2_0(23) +
          occ_func_2_0(19) * occ_func_2_0(21)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_20()
    const {
  return (occ_func_2_0(18) * occ_func_2_0(20) +
          occ_func_2_0(24) * occ_func_2_0(20)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_21()
    const {
  return (occ_func_2_0(25) * occ_func_2_0(21) +
          occ_func_2_0(19) * occ_func_2_0(21)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_22()
    const {
  return (occ_func_2_0(26) * occ_func_2_0(22) +
          occ_func_2_0(18) * occ_func_2_0(22)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_23()
    const {
  return (occ_func_2_0(19) * occ_func_2_0(23) +
          occ_func_2_0(27) * occ_func_2_0(23)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_24()
    const {
  return (occ_func_2_0(24) * occ_func_2_0(28) +
          occ_func_2_0(24) * occ_func_2_0(20)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_25()
    const {
  return (occ_func_2_0(25) * occ_func_2_0(21) +
          occ_func_2_0(25) * occ_func_2_0(29)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_26()
    const {
  return (occ_func_2_0(26) * occ_func_2_0(22) +
          occ_func_2_0(26) * occ_func_2_0(28)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_27()
    const {
  return (occ_func_2_0(27) * occ_func_2_0(29) +
          occ_func_2_0(27) * occ_func_2_0(23)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_28()
    const {
  return (occ_func_2_0(24) * occ_func_2_0(28) +
          occ_func_2_0(26) * occ_func_2_0(28)) /
         12.;
}
template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_eval_bfunc_32_0_at_29()
    const {
  return (occ_func_2_0(27) * occ_func_2_0(29) +
          occ_func_2_0(25) * occ_func_2_0(29)) /
         12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_18(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(20) + occ_func_2_0(22)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_19(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(23) + occ_func_2_0(21)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_20(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(18) + occ_func_2_0(24)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_21(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(25) + occ_func_2_0(19)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_22(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(26) + occ_func_2_0(18)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_23(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(19) + occ_func_2_0(27)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_24(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(28) + occ_func_2_0(20)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_25(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(21) + occ_func_2_0(29)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_26(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(22) + occ_func_2_0(28)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_27(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(29) + occ_func_2_0(23)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_28(
    int occ_i, int occ_f) const {
  return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) *
         (occ_func_2_0(24) + occ_func_2_0(26)) / 12.;
}

template <typename Scalar>
Scalar LocalOccClexulatorZrOTest_Clexulator_hop0_0::site_deval_bfunc_32_0_at_29(
    int occ_i, int occ_f) const {
  return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) *
         (occ_func_2_0(27) + occ_func_2_0(25)) / 12.;
}

}  // namespace clexulator
}  // namespace CASM

extern "C" {
/// \brief Returns a clexulator::BaseClexulator* owning a
/// LocalOccClexulatorZrOTest_Clexulator_hop0_0
CASM::clexulator::BaseClexulator *
make_LocalOccClexulatorZrOTest_Clexulator_hop0_0() {
  return new CASM::clexulator::LocalOccClexulatorZrOTest_Clexulator_hop0_0();
}
}
