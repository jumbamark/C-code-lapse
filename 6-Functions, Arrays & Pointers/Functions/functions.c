#include <stdio.h>

void product()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The product is %d\n", a * b);
}

// without argument and with a return value
int sum()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    a += b;
    return a;
}

// with argument and a return value
int area(int x, int y)
{
    return x * y;
}


// Function declarations
void printName();
void average(int, int, int, int, int);

void main() {
    // Hello function
    printf("Hello ");
    printName();

    // product function
    printf("\nGoing to get the product of two numbers;");
    product();

    // sum function
    printf("\nCalculating the sum of two numbers");
    int result = sum();
    printf("Sum: %d\n", result);

    // Area
    int a, b, answer;
    printf("\nCalculating the area");
    printf("\nEnter the length and width: ");
    scanf("%d %d", &a, &b);
    answer = area(a, b);
    printf("The area is : %d\n", answer);

    // average
    int m, n, c, d, e;
    printf("\nCalculating the mean of five numbers");
    printf("\nEnter five numbers:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    average(a, b, c, d, e);
}


void printName()
{
    printf("Mercy\n");
}

// with argument and without a return value
void average (int a, int b, int c, int d, int e) {
    float avg = (a+b+c+d+e)/5;
    printf("Mean: %f\n", avg);
}