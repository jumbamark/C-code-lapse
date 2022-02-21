#include <stdio.h>

int main () {
    int x = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;

    ptr = &x;
    printf("void ptr points to %d\n", *((int*)ptr));

    ptr = &y;
    printf("void ptr points  to %f\n", *((float*)ptr));

    ptr = &c;
    printf("void ptr points to %c\n", *((char*)ptr));


    // Size of void pointer
    void *pntr = NULL;
    int *p = NULL;
    char *cp = NULL;
    float *fp = NULL;


    printf("\nSize of void pointer = %d\n", sizeof(pntr));
    printf("Size of integer pointer = %d\n", sizeof(p));

    // Dereferencing a void pointer (void pointers in C cannot be dereferenced directly)
    int a=90;
    void *pointer;
    pointer = &a;
    // void *pointer = &a
    // trippling the value of pointer; *((int *) pointer) *= 3;
    
    // printf("\nValue which is pointed by the pointer pointer: %d", *pointer); - gives an error bec we are printing the value of the variable pointed by the pointer directly
    printf("\nValue which is pointed by the ptr pointer: %d\n", *(int *)pointer);

    // Arithmetic operations on void pointers
    float b[4] = {4.3, 5.7, 3.5, 8.1};
    void *vptr;
    vptr = b;

    // applying proper casting to the void pointer
    for (int m=0; m<4; m++) {
        printf("\n%f", *((float*)vptr + m));
    }
    printf("\n");

    return 0;
}








// addresses assigned to pointer should be of the same type as specified in the pointer declaration(int pointer cannot point to a float variable)
// To overcome this we use a pointer to void (generic pointer that can point to any data type)
// void pointer is used to refer to any address in memory and has a declaration that looks like; void *ptr
// when deferencing a pointer you must first type cast the pointer to the appropriate data type vefore deferencing with *

/*
 * int i = 9;  //integer variable initialization
 * int *p; // integer pointer declaration
 * float *fp // float pointer declaration
 * void *ptr // void pointer declaration
 * p = fp  //incorrect
 * fp=&i      //incorrect
 * ptr = p    //correct
 * ptr = fp   //correct
*/