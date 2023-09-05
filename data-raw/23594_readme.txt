List of files in the Table_2 folder:

Matlab functions:

FiniteSample.m – computes the SupLR test and its critical values for T=200,500 and eps=0.02,0.05. 
SupTS.m - computes the SupTS test and its critical values for given T and eps. 
TS.m - calls SupTS.m to produce results for T=200,500 and eps=0.02,0.05.
post_process.m - merge the output from different workers on the cluster.
rejf.m - load the data output from running FiniteSample.m (after running post_process.m) and SupTS.m to compute the rejection frequencies as reported in Table 2.

Data files:

SupLR_200_002.mat - results for the SupLR test with T=200 and eps=0.02; the 1st column: the test statistic, the 2nd-6th columns: the critical values at the 10,7.5,5.0,2.5, and 1.0 percent levels.

SupLR_200_005.mat - results for the SupLR test with T=200 and eps=0.05.

SupLR_500_002.mat - results for the SupLR test with T=500 and eps=0.02.

SupLR_500_005.mat - results for the SupLR test with T=500 and eps=0.05.

TS_200_002.mat - results for the SupTS test with T=200 and eps=0.02; the 1st column: the test statistic, the 2nd-6th columns: the critical values at the 10,7.5,5.0,2.5, and 1.0 percent levels.

TS_200_005.mat - results for the SupTS test with T=200 and eps=0.05.

TS_500_002.mat - results for the SupTS test with T=500 and eps=0.02.

TS_500_005.mat - results for the SupTS test with T=500 and eps=0.05.

Result file:

Table2a.csv and Table2b.csv - Table 2 in the paper.


Program submission files:

submitjobs - for the SupLR test; launches multiple serial jobs in batch, see within the file for explanations.

run_matlab_job - for the supLR test; a companion script for submitmjobs for MATLAB apps, see within the file for explanations.

Implementation:

First, use the two submission files to run the SupLR test on a cluster (e.g., qsub -P dsge2 submitmjobs 50 100 run_matlab_job "-l h_rt=24:00:00"). 
The main program is FiniteSample.m. The default setting is for T=500 and trimming=0.02. Change them to 200 and 0.05 for other cases. 

Then, run post_process.m to merge the output files to generate SupLR_500_002.mat, for example.
See within the code for details.

Next, run TS.m on a desktop computer for the SupTS test.

(These files are already included in the current folder, so it is possible to skip the above steps if needed.)
 
Finally, use rejf.m to compute rejection frequencies. Results saved in Table2a.csv and Table2b.csv. 


Note on computation time:

SupLR_200_002.mat and SupLR_200_005.mat are both computed using 200 nodes (task=200), with 25 replications (ntime=25) assigned to each node. The computation time is approximately 6 hours for each.

SupLR_500_002.mat and SupLR_500_005.mat are both computed using 100 nodes (task=100), with 50 replications (ntime=50) assigned to each node. The computation time is approximately 13 hours for each. 


