#include <stdio.h>

int main () {
    // defining a pointer to store the address of another pointer (double pointer)
    int a = 10;
    int *p;
    int **pp;
    p = &a; // pointer p is pointing to the address of p
    pp = &p;  // pointer pp is a double pointer pointing to the address of pointer p

    printf("address of a: %p\n", p); 
    printf("address of p: %p\n", pp);
    printf("value stored in pointer p is: %d while the value in pp is: %d\n", *p, **pp);

    // pointers and arrays (+ moves forward to the memory location while - does otherwise)
    int d[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
    ptr = d;  // array name acts as a pointer to the first element (ptr = @a[0]  - points to the first aray of the element)
    printf("\n%d %x\n", *ptr, ptr);
    ptr++;
    printf("%d %x\n", *ptr, ptr);

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    //  Pointer Arithmetic
    int number = 100;
    int *x;
    x = &number;


    printf("Address of p variable is %u\n", x);
    x += 1;
    printf("After increment: Address of p variable is %u\n", x); // in our case, p will get incremented by 4 bytes.

    return 0;
}