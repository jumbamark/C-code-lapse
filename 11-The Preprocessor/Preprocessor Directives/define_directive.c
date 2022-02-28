#include <stdio.h>
#define PI 3.14
#define AREA(r) (PI*r*r)
// #define AREA(r) (PI * (r) * (r))

// Lesson
void lesson () {
    #define sqr(x) x*x

    int x = 16/sqr(4);
    printf("\n%d\n", x);
}

int main () {
    float radius = 2;
    printf("%3.2f\n", PI);
    printf("Area is %5.2f\n", AREA(radius));
    printf("Area with radius + 1: %5.2f\n", AREA(radius+1)); //solution to this is to enclose each parameter in parathensis to obtain the correct order of operations

    // Lesson
    lesson();
}

// A macro is a segment of code which is replaced by the value of macro. Macro is defined by # directive. PI is the macro name which will be replaced by 3.14
// #define directive is used to create object-like macros for constants based on values or expressions. It can also be used to create function-like macros with arguments that will be replaced by the preprocessor.
//  The preprocessor does a direct replacement without any calculations which can lead to unexpected results like the one above