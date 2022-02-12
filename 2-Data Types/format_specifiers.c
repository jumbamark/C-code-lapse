#include <stdio.h>
#include <string.h> // run man function_name - header required for that function

// sizeof() returns the number of bytes a variable takes to store a value. It is a "unsigned value"
// Calculating the storage type used by each data type like int, float
int main()
{
    printf("int: %zu \n", sizeof(int));
    printf("float: %zu \n", sizeof(float));
    printf("double: %zu \n", sizeof(double));
    printf("char: %zu \n", sizeof(char));
    printf("My name \'Mark\' has size: %zu \n", sizeof("Mark"));
    printf("My name \'Mark\' has length: %zu \n", strlen("Mark"));

    return 0;
}