#include <stdio.h>

#define VAR(name, num) name##num

// example 2
#define CONTACT(x, y) x##y

int main () {
    int x1 = 125;
    int x2 = 250;
    int x3 = 500;

    printf("%d\n", VAR(x, 3));

    // example 2
    int x = 4;
    int y = 5;
    int CONTACT(x,y) = x+y;
    printf("%d\n", xy);

    return 0;
}

// The ## operator is also called the token pasting operator because it appends or "pastes" tokens together