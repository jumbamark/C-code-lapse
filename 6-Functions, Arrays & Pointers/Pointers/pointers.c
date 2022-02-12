#include <stdio.h>

int main()
{
    int n = 10;
    int *p = &n; // Variable p of type pointer is pointing to the address of the variable n of type integer.


    int number = 50;
    int *x;  //pointers should be initialized to null until they are assigned a valid location
    x = &number;   // stores the address of number variable (pointers can be assigned the address of a variable using the & sign)
    printf("Address of x variable is %p \n", x); // p contains the address of the number therefore printing p gives the address of number.
    printf("Value of x variable is %d\n", *x);  // As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.
    printf("value of number is %d, address of number is %p", number, &number);

    // pointer to a pointer
    int m = 12;
    int *b = NULL;
    int **btr = NULL;
    b = &m;
    btr = &b;

    printf("\nThe adress of m is %p\n", &m);
    printf("b contains the adress of m: %p\n", b);
    printf("btr has been assigned the adress of pointer b whose value is %d\n", **btr);

    return 0;
}


// pointer is a variable that stores the address of another variable (points to the location assigned to a variable)
// Are declared using  *
