// Malloc function allocates single block of requested memory, doesn't initialize memory at execution time(so it has garbage value initially) and returns NULL if memory is insufficient
// syntax: ptr = (cast-type*)malloc(byte-size)

// The allocated memory is contiguos and can be treated as an array
// Instead of using brackets [] to refer to elements, pointer arithmetic is used to traverse the array. Use + to refer to array elements
// Using + or ++ changes the address stored by the pointer
// If the allocation is unsuccessful NULL is returned, bec of this you should include code to check for a NULL pointer

#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, *ptr, sum=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n*sizeof(int));   //memory allocated using malloc
    if (ptr == NULL) {
        printf("Sorry unable to allocate memory");
        exit(0);
    }

    printf("Enter elements of array: ");
    for (int i = 0; i<n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr+i);
    }

    printf("sum = %d\n", sum);
    free(ptr);

    return 0;
}