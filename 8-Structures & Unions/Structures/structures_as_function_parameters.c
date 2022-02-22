#include <stdio.h>
#include <string.h>

typedef struct {
    int shelf_number;
    char title[40];
    float hours;
} book;


void update_book(book *class) {
    strcpy(class->title, "The Subtle Art of Not Giving a F*ck");
    (*class).shelf_number = 128;
    class -> hours = 18;
}


void display_book(book class) {
    printf("%d\t %s\t %3.2f\n", class.shelf_number, class.title,class.hours);
}


int main () {
    book bk_2;
    display_book(bk_2);
    // update_book(&bk_2);

    return 0;
}

/*
 * Functions can have structure parameters that accept arguments by value when a copy of the structure var is all that's needed
 * For a function to change the actual values in a struct variable, pointer parameters are required
 * update_course() takes a pointer as the parameter
 * display_course takes the structure by value
*/