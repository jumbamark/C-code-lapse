#include <stdlib.h>
#include <stdio.h>

// malloc() function allocates a specified number of contiguous bytes in memory
int main () {
    int *ptr;

    // block 10 ints
    ptr = malloc(10 * sizeof(*ptr));
    if (ptr != NULL) {
        *(ptr + 2) = 50;  // assign 50 to third int
    }
    printf("%d\n", *(ptr + 2));

    return 0;
}

// malloc returns a pointer to the allocated memory
// int *ptr = malloc(10) - allocating 10 bytes of memory