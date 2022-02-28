#include <stdio.h>

#define LEVEL 4

int main () {
    // an if statement uses data provided at runtime with the possibility of branching to any else clause
    #if LEVEL > 6
        printf("Python\n")
    #elif LEVEL > 5
        printf("Javascript\n");
    #elif LEVEL > 4
        printf("React\n");
    #else
        printf("C Programming\n");
    #endif

    // There are instances where such conditional compilation can be useful but this type of code should be used sparingly
    // The defined() preprocessor operator can be used with #if as in;
    #if !defined(LEVEL)
        printf("Django\n");
    #endif

    return 0;
}

// Conditional compilation of segments of code is controlled by a set of directives: #if, #else, #elif and #endif
// The #if and if statements are not interchangable. The #if is evaluated using data available to the preprocessor which then sends only the true branch for compilation