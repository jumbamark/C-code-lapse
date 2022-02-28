#include <stdio.h>
#include <string.h>

int main () {
    char curr_time[10];
    char curr_date[12];
    int std_c;


    strcpy(curr_time, __TIME__);
    strcpy(curr_date, __DATE__);
    printf("%s %s\n", curr_time, curr_date);
    printf("This is a line %d\n", __LINE__);
    std_c = __STDC__;
    printf("STDC is %d\n", std_c);

    return 0;
}


// In addition to defining your own macros, there are several standard pedefined macros that are always available in a C program without requiring the #define directive
// __DATE__ the current date as a string in the format Mm dd yyyy
// __TIME__ the current filename as a string in the format hh.mm.ss
// __FILE__ the current filename as a string
// __LINE__ the current line number as an int value