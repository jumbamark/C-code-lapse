#include <stdio.h>

int main () {
    FILE *fptr;
    int c, stock;
    char buffer[200], item[10];
    float price;

    fptr = fopen("/home/mark/Documents/mark.txt", "r");
    fgets(buffer, 20, fptr); //read a line
    printf("%s\n", buffer);

    fscanf(fptr, "%d %s %f", &stock, item, &price);  // read data
    printf("stock: %d\t item: %s\t price:%4.2f\n", stock, item, price);

    while ((c = getc(fptr)) != EOF) //read the rest of the file
        printf("%c", c);
        
    fclose(fptr);

    return 0;
}

// The input output library includes functions for reading from an open file
// A file can be read one character at a time or an entire string can be read into a char buffer (char array used for temporary storage)

/*
 * fgetc(fp) - returns the next character from the file pointed to by fp. EOF is returned if the end has been reached
 * fgets(buff, n, fp) - reads n-1 characters from the file pointed to by fp and stores the string in buff. A null character "\0" is appended as the last character in the buff
- If fgets encounters a newline char or EOF before n-1 chars is reached then only the chars up to that point are stored in buffs
 * fscanf(fp, conversion_specifiers, vars) - reads characters from the file pointed to by fp and assigns inputs to a list of variable pointers vars using conversion_specifiers
- As with scanf, fscanf stops reading a string when a space or newline is encountered
*/