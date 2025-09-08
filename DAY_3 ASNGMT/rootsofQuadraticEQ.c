#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, D, root1, root2, real, imag;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b*b - 4*a*c;

    if(D > 0) {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and different: %.2lf , %.2lf\n", root1, root2);
    }
    else if(D == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal: %.2lf , %.2lf\n", root1, root2);
    }
    else {
        real = -b / (2*a);
        imag = sqrt(-D) / (2*a);
        printf("Roots are complex: %.2lf + %.2lfi , %.2lf - %.2lfi\n",
                real, imag, real, imag);
    }
    return 0;
}
