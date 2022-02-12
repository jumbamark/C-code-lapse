#include <stdio.h>

int *getarray(int *);
int main () {

    int a[2][3] = {
        {3, 6, 9},
        {10, 15, 20}};

    int sum = 0;

    for (int k = 0; k < 2; k++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[k][j]);
            sum += a[k][j];
        }
        printf("\n");
        printf("Sum: %d\n", sum);
    }

    // Returning arrays from a function
    int *n;
    int x[5];
    n = getarray(x);
    printf("\nElements of array are :");
    for (int i = 0; i < 5; i++) {
        printf("\n%d\n", n[i]);
    }

    return 0;
}



int *getarray(int *a) {
    printf("Enter the elements in an array : ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    return a;
}
