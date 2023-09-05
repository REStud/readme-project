---
Contributors:
- Markus Dertwinkel-Kalt
- Holger Gerhardt
- Gerhard Riener
- Frederik Schwerter
- Louis Strang
---



# Replication package for: “Concentration Bias in Intertemporal Choice”



Overview
--------


This is the replication package for Dertwinkel-Kalt, Gerhardt, Riener, Schwerter, and Strang (2021), “Concentration Bias in Intertemporal Choice”, *Review of Economic Studies*.

The package includes the [oTree](https://www.otree.org) code for running the consumption experiment and the [z-Tree](https://www.ztree.uzh.ch/en.html) code for running the money experiment described in the article.

It also includes the [Stata](https://www.stata.com/) code of all hypothesis tests and statistics reported in the article (figures, tables, numbers reported in the text) as well as the data on which the code runs. Moreover, it includes the [R](https://www.r-project.org/) code of the calibration exercise mentioned in Section 4.



Data availability and provenance
--------------------------------


### Summary of availability

All data analyzed in the manuscript are publicly available and included in this replication package.


### License for data

The data are licensed under a [Creative Commons Attribution–NonCommercial 4.0 International (CC BY-NC 4.0)](https://creativecommons.org/licenses/by-nc/4.0/) license.


### Details on each data source

- The experimental data used to support the findings of this study are included in this replication package. The data were collected by the authors and are available under a [Creative Commons Attribution–NonCommercial 4.0 International (CC BY-NC 4.0)](https://creativecommons.org/licenses/by-nc/4.0/) license.
- The data for the consumption experiment are contained in the file `Consumption Experiment/Stata/Consumption_Experiment.csv`.
- The data for the money experiment are contained in the file `Money Experiment/Stata/Money_Experiment.csv`.



Dataset list
------------


| Data file                                                 | Source                   | License                                                         | Provided |
|-----------------------------------------------------------|--------------------------|-----------------------------------------------------------------|----------|
| `Consumption Experiment/Stata/Consumption_Experiment.csv` | Collected by the authors | [CC BY-NC 4.0](https://creativecommons.org/licenses/by-nc/4.0/) | Yes      |
| `Money Experiment/Stata/Money_Experiment.csv`             | Collected by the authors | [CC BY-NC 4.0](https://creativecommons.org/licenses/by-nc/4.0/) | Yes      |



Computational requirements
--------------------------


### Software requirements

- **Stata**
  - The code was last run with version 17.
  - Stata is commercial software (for details see https://www.stata.com).

- **R**
  - The code was last run with version 4.1.0.
  - R is available free of charge (https://www.r-project.org)

- **oTree**
  - The code was optimized for oTree 3.3.11 in combination with Python 3.7.4.
  - The experiment was conducted using Google Chrome in kiosk mode in Full HD (1920 × 1080 pixels).
  - oTree is available free of charge (https://www.otree.org).

- **z-Tree**
  - z-Tree version 3.5.1 was used.
  - z-Tree is available free of charge (https://www.ztree.uzh.ch/en.html) but may not be freely redistributed.


### Memory and runtime requirements

#### Summary

Approximate time needed to reproduce the **Stata analyses** on a standard (2021) desktop machine: < 10 minutes.

Approximate time needed to reproduce the **R analyses** reported in Section 4 of the manuscript and in Supplementary Appendix C on a standard (2021) desktop machine: 1–8 hours.

#### Details

The code was last run on a **4-core Intel-Core-i5-based iMac with macOS version 11.3.1**.



Description of programs/code
----------------------------

### oTree

- The experiment was conducted using [Google Chrome](https://www.google.com/chrome/) in kiosk mode in Full HD (1920 × 1080 pixels).
- The code was optimized for oTree 3.3.11 in combination with Python 3.7.4.


### z-Tree

- z-Tree version 3.5.1 was used.
- To switch between the conditions Money-Main and Money-Mechanism, set the variable `DispersedPerDay = 0` (Main) or `DispersedPerDay = 1` (Mechanism).
- The four `.txt` files located in `Money Experiment/z-Tree` are Table Loader input files for z-Tree. They have to be stored in the same directory as the z-Tree executable (`ztree.exe`).
- Output: All relevant output variables are collected in the session table, in particular, the choices made by subjects:
  - `choices_ordered_by_condition[01]`, ..., `choices_ordered_by_condition[24]` for the choice lists (coded 1, 2, ..., 9); and
  - `choices_ordered_by_condition[25]`, ..., `choices_ordered_by_condition[60]` for the convex time budgets (coded 0.00, 0.01, ..., 1.00).
  - The same applies to the answers for the mental-arithmetic task.
  - The associated response times are also recorded in the session table.


### License for code

The code is licensed under a [Creative Commons Attribution–NonCommercial 4.0 International (CC BY-NC 4.0)](https://creativecommons.org/licenses/by-nc/4.0/) license.



Instructions to replicators
---------------------------


### Instructions for running the consumption experiment

- Install oTree (in the “models.py format” such as version 3.3.11) as described on https://otree.readthedocs.io/en/self/install.html.
- Run `otree devserver` in the `Consumption Experiment/oTree` directory.
- For testing the “Implementation Work 1” app, use the e-mail address example@focusing.inc or focusing@example.com.


### Instructions for running the money experiment

- Obtain z-Tree (version 3.5.1) from https://www.ztree.uzh.ch/en.html.
- Input file: Load `Money Experiment/z-Tree/0_FOCUSING_2015-09-18_DPD0.ztt` into z-Tree.
- To switch between the conditions Money-Main and Money-Mechanism, set the variable `DispersedPerDay = 0` (Main) or `DispersedPerDay = 1` (Mechanism).
- The four `.txt` files located in `Money Experiment/z-Tree` are Table Loader input files for z-Tree. They have to be stored in the same directory as the z-Tree executable (`ztree.exe`).


### Instructions for replicating the results of the consumption experiment

- Change the working directory in Stata to the `Consumption Experiment/Stata` directory.
- Run `Consumption_Experiment tables and values.do` to obtain all statistics and tables reported in the manuscript and in Supplementary Appendix A.
- Run `Consumption_Experiment figures.do` to obtain all figures included in the manuscript and in Supplementary Appendix A.


### Instructions for replicating the results of the money experiment

- Change the working directory in Stata to the `Money Experiment/Stata` directory.
- Run `Money_Experiment tables and values.do` to obtain all statistics reported in the manuscript (Section 5) and in Supplementary Appendix D.



List of tables and figures and programs
---------------------------------------


The provided code reproduces:

- all numbers provided in text in the paper and in the Supplementary Appendix, and
- all tables and figures in the paper and in the Supplementary Appendix.


### Tables and figures in the manuscript

| Table/Figure  | Program                                                                                  | Output file                                                                                | Note                                |
|---------------|------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------|-------------------------------------|
| Table 1       | N/A                                                                                      | `Consumption Experiment/Table 1.tex`                                                       | Overview of the experimental design |
| Tables 2–3    | `Consumption Experiment/Stata/Consumption_Experiment tables and values.do`, lines 70–114 | `Consumption Experiment/Stata/Consumption_Experiment tables and values.log`, lines 122–394 |                                     |
| Figures 1–2   | `Consumption Experiment/oTree`                                                           |                                                                                            | Screenshots of decision screens     |
| Figure 3      | `Consumption Experiment/Stata/Consumption_Experiment figures.do`, lines 32–49            | `Consumption Experiment/Stata/Figure 3.pdf`                                                |                                     |
| Figures 4–5   | `Consumption Experiment/oTree`                                                           |                                                                                            | Screenshots of decision screens     |


### Tables and figures in the Supplementary Appendix

| Table/Figure    | Program                                                                                   | Output file                                                                                 | Note                                                     |
|-----------------|-------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------|----------------------------------------------------------|
| Tables A1–A7    | `Consumption Experiment/Stata/Consumption_Experiment tables and values.do`, lines 129–247 | `Consumption Experiment/Stata/Consumption_Experiment tables and values.log`, lines 423–1205 |                                                          |
| Tables D1–D4    | `Money Experiment/Stata/Money_Experiment tables and values.do`, lines 65–101              | `Money Experiment/Stata/Money_Experiment tables and values.log`, lines 198–351              |                                                          |
| Figures A1–A2   | `Consumption Experiment/oTree/`                                                           |                                                                                             | Screenshots of real-effort task                          |
| Figures A3–A4   | `Consumption Experiment/oTree/`                                                           |                                                                                             | Screenshots of manual elicitation of indifference points |
| Figures A5–A7   | `Consumption Experiment/Stata/Consumption_Experiment figures.do`, lines 58–117            | `Consumption Experiment/Stata/Figures A5-A7.pdf`                                            |                                                          |
| Figures C1 i–vi | `Consumption Experiment/R/Calibration Exercise.R`, lines 519–750                          | `Consumption Experiment/R/Figures C1 i-vi.pdf`                                              |                                                          |
