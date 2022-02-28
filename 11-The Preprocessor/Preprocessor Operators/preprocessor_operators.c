#include <stdio.h>
#include <string.h>

#define TO_STR(x) #x

// example 2
#define STR(y) #y
#define STRLEN(y) strlen(y)

int main () {
    printf("%s\n", TO_STR(123\\12));
    // example 2
    printf("%zu\n", STRLEN(STR(12345)));

    return 0;
}

// The C preprocessor provides the following operators
/*
* # Operator
- The # macro operator is called the stringification or stringizing operator and tells the preprocessor to convert a parameter to a string constant
- White space on either side of the argument are ignored and escape sequences are recognized
*/