#include <stdio.h>

// Define a struct to represent a point in 2D space
struct Point {
    int x;
    int y;
};

// Define a const function that takes a const pointer to a Point as an argument, and returns the distance from the origin
const double distanceFromOrigin(const struct Point *p) {
    return sqrt(p->x * p->x + p->y * p->y);
}

int main() {
    // Create a Point object
    struct Point p = {3, 4};

    // Call the distanceFromOrigin function
    double result = distanceFromOrigin(&p);
    printf("The distance from the origin is %f\n", result);

    return 0;
}
