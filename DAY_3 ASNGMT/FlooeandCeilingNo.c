#include <stdio.h>
#include <math.h>
int main() {
    double num;
    printf("Enter a number (+ve or -ve): ");
    scanf("%lf", &num);
    printf("Floor value = %.2lf\n", floor(num));
    printf("Ceiling value = %.2lf\n", ceil(num));
    return 0;
}
