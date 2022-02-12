#include <stdio.h>

/*
* comments
* variables 
*/

int main() {
    int x, y;
    float salary = 1235.8763;
    char letter = 'A';
    x = 13;
    y = 39;
    int b = x + y;

    printf("%5d \n", b);       // atleast five wide
    printf("%.2f \n", salary); // two positions after the decimal
    printf("%c \n", letter);

    // The scanf() function is used for input. It reads the input data from the console.
    int number;
    printf("Enter a number: ");
    scanf("%d", &number); // reads integer number from the console and stores the given value in number variable.
    printf("The cube of %d is %d: ",number, number * number * number);

    return 0;
}
