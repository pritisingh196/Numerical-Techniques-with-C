//E = |A - M| formula

#include <stdio.h>
#include <math.h> 

int main() {
    double actualValue, measuredValue, absoluteError;

    printf("Enter the actual value: ");
    scanf("%lf", &actualValue);

    printf("Enter the measured value: ");
    scanf("%lf", &measuredValue);
    absoluteError = fabs(actualValue - measuredValue);
    printf("Absolute Error: %lf\n", absoluteError);

    return 0;
}
