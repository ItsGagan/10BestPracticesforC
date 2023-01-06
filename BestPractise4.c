#include <stdio.h>

// Define an inline function that takes two integers as arguments and returns their sum
inline int add(int x, int y) {
    return x + y;
}

int main() {
    // Call the add function
    int result = add(3, 4);
    printf("The sum of 3 and 4 is %d\n", result);

    return 0;
}


/*Notes : The compiler is free to ignore the inline keyword and treat the function as a normal function,
depending on the optimization level and other factors.

the inline functions are generally only useful for small, simple functions that are called frequently.
For larger or more complex functions, the overhead of inlining the function may outweigh the benefits of avoiding a function call.
*/
