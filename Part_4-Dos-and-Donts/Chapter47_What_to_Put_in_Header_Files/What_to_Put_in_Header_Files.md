## What Put in Header Files?

This Chapter explains what to and what not to keep in header files. In general, when we want to share data between multiple source files, we create a common header file and include it in each source file. For the following  examples, we will use two source files and one common header file:

    *   myheaderfile.h - shared header file
    *   source.c - main source file
    *   source2.c - second source file

A good practice is to guard the content of the myheaderfile.h file with the include guards/header guards:

_#ifndef MYHEADERFILE_H
_#define MYHEADERFILE_H

//  code goes here

_#endif
