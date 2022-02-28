#include<stdio.h>

void func() ;
#pragma startup func
#pragma exit func


int main () {
    printf("\nHer name is Mercy\n");
    getch();

    return 0;
}

void func() {
    printf("\nShe is amazing💗\n");
    getch();
}

// pragma preprocessor directive is used to provide additional information to the compiler. It is used by the compiler to offer machine or OS feature.
// Syntax: #pragma token
// Different compilers can provide different use of #pragma directive