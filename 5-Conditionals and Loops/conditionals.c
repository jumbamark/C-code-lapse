#include <stdio.h>


#define p printf
// operations specified in if block are executed iff the given condition is true
int main(){
// If statements
    int number;

    p("Enter a number: ");
    scanf("%d",&number);
    if (number % 2 == 0){
        p("%d is an even number\n", number);
    }

    // expression that evaluates to a non-zero is considered true
    int in_stock = 20;
    if (in_stock)
        p("Order received.\n");

// If else statements (extension of the if statement, one is for the correctness of the statement, another is for the incorrectness)
    int acc_bal;
    p("Enter your account balance: ");
    scanf("%d",&acc_bal);

    if (acc_bal >= 500) {
        p("Your balance is within the price range\n");
    }
    else {
        p("Not afforadable\n");
    }

// Conditional Expression (The y operator can only have one statement associated with th if and else statement) 
    int y;
    int x = 3;
    // If (x >=5 ) then y=5 else y =x
    y = (x >= 5) ? 5:x ;

    return 0;
}