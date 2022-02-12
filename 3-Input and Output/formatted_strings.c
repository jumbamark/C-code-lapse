#include <stdio.h>

// scanf() assign inputs to variables
// & is used to access the variable addresses, not needed for a string bec string name acts as a pointer
int main()
{
    int x;
    float num;
    char text[20];
    scanf("%d %f %s", &x, &num, text);
    printf("%d %f %s", x, num, text);


    // suppose the user will enter a number with a character in between and we want to ignire the character we use *
    int onlyNum1, onlyNum2;
    scanf("%d %*c %d", &onlyNum1, &onlyNum2);
    // input 45d76

    printf("%d %d \n", onlyNum1, onlyNum2);
    // output 45 76

    // Formatting outputs
    printf("Color: %s, Number: %d, float: %5.2f \n", "Black", 33, 3.14159);

    return 0;
}

