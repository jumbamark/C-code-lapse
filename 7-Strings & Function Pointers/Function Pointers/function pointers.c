#include <stdio.h>

int add(int, int);

int main () {
    // Addition , calling a function using a function pointer
    int a, b;
    int (*ip)(int, int);
    int result;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    ip = add;
    result = (*ip)(a, b);
    printf("The value after addition is: %d\n", result);

    return 0;
}

int add(int a, int b) {
    int c = a + b;
}

// psum is used as a function pointer,the name of the function sum points to the start of the executable code. So psum is a pointer variable, sum can be stored in variable psum
int sum(int a, int b) {
    return a + b;
}

int (*psum) (int, int) = sum;
// int w = psum(0, 0);

/*
*   float (*fp)(int, int); // decalration of a function pointer
    float func(int, int);  // decalration of a function
    fp = func;             // assigning address of func to the fp pointer, fp contains the address of the "func "function


 * code of function always resides in memory, which means that the function has some address (we can get the address using a function pointer)

 * Declaration of a function pointer
 - since functions have addresses we can create pointers that can contain these addresses, hence point at them
 * float (*fp) (float);
 - *fp is a pointer that points to a function that returns a float value and accepts a float value as an argument

 * Calling a function using a function pointer
 float func(int, int);
 result = func(a, b) - calling the usual way
 result = (*fp) (a, b) - calling a function using function pointer
 result = fp(a, b) - calling a function using function pointer and indirection

*/
