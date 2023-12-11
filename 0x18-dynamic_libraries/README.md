0x18. C - Dynamic libraries
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is a dynamic library, how does it work, how to create one, and how to use it
What is the environment variable $LD_LIBRARY_PATH and how to use it
What are the differences between static and shared libraries
Basic usage nm, ldd, ldconfig
Tasks
0. A library is not a luxury but one of the necessities of life
Create the dynamic library libdynamic.so containing all the functions

1. Without libraries what have we? We have no past and no future
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
