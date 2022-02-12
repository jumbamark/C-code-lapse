#include <stdio.h>

int static_f () {
    static int count = 0;
    count++;
    return count;
}

int normal_f () {
    int count = 0;
    count++;
    return count;
}


int main() {
    printf("%d ", static_f());
    printf("%d ", static_f());

    printf("\n%d ", normal_f());
    printf("%d ", normal_f());

    return 0;
}

// a static variable remains in memory while the program is running, a normal variable is destroyed when a function call where the variable was declared is over