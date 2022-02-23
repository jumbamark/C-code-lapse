#include <stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    ptr = malloc(10 * sizeof(*ptr));
    if (ptr != NULL) {
        *(ptr + 2) = 50;  //assigns 50 to third int
    }

    ptr = realloc(ptr, 100 * sizeof(*ptr));
    *(ptr + 30) = 75;
}

// realloc() function expands a current block to include additional memory
// realloc leaves the original content in memory and expands the block to allow for more storage