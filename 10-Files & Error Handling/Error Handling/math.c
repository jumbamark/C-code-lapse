#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <math.h>


int main () {
    float k = -5;
    float num = 1000;
    float result;

    errno = 0;
    result = sqrt(k);
    if (errno == 0)
        printf("%f ", result);
    else if (errno == EDOM)
        fprintf(stderr, "%s\n", strerror(errno));

    errno = 0;
    result = exp(num);
    if (errno == 0)
        printf("%f ", result);
    else if (errno == ERANGE)
        fprintf(stderr, "%s\n", strerror(errno));

    return 0;
}


// Some of the mathematical functions in the math.h library set errno to the defined macro value
// EDOM when a domain is out of range
// ERRANGE macro value is used when there is a range error