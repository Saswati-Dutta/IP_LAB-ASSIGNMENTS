#include <stdio.h>

int main() {
    int a, b;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap without 3rd variable
    a = a + b;  // step 1
    b = a - b;  // step 2
    a = a - b;  // step 3

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
