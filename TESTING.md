Testing C++
===========

To properly find CASM for compiling and linking Clexulators, it is required to set CASM_PREFIX:

    # Set the CASM prefix. This will give:
    #   <something>/lib/pythonX.Y/sites-packages/libcasm
    export CASM_PREFIX=$(python -c 'import site; print(site.getsitepackages()[0])')/libcasm


Testing Python
==============

To skip 'slow' tests, marked with `@pytest.mark.slow`, do:

    python -m pytest -rsap -m 'not slow' tests

To only skip 'very_slow' tests, marked with `@pytest.mark.very_slow`, do:

    python -m pytest -rsap -m 'not very_slow' tests

