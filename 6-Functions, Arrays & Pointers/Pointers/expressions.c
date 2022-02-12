#include <stdio.h>

void swap (int *num1, int *num2);
int main() {
    int a = 10, b = 20, *p1 = &a, *p2 = &b;

    printf("The adress of a is: %p\n", &a);
    printf("The adress of a contained in p1 is: %p\n", p1);
    printf("The value of a contained in p1 is: %d\n", *p1);

    printf("\nBefore swap: *p1=%d and *p2=%d\n", *p1, *p2);
    // swapping the numbers without using the third variable
   *p1 += *p2;
   printf("*p1=%d\n", *p1);

   *p2 = *p1 - *p2;
   printf("*p2=%d\n", *p2);

   *p1 -= *p2;
   printf("*p1=%d\n", *p1);

   // swapping using third variable 
   int x = 25;
   int y = 100;

   printf("\nx is %d, y is %d\n", x, y);
   swap(&x, &y);
   printf("x is %d, y is %d\n", x, y);

   return 0;
}

    // int (*p)(int (*)[2], int (*)void))  
   // This pointer will be read as p is a pointer to such function which accepts the first parameter as the pointer to a one-dimensional array of integers of size two and the second parameter as the pointer to a function which parameter is void and return type is the integer.

void swap (int *num1, int *num2) {
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}