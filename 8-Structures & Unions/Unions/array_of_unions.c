#include <stdio.h>


union val {
    int int_num;
    float fl_num;
    char str[20];
};

// an array is a data structure that stores collection values that are all of the same type
// Array of unions allow storing values of different types
union type {
    int i_val;
    float f_val;
    char ch_val;
};


int main () {

    union val nums[3];
    for (int k = 0; k < 3; k++) {
        nums[k].int_num = k;
    }

    for (int k=0; k<3; k++) {
        printf("%d \n", nums[k].int_num);
    }

    // Array storing a collection of values
    union type arr[3];
    // accessing element members
    arr[0].i_val = 42;
    arr[1].f_val = 3.14;
    arr[2].ch_val = 'x';

    return 0;
}


/*
 * Arrays can store elements of any data type including unions
 * With unions it is important to keep in mind that only one member of the union can store data for each array element
 * After declaring an array of unions, an element is accessible with the index number. The dot operator is then used to access members of the union
*/