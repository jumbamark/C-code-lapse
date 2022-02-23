#include <stdio.h>
#include <string.h>

union val {
    int int_num;
    float fl_num;
    char str[20];
};

int main () {
    union val test;

    test.int_num = 123;
    test.fl_num = 98.76;
    strcpy(test.str, "Mercy");

    printf("%d\n",test.int_num);
    printf("%f\n", test.fl_num);
    printf("%s\n", test.str);

    return 0;
}

// members of a union can be accessed using a dot operator between the variable name and the member name
// When assignment is performed the union memory location will be used for that member until another member assignment is performed
// The last assignment overrides previos assignments which is why str stores a value and accessing int_num and fl_num is meaningless