List of files in the Figure_3 folder:

Matlab functions:

smooth.m - generates the smoothed recession probability.

Data files:

prob_long.txt - the recession probability for the full sample.

prob_short.txt - the recession probability for the subsample.

nber_long.txt and nber_short.txt - the NBER’s recession indicators for the two samples.

Other files:

test_plot.R - loads the data files to produce the figure.

Figure 3.eps - Figure 3 in the paper.

Implementation:

First, run smooth.m directly on a desktop. The running time is a few minutes. 
The default is for the full sample, i.e., Figure 3(b). Add D=GDP(1:187,:) to obtain the smoothed recession probability for the subsample, i.e., Figure 3(a). See within code for details.

Then, run tests_plot.R to obtain Figure3.eps that corresponds to Figure 3 in the paper.
All the files needed for tests_plot.R is included in the current folder.

