#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

// There are more than 100 error codes, use these statements to list them
void error_codes () {
    for (int x=0; x < 135; x++)
        fprintf(stderr, "%d: %s\n", x, strerror(x));
}


int main () {
    // Typically there is no need for both perror and strerror() for the same error
    FILE *fptr;
    errno = 0;

    fptr = fopen("/home/mark/nonexistantfile.txt", "r");
    if (fptr == NULL) {
        perror("Error");
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    // Error codes
    error_codes();

    return 0;
}



// When a library function sets errno, a cryptic error number is assigned. For a more descriptive message about the error, you can use perror()
// You can also obtain the message using strerror() in the string.h header file, which returns a pointer to the message text
// perror() must include a string that will precede the actual error message.