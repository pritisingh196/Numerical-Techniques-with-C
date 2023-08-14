//R = |(A - M) / A| formula 
#include <stdio.h>
#include <math.h> // Required for the fabs() function

int main() {
    double actualValue, measuredValue, relativeError;

    // Get the actual value from the user
    printf("Enter the actual value: ");
    scanf("%lf", &actualValue);

    // Get the measured value from the user
    printf("Enter the measured value: ");
    scanf("%lf", &measuredValue);

    // Calculate the relative error
    relativeError = fabs((actualValue - measuredValue) / actualValue);

    // Print the result
    printf("Relative Error: %lf\n", relativeError);

    return 0;
}
