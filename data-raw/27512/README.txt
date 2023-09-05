*************************************************************************
* Date : April 2021
* Paper:
*
*                 Collateral booms and information depletion
*                     V. Asriyan, L. Laeven, A. Martin
*                                RES 2021
*
*
*
*************************************************************************

-------------------------------------------------------
1. Overview
-------------------------------------------------------

The code in this folder, i.e., "replication_files_simulations", constructs the 
figures using Matlab Release 2019a. The code is divided in two high-level directories,
i.e., "static_model" and "dynamic_model". 

Within the high-level directory "static_model": one "master_file" runs all the code to 
generate figures 1 and 2 in the paper and figure 7 in the appendix. The replicator 
should expect the code to run for about 5 seconds. 

Within the high-level directory "dynamic_model": one "master_file" runs all the code to 
generate figures 4 5 and 6 in the paper. The replicator should expect the code to run 
for about 15 seconds. 

-------------------------------------------------------
2. Computational requirements
-------------------------------------------------------

2.1. Software requirements

Matlab (code was last run with Matlab Release 2019a)

2.2. Memory and runtime requirements

Details on the machine used to run the code: PC machine, Intel Core i7 @ 2.60GHz processor, 
with 6 physical cores, and 16 GB of RAM. It runs Microsoft Windows 10. 

Runtime to generate figures 1 2 and 7: 5 seconds

Runtime to generate figures 4 5 and 6: 15 seconds

-------------------------------------------------------
3. Description of programs/code
-------------------------------------------------------

Each high-level directory, i.e., "static_model" and "dynamic_model", includes one "master_file" and 3 subdirectories,
i.e., "inputs" "functions" and "outputs". 

3.1. Master file

This file runs all the code used to solve the model and to generate the figures. It is divided 
into sections. The content of the sections is explained at the beginning of each "master_file" and 
depends on the high-level directory. Please, check the documentation at the beginning of each 
"master_file" for details.  

3.2. Inputs subdirectory

It contains the parameter values. 

3.3. Functions subdirectory 

It contains all the functions that are called in the master file either to solve or
to simulate the model.

3.4. Outputs subdirectory 

It containts the .m files that generate the figures as well as the .eps files. 

3.5. Solution methods

Static model: a Matlab's numerical solver

Dynamic model: projection, policy function iteration (time iteration algorithm)

-------------------------------------------------------
4. Instructions to replicators
-------------------------------------------------------

Once the folder "replication_files_simulations" is on the computer of the replicator:

4.1. Solve the static model

To solve the different versions of the static model and to generate figures 1 2 7, open
the subdirectory "static_model" and run the "Master_file". 
Important: the current folder must be "replication_files_simulations\static_model" when the replicator runs this file. 

4.2. Solve the dynamic model

To solve the different versions of the dynamic model and to generate figures 4 5 6, open
the subdirectory "dynamic_model" and run the "Master_file". 
Important: the current folder must be "replication_files_simulations\dynamic_model" when the replicator runs this file. 


-------------------------------------------------------
5. List of figures and programs 
-------------------------------------------------------

Figure          Program                                                         Section number in the "Master_file"                                    Output file    

1               replication_files_simulations\static_model\Master_file                          3                            replication_files_simulations\static_model\outputs\Figure1.eps

2               replication_files_simulations\static_model\Master_file                          4                            replication_files_simulations\static_model\outputs\Figure2.eps

7               replication_files_simulations\static_model\Master_file                          5                            replication_files_simulations\static_model\outputs\Figure7.eps

4               replication_files_simulations\dynamic_model\Master_file                         4                            replication_files_simulations\dynamic_model\outputs\Figure4.eps                   

5               replication_files_simulations\dynamic_model\Master_file                         4                            replication_files_simulations\dynamic_model\outputs\Figure5.eps

6               replication_files_simulations\dynamic_model\Master_file                         5                            replication_files_simulations\dynamic_model\outputs\Figure6.eps