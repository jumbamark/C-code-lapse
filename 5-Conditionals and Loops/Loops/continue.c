#include <stdio.h>

int main() {
    // continue
    int i = 5;

    while (i > 0)
    {
        i--;

        if (i == 2)
        {
            continue;
        }
        
        printf("%d\n", i);
    }
}