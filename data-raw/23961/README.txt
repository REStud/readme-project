Z-TREE VERSION

z-Tree version 3.5.1 was used. z-Tree is available free of charge (https://www.ztree.uzh.ch/en.html) but may not be freely redistributed.


INPUT FILES

To switch between the conditions Money-Main and Money-Mechanism, set the variable DispersedPerDay = 0 (Main) or DispersedPerDay = 1 (Mechanism).

The four .txt files are Table Loader input files for z-Tree. They have to be stored in the same directory as the z-Tree executable (ztree.exe).


OUTPUT

All relevant output variables are collected in the session table, in particular, the choices made by subjects:

* choices_ordered_by_condition[01], ..., choices_ordered_by_condition[24] for the choice lists (coded 1, 2, ..., 9); and
* choices_ordered_by_condition[25], ..., choices_ordered_by_condition[60] for the convex time budgets (coded 0.00, 0.01, ..., 1.00).

The same applies to the answers for the mental-arithmetic task.

The associated response times are also recorded in the session table.

For the CTB rounds, -999 indicates a missing value. A missing value could happen due to a z-Tree performance issue: If a subject moved the mouse pointer over the slider, immediately clicked the slider, and then immediately moved the pointer away from the slider, z-Tree would not record the choice variable but leave it at its initial value of -999. In other words, the “Plot input” event to record the chosen slider position was not executed quickly enough. This issue affected a single observation.