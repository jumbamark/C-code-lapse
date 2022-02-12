#include <stdio.h>

void main () {
    // By char arry ( terminated by a null, can be reassigned to another set of characters ('\0')
    // As with any array the name of the stirng acts as a pointer
    char name[6] = {'M', 'e', 'r', 'c', 'y', '\0'};
    char her[] = {'M', 'e', 'r', 'c', 'y', '\0'};

    // By string literal, compiler automatically adds the terminator (string name should be plus 1, cannot be reassigned)
    char greetings[] = "Hi Mercy";

    // strings pointers considered constant
    char *str = "Jumba";

    /* String Input */
    char s[11] = "Jumba Mark";
    char *p = s;   // p affects similar to s since it's the base address of the string and treated as a pointer internally 
    printf("Created by %s\n", p);

    char full_name[50];
    printf("\nEnter your full name: ");
    fgets(full_name, 50, stdin);
    puts(full_name);

    char gf_name[50];
    printf("\nEnter your full gf name: ");
    gets(full_name, 50, stdin);
    fputs(gf_name, stdout);

    // making scanf work for space separated strings
    char idol[20];
    printf("\nWho do you look up to? ");
    scanf("%[^\n]s", idol);

    char first_name[10];
    int age;
    printf("\nEnter your first name and age: ");
    scanf("%s %d", first_name, &age);

}


// Standard Library String Functions
/*
 * strlen() - get length of a string
 * strcat() - merge two strings
 * strcpy() - copy one string to another string
 * strupr() - convert string to uppercase
 * strrev() - reverse string
 * strcmp() - compare two strings
*/

// Inputs
/*
* scanf()- reads inputs according to format specifiers,no need for & to access the variables bec an array name acts as a pointer, stops reading at any space
* gets() - use it to get a string with spaces, reads a string until a terminating new line is reached
* fgets() - reads up a specified number of characters which helps prevent buffer flow (when string array is not being enough for the typed text)
* fgets args are string name, number of characters to read , stdin - read from the keyboard
*/

// Outputs
/*
 * fputs()  - name of string and a pointer to where you want to put the string, fputs(city, stdout)
 * printf() - 
 * puts() - takes only a string argument, adds a new line to output
*/