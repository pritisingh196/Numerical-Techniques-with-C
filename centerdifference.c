#include <stdio.h>
#include <math.h>

// Function for which we want to find the derivative
double myFunction(double x) {
    return sin(x);
}

// Center difference method to approximate the derivative of a function
double centerDifference(double (*function)(double), double x, double h) {
    return (function(x + h) - function(x - h)) / (2.0 * h);
}

int main() {
    double x0, h;

    printf("Enter the value of x at which to approximate the derivative: ");
    scanf("%lf", &x0);

    printf("Enter the value of h (step size): ");
    scanf("%lf", &h);

    double derivative = centerDifference(myFunction, x0, h);

    printf("Approximated derivative of the function at x = %lf is: %lf\n", x0, derivative);

    return 0;
}
