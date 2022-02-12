#include <stdio.h>


#define p printf
int main() {
    char a = getchar();  //reads char from the input
    p("You entered: %c", a);

    int b;
    // scans inputs that matches format specifiers, & is the address operator , it gives the address or location in memory
    scanf("%d", &b);  // spacing indicates two separate inputs
    p("You typed in: %d\n", b);

    int c, d;
    p("Enter two numbers: ");
    scanf("%d %d", &c, &d);
    p("\nProduct: %d", c*d);
    return 0;
}