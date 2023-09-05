# Discrete Time Model with Consumption Adjustment Costs

Unless otherwise indicated, the code in this repository was written by Brian Livingston
(livingstonb@uchicago.edu).

## Getting Started

This repository has been used successfully in both Unix and Linux.
Adjustments may be necessary to compile and execute the code in Windows.

### Prerequisites

The code was run primarily in Ubuntu 18.04 with Python 3.7.7 and the following packages:

* matplotlib 3.2.2
* scipy 1.5.0
* pandas 1.0.5
* numpy 1.18.5
* distutils 3.7.7
* Cython 0.29.21

One can use the Anaconda
or Miniconda package manager to install the above prerequesites
without too much trouble.
Additionally, GNU Make 4.1 and GCC 7.5.0 were used for project management and compilation.

### Compiling with Cython

In the terminal, navigate to the main directory, which should include the makefile,
and execute the *make* command.
If problems are encountered here, the user may want to check the *setup.py*
file which executes the compiling steps via *distutils* and *Cython*.
The *make clean* command will delete all files created by the *make* command.
This is occasionally necessary if the *Cython* .pyx and/or .pxd files have been changed
and the compiler produces an unexpected error during an attempt to re-compile.

### Setting the calibration

The desired calibration must be selected prior to running the code.
This is done in the *CHOOSE REPLICATION* section in *master.py*.
Note than any parameters not explicitly set in *calibrations.py*
will take the default values declared in *Defaults.py*.

### Running the code

The code can be both compiled (or re-compiled) and run by simply entering
the *make run* command in terminal. Alternatively, the code can be compiled
with the *make* command and subsequently run with *python master.py*. For each specification
presented in the paper, output is obtained by setting the specification as
described above, and then running *python master.py*.

## Replication of tables in Fuster, Kaplan, and Zafar (2020)

For table replication, all output referenced in this section is saved to a directory called
*output/replication_date_XX_XX_XXXX_time_XX_XX_XX* when the code is run. All the necessary output can be produced by repeatedly running *master.py*, each time using a new combination of `replication['mode']` and `replication['adjustCostOn']`. The final output from running each of the specifications as described is provided in the *final_output* directory.
In the following subsection I list--for each table--the output file(s) used to produce the table. In the subsection after that, I list the replication settings needed to produce each set of output files.

### List of tables and the corresponding output files

Table 5, Panel A

- `final_output/beta_het_with_adj_cost/mpcs_table.csv`

Table 5, Panel B

- `final_output/mean_wealth_with_adj_cost/mpcs_table.csv`

Table 5, Panel C

- `final_output/wealth_lt_1000_with_adj_cost/mpcs_table.csv`

Table 6 (model columns)

- `final_output/beta_het_with_adj_cost/treatment_responses.csv`

Table 7 (files listed sequentially in order of table columns)

- `final_output/beta_het_wo_adj_cost/mpcs_table.csv`
- `final_output/mean_wealth_wo_adj_cost/mpcs_table.csv`
- `final_output/wealth_lt_1000_wo_adj_cost/mpcs_table.csv`


Table A-11 (files listed sequentially in order of table columns)

- `final_output/beta_het_with_adj_cost/statistics.csv`
- `final_output/mean_wealth_with_adj_cost/statistics.csv`
- `final_output/wealth_lt_1000_with_adj_cost/statistics.csv`
- `final_output/beta_het_wo_adj_cost/statistics.csv`
- `final_output/mean_wealth_wo_adj_cost/statistics.csv`
- `final_output/wealth_lt_1000_wo_adj_cost/statistics.csv`

### List of output files and how to reproduce them, by model specification

Output files in `final_output/beta_het_with_adj_cost` contain the results for the specification with beta heterogeneity and a consumption adjustment cost.

		replication['mode'] = 'beta_heterogeneity'
		replication['adjustCostOn'] = True

Output files in `final_output/beta_het_wo_adj_cost` contain the results for the specification with beta heterogeneity and no consumption adjustment cost.

		replication['mode'] = 'beta_heterogeneity'
		replication['adjustCostOn'] = False

Output files in `final_output/mean_wealth_with_adj_cost` contain the results for the specification with no beta heterogeneity, with a mean wealth target, and with a consumption adjustment cost.

		replication['mode'] = 'mean_wealth'
		replication['adjustCostOn'] = True

Output files in `final_output/mean_wealth_wo_adj_cost` contain the results for the specification with no beta heterogeneity, with a mean wealth target, and with no consumption adjustment cost.

		replication['mode'] = 'mean_wealth'
		replication['adjustCostOn'] = False

Output files in `final_output/wealth_lt_1000_with_adj_cost` contain the results for the specification with no beta heterogeneity, with a target on households having less than $1000, and with a consumption adjustment cost.

		replication['mode'] = 'wealth_lt_1000'
		replication['adjustCostOn'] = True

Output files in `final_output/wealth_lt_1000_wo_adj_cost` contain the results for the specification with no beta heterogeneity, with a target on households having less than $1000, and with no consumption adjustment cost.

		replication['mode'] = 'wealth_lt_1000'
		replication['adjustCostOn'] = False
