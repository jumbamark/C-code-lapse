#include <stdio.h>

void function1 (){
    int x = 10; // local variable
    static int y = 10 ;
    x = x + 1;
    y = y + 1;
    printf("%d,%d", x, y);
}

// constants stores values that cannot be changed from its initial assignment(uses memory for storage)
int main()
{
    const double PI = 3.14;
    printf("%f", PI);
    return 0;
}

// define does not use memory for storage
#define PI 3.14

int main2() {
    printf("%f", PI);
    return 0;
}
