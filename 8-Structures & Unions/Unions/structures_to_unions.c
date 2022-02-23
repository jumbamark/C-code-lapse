#include <stdio.h>

// Consider a store that has two iitems: books and shirts
// store owners want to store the records of the above mentioned two items along with relevant info (Books: Title, Author, no of pages, price.. Shirts: color,design,size, price). Price factor is common

// storing the records in a structure
struct store {
    double price;
    char *title;
    char *author;
    int number_pages;
    int color;
    int size;
    char *design;
};

// accessing the members
void book_store () {
    struct store book;
    book.title = "C Programming";
    book.author = "Mercy Kipruto";
    book.number_pages = 190;
    book.price =899;

    printf("Size is: %ld bytes\n", sizeof(book));
    // The book does not posses variables such as size, color and design hence it's a wastage of memory (size would be 44 bytes)
}


// saving space using unions
struct Store {
    double price;

    union {
        struct {
            char *title;
            char *author;
            int number_pages;
        } book;

        struct {
            int color;
            int size;
            char *design;
        } shirt;
    } item;
};

void book_Store () {
    struct Store s;

    s.item.book.title = "Python Programming";
    s.item.book.author = "Lynne";
    s.item.book.number_pages = 189;

    printf("Size is: %ld\n bytes", sizeof(s));
}



int main () {
    book_store();
    book_Store();

    return 0;
}