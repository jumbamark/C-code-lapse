#include <stdio.h>

void  inspiration(int num_times);  // function

int main () {
  void (*funptr)(int);  // function pointer
  funptr = inspiration;  //assigning function pointer to the function
  funptr(3);   //calling the function through the pointer

  // Getting the address of this function
  printf("\nThe adress of the main() function is %p\n", main); 

  return 0;
}

void inspiration(int num_times)
{
    for (int k = 0; k < num_times; k++)
    {
        printf("Live life like it's a marathon, not a sprint\n");
    }
}


// function pointers point to executable code for a function in memory and can be stored in an array or passed as args to other functions.
// Function pointer declaration uses the * like any pointer with parantheses around them, without them the compiler will think the function is returning a pointer
// Function name points to the start of executable code, just as an array name points to the first element
// although funcptr = &insipiration and (*funptr)(3) are correct, it's not necessary to include the address operator in the function assignment and call

