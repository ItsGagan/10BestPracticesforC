#include <stdio.h>

// Define a static function that takes an integer as an argument and returns an integer
static int square(int x) {
    return x * x;
}

int main() {
    // Call the square function
    int result = square(5);
    printf("The square of 5 is %d\n", result);

    return 0;
}
