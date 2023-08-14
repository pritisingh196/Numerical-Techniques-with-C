#include <stdio.h>
#include <math.h>

double stirling_factorial(int n) {
    if (n == 0) return 1.0;
    
    // Stirling's approximation
    return sqrt(2 * M_PI * n) * pow(n / M_E, n);
}

int main() {
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        double result = stirling_factorial(num);
        printf("%d! ≈ %f\n", num, result);
    }

    return 0;
}
