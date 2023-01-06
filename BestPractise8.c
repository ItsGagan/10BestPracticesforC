#include <stdio.h>

int main() {
    // Declare a pointer to an integer
    int *ptr;

    // Assign the pointer to a new memory address, without allocating memory for the new address
    ptr = (int*)0x1000;

    // Attempt to access the value pointed to by the dangling pointer
    // This will result in a segmentation fault, as the pointer is pointing to an invalid memory address
    printf("*ptr = %d\n", *ptr);

    return 0;
}
