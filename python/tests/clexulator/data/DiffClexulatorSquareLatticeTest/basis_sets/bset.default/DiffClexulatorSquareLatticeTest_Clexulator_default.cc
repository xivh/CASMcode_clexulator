#include <cstddef>
#include "casm/clexulator/BaseClexulator.hh"
#include "casm/global/eigen.hh"
#include "casm/clexulator/DiffClexParamPack.hh"




/****** PROJECT SPECIFICATIONS ******

         ****** prim.json ******

{
  "basis" : [
    {
      "coordinate" : [ 0.000000000000, 0.000000000000, 0.000000000000 ],
      "dofs" : {
        "disp" : {
          "axis_names" : [ "dx", "dy", "dz" ],
          "basis" : [
            [ 1.000000000000, 0.000000000000, 0.000000000000 ],
            [ 0.000000000000, 1.000000000000, 0.000000000000 ],
            [ 0.000000000000, 0.000000000000, 1.000000000000 ]
          ]
        }
      },
      "occupants" : [ "A" ]
    }
  ],
  "coordinate_mode" : "Fractional",
  "lattice_vectors" : [
    [ 3.000000000000, 0.000000000000, 0.000000000000 ],
    [ 0.000000000000, 3.000000000000, 0.000000000000 ],
    [ 0.000000000000, 0.000000000000, 10.000000000000 ]
  ],
  "title" : "DiffClexulatorSquareLatticeTest"
}

        ****** bspecs.json ******

{
  "basis_function_specs" : {
    "dofs" : [ "disp" ],
    "global_max_poly_order" : 5,
    "param_pack_type" : "DIFF"
  },
  "cluster_specs" : {
    "method" : "periodic_max_length",
    "params" : {
      "generating_group" : [ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 ],
      "orbit_branch_specs" : {
        "0" : {
          "max_length" : 0.000000000000
        },
        "1" : {
          "max_length" : 3.010000000000
        }
      }
    }
  }
}

**/


/// \brief Returns a clexulator::BaseClexulator* owning a DiffClexulatorSquareLatticeTest_Clexulator_default
extern "C" CASM::clexulator::BaseClexulator *make_DiffClexulatorSquareLatticeTest_Clexulator_default();

namespace CASM {
namespace clexulator {

  /****** GENERATED CLEXPARAMPACK DEFINITION ******/


  typedef DiffClexParamPack ParamPack;


  /****** GENERATED CLEXULATOR DEFINITION ******/

  class DiffClexulatorSquareLatticeTest_Clexulator_default : public clexulator::BaseClexulator {

  public:

    DiffClexulatorSquareLatticeTest_Clexulator_default();

    ~DiffClexulatorSquareLatticeTest_Clexulator_default();

    ClexParamPack const &param_pack() const override {
      return m_params;
    }

    ClexParamPack &param_pack() override {
      return m_params;
    }


    template<typename Scalar>
    Scalar eval_bfunc_0_0() const;

    template<typename Scalar>
    Scalar eval_bfunc_1_0() const;
    template<typename Scalar>
    Scalar eval_bfunc_1_1() const;
    template<typename Scalar>
    Scalar eval_bfunc_1_2() const;
    template<typename Scalar>
    Scalar eval_bfunc_1_3() const;
    template<typename Scalar>
    Scalar eval_bfunc_1_4() const;
    template<typename Scalar>
    Scalar eval_bfunc_1_5() const;

    template<typename Scalar>
    Scalar site_eval_bfunc_1_0_at_0() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_1_1_at_0() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_1_2_at_0() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_1_3_at_0() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_1_4_at_0() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_1_5_at_0() const;


  private:

    // ParamPack object, which stores temporary data for calculations
    mutable ParamPack m_params;

    // typedef for method pointers of scalar type double
    typedef double (DiffClexulatorSquareLatticeTest_Clexulator_default::*BasisFuncPtr_0)() const;

    // typedef for method pointers
    typedef double (DiffClexulatorSquareLatticeTest_Clexulator_default::*DeltaBasisFuncPtr_0)(int, int) const;

    // array of pointers to member functions for calculating basis functions of scalar type double
    BasisFuncPtr_0 m_orbit_func_table_0[7];

    // array of pointers to member functions for calculating flower functions of scalar type double
    BasisFuncPtr_0 m_flower_func_table_0[1][7];

    // array of pointers to member functions for calculating DELTA flower functions of scalar type double
    DeltaBasisFuncPtr_0 m_delta_func_table_0[1][7];

    // typedef for method pointers of scalar type ParamPack::DiffScalar
    typedef ParamPack::DiffScalar (DiffClexulatorSquareLatticeTest_Clexulator_default::*BasisFuncPtr_1)() const;

    // typedef for method pointers
    typedef ParamPack::DiffScalar (DiffClexulatorSquareLatticeTest_Clexulator_default::*DeltaBasisFuncPtr_1)(int, int) const;

    // array of pointers to member functions for calculating basis functions of scalar type ParamPack::DiffScalar
    BasisFuncPtr_1 m_orbit_func_table_1[7];

    // array of pointers to member functions for calculating flower functions of scalar type ParamPack::DiffScalar
    BasisFuncPtr_1 m_flower_func_table_1[1][7];

    // array of pointers to member functions for calculating DELTA flower functions of scalar type ParamPack::DiffScalar
    DeltaBasisFuncPtr_1 m_delta_func_table_1[1][7];

    //ClexParamPack allocation for evaluated correlations 
    ParamPack::Key m_corr_param_key;
    //ClexParamPack allocation for DoF disp
    ParamPack::Key m_disp_var_param_key;

    /// \brief Clone the DiffClexulatorSquareLatticeTest_Clexulator_default
    BaseClexulator *_clone() const override {
      return new DiffClexulatorSquareLatticeTest_Clexulator_default(*this);
    }

    /// \brief Calculate contribution to global correlations from one unit cell
    /// Result is recorded in ClexParamPack
    void _calc_global_corr_contribution() const override;

    /// \brief Calculate contribution to global correlations from one unit cell     /// Result is recorded in double array starting at corr_begin
    void _calc_global_corr_contribution(double *corr_begin) const override;

    /// \brief Calculate contribution to select global correlations from one unit cell into ClexParamPack
    /// Result is recorded in ClexParamPack
    void _calc_restricted_global_corr_contribution(size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    /// \brief Calculate contribution to select global correlations from one unit cell
    /// Result is recorded in double array starting at corr_begin
    void _calc_restricted_global_corr_contribution(double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    /// \brief Calculate point correlations about neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in ClexParamPack
    void _calc_point_corr(int nlist_ind) const override;

    /// \brief Calculate point correlations about neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in double array starting at corr_begin
    void _calc_point_corr(int nlist_ind, double *corr_begin) const override;

    /// \brief Calculate select point correlations about neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in ClexParamPack
    void _calc_restricted_point_corr(int nlist_ind, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    /// \brief Calculate select point correlations about neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in double array starting at corr_begin
    void _calc_restricted_point_corr(int nlist_ind, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    /// \brief Calculate the change in point correlations due to changing an occupant at neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in ClexParamPack
    void _calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f) const override;

    /// \brief Calculate the change in point correlations due to changing an occupant at neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in double array starting at corr_begin
    void _calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin) const override;

    /// \brief Calculate the change in select point correlations due to changing an occupant at neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in ClexParamPack
    void _calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    /// \brief Calculate the change in select point correlations due to changing an occupant at neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in double array starting at corr_begin
    void _calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    template<typename Scalar>
    void _global_prepare() const;

    template<typename Scalar>
    void _point_prepare(int nlist_ind) const;

    // disp evaluators and accessors for basis site 0:
    double eval_disp_var_0_0(const int &nlist_ind) const {
      return m_local_dof_ptrs[m_disp_var_param_key.index()]->col(_l(nlist_ind))[0];
    }

    double eval_disp_var_0_1(const int &nlist_ind) const {
      return m_local_dof_ptrs[m_disp_var_param_key.index()]->col(_l(nlist_ind))[1];
    }

    double eval_disp_var_0_2(const int &nlist_ind) const {
      return m_local_dof_ptrs[m_disp_var_param_key.index()]->col(_l(nlist_ind))[2];
    }

    template<typename Scalar>
    Scalar const &disp_var_0(const int &nlist_ind) const {
      return ParamPack::Val<Scalar>::get(m_params, m_disp_var_param_key, 0, nlist_ind);
    }
    template<typename Scalar>
    Scalar const &disp_var_1(const int &nlist_ind) const {
      return ParamPack::Val<Scalar>::get(m_params, m_disp_var_param_key, 1, nlist_ind);
    }
    template<typename Scalar>
    Scalar const &disp_var_2(const int &nlist_ind) const {
      return ParamPack::Val<Scalar>::get(m_params, m_disp_var_param_key, 2, nlist_ind);
    }
    //default functions for basis function evaluation
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

  DiffClexulatorSquareLatticeTest_Clexulator_default::DiffClexulatorSquareLatticeTest_Clexulator_default() :
    BaseClexulator(1, 7, 1) {
    m_disp_var_param_key = m_params.allocate("disp_var", 3, 1, true);
    _register_local_dof("disp", m_disp_var_param_key.index());


    m_corr_param_key = m_params.allocate("corr", corr_size(), 1, false);

    m_orbit_func_table_0[0] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_0_0<double>;
    m_orbit_func_table_0[1] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_0<double>;
    m_orbit_func_table_0[2] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_1<double>;
    m_orbit_func_table_0[3] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_2<double>;
    m_orbit_func_table_0[4] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_3<double>;
    m_orbit_func_table_0[5] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_4<double>;
    m_orbit_func_table_0[6] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_5<double>;


    m_flower_func_table_0[0][0] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<double>;
    m_flower_func_table_0[0][1] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_0_at_0<double>;
    m_flower_func_table_0[0][2] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_1_at_0<double>;
    m_flower_func_table_0[0][3] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_2_at_0<double>;
    m_flower_func_table_0[0][4] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_3_at_0<double>;
    m_flower_func_table_0[0][5] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_4_at_0<double>;
    m_flower_func_table_0[0][6] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_5_at_0<double>;


    m_delta_func_table_0[0][0] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<double>;
    m_delta_func_table_0[0][1] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<double>;
    m_delta_func_table_0[0][2] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<double>;
    m_delta_func_table_0[0][3] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<double>;
    m_delta_func_table_0[0][4] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<double>;
    m_delta_func_table_0[0][5] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<double>;
    m_delta_func_table_0[0][6] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<double>;


    m_orbit_func_table_1[0] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_0_0<ParamPack::DiffScalar>;
    m_orbit_func_table_1[1] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_0<ParamPack::DiffScalar>;
    m_orbit_func_table_1[2] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_1<ParamPack::DiffScalar>;
    m_orbit_func_table_1[3] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_2<ParamPack::DiffScalar>;
    m_orbit_func_table_1[4] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_3<ParamPack::DiffScalar>;
    m_orbit_func_table_1[5] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_4<ParamPack::DiffScalar>;
    m_orbit_func_table_1[6] = &DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_5<ParamPack::DiffScalar>;


    m_flower_func_table_1[0][0] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<ParamPack::DiffScalar>;
    m_flower_func_table_1[0][1] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_0_at_0<ParamPack::DiffScalar>;
    m_flower_func_table_1[0][2] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_1_at_0<ParamPack::DiffScalar>;
    m_flower_func_table_1[0][3] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_2_at_0<ParamPack::DiffScalar>;
    m_flower_func_table_1[0][4] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_3_at_0<ParamPack::DiffScalar>;
    m_flower_func_table_1[0][5] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_4_at_0<ParamPack::DiffScalar>;
    m_flower_func_table_1[0][6] = &DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_5_at_0<ParamPack::DiffScalar>;


    m_delta_func_table_1[0][0] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<ParamPack::DiffScalar>;
    m_delta_func_table_1[0][1] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<ParamPack::DiffScalar>;
    m_delta_func_table_1[0][2] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<ParamPack::DiffScalar>;
    m_delta_func_table_1[0][3] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<ParamPack::DiffScalar>;
    m_delta_func_table_1[0][4] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<ParamPack::DiffScalar>;
    m_delta_func_table_1[0][5] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<ParamPack::DiffScalar>;
    m_delta_func_table_1[0][6] = &DiffClexulatorSquareLatticeTest_Clexulator_default::zero_func<ParamPack::DiffScalar>;


    m_weight_matrix.row(0) << 1, 0, 0;
    m_weight_matrix.row(1) << 0, 1, 0;
    m_weight_matrix.row(2) << 0, 0, 11;

    m_sublat_indices = std::set<int>{0};

    m_n_sublattices = 1;

    m_neighborhood = std::set<xtal::UnitCell> {
      xtal::UnitCell(0, 0, 0)
    };


    m_orbit_neighborhood.resize(corr_size());
    m_orbit_site_neighborhood.resize(corr_size());
    m_orbit_neighborhood[1] = std::set<xtal::UnitCell> {
      xtal::UnitCell(0, 0, 0)
    };
    m_orbit_neighborhood[2] = m_orbit_neighborhood[1];
    m_orbit_neighborhood[3] = m_orbit_neighborhood[1];
    m_orbit_neighborhood[4] = m_orbit_neighborhood[1];
    m_orbit_neighborhood[5] = m_orbit_neighborhood[1];
    m_orbit_neighborhood[6] = m_orbit_neighborhood[1];

    m_orbit_site_neighborhood[1] = std::set<xtal::UnitCellCoord> {
      xtal::UnitCellCoord(0, 0, 0, 0)
    };
    m_orbit_site_neighborhood[2] = m_orbit_site_neighborhood[1];
    m_orbit_site_neighborhood[3] = m_orbit_site_neighborhood[1];
    m_orbit_site_neighborhood[4] = m_orbit_site_neighborhood[1];
    m_orbit_site_neighborhood[5] = m_orbit_site_neighborhood[1];
    m_orbit_site_neighborhood[6] = m_orbit_site_neighborhood[1];

  }


  DiffClexulatorSquareLatticeTest_Clexulator_default::~DiffClexulatorSquareLatticeTest_Clexulator_default() {
    //nothing here for now
  }

  /// \brief Calculate contribution to global correlations from one unit cell
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_global_corr_contribution(double *corr_begin) const {
    _calc_global_corr_contribution();
    for(size_type i = 0; i < corr_size(); i++) {
      *(corr_begin + i) = ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
    }
  }

  /// \brief Calculate contribution to global correlations from one unit cell
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_global_corr_contribution() const {
    m_params.pre_eval();
    if(m_params.eval_mode() == ParamPack::DEFAULT)    {
      _global_prepare<double>();
      for(size_type i = 0; i < corr_size(); i++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, i, (this->*m_orbit_func_table_0[i])());
      }
    }
    else if(m_params.eval_mode() == ParamPack::DIFF)    {
      _global_prepare<ParamPack::DiffScalar>();
      for(size_type i = 0; i < corr_size(); i++) {
        ParamPack::Val<ParamPack::DiffScalar>::set(m_params, m_corr_param_key, i, (this->*m_orbit_func_table_1[i])());
      }
    }
    m_params.post_eval();
  }

  /// \brief Calculate contribution to select global correlations from one unit cell
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_restricted_global_corr_contribution(double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const {
    _calc_restricted_global_corr_contribution(ind_list_begin, ind_list_end);
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
    }
  }

  /// \brief Calculate contribution to select global correlations from one unit cell
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_restricted_global_corr_contribution(size_type const *ind_list_begin, size_type const *ind_list_end) const {
    m_params.pre_eval();
    if(m_params.eval_mode() == ParamPack::DEFAULT)    {
      _global_prepare<double>();
      for(; ind_list_begin < ind_list_end; ind_list_begin++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_orbit_func_table_0[*ind_list_begin])());
      }
    }
    else if(m_params.eval_mode() == ParamPack::DIFF)    {
      _global_prepare<ParamPack::DiffScalar>();
      for(; ind_list_begin < ind_list_end; ind_list_begin++) {
        ParamPack::Val<ParamPack::DiffScalar>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_orbit_func_table_1[*ind_list_begin])());
      }
    }
    m_params.post_eval();
  }

  /// \brief Calculate point correlations about basis site 'nlist_ind'
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_point_corr(int nlist_ind, double *corr_begin) const {
    _calc_point_corr(nlist_ind);
    for(size_type i = 0; i < corr_size(); i++) {
      *(corr_begin + i) = ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
    }
  }

  /// \brief Calculate point correlations about basis site 'nlist_ind'
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_point_corr(int nlist_ind) const {
    m_params.pre_eval();
    if(m_params.eval_mode() == ParamPack::DEFAULT)    {
      _point_prepare<double>(nlist_ind);
      for(size_type i = 0; i < corr_size(); i++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, i, (this->*m_flower_func_table_0[nlist_ind][i])());
      }
    }
    else if(m_params.eval_mode() == ParamPack::DIFF)    {
      _point_prepare<ParamPack::DiffScalar>(nlist_ind);
      for(size_type i = 0; i < corr_size(); i++) {
        ParamPack::Val<ParamPack::DiffScalar>::set(m_params, m_corr_param_key, i, (this->*m_flower_func_table_1[nlist_ind][i])());
      }
    }
    m_params.post_eval();
  }

  /// \brief Calculate select point correlations about basis site 'nlist_ind'
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_restricted_point_corr(int nlist_ind, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const {
    _calc_restricted_point_corr(nlist_ind, ind_list_begin, ind_list_end);
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
    }
  }

  /// \brief Calculate select point correlations about basis site 'nlist_ind'
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_restricted_point_corr(int nlist_ind, size_type const *ind_list_begin, size_type const *ind_list_end) const {
    m_params.pre_eval();
    if(m_params.eval_mode() == ParamPack::DEFAULT)    {
      _point_prepare<double>(nlist_ind);
      for(; ind_list_begin < ind_list_end; ind_list_begin++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_flower_func_table_0[nlist_ind][*ind_list_begin])());
      }
    }
    else if(m_params.eval_mode() == ParamPack::DIFF)    {
      _point_prepare<ParamPack::DiffScalar>(nlist_ind);
      for(; ind_list_begin < ind_list_end; ind_list_begin++) {
        ParamPack::Val<ParamPack::DiffScalar>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_flower_func_table_1[nlist_ind][*ind_list_begin])());
      }
    }
    m_params.post_eval();
  }

  /// \brief Calculate the change in point correlations due to changing an occupant
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin) const {
    _calc_delta_point_corr(nlist_ind, occ_i, occ_f);
    for(size_type i = 0; i < corr_size(); i++) {
      *(corr_begin + i) = ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
    }
  }

  /// \brief Calculate the change in point correlations due to changing an occupant
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f) const {
    m_params.pre_eval();
    if(m_params.eval_mode() == ParamPack::DEFAULT)    {
      _point_prepare<double>(nlist_ind);
     for(size_type i = 0; i < corr_size(); i++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, i, (this->*m_delta_func_table_0[nlist_ind][i])(occ_i, occ_f));
      }
    }
    else if(m_params.eval_mode() == ParamPack::DIFF)    {
      _point_prepare<ParamPack::DiffScalar>(nlist_ind);
     for(size_type i = 0; i < corr_size(); i++) {
        ParamPack::Val<ParamPack::DiffScalar>::set(m_params, m_corr_param_key, i, (this->*m_delta_func_table_1[nlist_ind][i])(occ_i, occ_f));
      }
    }
    m_params.post_eval();
  }

  /// \brief Calculate the change in select point correlations due to changing an occupant
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const {
    _calc_restricted_delta_point_corr(nlist_ind, occ_i, occ_f, ind_list_begin, ind_list_end);
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
    }
  }

  /// \brief Calculate the change in select point correlations due to changing an occupant
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, size_type const *ind_list_begin, size_type const *ind_list_end) const {
    m_params.pre_eval();
    if(m_params.eval_mode() == ParamPack::DEFAULT)    {
      _point_prepare<double>(nlist_ind);
      for(; ind_list_begin < ind_list_end; ind_list_begin++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_delta_func_table_0[nlist_ind][*ind_list_begin])(occ_i, occ_f));
      }
    }
    else if(m_params.eval_mode() == ParamPack::DIFF)    {
      _point_prepare<ParamPack::DiffScalar>(nlist_ind);
      for(; ind_list_begin < ind_list_end; ind_list_begin++) {
        ParamPack::Val<ParamPack::DiffScalar>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_delta_func_table_1[nlist_ind][*ind_list_begin])(occ_i, occ_f));
      }
    }
    m_params.post_eval();
  }


  template<typename Scalar>
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_point_prepare(int nlist_ind) const {
    switch(nlist_ind) {
    case 0:
      if(m_params.eval_mode(m_disp_var_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_disp_var_param_key, 0, 0, eval_disp_var_0_0(0));
        ParamPack::Val<Scalar>::set(m_params, m_disp_var_param_key, 1, 0, eval_disp_var_0_1(0));
        ParamPack::Val<Scalar>::set(m_params, m_disp_var_param_key, 2, 0, eval_disp_var_0_2(0));
      }
      break;
    }
  }
  template<typename Scalar>
  void DiffClexulatorSquareLatticeTest_Clexulator_default::_global_prepare() const {
    if(m_params.eval_mode(m_disp_var_param_key) != ParamPack::READ) {
      ParamPack::Val<Scalar>::set(m_params, m_disp_var_param_key, 0, 0, eval_disp_var_0_0(0));
      ParamPack::Val<Scalar>::set(m_params, m_disp_var_param_key, 1, 0, eval_disp_var_0_1(0));
      ParamPack::Val<Scalar>::set(m_params, m_disp_var_param_key, 2, 0, eval_disp_var_0_2(0));
    }
  }

  // Basis functions for empty cluster:
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_0_0() const {
    return 1;
  }

  /**** Basis functions for orbit 1****
0.0000000 0.0000000 0.0000000 A  

  ****/
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_0() const {
    return (0.707107 * pow(disp_var_0<Scalar>(0), 2)+0.707107 * pow(disp_var_1<Scalar>(0), 2));
  }
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_1() const {
    return pow(disp_var_2<Scalar>(0), 2);
  }
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_2() const {
    return (0.707107 * pow(disp_var_0<Scalar>(0), 4)+0.707107 * pow(disp_var_1<Scalar>(0), 4));
  }
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_3() const {
    return 2.44949 * pow(disp_var_0<Scalar>(0), 2) * pow(disp_var_1<Scalar>(0), 2);
  }
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_4() const {
    return (1.73205 * pow(disp_var_0<Scalar>(0), 2) * pow(disp_var_2<Scalar>(0), 2)+1.73205 * pow(disp_var_1<Scalar>(0), 2) * pow(disp_var_2<Scalar>(0), 2));
  }
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::eval_bfunc_1_5() const {
    return pow(disp_var_2<Scalar>(0), 4);
  }

  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_0_at_0() const {
    return (0.707107 * pow(disp_var_0<Scalar>(0), 2)+0.707107 * pow(disp_var_1<Scalar>(0), 2));
  }
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_1_at_0() const {
    return pow(disp_var_2<Scalar>(0), 2);
  }
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_2_at_0() const {
    return (0.707107 * pow(disp_var_0<Scalar>(0), 4)+0.707107 * pow(disp_var_1<Scalar>(0), 4));
  }
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_3_at_0() const {
    return 2.44949 * pow(disp_var_0<Scalar>(0), 2) * pow(disp_var_1<Scalar>(0), 2);
  }
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_4_at_0() const {
    return (1.73205 * pow(disp_var_0<Scalar>(0), 2) * pow(disp_var_2<Scalar>(0), 2)+1.73205 * pow(disp_var_1<Scalar>(0), 2) * pow(disp_var_2<Scalar>(0), 2));
  }
  template<typename Scalar>
  Scalar DiffClexulatorSquareLatticeTest_Clexulator_default::site_eval_bfunc_1_5_at_0() const {
    return pow(disp_var_2<Scalar>(0), 4);
  }

} // namespace clexulator
} // namespace CASM


extern "C" {
  /// \brief Returns a clexulator::BaseClexulator* owning a DiffClexulatorSquareLatticeTest_Clexulator_default
  CASM::clexulator::BaseClexulator *make_DiffClexulatorSquareLatticeTest_Clexulator_default() {
    return new CASM::clexulator::DiffClexulatorSquareLatticeTest_Clexulator_default();
  }

}

