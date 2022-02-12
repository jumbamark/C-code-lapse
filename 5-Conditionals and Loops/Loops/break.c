#include <stdio.h>

int main() {
    // break
    int num = 5;

    while (num > 0) {
        if (num == 2) {
            break;
        }
        printf("%d\n", num);
        num--;
    }
}