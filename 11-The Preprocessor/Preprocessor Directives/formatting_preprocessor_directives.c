#include <stdio.h>

#define VERY_LONG_CONSTANT \
23.678901

#define MAX 100
#define MIN 0
#define SQUARE(x) \
x*x

int main () {
    return 0;
}

// When using preprocessor directives the # must be the first character on a line but there can be any amount of whitespace before the # and between the # and the directive
// If a # directive is lengthy, you can use the \ continuation character to extend the definitionover more than one line