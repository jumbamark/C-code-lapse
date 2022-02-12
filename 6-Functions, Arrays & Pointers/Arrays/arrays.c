#include <stdio.h>

// Array declaration includes the type of values it stores, an identifier and square brackets
int main () {
    float scores[5] = {64.3, 89.7, 91.9, 49.1, 76.4};
    float total_scores = 0;

    for (int i=0; i < 5; i++) {
        total_scores += scores[i];
        printf("%f\n", scores[i]);
    }
    printf("\nTotal scores: %f\n", total_scores);
}   