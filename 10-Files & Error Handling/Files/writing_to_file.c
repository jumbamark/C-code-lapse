#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// file handling example to store employee's information
void storing_employee_info () {
    FILE *fptr;
    int id;
    char name[30];
    float salary;

    fptr = fopen("emp.txt", "w+"); //open for writing
    if (fptr == NULL) {
        printf("File does not exist.\n");
        return;
    }

    printf("Enter id: ");
    scanf("%d", &id);
    fprintf(fptr, "Id= %d\n", id);

    printf("Enter the name: ");
    scanf("%s", name);
    fprintf(fptr, "Name= %s\n", name);

    printf("Enter the salary: ");
    scanf("%f", &salary);
    fprintf(fptr, "Salary = %.2f\n", salary);
    fclose(fptr);
}


int main () {
    storing_employee_info();

    FILE *fptr;
    char filename[50];
    printf("Enter the path to the filename you want to create: ");
    fgets(filename, 50, stdin);
    fptr = fopen(filename, "w");

    // write to file
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
    fputs("End of List", fptr);

    return 0;
}

// the input output library also includes function for writing to a file, when writing to a file newline chars must be explicitly added
// fputc(char, fp) - writes char to the file pointed to by fp
// fputs(str, fp) - writes string str to the file pointed to by fp
// fprintf(fp, str, vars) - prints string to the file pointed to by fp, str can optionally include format specifiers and a list of variable vars