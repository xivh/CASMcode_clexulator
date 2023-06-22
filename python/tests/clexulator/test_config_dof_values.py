import numpy as np
from libcasm.clexulator import ConfigDoFValues, make_default_config_dof_values
import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims


def test_constructor():
    dof_values = ConfigDoFValues()
    assert isinstance(dof_values, ConfigDoFValues)


def test_constructor_2():
    xtal_prim = xtal_prims.FCC(r=1.0, occ_dof=["A", "B", "Va"])
    n_unitcells = 2
    dof_values = make_default_config_dof_values(xtal_prim, n_unitcells)
    assert isinstance(dof_values, ConfigDoFValues)
    assert dof_values.occupation().shape == (2,)


def test_constructor_3():
    xtal_prim = xtal_prims.HCP(r=1.0, occ_dof=["A", "B", "Va"])
    n_unitcells = 2
    dof_values = make_default_config_dof_values(xtal_prim, n_unitcells)
    assert isinstance(dof_values, ConfigDoFValues)
    assert dof_values.occupation().shape == (4,)
    assert dof_values.occupation().shape == (4,)


def test_constructor_4():
    xtal_prim = xtal_prims.HCP(
        r=1.0,
        occ_dof=["A", "B", "Va"],
        local_dof=[xtal.DoFSetBasis("disp")],
        global_dof=[xtal.DoFSetBasis("Hstrain")],
    )
    n_unitcells = 2
    dof_values = make_default_config_dof_values(xtal_prim, n_unitcells)
    assert isinstance(dof_values, ConfigDoFValues)
    assert dof_values.occupation().shape == (4,)


def test_occupation():
    dof_values = ConfigDoFValues()

    occupation_in = np.array([1, 0, 0, 0], dtype=int)
    dof_values.set_occupation(occupation_in)
    occupation_out = dof_values.occupation()
    assert np.allclose(occupation_in, occupation_out)

    dof_values.set_occ(0, 2)
    assert dof_values.occ(0) == 2


def test_copy_config_dof_values():
    import copy

    dof_values_1 = ConfigDoFValues()

    occupation_in = np.array([1, 0, 0, 0], dtype=int)
    dof_values_1.set_occupation(occupation_in)

    dof_values_2 = copy.copy(dof_values_1)
    assert isinstance(dof_values_1, ConfigDoFValues)
    assert isinstance(dof_values_2, ConfigDoFValues)
    assert dof_values_1 is not dof_values_2
