#include <stdio.h>

float add(float x, int y) {
    float a = x + y;
    return a;
}

float subtract(float x, int y) {
    float a = x - y;
    return a;
}

float multiply(float x, int y) {
    float a = x*y;
    return a;
}

float division(float x, int y) {
    float a = x/y;
    return a;
}


int main () {
    // variable declaration
    float x;
    int y;

    float (*fp[4]) (float, int);   //function pointer declaration

    // assigning addresses to the elements of an array of a function pointer
    fp[0] = add;
    fp[1] = subtract;
    fp[2] = multiply;
    fp[3] = division;

    printf("Enter the values of x and y: ");
    scanf("%f %d", &x, &y);

    // calling the functions
    float r = (*fp[0]) (x,y);
    printf("\nSum of two values is %f\n", r);

    r = (*fp[1]) (x,y);
    printf("\nDifference of two values is %f\n", r);

    r = (*fp[2]) (x, y);
    printf("\nMultiplication of two values is %f\n", r);

    r = (*fp[3]) (x, y);
    printf("\nThe quotient of two values is %f\n", r);

    return 0;
}

/*
 * Function pointers are used in the applications where we do not know in advance which function will be called
 * In an array of function pointers, array takes the addresses of diff functions and the appropriate function will be called based on the index number.
 * 
*/