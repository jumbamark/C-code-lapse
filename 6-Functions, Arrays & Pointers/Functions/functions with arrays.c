#include <stdio.h>

// passing in an array
int add_up(int *a, int num_elements){
    int total = 0;

    for (int k=0; k<num_elements; k++) {
        total += a[k];
    }

    return total;
}

// Quiz
int * test() {
    static int x[4];
    for (int y=0; y<4; y++) {
        x[y] = y%2;
    }

    return x;
}

// code that declares a function returning an int array
int * get_evens();

int main() {
    int orders[5] = {32, 56, 71, 40, 17};
    printf("Total orders: %d\n ", add_up(orders, 5));

    int *k;
    k = get_evens(); // gets first 5 even numbers
    // printf("%d\n", *k);
    for (int m = 0; m < 5; m++) {
        printf("%d\n", k[m]);
    }

    // Quiz
    // *arr means value at address arr[0] while *(arr + 3) means value at adress arr[3]
    int *arr = test();  //pointer array which stores the value we returned by function test
    printf("\n%d\n", *(arr+3));

    return 0;
}

// returning an array
int *get_evens()
{
    static int nums[5];
    int even = 0;

    for (int i = 0; i < 5; i++)
    {
        nums[i] = even += 2;
    }

    return nums;
}
