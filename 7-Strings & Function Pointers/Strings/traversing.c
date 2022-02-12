#include <stdio.h>

// using length of the string
void length () {
    char name[6] = "Jumba";
    int i = 0;
    int count = 0;

    while (i<6) {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u') {
            count++;
        }
        i++;
    }
    printf("The number of vowels %d\n", count);
}

// using NULL character  (replace NULL with the end of the string bec null is considered a pointer)
void null () {
    char mine[8] = "Jane Doe";
    int x = 0;
    int Count = 0;

        while (mine[x] != '\0') {
            if (mine[x] == 'a' || mine[x] == 'e' || mine[x] == 'i' || mine[x] == 'o' || mine[x] == 'u')
            {
                Count++;
            }
            x++;
        }

    printf("\nThe number of vowels %d\n", Count);
}



void main() {
    length();
    null();
}