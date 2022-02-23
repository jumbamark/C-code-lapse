#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int *elements;
    int size;
    int cap;
} dyn_array;

void init_array () {
    dyn_array arr;

    // initializing array
    arr.size = 0;
    arr.elements = calloc(1, sizeof(*arr.elements));
    arr.cap = 1; // room for 1 element
}

void increase_array () {
    dyn_array arr;

    // To expand by more elements
    arr.elements = realloc(arr.elements, (5 + arr.cap) * sizeof(*arr.elements));
    if (arr.elements != NULL)
        arr.cap += 5;
}

void add_element () {
    dyn_array arr;

    // Adding an element to the array increases it's size
    if (arr.size < arr.cap)
    {
        arr.elements[arr.size] = 50;
        arr.size++;
    }
    else
    {
        printf("Need to expand the array.");
    }
}

int main () {
    // initializing array
    init_array ();

    // To expand by more elements
    increase_array ();

    // Adding an element to the array increases it's size
    add_element();

    return 0;
}

// Many algorithms implement dynamic array because this allows the number of elements to grow as needed
// Bec elements are not allocated all at once, dynamic arrays typically use a structure to keep track of current array size, current capacity and a pointer to the elements 