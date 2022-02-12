#include <stdio.h>

#define p printf
int main (){
    char c[100];
    // gets() reads input as ordered sequence of characters
    fgets(c, 100, stdin);
    p("You stressed: %s", c);
}