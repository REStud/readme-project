Readme File Fortran Codes and Files in this folder

This folder contains the output files for the baseline model, the AHM reform, and the efficient economy presented in the paper.
It also contains subfolders with the codes used to compute the baseline model (an all its specifications), the model under the AHM reform (and all its specifications) and the efficient model.
We describe the files and subfolders in what follows.


Output files (with reference to Tables and Figures):
-------------------------------------------------------------
- res01rep.txt Fortran Code Output for baseline model (see codes and instructions below)
  Moments reported in Table 3 (model column), Table 4 (Bench. Model column), Table 5 (Bench. Model column)

- res03rep.txt Fortran Code Output AHM Reform
  Moments reported in Tables 4 and 5

- figures_rep01.m
  Loads output files from solution to baseline model stored in output_model_baseline.mat, 
  from solution AHM reform model stored in output_model_ahm.mat
  and creates the following figures:
  > Figure 1
  > Figure 2
  > Figure 3
  > Figure 4 (model variables only as Compustat data is proprietary)
  > Figure 7
  > Figure 8
  > Figure 9

- fig_event_analysis.m
  Loads output files from solution (Fortran code) stored in output_model_baseline.mat 
  and creates the following figures:
  > Figure 5 (model variables only as Compustat data is proprietary)
  > Figure 6 (model variables only as Compustat data is proprietary)


===============================================
Directory "Codes Baseline model"
===============================================

Fortran Files Included:
----------------------------------

- globals04.f90: this file sets parameters, options for extensions and creates global functions.
Relevant Options for experiments
         > benchmark = 1 if wage=1 (baseline calibration to estimate kappa)
                       or set to 0 if iterate on wage (all counterfactuals)
         > run_panel = 1 runs panel used to construct event analysis (Figures 5 and 6)
         > run_stats_bysize = 1 computes model moments by firm size
         > Set theta = 0.01000000 and benchmark = 0 to find solution for Case "Lender All Bargaining Power" in Table 4
- functions04.f90: this file contains set of functions used during optimization routines.
- subroutines04.f90: this file contains the routines that sets the grids, solves the firm problem, price
  function, recovery rate, and simulates the model to generate moments.
- mysimplex04.f90: this file contains auxiliary routines to estimate the parameters of the model.
- fb_mpi04.f90: this code makes the call to all other routines and saves the functions

Note: subroutines from "Numerical Recipes in FORTRAN; The Art of Scientific Computing" not included as they are propertiary.
See: http://www.nrbook.com/a/bookf90pdf.html to find the book and obtaining a license

> To obtain the output for the baseline model, on a machine/cluster running Intel Fortran and MPI,
  the code was compiled with the following command:

      mpiifort -c globals04.f90 functions04.f90 subroutines04.f90 mysimplex04.f90 fb_mpi04.f90
      mpiifort -o fb04 *.o

      The file fb04 (to be created when compiling the files) is the executable file that is run to make the computation
      Run the file using as initial conditions the files in subdirectory "initial conditions baseline"
      The code was run using 4 cores with 16 cpus.

> To obtain the output for the case with Lender All Bargaining Power (Table 4)
  - Modify globals04.f90 in the following way
    - set benchmark = 0 (which will set the code to iterate on the wage until the free entry condition is satisfied)
    - set theta = 0.01000000

===============================================
Directory "Codes AHM Reform"
===============================================

Fortran Files Included:
----------------------------------

- globals04c.f90: this file sets parameters, options for extensions and creates global functions.
Relevant Options for experiments
         > benchmark = 1 if wage=1.000488 (equilibrium wage)
                       or set to 0 to iterate on wage
- functions04c.f90: this file contains set of functions used during optimization routines.
- subroutines04c.f90: this file contains the routines that sets the grids, solves the firm problem, price
  function, and simulates the model to generate moments.
- fb_mpi04c.f90: this code makes the call to all other routines and saves the functions

Note: subroutines from "Numerical Recipes in FORTRAN; The Art of Scientific Computing" not included as they are propertiary.
See: http://www.nrbook.com/a/bookf90pdf.html to find the book and obtaining a license

> To obtain the output for the AHM reform model, on a machine/cluster running Intel Fortran and MPI,
  the code was compiled with the following command:

      mpiifort -c globals04c.f90 functions04c.f90 subroutines04c.f90 fb_mpi04c.f90
      mpiifort -o fb04c *.o

      The file fb04c (to be created when compiling the files) is the executable file that is run to make the computation
      Run the file using as initial conditions the files in subdirectory "initial conditions AHM"
      The code was run using 4 cores with 16 cpus.
      
> To obtain the output for the case with with different bankruptcy costs (reported in Appendix)
  - Modify globals04c.f90 in the following way
    - set benchmark = 0 (which will set the code to iterate on the wage until the free entry condition is satisfied)
    - set bankruptcy costs accordingly


===============================================
Directory "Codes Efficient Case"
===============================================

Fortran Files Included:
----------------------------------

- globals_simple01.f90: this file sets parameters, options for extensions and creates global functions.
Relevant Options for experiments
         > benchmark = 1 if wage=1 (baseline calibration to estimate kappa)
                       or set to 0 if iterate on wage (all counterfactuals)
- functions_simple01.f90: this file contains set of functions used during optimization routines.
- subroutines_simple01.f90: this file contains the routines that sets the grids, solves the firm problem, and simulates the model to generate moments.
- mysimplex01.f90: this file contains auxiliary routines to estimate the parameters of the model.
- main_simple01.f90: this code makes the call to all other routines and saves the functions

Note: subroutines from "Numerical Recipes in FORTRAN; The Art of Scientific Computing" not included as they are propertiary.
See: http://www.nrbook.com/a/bookf90pdf.html to find the book and obtaining a license

> To obtain the output for the efficient model, on a machine/cluster running Intel Fortran and MPI,
  the code was compiled with the following command:

    mpiifort -c globals_simple01.f90 functions_simple01.f90 subroutines_simple01.f90 mysimplex01.f90 main_simple01.f90
    mpiifort -o fb01s *.o

      The file fb01s (to be created when compiling the files) is the executable file that is run to make the computation
      Run the file using as initial conditions the files in subdirectory "initial conditions AHM"
      The cluster used had 64 cores with 16 cpus.
      
> To obtain the output for the case with with different tax combinations (reported in Appendix) modify globals_simple01.f90




