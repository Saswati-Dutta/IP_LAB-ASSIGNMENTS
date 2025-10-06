#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;  // factorial can be a large number
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;  // same as fact = fact * i
    }

    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}