#include <stdio.h>

int main() {
    int length = 83;
    int width = 10;
    int area, quotient, reminder;

    area = length * width;
    printf("%d\n",area);
    printf("%d\n", length/width);
    printf("%d\n", length % width);

    // Type conversion
    float price = 6.50;
    int increase = 2;
    float new_price = price + increase;
    printf("New price is:  %4.2f\n", new_price);


    int total = 78;
    int count = 6;
    float average = (float) total / count;
    printf("%f\n", average);

    // Assignment operators
    int a =67;
    printf("%d\n", a *= 2);

    /*
    * Increament and Decreament
    * prefix  - increaments/decreaments the variable and then uses it in the assignment statement.
    * postfix - uses the value of the variable first, before incrementing/decrementing it.
    */

    int x = 3;
    int y = x++;  // assign 3 to y, then incremeant x to 4
    printf("%d %d\n", y, x);

    int z = 5;
    int w = ++z;  // increament x to 6, then assign 6 to w
    printf("%d\n", w);
    puts("I love C");

    int m = 8;
    int b = 7;
    m++;
    m += b--;
    printf("The result is:%5d\n", m);
}

/*
* Operator Precedence
* (*, /, %) are performed first in order from left to right
* + and - are performed second
*/