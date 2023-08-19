.. _cluster-expansion-index:
.. _eval-cluster-expansion:

Evaluating a cluster expansion
==============================

.. toctree::
    :maxdepth: 2
    :hidden:

Construct a ClusterExpansion
----------------------------

A :class:`~libcasm.clexulator.ClusterExpansion` calculator and default configuration degree of freedom (DoF) values in a particular supercell can be quickly constructed using :func:`~libcasm.clexulator.make_cluster_expansion` as follows:

.. code-block:: Python

    import numpy as np
    import libcasm.xtal as xtal
    from libcasm.clexulator import (
        make_cluster_expansion,
        SparseCoefficients,
    )

    # construct the Prim
    xtal_prim = # xtal.Prim(...)

    # specify the clexulator source file
    clexulator_source = # str( ... path to clexulator source code file ... )

    # specify the cluster expansion coefficients
    coefficients = # SparseCoefficients(...)

    # specify the supercell:
    l_unitcells = # int(... specify a l * l * l unit cells sized supercell ...)
    transformation_matrix_to_super = np.eye(3) * l_unitcells

    # construct a ClusterExpansion calculator
    cluster_expansion, info = make_cluster_expansion(
        xtal_prim=xtal_prim,
        clexulator_source=clexulator_source,
        coefficients=coefficients,
        transformation_matrix_to_super=transformation_matrix_to_super,
    )

    # get the ConfigDoFValues that cluster_expansion will evaluate
    config_dof_values = info.config_dof_values


.. note::

    - Before running, set the environment variable ``CASM_PREFIX`` to the location where CASM is installed in order to enable proper compilation and linking of the clexulator source code using the CASM libraries.

      .. code-block:: bash

          export CASM_PREFIX=$(python -m libcasm.casmglobal --prefix)


    - In some cases, finer control of compilation and linking options may be necessary, which can be done as described in the :class:`~libcasm.clexulator.make_clexulator` documentation.


Evaluate the cluster expansion
------------------------------

The variable `config_dof_values` returned by :func:`~libcasm.clexulator.make_cluster_expansion` is an instance of :class:`~libcasm.clexulator.ConfigDoFValues` which the :class:`~libcasm.clexulator.ClusterExpansion` is set to evaluate.

Then, the cluster expansion value can be evaluated with:

.. code-block:: Python

    # ... calculate cluster expansion value for the current state
    #     of the ConfigDoFValues that cluster_expansion has been set with ...

    # evaluate and return extensive value:
    value_per_supercell = cluster_expansion.extensive_value()

    # or evaluate and return the intensive value:
    value_per_unitcell = cluster_expansion.intensive_value()


.. _change-and-re-evaluate-clex:

Change DoF values and re-evaluate
---------------------------------

To change DoF values and re-calculate the cluster expansion, just modify the values of the :class:`~libcasm.clexulator.ConfigDoFValues` instance and re-evaluate:

.. code-block:: Python

    # Correct usage -->
    # The following all assign new DoF values to
    # `config_dof_values`'s data using a copy:

    # ... set ConfigDoFValues occupant values, using a copy...
    occupation = np.array(...)
    config_dof_values.set_occupation(occupation)

    # ... or set a single ConfigDoFValues occupant value, using a copy...
    linear_site_index = int(...)
    new_occ = int(...)
    config_dof_values.set_occ(linear_site_index, new_occ)

    # ... or set all ConfigDoFValues values from other
    #     ConfigDoFValues instance, using copies ...
    other = ConfigDoFValues(...)
    config_dof_values.set(other)

    # ... calculate cluster expansion value for the current state
    #     of the ConfigDoFValues that cluster_expansion has been set with ...

    # evaluate and return the intensive value:
    value_per_unitcell = cluster_expansion.intensive_value()

.. warning::

    Wrong usage, trying to change DoF values, but actually changing what a Python variable points to:

    .. code-block:: Python

        # !Wrong usage! -->
        # In Python, the following will change what `config_dof_values`
        # points at, not assign values to `config_dof_values`'s data
        # using a copy.
        # Therefore, cluster_expansion, which still has a pointer to the
        # original data structure, will not use the DoF values from `other`.
        other = ConfigDoFValues(...)
        config_dof_values = other

        # ... this will try to calculate cluster expansion value
        #     but still points at the original `config_dof_values` data ...

        # ... so it will evaluate and return the wrong intensive value ...
        wrong_value_per_unitcell = cluster_expansion.intensive_value()

.. warning::

    Wrong usage, trying to change DoF values using an external data structure which was copied:

    .. code-block:: Python

        # !Wrong usage! -->
        # ConfigDoFValues.set_occuption copies values of an occupation array
        # into the  `config_dof_values`'s data, so subsequently changing the
        # values in the array has no effect on `config_dof_values`

        occupation = np.array(...)

        # ... this copies `occupation` values into `config_dof_values`'s data ...
        config_dof_values.set_occupation(occupation)

        # ... so this has no effect on `config_dof_values`'s data ...
        occupation[linear_site_index] = new_occ

        # ... and it will evaluate and return the wrong intensive value ...
        wrong_value_per_unitcell = cluster_expansion.intensive_value()


Set a ClusterExpansion to use a different ConfigDoFValues instance
------------------------------------------------------------------

The function :func:`~libcasm.clexulator.ClusterExpansion.set` may be used to point :class:`~libcasm.clexulator.ClusterExpansion` at the data of a different :class:`~libcasm.clexulator.ConfigDoFValues` instance *which must have the same supercell*:

.. code-block:: Python

    # Correct usage -->
    # Reset cluster_expansion to point at the data in `other`,
    # which must have the same supercell.
    other = ConfigDoFValues(...)
    cluster_expansion.set(other)

    # ... calculate cluster expansion value using `other`'s data ...
    value_per_unitcell = cluster_expansion.intensive_value()


Calculate the effect of changes in DoF values
---------------------------------------------

:class:`~libcasm.clexulator.ClusterExpansion` includes methods to efficiently calculate the change in the value of the extensive cluster expansion value due to changes in particular DoF values:

- :func:`~libcasm.clexulator.ClusterExpansion.occ_delta_value`: For the change in the extensive cluster expansion value due to the change in a single occupant value
- :func:`~libcasm.clexulator.ClusterExpansion.multi_occ_delta_value`: For the change in the extensive cluster expansion value due to changes in multiple occupant values
- :func:`~libcasm.clexulator.ClusterExpansion.local_delta_value`: For the change in the extensive cluster expansion value due to the change in a single local continuous DoF value
- :func:`~libcasm.clexulator.ClusterExpansion.global_delta_value`: For the change in the extensive cluster expansion value due to the change in a single global continuous DoF value

As an example, the following is pseudo-code that uses :func:`~libcasm.clexulator.ClusterExpansion.occ_delta_value` in the inner loop of a semi-grand canonical Monte Carlo simulation:

.. code-block:: Python

    # ... propose the change of a single occupation value ...
    linear_site_index = ... random site index ...
    new_occ = ... random occupant index, excluding current value ...

    # ... calculate the change in formation energy relative the current
    #     state of the ConfigDoFValues that cluster_expansion has been set with ...
    delta_formation_energy = cluster_expansion.occ_delta_value(
        linear_site_index, new_occ)

    delta_generalized_enthalpy = ... calculate change in potential ...

    # ... accept or reject ...
    if is_accepted(delta_generalized_enthalpy):
        # ... if accepted, update config_dof_values ...
        config_dof_values.set_occ(linear_site_index, new_occ)



.. _eval-local-cluster-expansion:

Evaluating a local cluster expansion
====================================

Construct a LocalClusterExpansion
---------------------------------

By setting the `cluster_expansion_type` parameter to `"local"`, :func:`~libcasm.clexulator.make_cluster_expansion` can also be used to construct a :class:`~libcasm.clexulator.LocalClusterExpansion` calculator:

.. code-block:: Python

    # construct a LocalClusterExpansion calculator
    local_cluster_expansion, info = make_cluster_expansion(
        cluster_expansion_type="local",
        xtal_prim=xtal_prim,
        clexulator_source=clexulator_source,
        coefficients=coefficients,
        transformation_matrix_to_super=transformation_matrix_to_super,
    )

    # get the ConfigDoFValues that cluster_expansion will evaluate
    config_dof_values = info.config_dof_values

For local cluster expansion construction, `clexulator_source` is the path to the :ref:`prototype local clexulator source code file <local-clexulator-files>` (i.e. `/path/to/<primname>_Clexulator_<bsetname>.cc`) and source code files for the symmetrically equivalent local basis sets (i.e. `/path/to/<i>/<primname>_Clexulator_<bsetname>_<i>.cc` with `i` equal to 0, 1, ...) are found relative to `clexulator_source`.

Evaluate the local cluster expansion
------------------------------------

The local cluster expansion value can be evaluated at a particular choice of:

- `unitcell_index`: Linear unit cell index specifying in which unit cell to evaluate the local correlations, as defined by :class:`~libcasm.xtal.UnitCellIndexConverter`.
- `equivalent_index`: Index of the equivalent local basis set to evaluate. This index specifies a combined choice of (i) a particular `phenomenal` cluster of sites and (ii) a particular orientation of the local basis set at that cluster, when there are multiple symmetrically equivalent local basis sets around the same phenomenal cluster.

For a particular application, there should be a method that helps find the correct `unitcell_index` and `equivalent_index`, which depends on the details of the phenomena being modeled.

For example, :class:`~libcasm.occ_events.OccEvent` is a class which describes a diffusive hop of one or more occupants. A local cluster expansion can be used to predict the kinetically resolved activation barrier around a particular hop. The correct `unitcell_index` and `equivalent_index` to use for evaluating the local cluster expansion around a particular hop in a particular supercell can be found using the method :func:`~libcasm.enumerate.get_occevent_coordinate`, which searches a list of phenomenal :class:`~libcasm.occ_events.OccEvent` to find which one is a strictly translational equivalent:

.. code-block:: Python

    from libcasm.enumerate import get_occevent_coordinate

    # ... calculate local cluster expansion value for the current state
    #     of the ConfigDoFValues that local_cluster_expansion has been set with ...

    # evaluate and return local cluster expansion value:
    unitcell_index, equivalent_index = get_occevent_coordinate(
        occ_event=occ_event, # libcasm.occ_events.OccEvent
        phenomenal_occevent=phenomenal_occevent, # List[libcasm.occ_events.OccEvent]
        supercell=supercell, # libcasm.configuration.Supercell
    )
    value = local_cluster_expansion.value(unitcell_index, equivalent_index)


Cluster expansion details
=========================

The CASM Clexulator
-------------------

CASM generates custom code for very efficient calculation of basis functions given a particular :class:`~libcasm.xtal.Prim` and choice of cluster expansion basis functions. This source code is written to a file and then may be compiled, linked, and used at runtime via the class  :class:`~libcasm.clexulator.Clexulator` (clexulator = CLuster EXpansion calcULATOR).

For periodic cluster expansions, CASM custom generates:

- `<primname>_Clexulator_<bsetname>.cc`: a clexulator source code file that evaluates the basis functions
- `basis.json`: a JSON file describing the cluster basis functions.

These files are written to a basis set directory, which is usually organized as:

.. code-block::

    /path/to/basis_sets/bset.<bsetname>/
    ├── <primname>_Clexulator_<bsetname>.cc
    └── basis.json

Here, `<primname>` is the name given to the :class:`~libcasm.xtal.Prim` and `<bsetname>` is a unique name for the cluster expansion basis set.

.. _local-clexulator-files:

For local cluster expansions, CASM custom generates:

- `<primname>_Clexulator_<bsetname>.cc`: a clexulator source code file for a prototype local cluster expansion
- `basis.json`: a JSON file describing the cluster basis functions for the prototype
- `<equivalent_index>/<primname>_Clexulator_<bsetname>_<equivalent_index>.cc`: source code files for each symmetrically equivalent local cluster expansion per unit cell
- `equivalents_info.json`: a JSON file which describes the prototype local expansion basis set's cluster basis and the symmetry operations which relate the prototype local expansion basis set to the symmetrically equivalent local cluster expansion basis sets.

From this information, CASM can compile functions to evaluate all the local cluster expansion basis functions and use a single set of expansion coefficients for each of the symmetrically equivalent local cluster expansions.

The files for necessary for a local cluster expansion are all written to a local basis set directory, which is usually organized as:

.. code-block::

    /path/to/basis_sets/bset.<bsetname>/
    ├── 0
    │   └── <primname>_Clexulator_<bsetname>_0.cc
    ├── 1
    │   └── <primname>_Clexulator_<bsetname>_1.cc
    ├── ...
    ├── <primname>_Clexulator_<bsetname>.cc
    ├── equivalents_info.json
    └── basis.json

As before, `<primname>` is the name given to the :class:`~libcasm.xtal.Prim` and `<bsetname>` is a unique name for the local cluster expansion basis set.


Neighbor lists
--------------

:class:`~libcasm.clexulator.Clexulator` source code contains the definition for a single translational equivalent of each cluster basis function. A neighbor list is used to determine the correct degree of freedom (DoF) values to evaluate the cluster basis function at a particular lattice translation. There are two types of neighbor lists:

- :class:`~libcasm.clexulator.PrimNeighborList`: A prim neighbor list, defines an ordering of unit cells in the local neighborhood of a unit cell for a particular :class:`~libcasm.xtal.Prim`.
- :class:`~libcasm.clexulator.SuperNeighborList`: A neighbor list that uses the ordering specified by a prim neighbor list to construct a neighbor list for each unit cell in a supercell. One of these must be generated for each supercell in which cluster basis functions are evaluated.

Constructing a Clexulator
-------------------------

A :class:`~libcasm.clexulator.Clexulator` is constructed using a :class:`~libcasm.clexulator.PrimNeighborList` and the path to a CASM clexulator source file, using the factory function :class:`~libcasm.clexulator.make_clexulator`:

.. code-block:: Python

    from libcasm.clexulator import make_clexulator, PrimNeighborList
    prim_neighbor_list = PrimNeighborList()
    clexulator = make_clexulator(
        source="/path/to/.../<primname>_Clexulator_<bsetname>.cc",
        prim_neighbor_list=prim_neighbor_list,
    )

.. note::

    - Before running, set the environment variable ``CASM_PREFIX`` to the location where CASM is installed in order to enable proper compilation and linking of the clexulator source code.
    - In some cases, finer control of compilation and linking options may be necessary, which can be done as described in the :class:`~libcasm.clexulator.make_clexulator` documentation.

The :class:`~libcasm.clexulator.PrimNeighborList` provided to :class:`~libcasm.clexulator.make_clexulator` is expanded as necessary to include all sites required by the cluster basis functions.


Constructing a LocalClexulator
------------------------------

A :class:`~libcasm.clexulator.LocalClexulator` is constructed in a similar manner as :class:`~libcasm.clexulator.Clexulator`, using the factory function :class:`~libcasm.clexulator.make_local_clexulator`:

.. code-block:: Python

    from libcasm.clexulator import make_local_clexulator, PrimNeighborList
    prim_neighbor_list = PrimNeighborList()
    local_clexulator = make_local_clexulator(
        source="/path/to/.../<primname>_Clexulator_<bsetname>.cc",
        prim_neighbor_list=prim_neighbor_list,
    )

.. note::

    - Before running, set the environment variable ``CASM_PREFIX`` to the location where CASM is installed in order to enable proper compilation and linking of the clexulator source code.
    - In some cases, finer control of compilation and linking options may be necessary, which can be done as described in the :class:`~libcasm.clexulator.make_local_clexulator` documentation.


ClusterExpansion Examples
-------------------------

Construction:

.. code-block:: Python

    import numpy as np
    import libcasm.xtal as xtal
    from libcasm.clexulator import (
        make_clexulator,
        make_default_config_dof_values,
        ClusterExpansion,
        PrimNeighborList,
        SparseCoefficients,
        SuperNeighborList,
    )

    # ... construct the Prim ...
    xtal_prim = xtal.Prim(...)

    # ... construct Clexulator ...
    prim_neighbor_list = PrimNeighborList()
    clexulator_source = ... path to Clexulator source file ...
    formation_energy_clexulator = make_clexulator(
        clexulator_source, prim_neighbor_list)

    # ... construct Monte Carlo cell with default ConfigDoFValues...
    l_unitcells = ... specify l * l * l sized supercell ...
    transformation_matrix_to_super = np.eye(3) * l_unitcells
    coefficients = SparseCoefficients(...)
    supercell_neighbor_list = SuperNeighborList(
        transformation_matrix_to_super=transformation_matrix_to_super,
        prim_neighbor_list=prim_neighbor_list,
    )
    config_dof_values = make_default_config_dof_values(
        xtal_prim, transformation_matrix_to_super)

    # ... construct ClusterExpansion, setting it to point
    #     at the ConfigDoFValues that will be used by the calculator ...
    cluster_expansion = ClusterExpansion(
        supercell_neighbor_list=supercell_neighbor_list,
        clexulator=formation_energy_clexulator,
        coefficients=coefficients,
        config_dof_values=config_dof_values,
    )

Calculating the cluster expansion value:

.. code-block:: Python

    # ... calculate cluster expansion value for the current state
    #     of the ConfigDoFValues that cluster_expansion has been set with ...
    value_per_unitcell = cluster_expansion.intensive_value()
    value_per_supercell = cluster_expansion.extensive_value()
