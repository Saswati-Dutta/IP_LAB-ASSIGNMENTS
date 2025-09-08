#include <stdio.h>
#include <math.h>
int main() {
    double P, R, T, CI;
    printf("Enter principal, rate and time: ");
    scanf("%lf %lf %lf", &P, &R, &T);
    CI = P * (pow((1 + R/100), T) - 1);
    printf("Compound Interest = %.2lf\n", CI);
    return 0;
}
