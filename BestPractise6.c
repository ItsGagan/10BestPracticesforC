#include <stdio.h>

int main() {
    // Declare a variable to control the loop
    int i = 0;

    // Use a label to mark the beginning of the loop
    loop:
    printf("Iteration %d\n", i);

    // Increment the loop counter
    i++;

    // Check if the loop should continue
    if (i < 10) {
        // Jump back to the beginning of the loop
        goto loop;
    }

    return 0;
}
