#include <stdio.h>

int main() {
    // Declare a constant integer and a pointer to a constant integer
    const int x = 10;
    const int *ptr = &x;

    // Attempt to modify the value pointed to by the pointer
    // This will result in a compile-time error, as the memory pointed to by a const pointer cannot be modified
    *ptr = 20;
    return 0;
}
