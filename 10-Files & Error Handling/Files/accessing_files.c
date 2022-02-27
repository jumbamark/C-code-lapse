#include <stdio.h>

int main () {
    FILE *ftpr;
    ftpr = fopen("/home/mark/Documents/mar.txt", "w");
    if (ftpr == NULL) {
        printf("Error: Cannot open /home/mark/Documents/mar.txt");
        return -1;
    }
    fclose(ftpr);  // closing a file when you are done using it is good practice

    return 0;
}

/*
 * External files can be opened,read from and written to in a C program, C includes the FILE type for defining a file stream (keeps track of where reading and writing last occured)
 * The stdio.h library includes file handling functions;
 * FILE Typedef for defining a file pointer
 * fopen(filename, mode) - returns a FILE pointer to filename which is opened using mode. NULL is returned if a file cannot be opened.
 * Mode options are;
 * r - open for reading
 * w - open for writing
 * a - open for append
 * r+ - open for reading and writing from the beginning
 * w+ - open for reading and writing, overwriting file
 * fclose(fp) - closes file opened with FILE fp, returns 0 if close was succesful. EOF (end of file) - returned if there is an error in closing
*/