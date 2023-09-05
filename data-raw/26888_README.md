---
contributors:
  - Steffen Altmann
  - Andreas Grunewald
  - Jonas Radbruch
---

# Replication package for: “Interventions and Cognitive Spillovers”

## Overview

This is the replication package for Altmann, Grunewald, and Radbruch (2021) "Interventions and Cognitive Spillovers", _Review of Economic Studies_.

The package includes the [oTree](https://www.otree.org) code for running the laboratory experiment.

It also includes the [Stata](https://www.stata.com/) code of all hypothesis tests and statistics reported in the article (figures, tables, numbers reported in the text) as well as the data on which the code runs. A master.do file runs all do files which generate the figures and tables.

## Data Availability and Provenance Statements

### Summary of availability

All data analyzed in the manuscript are publicly available and included in this replication package.

### License for data

The data are licensed under a [Creative Commons Attribution–NonCommercial 4.0 International (CC BY-NC 4.0)](https://creativecommons.org/licenses/by-nc/4.0/) license.

### Details on each data source

- The experimental data used to support the findings of this study are included in this replication package. The data were collected by the authors and are available under a [Creative Commons Attribution–NonCommercial 4.0 International (CC BY-NC 4.0)](https://creativecommons.org/licenses/by-nc/4.0/) license.
- The data for the laboratory experiment are contained in the file `EmpiricalAnalysis/original_data/formatted_data_replication.dta`.
- The data for the online experiment are contained in the file `EmpiricalAnalysis/original_data/formatted_data_long_mturk.dta`.

## Dataset list

| Data file                                                        | Source                   | License                                                         | Provided |
| ---------------------------------------------------------------- | ------------------------ | --------------------------------------------------------------- | -------- |
| `EmpiricalAnalysis/original_data/formatted_data_replication.dta` | Collected by the authors | [CC BY-NC 4.0](https://creativecommons.org/licenses/by-nc/4.0/) | Yes      |
| `EmpiricalAnalysis/original_data/formatted_data_long_mturk.dta`  | Collected by the authors | [CC BY-NC 4.0](https://creativecommons.org/licenses/by-nc/4.0/) | Yes      |

## Computational requirements

### Software Requirements

- Stata (code was last run with version 15)

  - all additional (user-written) commands--- such as estout--- are provided in the library. The "`master.do`" sets the appropriate path accordingly.

- **oTree**
  - The code was optimized for oTree 3.3.11 in combination with Python 3.7.4.
  - The laboratory experiment was conducted using Google Chrome in kiosk mode in Full HD (1920 × 1080 pixels).
  - oTree is available free of charge (https://www.otree.org).

### Memory and Runtime Requirements

#### Summary

Approximate time needed to reproduce the analyses on a standard 2021 desktop machine: <10 minutes

#### Details

The code was last run on a **M1-based laptop with MacOS version 111.3.1**.

## Description of programs/code

### Stata and Empirical Analysis of the Experiment

- Do-files in `EmpiricalAnalysis/dofiles` generate all tables and figures in the main body of the article. The do-file `EmpiricalAnalysis/master.do` will run them all. Each do-file called from `master.do` identifies the subsection to which the tables or figures belong that are created (e.g., `4_1_Attention_Allocation.do`). Output files are named after their appearances in the manuscript (`table5.tex`, `figure12.tif`) and thus should be easy to correlate with the manuscript.
- The do-files also generate the tables and figures in the (online) appendix. More specifically, they will be generated when referenced in the manuscript (e.g., if referenced in section 4.1, the table is also created in the do file `4*1*...')
- Stata Packages are provided in `EmpiricalAnalysis/library` and the `master.do` file sets the Path appropriately.

### oTree

- The experiment was conducted using [Google Chrome](https://www.google.com/chrome/) in kiosk mode in Full HD (1920 × 1080 pixels).
- The code was optimized for oTree 3.3.11 in combination with Python 3.7.4.

## Instructions to Replicators

### Instructions for running the experiment

- Install oTree (in the “models.py format” such as version 3.3.11) as described on https://otree.readthedocs.io/en/self/install.html.
- Run `otree devserver` in the `oTree` directory.

### Instructions for replicating tables, figures and numbers from the manuscript

- Edit the first line of `EmpiricalAnalysis/master.do` to adjust the project path. The path should point to the parent directory "Replication Package" on your machine.
- Run `EmpiricalAnalysis/master.do` to run all do files in sequence, which will generate all tables and figures in `/out' and log files which contain the according numbers.

List of tables and programs
---------------------------\*\*\*\*

The provided code reproduces:

- all numbers provided in the paper and in the Online Appendix, and
- all tables and figures in the paper and in the Online Appendix.

### Tables and figures in the manuscript

| Figure/Table # | Program                              | Output file                        | Note                                                       |
| -------------- | ------------------------------------ | ---------------------------------- | ---------------------------------------------------------- |
| Table 1        | N/A                                  | N/A                                | Overview of the experimental design                        |
| Table 2        | 4_2_Interventions_targeted_domain.do | out/table2.tex                     | Behavior in the Targeted Choice Domain                     |
| Table 3        | 4_2_Cognitive_Spillover.do           | out/table3.tex                     | Cognitive Spillovers                                       |
| Table 4        | 4_3_Payoffs_And_Efficiency.do        | out/table4.tex                     | Effect of Interventions on Overall Payoffs                 |
| Table 5        | 4_3_Payoffs_And_Efficiency.do        | out/4_3_Payoffs_And_Efficiency.log | Hypothetical Payoffs Across Incentive Conditions           |
| Figure 1       | N/A                                  | N/A                                | Screenshot Decision Task                                   |
| Figure 2       | 4_1_Attention_Allocation.do          | out/figure2.tif                    | Attention Spans in Baseline                                |
| Figure 3       | 4_1_Passive_Behavior.do              | out/figure3a.tif, out/figure3b.tif | Passive Behavior in Baseline                               |
| Figure 4       | 4_2_Cognitive_Spillover.do           | out/figure4.tif                    | Heterogeneity of Cognitive Spillovers: Raven Score         |
| Figure 5       | 4_2_Cognitive_Spillover.do           | out/figure5.tif                    | Heterogeneity of Cognitive Spillovers: Task Difficulty     |
| Figure 6       | 4_2_Cognitive_Spillover.do           | out/figure6.tif                    | Heterogeneity of Cognitive Spillovers: Relative Incentives |
| Figure 7       | 4_3_Payoffs_And_Efficiency.do        | out/figure7.tif                    | Heterogeneity of Payoff Effects: Raven Score               |

### Tables and figures in the Appendix

| Figure/Table # | Program                     | Output file                            | Note                                     |
| -------------- | --------------------------- | -------------------------------------- | ---------------------------------------- |
| Figure B.1     | 4_1_Attention_Allocation.do | out/figureB_1a.tif, out/figureB_1b.tif | Heterogeneity in Attention Allocation    |
| Table B.1      | 4_1_Attention_Allocation.do | out/tableB_1.tex                       | Attention and Choice Quality in Baseline |
| Table B.2      | 4_1_Passive_Behavior.do     | out/tableB_2.tex                       | Default Adherence in Baseline            |

### Tables and figures in the Supplementary Material

| Figure/Table # | Program                                             | Output file   | Note                                                                             |
| -------------- | --------------------------------------------------- | ------------- | -------------------------------------------------------------------------------- |
| Figure O.1     | 4_1_Attention_Allocation                            | out/figureO_1 | Attention Spans in Baseline                                                      |
| Figure O.2     | 4_3_Payoffs_And_Efficiency.do                       | out/figureO_2 | Effect of Interventions on Overall Payoffs: Heterogeneity by Raven Score         |
| Figure O.3     | 4_2_Cognitive_Spillover.do                          | out/figureO_3 | Attention Spans in the Online Experiment                                         |
| Figure O.4     | N/A                                                 | N/A           | Screenshots                                                                      |
| Figure O.5     | N/A                                                 | N/A           | Screenshots                                                                      |
| Table O.1      | Supplementary_Material_Randomization_Check_Table.do | out/tableO_1  | Descriptives                                                                     |
| Table O.2      | 4_2_Interventions_targeted_domain.do                | out/tableO_2  | Behavior in the Targeted Domain: Heterogeneity by Relative Incentives            |
| Table O.3      | 4_2_Interventions_targeted_domain.do                | out/tableO_3  | Behavior in the Targeted Domain: Heterogeneity by Raven Scores                   |
| Table O.4      | 4_2_Cognitive_Spillover.do                          | out/tableO_4  | Heterogeneity of Cognitive Spillovers: Raven Score                               |
| Table O.5      | 4_2_Cognitive_Spillover.do                          | out/tableO_5  | Heterogeneity of Cognitive Spillovers: Task Difficulty                           |
| Table O.6      | 4_2_Cognitive_Spillover.do                          | out/tableO_6  | Heterogeneity of Cognitive Spillovers: Relative Incentives                       |
| Table O.7      | 4_2_Interventions_targeted_domain.do                | out/tableO_7  | Treatment Effects in the Ample Environment                                       |
| Table O.8      | 4_3_Payoffs_And_Efficiency.do                       | out/tableO_8  | Effect of Interventions on Overall Payoffs: Heterogeneity by Relative Incentives |
| Table O.9      | 4_3_Payoffs_And_Efficiency.do                       | out/tableO_9  | Effect of Interventions on Overall Payoffs: Heterogeneity by Raven Score         |
| Table O.10     | 4_2_Cognitive_Spillover.do                          | out/tableO_10 | Results of the Online Experiment                                                 |
