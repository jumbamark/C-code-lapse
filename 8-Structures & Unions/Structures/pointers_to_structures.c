# include <stdio.h>

struct student {
    char name[50];
    int number;
    int age;
};


// structure pointer as a function parameter
void showStudentData (struct student *st) {
    printf("\nStudent Details;\n");
    printf("Name: %s\n", st->name);
    printf("Number : %d\n", (*st).number);
    printf("Age: %d\n", st->age);
}



void main () {
    struct student st1 = {"Mercy", 1, 21};
    showStudentData(&st1);
}

/*
 * Just like pointers to variables, pointers to structures can also be defined
 * struct myStruct *struct_ptr;  (defines a pointer to the myStruct structure.)
 * struct_ptr = &struct_var (stores the address of the structure variable struct_var in the pointer struct_ptr).
 * struct_ptr -> struct_mem  (accesses the value of the structure member struct_mem)
 * When typedef has been used to name the struct a pointer is declared using only the typedef name along with * and the pointer name.
*/