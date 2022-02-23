#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Example of a calloc function
void calloc_func() {
    int n, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int)); // memory allocated using calloc
    if (ptr == NULL) {
        printf("Sorry! unable to allocate memory");
        exit(0);
    }

    printf("Enter elements of an array: ");
    for (int i=0; i < n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum=%d\n", sum);
    free(ptr);
}


int main () {
    // using calloc to allocate memory for a sturcture and malloc to allocate memory for the string within a structure
    typedef struct {
        int num;
        char *info;
    } record;

    record *recs;
    int num_recs = 2;
    char str[] = "This is information";

    recs = calloc(num_recs, sizeof(record));
    if (recs != NULL) {
        for (int k =0; k < num_recs; k++) {
            (recs + k) -> num = k;
            (*(recs + k)).info = malloc(sizeof(str));
            strcpy((recs + k) -> info, str);
        }
    }

    // Example
    calloc_func();


    return 0;
}

/*
* Calloc function allocates multiple block of requested memory, it initializes all bytes to zero, returns NULL if memory is not sufficient
* syntax: ptr = (cast-type*)allocates(number, byte-size)

 * calloc function allocates memory based on the size of a specific item such as a structure
 * calloc allocates blocks of memory within a contiguous block of memory for an array of structure elements, navigating from one structure to the next is through pointer arithmetic
 * Calloc is for raw memory allocation(deal in bytes) calloc for structured memory allocation (deal in data types)
*/