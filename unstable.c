#include <stdio.h>

int main() {
    double x = 1.0;
    double y = 0.0;

    for (int i = 0; i < 1000; i++) {
        // Perform some computations (e.g., dividing by a small number)
        y = 2.0 * x + 0.0001;

        // Update the value of x
        x = y;
    }

    // Print the final value of x
    printf("Final value of x: %lf\n", x);

    return 0;
}
