#include <stdio.h>

int main() {
    // Declare a constant integer
    const int x = 10;

    // Attempt to modify the value of the constant integer
    // This will result in a compile-time error, as the value of a constant cannot be modified
    x = 20;

    return 0;
}
