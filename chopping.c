#include <stdio.h>
#include <math.h>

// Function to truncate a floating-point number to a given number of decimal places
double truncate(double value, int decimal_places) {
    double factor = pow(10, decimal_places);
    return trunc(value * factor) / factor;
}

// Function to round a floating-point number to a given number of decimal places
double roundTo(double value, int decimal_places) {
    double factor = pow(10, decimal_places);
    return round(value * factor) / factor;
}

int main() {
    double number = 3.14159265358979323846;

    // Truncate the number to 3 decimal places
    double truncatedValue = truncate(number, 3);

    // Round the number to 3 decimal places
    double roundedValue = roundTo(number, 3);

    printf("Original number: %lf\n", number);
    printf("Truncated value: %lf\n", truncatedValue);
    printf("Rounded value: %lf\n", roundedValue);

    return 0;
}
