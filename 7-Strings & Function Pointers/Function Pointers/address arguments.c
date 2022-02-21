#include <stdio.h>

void func1(void (*ptr)());
void func2();

int main () {
    // calling func1 in which we pass the address of func2
    func1(func2);

    return 0;
}

// func1 containing the function pointer as an argument
void func1(void (*ptr)() ) {
    printf("Her name is Lynne\n");
    (*ptr)();
}

void func2() {
    printf("She's friends with Nonnie\n");
}

/*
 * Passing a function's address as an argument to other function
 * A function pointer as an argument is sometimes reffered to as a callback function because the receiving function calls it back
 * When func1 is called "ptr" contains the address of func2
 * Inside the func1 we call the func2 by deferencing the pointer 'ptr' as it contains the address of func2
 * Function pointers are used in those applications where we do not know in advance which function will be called
*/