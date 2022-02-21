#include <stdio.h>
#include <string.h>

struct course {
    int id;
    char title[40];
    float hours;
};


int main () {
    struct course cs1 = {34785, "Internediate Python", 54.5};
    struct course cs2;

    /* initializing cs2 */
    cs2.id = 5958;
    strcpy(cs2.title, "Machine Learning for Beginners");
    cs2.hours = 90.8;

    // display course info
    printf("%d\t %s\t %4.2f\n", cs1.id, cs1.title, cs1.hours);
    printf("\n");

    return 0;
}

// string assignment requirs strcpy() from the string.h library
// %4.2f includes width and precise options