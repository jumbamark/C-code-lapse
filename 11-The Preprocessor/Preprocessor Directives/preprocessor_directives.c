// The C preprocessor uses the # directives to make substitutions in program source code before compilation i.e the line #include <stdio.h> is replaced by the contents of the stdio.h header file before a progra, is compiled

/*
Preprocessor directives and their uses;
* #include - including header files.
* #define, #undef - defining and undefing macros
* #ifdef, #ifndef #if #else #elif #endif - conditional compilaton
* #pragma - implementation and compiler specific
* #error #warning - Output an error or warning message. An error halts compilation.
- Do not put semicolon character at the end of # directive
*/

/*
* The include directive
- The include directive is for including header files in a program. Header file declares a collection of functions and macros for a library
* Some useful libraries in C;
stdio - input/output functions, including printf and file operations.
stdlib - memory management and other utilities
string - functions for handling strings
errno - errno global variable and error code macros
math - common mathematical functions
time - time/date utilities

- Corresponding header files for the libraries end with .h by convention. The #include directive expects brackets around the header filename if the file should be searched for in the compiler include paths
- A user defined header file is also given the .h extension but is referred to with quotation marks as in "myutil.h". When quotation marks are used the file is searched for in the source code directory
* #include "myutil.h"
- some developers use .hpp extension for header files
*/