#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int h;
    int w;
    int I;
} box;

// array of structures that stores information of 5 employees
struct employees {
    int rollNo;
    char name[10];
};



void studentData();
int main () {
    // array of structures that stores information of 2 employees
    struct employees emp[2];

    printf("Enter records of 2 employees");
    for (int i = 0; i < 2; i++) {
        printf("\nEnter rollNo: ");
        scanf("%d\n", &emp[i].rollNo);
        printf("\nEnter Name: ");
        fgets(emp[i].name, 10, stdin);
        // scanf("%s", emp[i].name);
    }
    printf("\n");

    printf("\nEmployee Information List:");
    for (int i = 0; i < 2; i++) {
        printf("\nRoll Number: %d, Name: %s", emp[i].rollNo, emp[i].name);
    }
    printf("\n");

    box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
    int volume;

    for (int k=0; k<3; k++) {
        volume = boxes[k].h*boxes[k].w*boxes[k].I;
        printf("Box %d volume %d\n", k, volume);
    }
    printf("\n");


    // case example
    studentData();

    return 0;
}


// consider a case where we have to store the data of 2 students, we can  store it by using the structure below;
struct student {
    char name[20];
    int id;
    float marks;
};

void studentData () {
    struct student s1,s2;
    int dummy;


    printf("\nEnter the name of student 1: ");
    fgets(s1.name, 20, stdin);
    printf("Enter the id and marks of student : ");
    scanf("%d %f",&s1.id, &s1.marks);
    scanf("%c", &dummy);
    printf("\n");

    printf("Enter the name of student 2: ");
    fgets(s2.name, 20, stdin);
    printf("Enter the id and marks of student : ");
    scanf("%d %f", &s2.id, &s2.marks);
    scanf("%c", &dummy);
    printf("\n");

    printf("\nPrinting the details...\n");
    printf("Name: %sId and Marks: %d %f\n", s1.name, s1.id, s1.marks);
    printf("\n");
    printf("Name: %sId and Marks: %d %f\n", s2.name, s2.id, s2.marks);
    // we can escape this procedure using an array of structures
}

/*
 * An array can store elements of any data type includong structures
 * After declaring an array of structures, an elemnt is accessible with the index number, the dot opereator is used to access members
 * Array of structures are used for data structures suach as linked lists, binary trees and more.
*/