#include <stdio.h>

// When you declare a variable using a basic data type, C automatically allocates space for the variable in an area of memory called the stack
// An int variable is allocated 4 bytes when declared (sizeof())
// An array with a specified size is allocated contiguous blocks of memory with each block the size for one element

// Declaring an array size where the size is undecided until runtime
// Dynamic memory allocation is the process of allocating and freeing memory as needed
// You can prompt at runtime for the number of array elements and then create an array with that many elements.
// Dynamic memory is managed with pointers that point to newly allocated blocks of memory in the area called the heap
// 

void main () {
    int x;
    int arr[100];

    printf("Size of x is: %zu\n", sizeof(x));
    printf("Size of arr is: %zu\n", sizeof(arr));
}

// In addition to automatic memory management using the stack and dynamic memory alllocation using the heap, there is statically managed data in main memory for variables that persist for the lifetime of the program


// Memory Management Functionss
/*
 * The stdlib.h library includes memory management functions
 * The include statement at the top of your program gives you access to the following;
 * malloc(bytes) - returns a pointer to a contiguous block of memory that is of size bytes
 * calloc(num_items, item_size) - returns a pointer to a contiguous block of memory that has num_items,each of size item_size bytes.
 * realloc(ptr, bytes) - resizes the memory pointed to by ptr to size bytes
 * free(ptr) - releases the block of memory pointed to by ptr
 * 
 * When you no longer need a block of allocated memory, use the function free() to make the block available to be allocated again
*/