#include <stdio.h>

int main () {
    int score = 9;

    if (score >= 90)
        printf("%s", "Excellent\n");
    else if (score >= 70)
        printf("%s", "Good\n");
    else if (score >= 50)
        printf("%s", "Above average\n");
    else
      printf("You failed\n");
}