#include <stdio.h>

int main(){
    char m = getchar();
    printf("You entered: ");
    putchar(m);  //displays a single character

    // storing the input in an array of 100 characters
    char z[100];
    fgets(z, sizeof z, stdin);
    printf("\nYou answered: ");
    puts(z);  //displays output as a string

    // scanf scans input that matches format specifiers
    int number;
    scanf("%d", &number);
    printf("Your lucky number is: %d", number);

    return 0;
}