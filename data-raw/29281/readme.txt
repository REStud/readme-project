﻿This folder contains Matlab code to replicate simulation results in "Simple Adaptive Size-Exact Testing for Full-Vector and Subvector Inference in Moment Inequality Models" by Gregory Cox and Xiaoxia Shi (2021). The code was last run in MATLAB R2019a with the Parallel Computing Toolbox on a Windows 10 operating system installed on a Dell Workstation with an Intel(R) Xeon(R) W-2145 processor and 32 GB of RAM. 

This paper does not involve analysis of external data (i.e., no data are used or the only data are generated by the authors via simulation in their code). 

%%%%%

This directory has two executables: 

1. IDset.m calculates the identified interval for theta_0 in Example 4 in Section 5.2. Estimated computing time is 3.5 minutes. 

2. StoyeExample.m computes Tc_alpha in the simple model with a scalar parameter of interest, one upper bound, and one lower bound mentioned in Section 3.1. Estimated computing time is 0.2 seconds. 

%%%%%

The directory in fullvector/functions contains Matlab code to replicate the full-vector simulation results in Cox and Shi (2021), Section 5.1 and Supplemental Materials Section F. There are three main executables:

1. WAP.m computes the MNRP, WAP, and the size corrected WAP (SzWAP) reported in Tables 1-2 and 5-8 in the paper. It is currently set to p=2 and Use_True_Omega=0. One can change p to 4 and 10 to obtain all cases in Tables 2, 7, and 8. All the cases in tables 1, 5, and 6 can be similarly computed by setting the value of Use_True_Omega to 1. The estimated computing times for p=2, p=4, and p=10 are, respectively, 10 hours, 27 hours, and 60 hours. It uses the following user-defined functions:

   1.1. calculate_mu.m calculates the null and alternative values at which the test is computed. 
   1.2. CC.m calculates the test statistic and the critical value of the CC test
   1.3. RCC.m calculates the test statistic and the crtical value of the RCC test
   1.4. AB_Bt.m calculates the boostrap version of the Andrews and Barwick (2012) AQLR test
   1.5. RSW.m calculates the bootstrap version of the Romano Shaikh and Wolf (2014) QLR test
   1.6. RSW_max.m calculates the bootstrap version of the Romano Shaikh and Wolf (2014) max test

2. MNRP_large_p.m computes the MNRP for the large number (denoted by p in the code, and by k in the paper) of inequalities (Table 3). It is currently set to p=50 and n=700. One can change (p,n) to (100, 1600) and (150, 2550) to obtain all cases in Table 3. The estimated computing times for p=50, p=100, and p=150 are, respectively, 7.5 hours, 45 hours, and 120 hours. It uses the same user-defined functions as WAP.m

3. Power_Curve_p2.m computes the rejection probabilities of the 5 tests on a grid of mu = (mu_1,mu_2) for the case p=2 only. These rejection probabilities are organized into 4 txt files corresponding to the power curve against mu_2 at 4 different values of mu_1. The estimated computing time is 10 hours. This function uses the same user-defined functions as WAP.m.

All the executables should be run on a facility with parallel computing capacity. If parallel computing is not possible, one can follow the instructions in the comments in WAP.m for modifications.

%%%%%

The directory in fullvector/output contains the output from the code in fullvector/functions used to replicate the full-vector simulation results in Cox and Shi (2021), Section 5.1 and Supplemental Materials Section F. 

%%%%%

The directory in subvector/functions contains replication files for the subvector simulations (Section 5.2) in Cox and Shi (2021). Included are Matlab code files that can be used to replicate the simulation results for the sCC and sRCC tests in the paper. The files are explained below: 

GandhiLuShi_Example.m is the main executable. The malleable parameters are currently set to compute the confidence intervals (CIs) of the case d_c=2, n=500. d_x and n can be changed in the file to replicate the simulations for other cases. The expected computing times for d_c=2, d_c=3, and d_c=4 are, respectively, 50 minutes, 80 minutes, and 2.5 hours. Note that d_x in the code corresponds to d_c-1 for d_c in the paper. 

This main executable should be run on a facility that has parallel computing capacity. If parallel computing is not possible, one can modify the code following the instructions in the comments in the executable in order to run on a single thread.

The main executable prints out two txt files, one for the CIs and computation time for each CI of the sCC and the sRCC tests for all simulation repetitions. The last row prints the average CI and average computation time. The second txt file is the rejection rates of all the tests on a grid of theta.

The main executable calls for the following functions to compute the CIs: 

1. CI_Bisection.m is the function that compute the confidence interval for the tests via bisection. It calls for the functions: 

    1.1. sCC.m is the function that computes the test statistic and the critical value of the sCC test.

    1.2. sRCC.m is the function that computes the test statstic and the critical value of the sRCC test. When needed, it calls for the following functions to perform the vertex enumeration:

        1.2.1. Parametric_Representation.m is the function that finds the parametric representation of a polyhedron. It is used to eliminate excess parameters from the polyhedron whose vertex we would like to enumerate, so that the next function is applied on a transformed polyhedron with non-empty interior. Without this step, the vertex enumeration function below is unstable. This function calls for the function:

             1.2.1.1. Gauss_Jordan.m is the function that performs the Gauss-Jordan reduction to eliminate excess parameters from a linear system with some equalities and some inequalities.

        1.2.2. inequalities2vertices.m finds vertices of a polyhedron defined by linear inequalities.

This folder does not contain code to compute the tests from Andrews, Roth, and Pakes (2019). Those computations were computed using private code provided by Jonathan Roth in personal correspondence in September 2020. Those computations can be replicated by adding code that implements the conditional and hybrid tests from Andrews, Roth, and Pakes (2019) to this directory and uncommenting lines 105-106 and 110-111 in GandhiLuShi_Example.m. An updated version of the code that implements the conditional and hybrid tests from Andrews, Roth, and Pakes (2019) is available at https://github.com/jonathandroth/LinearMomentInequalities. 

Reference: 
Andrews, I., Roth, J., and Pakes, A. (2019). Inference for linear conditional moment inequalities. working paper. 

%%%%%

The directory in subvector/output contains the output from the code in subvector/functions used to replicate the subvector simulation results in Cox and Shi (2021), Section 5.2. 

