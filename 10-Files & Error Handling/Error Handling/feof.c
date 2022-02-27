#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main () {
    FILE *fptr;
    int c;

    errno = 0;

    fptr = fopen("/home/mark/Documents/mark.txt", "r");
    if (fptr == NULL) {
        fprintf(stderr, "Error opening file. %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    while ((c = getc(fptr)) != EOF)  //read the rest of the file
        printf("%c", c);

    if (ferror(fptr)) {
        printf("I/O error reading file.");
        exit(EXIT_FAILURE);
    }
    else if (feof(fptr)) {
        printf("End of file reached.\n");
    }

    return 0;
}

// In addition to checking for a NULL file pointer and using errno, the feof() and ferror() functions can be used for determinig file I/O errors.
// feof(fp) - returns a nonzero value if the end of stream has been reached, 0 otherwise. feof also sets EOF.
// ferror(fp) - returns a non zero value if there is an error, 0 for non error
