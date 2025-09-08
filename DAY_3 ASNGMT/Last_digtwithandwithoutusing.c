#include <stdio.h>
int main() {
    int num1, last1_Digit;
    printf("Enter an integer: ");
    scanf("%d", &num1);
    last1_Digit = num1 % 10;  // modulus gives last digit
    printf("Last digit (using modulus) = %d\n", last1_Digit);
    int num2, last2_Digit;
    printf("Enter an integer: ");
    scanf("%d", &num2);
    last2_Digit = num2 - (num2 / 10) * 10;  // removes higher part
    printf("Last digit (without modulus) = %d\n", last2_Digit);
    return 0;
}
