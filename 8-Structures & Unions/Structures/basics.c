#include <stdio.h>

void complex_approach()
{
    char names[2][10], dummy; // 2-D name array used to store the name of students;
    int roll_numbers[2];
    float marks[2];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name, roll number and marks of the student %d: ", i + 1);
        scanf("%s %d %f", names[i], &roll_numbers[i], &marks[i]);
        scanf("%c", &dummy); /* enter will be stored into dummy character at each iteration*/
    }

    printf("Printing the student details...\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s %d %f\n", names[i], roll_numbers[i], marks[i]);
    }
}



int main () {

    // complex
    // Construct individual arrays for storing names, roll numbers, and marks.
    complex_approach();

    // Using special data structure to store the collection of different data types.
    struct student {
        int age;
        int grade;
        char name[40];
    };

    // declaring two variables
    struct student s8;
    struct student s9;

    // Declarations Using Structures
    struct student s1 = {21, "Lynne"};
    struct student s2 = {21, "Gathoni"};

    // another way to declare at the time of defining the structure.
    struct employee {
        int id;
        char name[50];
        float salary;
    } e1, e2;

    // initiaize using curly braces
    struct student s3;
    s2 = (struct student){23, "Gathoni"};

    // using named member initialization
    struct student s4 = { .grade = 10, .age = 21, .name = "Dan"};

    // accessing structure Members
    s4.age = 20; //assigning a value to the age member
    struct student s5;
    s5 = s4; //assigning a structure to another of the same data type

    return 0;
}


// structure is user-defined data type that groups related variables of different data types.
// structure declaration includes the keyword struct, a structure tag for referencing the structure and curly braces with a list of variable declarations called members (members can be of any data type including strings,arrays, pointers and even other structures)
// To declare variables you use the keyword struct followed by the struct tag and then the variable name.