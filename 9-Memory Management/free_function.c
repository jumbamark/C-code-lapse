#include <stdio.h>
#include <stdlib.h>

// The free function is a memory management function that is called to release memory to make more available for use later in your program
int main() {
    int *ptr = malloc(10 * sizeof(*ptr));
    if (ptr != NULL)
        *(ptr + 2) = 50;  //assign 50 to third
    printf("%d\n", *(ptr + 2));

    free(ptr);
}