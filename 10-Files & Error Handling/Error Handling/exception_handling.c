#include <stdio.h>
#include <stdlib.h>


int main () {
    int x = 10;

    for (int y = 0; y < 10; y++) {
        printf("\n");
        printf("\ny=%d\n", y);

        if (y == 0) {
            printf("Divisor is 0. Program exiting.\n");
            exit(EXIT_FAILURE);
        }
        else {
            printf("x / y = %d", x / y);
        }
    }

    return 0;
}


// An exception is any situation that causes your program to stop normal execution.
// Exception/Error handling is an approach to processing runtime errors
// C does not explicitly support exception handling but there are ways to manage errors (when perfoming division take the extra step to ensure that division by 0 won't occur)
// use errno, perror() and strerror() to identify errors through error codes.

// The exit command
// The exit command immediately stops the execution of a program and sends an exit code back to the calling process
// using exit to avoid a program crash is a good practice because it closes any open file, connections and processes
// You can return any value through an exit statement but 0 for success and -1 for failure are typical. The predefined stdlib.h macros EXIT_SUCCESS and EXIT_FAILURE are also commonly used.