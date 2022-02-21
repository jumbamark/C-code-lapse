#include <stdio.h>

// Declaring an array of void pointers to x1, x2 and x3 and printing them using pointers
int main () {
    int x1 = 42;
    float x2 = 3.14;
    char x3 = 'a';

    void* arr[] = {&x1, &x2, &x3};
    printf("%d\n %f\n %c\n", *((int*)arr[0]), *((float*)arr[1]), *((char*)arr[2]));

    return 0;
}