#include <stdio.h>

// Function to perform linear interpolation
double linear_interpolation(double x0, double y0, double x1, double y1, double x) {
    return y0 + (x - x0) * (y1 - y0) / (x1 - x0);
}

int main() {
    // Sample data points
    double x[] = {1.0, 2.0, 4.0, 5.0};
    double y[] = {2.0, 4.0, 3.0, 1.0};

    double x_interpolate = 3.0;
    double y_interpolated;

    // Find the appropriate interval for interpolation
    int i;
    for (i = 0; i < 3; i++) {
        if (x_interpolate >= x[i] && x_interpolate <= x[i + 1])
            break;
    }

    // Perform linear interpolation
    y_interpolated = linear_interpolation(x[i], y[i], x[i + 1], y[i + 1], x_interpolate);

    printf("Interpolated value at %f = %f\n", x_interpolate, y_interpolated);

    return 0;
}
