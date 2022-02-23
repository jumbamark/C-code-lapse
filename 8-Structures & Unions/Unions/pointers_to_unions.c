#include <stdio.h>

union val {
    int int_num;
    float fl_num;
    char str[20];
};

// Accessing members of a union using pointers (2)
union abc {
    int a;
    char b;
};



int main () {
    union val info;
    union val *ptr = NULL;
    ptr = &info;
    ptr -> int_num = 10;
    printf("info.int_num is %d\n", info.int_num);

    // Accessing union members using pointers (2)
    union abc *PTR;  // pointer variable declaration - created a pointer that stores the address of var variable
    union abc var;
    var.a = 90;
    PTR = &var;
    printf("The value of a is: %d\n", PTR->a);

    return 0;
}

// A pointer to a union points to the memory location allocated to the union
// A union pointer is declared by using the keyword union and the union  tag along with * and the pointer name
// When you want to access the union members through a pointer the -> operator is required OR (*ptr).int_num