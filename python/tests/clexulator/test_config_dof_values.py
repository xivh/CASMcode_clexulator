import numpy as np
from libcasm.clexulator import ConfigDoFValues

def test_constructor():
    dof_values = ConfigDoFValues()
    assert isinstance(dof_values, ConfigDoFValues)

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
