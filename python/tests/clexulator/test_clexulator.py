import pathlib
import numpy as np
from libcasm.clexulator import PrimNeighborList, Clexulator, make_clexulator, make_local_clexulator
import pytest

def _source(session_shared_datadir, title, bsetname):
    return str(
        pathlib.Path(session_shared_datadir) /
        title /
        "basis_sets" /
        ("bset." + bsetname) /
        (title + "_Clexulator_" + bsetname + ".cc"))

def test_constructor():
    clexulator = Clexulator()
    assert isinstance(clexulator, Clexulator)

@pytest.mark.slow
def test_make_clexulator_1(session_shared_datadir):
    source = _source(session_shared_datadir, "OccClexulatorZrOTest", "default")

    prim_neighbor_list = PrimNeighborList()
    clexulator = make_clexulator(
        source, prim_neighbor_list)
    assert isinstance(clexulator, Clexulator)

@pytest.mark.slow
@pytest.mark.very_slow
def test_make_local_clexulator(session_shared_datadir):
    source = _source(session_shared_datadir, "LocalOccClexulatorZrOTest", "hop0")

    prim_neighbor_list = PrimNeighborList()
    hop0_clexulator = make_local_clexulator(
        source, prim_neighbor_list)
    for clexulator in hop0_clexulator:
        assert isinstance(clexulator, Clexulator)
    assert len(hop0_clexulator) == 2

@pytest.mark.slow
@pytest.mark.very_slow
def test_make_periodic_and_local_clexulator(session_shared_datadir):
    prim_neighbor_list = PrimNeighborList()

    source = _source(session_shared_datadir, "OccClexulatorZrOTest", "default")
    clexulator = make_clexulator(
        source, prim_neighbor_list)

    source = _source(session_shared_datadir, "LocalOccClexulatorZrOTest", "hop0")
    hop0_clexulator = make_local_clexulator(
        source, prim_neighbor_list)
    for clexulator in hop0_clexulator:
        assert isinstance(clexulator, Clexulator)
    assert len(hop0_clexulator) == 2

    source = _source(session_shared_datadir, "LocalOccClexulatorZrOTest", "hop1")
    hop1_clexulator = make_local_clexulator(
        source, prim_neighbor_list)
    for clexulator in hop1_clexulator:
        assert isinstance(clexulator, Clexulator)
    assert len(hop1_clexulator) == 2
