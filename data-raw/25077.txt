This README file describes the replication package for Kurlat, Pablo and Scheuer, Florian (forthcoming), “Signaling to Experts,” Review of Economic Studies. 


Data Availability Statement

No new data were generated or analysed in support of this research. 

Software Requirements

MATLAB (code was run with MATLAB Release 2020a, no special toolboxes are required).


Description of Programs and Instructions

The package contains the MATLAB files to reproduce Figures 6 and 7 in the paper, which are based on numerical simulations. No data is required to produce the figures.1. The MATLAB file “candidateeq.m” produces Figure 6. It calls on the other MATLAB files equil.m, errmktclear.m, f.m, format_ticks.m, indif.m, and mktclear2.m (which should be put in the same folder).
2. The MATLAB file “regions_1.m” produces the left panel of Figure 7. It calls on the other MATLAB files equil_regions_1.m, errmktclear_regions_1.m, f_regions.m, indif_regions_1.m, and plotTickLatex2D.m (which should be put in the same folder).
3. The MATLAB file “regions_2.m” produces the right panel of Figure 7. It calls on the other MATLAB files equil_regions.m, errmktclear_region.m, f_regions.m, indif_regions.m, and plotTickLatex2D.m (which should be put in the same folder).

