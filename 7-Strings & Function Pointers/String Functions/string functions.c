#include <stdio.h>
#include <string.h>

// formatted strings can be formatted with sprintf(), used to build a string from other data types
void details() {
    char info[100];
    char dept[] = "HR";
    int emp = 75;
    sprintf(info, "The %s depth has %d employess.", dept, emp);

    printf("%s\n", info);
} 

// sscanf() scans a string of values, the function reads from a string and stores them at corresponding varaible addresses
void demographics() {
    char info[] = "WallMart SA 1456";
    char city[50];
    char state[50];
    int population;

    sscanf(info, "%s %s %d", city, state, &population);
    printf("%d people live in %s, %s\n", population, city, state);
}

// string.h Library (gives access to various string functions
void strings() {
    char s1[] = "The grey fox";
    char s2[] = " jumped over the lazy dog";

    strcat(s1, s2);
    printf("%s\n", s1);
    printf("Length of s1 is %zu\n", strlen(s1));
}



int main () {

    details();
    demographics();
    strings();

    return 0;
}

// string.h Library (gives access to various string functions)
/*
 * strncat(str1, str2, n) - concatenates/appends first n characters of str2 to end of str1 and returns a pointer to str1
 * strncmp(str1, str2) - returns 0 when str1 is equal to str2, less than 0 when str1 < str2
 * strncmp(str1, str2, n) - returns zero when the first n characters of str1 are equal to the first n chars of str2
 * strncpy(str1, str2, n) - copies the first n characters of str2 to str1
 * strchr(str1, c) - returns a pointer to the first occurence of char c in str1 or NULL if char not found
 * strrchr(str1, c) - searches str1 in reverse and returns a pointer
 * strstr(str1, str2) - returns a pointer ti the first occurence of str2 in str1 or NULL if str2 is not found
 */