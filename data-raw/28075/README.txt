# README file to replicate the experiments conducted in the paper "Learning from Neighbors About a Changing State"
# Date : 7-23-2022

Description :

1. This file will act as a guide to replicate the experiments and explain the functionalities of certain modules which are used in our numerical calculations.
2. The replication folder contains the following files/folders :
	2.a learn-neighbors-change-state.pdf : The current version of the paper
	2.b Figure 5.1/ : Contains code to replicate Figure 5.1 in the paper
	2.c Social Influence Experiments/ : Conatins code to replicate Table 1, Table 2 and Figure 6.1
	2.d Real-World Network Experiments/ : Contains code to replicate Figure C.1   
	2.e Figure I.1/ : Contains code to replicate Figure I.1 in the paper
	2.f core/ : A "core" library folder which contains modules that are used for equilibrium computation

Data Availability Statement :

Data for the real-world network experiments comes from the Indian Village public data set. While this data is already constructed and 
loaded in the replication package, this was generated from the dataset 
Banerjee, Abhijit, Chandrasekhar, Arun G, Duflo, Esther, Jackson, Matthew O, 2013, "The Diffusion of Microfinance", https://doi.org/10.7910/DVN/U3BIHX, Harvard Dataverse, V9 for the paper Banerjee, Abhijit, Chandrasekhar, Arun G, Duflo, Esther, and Jackson, Matthew O, "The diffusion of microfinance", Science 341, 6144 (2013), pp. 1236498. From their \datav4.0\Matlab Replication\GMMDiffusion\Main_models_1_3.m run parts 0 through 5, (Including the Construct Data part) when X is constructed, change the library to the library where this code is, and run it. 

Datafile : Real-World Network Experiments/X.mat

Computational Requirements :

1. MATLAB (code was run on MATLAB release 2022a)
2. Install the Communications Toolbox
3. Install network-tools.mltbx in the workspace (provided in the Social Influence Experiments folder)

The experiments were last run on a desktop with the following specifications :
8-core Apple M1 chip laptop with MacOS version 11.6.

The time required for each experiment is specified in the explanation below.

Replicating Experiments :

This section acts as a guide to which files to run to produce the results.

1. Figure 5.1/ :

This folder consists of the following files :
	a. Dplus1naive.m
	b. Figure5_1.pdf
	c. figure5_1code.m
    d. figure5_1plot.m
	e. findEqnaive.m 
    f. eqVsVecNaive.mat
    g. eqVsVec.mat

To generate the figure :
	Run - figure5_1plot.m
	Output - Figure5_1.pdf

Functions :
	a. figure5_1code.m - This modules generates the equilibrium aggregation errors which are then stored as "eqVsVec.mat" for Bayesian learning and "eqVsVecNaive.mat" for naive learning. 
	b. figure5_1plot.m - This module utilizes "eqVsVec.mat" and "eqVsVecNaive.mat" to plot the comparison between two types of learning. 
    c. findEqnaive.m - A function which calculates the equilibrium variance-covariance matrix in the naive learning setting
    d. Dplus1naive.m - A helper function which findEqnaive.m uses to calculate the equilibrium

Note : In "figure5_1code.m", the first line of code adds the "core/" folder to the current path which lets the code
       call the functions to compute equilibrium. To replicate the plots in the paper, the user can just run "figure5_1plot.m"
       as it utilizes the equilibrium aggregation data which is pre-computed and stored in "eqVsVec.mat" and "eqVsVecNaive.mat". If the user wants to verify that these indeed are the equilibrium values generated for the network we consider, they can run "figure5_1code.m" to generate the equilibrium data. The typical execution time for "figure5_1code.m" is 90 minutes. 

2. Social Influence Experiments/ :

This folder consists of the following files :
	a. overall_inf.m
	b. table1_table2_figure6_1_code.m
	c. table2latex.m
	d. network-tools.mltbx 	
    e. table1.tex
    f. table2.tex
    g. Figure6_1.pdf

To generate the tables/figures :
	Run - table1_table2_figure6_1_code.m
	Output - table1.tex : Table 1 in Tex format
		     table2.tex : Table 2 in Tex format
		     Figure6_1.pdf

Helper Functions :
	a. overall_inf.m : Outputs a vector of agents' social influences

Note : The first line of code in "table1_table2_figure6_1_code.m" adds the "core/" folder to the current path which lets the code
       call the functions to compute equilibrium. An approximate run time to generate both the tables and the figure is 2 min 30 s. 

3. Real-World Network Experiments/ :

This folder consists of the following files :
	a. FigureC_1_a_code.m
	b. FigureC_1_b_code.m
    c. FigureC_1_b_plot.m
	d. GetCellsSocial5050.m
	e. GetCellsSocialHet.m
	f. TakeAverage5050.m
	g. TakeAverageHet.m
	h. X.mat
    i. avgallHet.m
    j. FigureC_1a.pdf
    k. FigureC_1b.pdf

To generate the figures :
	Run - FigureC_1_a_code.m (For Figure C.1.a)
	      FigureC_1_b_plot.m (For Figure C.1.b)      

Helper Functions/Data :
	a. X.mat - This is the village data that comes from the Indian Village public data set. While this data is already constructed and loaded to both the codes, this was generated from Banerjee, Abhijit, Chandrasekhar, Arun G, Duflo, Esther, and Jackson, Matthew O, "The diffusion of microfinance", Science 341, 6144 (2013), 1236498. From their \datav4.0\Matlab Replication\GMMDiffusion\Main_models_1_3.m run parts 0 through 5, (Including the Construct Data part) when X is constructed, change the library to the library where this code is, and run it. 
    b. FigureC_1_a_code.m - This code generates Figure C 1a. An approximate run time for this code is 10s.
    c. FigureC_1_b_code.m - This code computes the average aggregation error across all nodes across all networks for each private signal variance that is varied for group B nodes. It outputs "avgallHet.mat".
    d. FigureC_1_b_plot.m - This code generates the plot of average aggregation error as a function of the private signal variance of group B agents. It uses "avgallHet.mat" as its input. 
    
Note : In "FigureC_1_a_code.m" and "FigureC_1_b_code.m", the first line of code adds the "core/" folder to the current path which lets the code
       call the functions to compute equilibrium. To replicate the plots in the paper, the user can run "FigureC_1_a_code.m" for Figure C 1a and "FigureC_1_b_plot.m" for Figure C 1b. 
       "FigureC_1_b_plot.m" uses pre-computed data from "avgallHet.mat". To verify that this is the correctly generated pre-computed data, the user can execute "FigureC_1_b_code.m" to verify/generate the data. The typical runtime for "FigureC_1_b_code.m" is around 7 min . 

4. Figure I.1/ :

This folder consists of the following files :
	a. Dplus1fixedWeights.m
	b. FigureI_1.pdf
	c. FigureI1_code.m
    d. FigureI1_plot.m
	e. fixedWeightFP.m
	f. weightMat.m
    g. plotVec.mat
    h. eqVsVec.mat

To generate the figure :
	Run - FigureI1_plot.m
    Output - FigureI_1.pdf

Functions :
    a. FigureI1_code.m : This module generates "plotVec.mat" and "eqVsVec.mat". "plotVec.mat" is a matrix to store the aggregation error and optimal weights by a social planner who minimizes the total aggregation error in the network for different variances 
                         of the private signal for group B agents. "eqVsVec.mat" stores the equilibrium aggregation error for the corresponding setting. The approximate run-time for this module is 400 min.
    b. FigureI1_plot.m : This module generates the plots for a comparison between the equilibrium aggregation error and that of the the optimal social planner. It uses "plotVec.mat" and "eqVsVec.mat" as its inputs. 
    
Note : In "FigureI_1code.m", the first line of code adds the "core/" folder to the current path which helps
       utilize the bayesian equilibrium computation modules. To replicate the plots in the paper, the user can just run "FigureI_1plot.m"
       as it utilizes the equilibrium aggregation data which is pre-computed and stored in "eqVsVec.mat" and "plotVec.mat". If the user wants to verify that these indeed are the values generated for the network we consider, they can run "figureI_1code.m" to generate the data.

5. core/ : 

This folder consists of the following files :
	a. Phi.m
    b. findEq.m
    c. cVal.m

Functions :

a. findEq.m :   This function calculates the equilibrium variance-covariance matrix and equilibrium weights
                Arguments : V0 - An initialization for the variance-covariance matrix.
                A - The adjacency matrix of the network.
                rho - The constant of the AR(1) process.
                sigma - A vector of variances for the private signals of
                the nodes in the network.
                sigma_nu - The variance of the independent innovations in the
                AR(1) stochastic process.
                tolerance - The maximum error which defines convergence
                Output : V_hat - Equilirbium variance-covariance matrix
                W_hat - Equilibrium weights agents put on their neighbors

b. Phi.m : This function computes the mapping of the variance-covariance matrix and the updated weights between two consecutive time intervals
           Arguments : V_t - Variance-Covariance matrix at time t
                         A - Adjacency matrix of the network
                         rho - The constant parameter of the AR(1) process
                         sigma - The vector of private signal variances of nodes in
                            the network
                         sigma_nu - The variance of the independent innovations in the
                                    AR(1) stochastic process.
           Output : V_tplus1 - The variance-covariance matrix at the next time
                        instant
                      W_t - The weight matrix (the weights each node puts on its
                        neighbors) to calculate the predictions at time (t+1) and on its
                        own private signal. This is a matrix of dimension N*2N. This
                        first N*N block of this matrix corresponds to weights each node
                        (corresponding to a row) puts on its neighbors and the adjacent
                        N*N block is a diagonal block corresponding to weights nodes put
                        on their private signals. 

c. cVal.m :  This function returns the weights for a particular node to calculate the posterior belief about
             the state at the next time instant for the current variance-covariance
             matrix V
             Arguments : V - The variance-covariance matrix at a current time
                   instant
                         A - The adjacency matrix of the network
                         i - The node index in the network whose weights we are
                            calculating
                         sigma - The vector of variances for private signals for
                                    each node in the network 
             Output    : wt - A (2N) dimensional vector, where N is the number of
                              nodes in the network where the first N elements correspond to weights on
                              a nodes neighbors and the (N+i)th element corresponds to the weight a
                              node puts on its private signal. The rest are zeros. 

Note : Detailed comments as to what each module does can be found in the modules itself. The reader can refer to the specific modules to
       get an understanding of each of its functionalities. 