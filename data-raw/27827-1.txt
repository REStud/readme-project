Figure 4 of "Overcoming Free-Riding in Bandit Games":

This folder contains a version of Figure 4 in .pdf and .eps format in the folder Results, the code (written in C++) in the folder SourceCode, and the folder ParameterParser with a configuration file and a counter for the created folders.

Requirements:

The code uses the external libraries Boost (version 1.76.0) and Eigen (version 3.3.9).
You can download the Boost library at https://www.boost.org/users/download/; at https://www.boost.org/doc/libs/1_76_0/more/getting_started/windows.html or https://www.boost.org/doc/libs/1_76_0/more/getting_started/unix-variants.html you can find some more information for getting started with Windows or Unix.
The library Eigen can be cloned via Git at https://gitlab.com/libeigen/eigen; more information can be found at http://eigen.tuxfamily.org/.

Compiling:

After installing these libraries, you can compile the code in the SourceCode folder.
We recommend compiling the SourceCode with CMake into a newly created build-folder.
You can download CMake at https://cmake.org/download/; at https://cmake.org/documentation/ you can find documentations of various versions of CMake.
The corresponding CMakeLists.txt (here configured for usage under Windows) is also in the folder SourceCode.
Depending on the folder where you installed the external libraries, you may have to edit the links of "BOOST_ROOT" and "EIGEN_INCLUDE_DIR" and change or delete the line "set(Boost_ARCHITECTURE "-x32")" in CMakeLists.txt.

Usage:

To build the project, compile the code in the SourceCode folder and choose main.cpp as startup file.
After compiling the code, you have the program sse.exe in your build-folder.
You can change the input parameters of the sse.exe in the file sse_parser.init in the folder ParameterParser.
Currently the parameters are set as in Figure 4.
In sse_parser.init you can edit the path where the folder with the results should be saved.
To execute the program that creates the figure, click on sse.exe.








