#include <stdio.h>

#define RATE 0.08

#ifndef TERM
    #define TERM 24
#endif

int main () {

    #ifdef RATE  // this branch will be compiled
        #undef RATE
        printf("Redefinig RATE\n");
        #define RATE 0.068
    #else  // this branch will not be compiled
        #define RATE 0.068
    #endif
    printf("RATE: %f TERM: %d\n", RATE, TERM);

    return 0;
    // Becuase RATE is defined at the top only the #ifdef clause will be compiled. The optional #else branch compiles when #ifdef RATE is false during preprocessing. #endif is required to close the block of code.
}

// The #ifdef #ifndef #undef directives operate on macros created with #define
// There will be compilation problems if the same macro is defined twice, so you can check for this with an #ifdef directive . Or if you may want to redefine a macro you first use the #undef
// #elif directive is like an else if and can be used to provide additional alternatives after #else