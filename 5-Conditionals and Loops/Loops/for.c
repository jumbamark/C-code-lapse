#include <stdio.h>
int main()
{
    // for(initialvalue; condition; increment)
    int i, k, j;
    for ((i = 0, k = 0, j = 0); (i < 8, k < 12, j < 15); (i++, k += 2, j += 3))
    {
        printf("%d %d %d\n", i, k, j);
    }

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", (number * i));
    }

    // Loops can be nested, a break in an inner loop exits that loop and execution continues with the outer loop
    int m, b; 
    int table = 10;
    int max = 12;
    
    for (i=1; i <= table; i++ ){
        printf("%d\n", i);
        for (j= 0; j <= max; j++ ){
            printf("%d\n", j);
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}
