#include <stdio.h>
#pragma pack(1)

struct student {
    char a;
    char b;
    int c;
};

struct students {
    char a;
    int b;
    char c;
};

// Avoiding structure padding using attribute
struct base {
    int a;
    char b;
    double c;
}__attribute__((packed)); ;

// Avoiding structure padding using #pragma pack(1) directive
struct Base {
    int a;
    char b;
    double c;
};

int main () {
    struct student stud1;
    // displaying the size of structure student
    printf("The size of the student structure is %zu\n", sizeof(stud1));

    // changing order
    struct students stud2;
    printf("The size of the students structure is %zu\n", sizeof(stud2));

    // Avoiding structure padding using attribute
    struct base var;
    printf("The size of the var is %zu\n", sizeof(var)); // If we do not use this then the output will be 16 bytes yet the actual size is 13

    // Avoiding structure padding using #pragma pack(1) directive
    struct Base variable;
    printf("The size of the var is %zu\n", sizeof(variable));

    return 0;
}

// structure padding is a concept that adds the one or more empty bytes between the memory addresses to align the data in memory
// Suppose we create a user defined structure when we create an object of this structure then the contiguous memory will be allocated to the structure members

/*
 * In the above example we have created a structure of type student and declared the object of this structure named as stud1.
 * After the creation of an object a contiguous block of memory is allocated to its structure members
 * The memory will first be allocated to a then b then c
 * 
 * Size of struct student (we assume that the size of int is 4 bytes and the size of char is 1 byte, the size of struct student is then 6 but the answer is wrong)
 * The concept of structure padding helps us understand why the answer is wrong
 * 
 * Structure padding
 * processor does not read one byte at a time, it reads 1 word at a time which means one word = 8 bytes for 64-bit (therefore 64-bit is capable of accessing 8 bytes at a time while 32-bit is capable of accessing 4 bytes at a time);
 * We don't face any problem by accessing char a and b as both variables (2 bytes) can be accessed in one CPU cycle, but then we face a problem when accessing the int c variable as 2 CPU cycles are required
 * Structure padding is introduced to save the number of CPU cycles, it's achieved by creating an empty row on the left between chars a,b and int c so that all the 4 bytes of int c are on the right which means they can be accessed in a single CPU cycle
 * After structure padding the total memory occupied is 8 (1 byte +1 byte+2 bytes+4), although memory is wasted the variable can be accessed within a single cycle
 * 
 * Changing order (1byte + 3bytes + 4bytes + 4 bytes tto access char c)
 * 
 * Avoiding structure padding
 * - using #pragma pack(1) directive
 * - Using attribute
 * 
 */