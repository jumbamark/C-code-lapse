#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
    char str20[20];
    char *str = NULL;

    strcpy(str20, "12345");
    str = malloc(strlen(str20) + 1);
    strcpy(str, str20);

    printf("%s\n", str);

    return 0;
}

// Allocating 42 bytes for the STR string;
void allocation () {
    char *STR = NULL;
    STR = malloc(42);
}



// When allocating memory for a string pointer you may want to use string length rather than the sizeof operator for calculating bytes
// This approach is better because you aren't allocating more space than is needed to a pointer
// When using strlen to determine number of bytes needed for a stirng, be sure to include the extra 1 byte for the NULL character "\0"

