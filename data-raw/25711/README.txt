INSTRUCTIONS FOR REPLICATORS

All figures in the paper are computed in Matlab R2022b and drawn in Latex, with the following steps:

1. Execute main_computation.m in Matlab
2. Execute main_export.m in Matlab
3. Run pdflatex on abrupt-information.tex

The result of the computations are stored in .mat files for ease of access. The computations can be redone by setting bool_load = 0 in main_computations.m. The computations in the paper are done for a rather small step size, and they take 6.5 hours to redo on an i9-13900K.

The file main_figures.m produces Matlab figures of the same data, similar to the figures in the paper. 


DESCRIPTION OF CODE

Definition of a game:
- The files actions.m, g.m, lambda.m, mu.m, and states.m contain the game primitives.
- The class GameParam.m performs some computations initially (like enforceability) to save time in the solution.
- The class Game.m provides means to change the primitives in the replication package.

Main algorithm:
- The class BrW is a wrapper for BryW that saves the progress, deals with symmetry, and other functionality.
- The class BryW computes a single iteration of the operator B.
- The class Solution.m solves the ODEs (6) or (9) for given inputs.
- The class StartingPoint.m helps keep track of all possible starting points for solutions to ODEs (6) and (9) that may have to be considered.
- main_computation.m runs all the necessary routines to produce the computed figures in the paper.

Auxiliary functions:
- Normal.m, Tangent.m computes normal and tangent vector for a given angle.
- orthogonal.m computes a vector orthogonal to a given vector.
- lcon2vert.m, pn2lconst.m, point_normal.m, and vert2lcon.m all transform a convex set from one parametrization to another.
- convexhull.m is a wrapper function for Matlabs own convhull, dealing with sets that have fewer than 3 points.

Outputs:
- draw_eq_con.m plots a line segment
- draw_points.m plots a point
- draw_set.m plots a set
- print_to_file.m exports a set to a file that can be read by Latex.
- main_export.m produces all exports in Latex-readable format
- main_figures.m creates all the figures in Matlab
