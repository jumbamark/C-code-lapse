#include <stdio.h>

void main() {
    char remark[10];
    printf("Enter you remark: ");
    fgets(remark, sizeof(remark), stdin);
    printf("%s\n", remark);

    int rating;
    printf("Give a 1 to 10 rating: ");
    scanf("%d", &rating);
    // printf("%d\n", rating);

    // Switch statements
    switch (rating) {
        case 10:
        case 9:
        case 8:
        printf("Higher rating\n");
        break;

        case 7:
        case 6:
        case 5:
        printf("Moderate\n");
        break;

        case 4:
        case 3:
        case 2:
        case 1:
        printf("Low\n");

        default:
        printf("Rating should be out of 10 with 1 being the least\n");
    }

// Logical Operators
    // && has a higher prcedence and will be evaluated first
    int n = 999;
    if (n == 999 || (n > 0 && n <= 100))
        printf("Invalid.\n");
}

// Logical Operators
/*
* &&, true when both expressions are true
* ||, true when any one expression or both expressions are true
* !, NOT
*/