.. _order-parameters-index:

Evaluating order parameters
===========================

.. toctree::
    :maxdepth: 2
    :hidden:

DoFSpace
--------

A :class:`~libcasm.clexulator.DoFSpace` defines a subset of the space of allowed degrees of freedom (DoF) values of a particular DoF type, using the prim DoF basis. A choice of order parameter basis, :math:`Q`, with column basis vectors :math:`q_i`, provides a definition for order parameters, :math:`\eta`, according to :math:`Q \eta = \bar{x}`, where :math:`\bar{x}` are DoF values in the prim basis, averaged over the configuration supercell.

- For occupant DoF and local continuous DoF, :class:`~libcasm.clexulator.DoFSpace` is constructed with a supercell transformation matrix and optional list of site indices in that supercell.

  - For occupant DoF, a row in :math:`Q` corresponds to a particular site and occupant in that supercell.

    - For example, there will be 8 rows for a 4-site supercell in a binary alloy, and 12 rows for a 4-site supercell in a ternary alloy.

  - For local DoF, a row in :math:`Q` corresponds to a particular site and prim basis DoF component in that supercell.

    - For example, there will be twelve rows for a 4-site supercell with three-dimensional displacements allowed on each site.

- For global DoF, a row in :math:`Q` just corresponds to a particular prim basis DoF component.


.. note::

    The DoFSpace member function :func:`~libcasm.clexulator.DoFSpace.axis_info` can be used to lookup the mapping of DoF components to rows of :math:`Q`. For occupant DoF and local DoF, this includes the `linear_site_index` of the site where the DoF component is located.

To calculate symmetry adapted order parameters, a DoFSpace should be constructed with a symmetry adapted basis. Construction of a symmetry adapted basis can be done using methods in CASMcode_configuration, which provides support for determining symmetry operations and applying symmetry representations.


Quickstart
----------

The :func:`~libcasm.clexulator.calc_order_parameters` function allows quickly and safely calculating order parameters given a `~libcasm.clexulator.DoFSpace`:

.. code-block:: Python

    eta =

Each time the :func:`~libcasm.clexulator.calc_order_parameters` function is called, some setup is necessary to prepare for order parameter calculations. When efficiency is very important, such as in Monte Carlo calcutions, it is preferable to use the :class:`~libcasm.clexulator.OrderParameter` calculator class so that setup is done once and re-used.


The OrderParameter calculator
-----------------------------

The class :class:`~libcasm.clexulator.OrderParameter` is used to calculate:

- the value of an order parameter
- the change in the value of an order parameter given changes in degree of freedom (DoF) values

To calculate the order parameter value, OrderParameter uses:

- :class:`~libcasm.clexulator.DoFSpace`: To specify the order parameter basis
- :class:`~libcasm.xtal.SiteIndexConverter`: To perform index conversions
- :class:`~libcasm.clexulator.ConfigDoFValues`: OrderParameter is given a pointer to a ConfigDoFValues instance and calculates the order parameters using the current state of the DoF values


Construction
------------

A :class:`~libcasm.clexulator.OrderParameter` calculator can be constructed as follows:

.. code-block:: Python

    import numpy as np
    import libcasm.xtal as xtal
    from libcasm.clexulator import (
        DoFSpace, OrderParameter,
    )

    # construct the Prim
    xtal_prim = # xtal.Prim(...)

    # specify the DoFSpace
    dof_space = # DoFSpace(...)

    # construct a OrderParameter calculator
    order_parameter = OrderParameter(
        dof_space=dof_space,
    )


Setup
-----

An OrderParameter instance is set to calculate order parameters in one supercell at a time, using the appropriate :class:`~libcasm.xtal.SiteIndexConverter`. This can be set or changed using the :func:`~libcasm.clexulator.OrderParameter.update` method.

Order parameters are calculated for a :class:`~libcasm.clexulator.ConfigDoFValues` instance that can be specified using the call operator, the :func:`~libcasm.clexulator.OrderParameter.update` method, or the :func:`~libcasm.clexulator.ClusterExpansion.set` method.

Default configuration degree of freedom (DoF) values in a particular supercell can be constructed and the OrderParameter instance updated to evaluate using those values as follows:

.. code-block:: Python

    import libcasm.xtal as xtal
    from libcasm.clexulator import (
        make_default_config_dof_values,
    )

    # specify the supercell:
    l_unitcells = # int(... specify a l * l * l unit cells sized supercell ...)
    transformation_matrix_to_super = np.eye(3) * l_unitcells

    # construct SiteIndexConverter
    site_index_converter = xtal.SiteIndexConverter(
        transformation_matrix_to_super=transformation_matrix_to_super,
        n_sublattice=len(xtal_prim.occ_dof()),
    )

    # construct ConfigDoFValues, in the prim DoF basis
    config_dof_values = make_default_config_dof_values(
        xtal_prim=xtal_prim,
        n_unitcells=round(np.linalg.det(transformation_matrix_to_super)),
    )

    # set the supercell and ConfigDoFValues used for order parameter calculation
    order_parameter.update(
        transformation_matrix_to_super=transformation_matrix_to_super,
        site_index_converter=site_index_converter,
        config_dof_values=config_dof_values,
    )

The same `transformation_matrix_to_super` must be used for `config_dof_values`, and the `transformation_matrix_to_super` and `site_index_converter` arguments for :func:`~libcasm.clexulator.OrderParameter.update`. This is the supercell in which the configuration is defined and which the OrderParameter calculator uses to properly select DoF values.

- For occupant DoF and local DoF, it does not need to be the same supercell as the :class:`~libcasm.clexulator.DoFSpace` is defined for.

  - Internally, a commensurate supercell is constructed and order parameters are evaluated as if the `config_dof_values` are tiled into the commensurate supercell.

- For global DoF, the supercell is irrelevant.


Evaluate the order parameters
-----------------------------

The variable `config_dof_values` returned by :func:`~libcasm.clexulator.make_cluster_expansion` is an instance of :class:`~libcasm.clexulator.ConfigDoFValues` which the :class:`~libcasm.clexulator.OrderParameter` calculator is set to evaluate.

Then, the cluster expansion value can be evaluated with:

.. code-block:: Python

    # ... calculate order parameter values for the current state
    #     of the ConfigDoFValues that order_parameter has been set with ...

    # evaluate and get current value, as a const reference:
    eta = order_parameter.value()

    # eta is a const reference of type numpy.ndarray[numpy.float64[d, 1]],
    # where d is the dimension of the DoFSpace basis (number of columns)

Internally, this uses `config_dof_values` to construct a vector, :math:`\bar{x}`, of the DoF values in the DoF space, averaged over the configuration supercell. Then, solving :math:`Q \eta = \bar{x}` yields :math:`\eta`.


Change DoF values and re-evaluate
---------------------------------

To change DoF values and re-calculate the cluster expansion, just modify the values of the :class:`~libcasm.clexulator.ConfigDoFValues` instance and re-evaluate. For a detailed discussion and some pitfalls, see the discussion :ref:`Change DoF values and re-evaluate <change-and-re-evaluate-clex>` for ClusterExpansion.


Notes
-----

- An OrderParameter is set to calculate order parameters in one supercell at a time, using the appropriate :class:`~libcasm.xtal.SiteIndexConverter`. This can be set using the :func:`~libcasm.clexulator.OrderParameter.update` method.
- Order parameters are calculated for a :class:`~libcasm.clexulator.ConfigDoFValues` instance that is set using the :func:`~libcasm.clexulator.OrderParameter.update` method, or the :func:`~libcasm.clexulator.ClusterExpansion.set` method.

  - The :class:`~libcasm.clexulator.ConfigDoFValues` must be constructed consistent with the :class:`~libcasm.xtal.SiteIndexConverter`.
  - Once set by any method, OrderParameter maintains a non-owning pointer to that :class:`~libcasm.clexulator.ConfigDoFValues` instance.
  - The :class:`~libcasm.clexulator.ConfigDoFValues` can then be modified externally and subsequent calls of OrderParameter methods will use the current DoF values.
