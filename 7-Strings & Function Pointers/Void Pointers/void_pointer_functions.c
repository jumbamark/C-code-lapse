#include <stdio.h>

void * square (const void * num);

int main () {
    int x, sq_int;
    x = 6;
    sq_int = square(&x);
    printf("%d squared is %d\n", x, sq_int);

    return 0;
}


void * square (const void * num) {
    int result;
    result = (* (int *)num) * (* (int * )num);
    return result;
}



// void pointers can be used for function declaration;
// using a void * return type allows for any return type, similarly parameters that are void accept any argument type (if you want to use the data passed in the parameter without changing it you declare it const)
// You can leave out the parameter name to further insulate the declaration from its implementation (declaring a function this way allows the definition to be customized as needed without having to change the declaration) - (void * square (const void *)