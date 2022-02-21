#include <stdio.h>
#include <stdlib.h>

//  sorting an array of ints from low to high using qsort
int compare (const void *elem1, const void *elem2) {
    if ((* (int *) elem1) == (* (int *) elem2)) {
        return 0;
    } else if ((* (int *) elem1) < (* (int *) elem2)) {
        return -1;
    } else {
        return 1;
    }
}


int main () {
    int arr[5] = {52, 23, 56, 19, 4};
    int num, width;

    num = sizeof(arr)/sizeof(arr[0]);
    printf("%zu\n", sizeof(arr));
    printf("%zu\n", sizeof(arr[0]));
    printf("%u\n", num);
    width = sizeof(arr[0]);
    qsort((void *) arr, num, width, compare);
    for (int i = 0; i < 5; i++) {
        printf("\n%d", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function pointers as args are sometimes reffered to as calllback functions because the receiving function calls it backs
// qsort() function in stdlib.h uses this technique
// Quicksort is a widely used algo for sorting an array. To implement the sort program, you need only include the stdlib.h file and then write a compare function that matches the declaration used in qsort


// void qsort(void *base, size_t num, size_t width, int (*compare)(const void *, const void *))


/*
 * Breaking down the qsort declaration
 * void *base - void pointer to the array
 * size_t num - number of elements in an array
 * size_t width - the size of an element
 * int (*compare)(const void *, const void *)) - function pointer which has two args and returns 0 when the arguments have the same value, less than zero when arg1 comes before arg2 and >0 when arg1 comes after arg2.
 * You don't have to use compare
*/