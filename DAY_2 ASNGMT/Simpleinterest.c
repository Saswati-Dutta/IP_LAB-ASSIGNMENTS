#include <stdio.h>

int main() {
    float P, R, T, SI;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    // Calculate Simple Interest
    SI = (P * R * T) / 100;

    // Output result
    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
