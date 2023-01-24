The libcasm-clexulator package
==============================

The `libcasm-clexulator` Python package provides a Python interface to the CASM clexulator library.

This version of `libcasm-clexulator` is compatible with version 2.X of [`CASMcode_clexulator`](https://github.com/prisms-center/CASMcode_clexulator/).


Install
=======

Installation of `libcasm-clexulator` requires:
- Python >=3.8
- The compatible version of the CASM C++ clexulator library is already installed.
- Development environment that allows compiling the pybind11 interface to CASM C++ (i.e. C++ compiler with support for c++17)

Normal installation:

    export CASM_PREFIX=/path/to/casm/install/location
    pip install .

Editable installation:

    export CASM_PREFIX=/path/to/casm/install/location
    pip install -e .


Building documentation
======================

Install documentation requirements:

    pip install -r doc_requirements.txt

Install `libcasm-clexulator`

Build and open the documentation:

    cd doc
    make html
    open _build/html/index.html


Testing
=======

To install testing requirements, do:

    pip install -r test_requirements.txt

Use `pytest` to run the tests. To run all tests, do:

    python -m pytest -rsap tests

As an example of running a specific test, do:

    python -m pytest -rsap tests/test_prim.py::test_asymmetric_unit_indices

To skip 'slow' tests, marked with `@pytest.mark.slow`, do:

    python -m pytest -rsap -m 'not slow' tests

To only skip 'very_slow' tests, marked with `@pytest.mark.very_slow`, do:

    python -m pytest -rsap -m 'not very_slow' tests

Formatting
==========

Use yapf. From CASMcode_clexulator/python do:

    yapf -ir .
