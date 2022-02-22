#include <stdio.h>

typedef unsigned int unit;
// declaring variables (we don't include unsigned int)
unit a, b;

// using typedef with structures
struct student {
    char name[20];
    int age;
};


// simpler version of typedef
typedef struct employee {
    char name[20];
    float salary;
} emp;

int main () {
    a = 10;
    b = 20;

    printf("Value of i is %d\n", a);
    printf("value of b is %d\n", b);


    // using typedef with structures, declaring the variables
    typedef struct student stud;
    stud s1,s2;

    // declaring the simpler version
    emp e1,e2;
    printf("\nEnter the details of employee e1 \n");
    printf("Enter the name of the employee: ");
    fgets(e1.name, 50, stdin);
    // scanf("%s", e1.name);
    printf("Enter the salary of the employee: ");
    scanf("%f", &e1.salary);

    printf("Name of the employee is: %s", e1.name);
    printf("The salary of the employee is %f\n", e1.salary);

    // using typeded with pointers
    typedef int* ptr;
    ptr p1, p2;  // p1 and p2 are variables of type "ptr"

    return 0;
}

// typedef is normally used with structures because it eliminates the need to use the keyword struct when declaring variables.
// It's a keyword used to redefine the name of an already existing varaible
// typedef can also be used to provide names to already existing variables;similar to definig thar alias for given commands