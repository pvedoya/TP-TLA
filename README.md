# eaC

1) Build
To build the Parser, use the Makefile included. To do so, run the following command in the terminal, standing in the project's main directory:

$> make

This will generate the parser inside the "Parser" folder.

2) Compile
The compiler will turn your file into a .c file, and create the executable with a name you choose.
Make sure to have your desired file in the main directory, and run the compile.sh executable, with your file as first parameter and the desired name for your program as second parameter.
This will create a ccode.c file with your code in c, and will compile this file to create the executable.
From here you can execute the program using "./programName", where programName is the second parameter when you run compile.sh.

3) Examples
Inside the "examples" folder, you will finde some examples created to show how the compiler works. These are some small programs in the simplified language, which can be compiled and executed in c.
From the root folder, execute on the terminal:

$> make customExamples

This will compile the examples code from the folder and create 5 executables in the main folder, which you can then run. Be sure to have the parser created before running this command.

4) Files location

> Report: Inside the root folder, named "Informe TPE Simplified";
> Example programs: Inside the "examples" folder.
> Files needed for the parser inside the "Parser" folder.
> node.c and node.h files inside the root folder.
> ReadMe inside the root folder. 

5) Authors

> Pedro Remigio Pingarilho
> Miguel Di Luca
> Facundo Astiz Meyer
> Pedro Vedoya
