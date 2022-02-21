#include <stdio.h>

int main () {
    int nums[100], total, sum = 0;

    // Get the number of squares to be squared
    printf ("\nEnter the total numbers to be squared: ");
    scanf("%d", &total);

    // store the numbers in an array
    printf("Enter the numbers: ");
    for (int k=0; k < total; k++)
        scanf("%d", &nums[k]);

    for (int k=0; k < total; k++)
        sum = sum + nums[k]*nums[k];

    printf("sum of the squares of the integers = %d", sum);
    printf("\n"); 

    return 0;
}

