#include <stdio.h>

int main () {
    // an array with three elements each holding 15 characters
    char trip [3][15] = {
        "suitcase",
        "passport",
        "ticket",
    };

    printf("Please bring the following: \n");
    for (int m =0; m < 3; m++) { 
        for (int b=0; b < 10; b++) {
            printf("%c\n", trip[m][b]);
        }
    }

    // using an array of pointers to deal with a collection of related strings
    // items can be referred to by a pointer to the first character of each string
    char *mates [] = {
        "Lynne",
        "Mercy",
        "Gathoni",
    };

    printf("Say their names: ");
    for (int i = 0; i <3; i++) {
        printf("\n%s\n", mates[i]);
    }
}

/*
 * 2D arrays can be used to store related strings, declare a size large enough to hold the longest string
 * referring to suitcase as [0][0] is error prone, think of element at [0][0] as "s" and [2][3] as "k"
*/