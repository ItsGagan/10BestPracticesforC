#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare an integer variable and a pointer to an integer, initialized with the address of the integer variable
    int x = 10;
    int *ptr = &x;

    // Print the value of the integer and the value pointed to by the pointer
    printf("x = %d\n", x); // prints 10
    printf("*ptr = %d\n", *ptr); // prints 10

    // Modify the value of the integer through the pointer
    *ptr = 20;

    // Print the modified value of the integer and the value pointed to by the pointer
    printf("x = %d\n", x); // prints 20
    printf("*ptr = %d\n", *ptr); // prints 20
  
    // Free the memory pointed to by the pointer
    free(ptr);

    return 0;
}
