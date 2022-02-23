#include <stdio.h>

union id {
    int id_num;
    char name[20];
};

void set_id (union id *item) {
    (*item).id_num = 42;
}

void show_id (union id item) {
    printf("ID is %d\n", item.id_num);
}

int main () {
    union id one;
    set_id(&one);
    show_id(one);

    return 0;
}

// Functions can have union parameters that accept arguments by value when a copy of the union variable is all that is needed
// For a functiion to change the actual value in a union memory location, pointer parameters are required
