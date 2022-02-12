#include <stdio.h>
#include <string.h>

int main() {
    int age;
    printf("What's your age?: ");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);
    // your age is (users age)
    char consent[5];
    printf("Give consent: (enter y for yes and n for no) \n");
    scanf("%s", &*consent);
    // user input consent "yess=y", "no=n"

    if (age >= 18 && (strcmp(consent, "n")) == 0) {
        printf("No\n");
    }
    
    if (age > 18 && consent [0] == 'y') {
        printf("No\n");
    }

    if (age < 18) {
        if (strcmp(consent, "y") == 0) {
            printf("Guide her\n");
        } else {
            printf("Right decision\n");
        }
    }


    return 0;
}