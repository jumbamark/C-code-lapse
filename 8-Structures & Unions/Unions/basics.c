#include <stdio.h>

union val {
    int int_num;
    float f1_num;
    char str[20];
};

int main () {
    // Declaring a union
    union val u1;
    union val u2;
    u2 = u1;

    return 0;
}

// union allows storing different data types in the same memory location, it's like structures bec it has members however a union variable uses the same memory location for all its members and only one member at a time can occupy the memory location.
// Union declaration uses the word union, a union tag and curly braces with a list of members
// Unions are used for memory management, the largest member data type is used to determine the memory size and then all memebers use this one location