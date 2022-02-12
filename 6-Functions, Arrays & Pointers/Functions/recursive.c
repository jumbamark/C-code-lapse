#include <stdio.h>

// recursive function calls itself and includes a base case(exit condition)

int factorial(int num) {
    if (num == 1) {
        return (1); // base cae
    } else {
        return (num * factorial(num-1));
    }
}

// example to find the nth term of the Fibonacci series.
int fibonacci(int n) {
    if (n==0) {
        return 0;
    } else if (n==1) {
        return (1);
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

// recursive print function that prints numbers from n to 0.
void print(int n) {
    if (n>0) {
        return;  // return is used t exit the function if condition is true (exits without returning any value)
    } else {
        printf("%d", n);  // If 5 is enterd it will print 5 first, then recursion arises 
        print(n - 1);
    }
}

int main() {
    int x = 5;
    printf("The factorial of %d is %d\n", x, factorial(x));

    int y;
    printf("Enter an integer: ");
    scanf("%d",&y);
    printf("%d\n", fibonacci(y));

    print(6);

    return 0;
}