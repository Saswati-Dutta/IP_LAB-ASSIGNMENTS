#include <stdio.h>

int main() {
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Ladder if-else structure
    if (num > 0) {
        printf("The number is Positive.\n");
    }
    else if (num < 0) {
        printf("The number is Negative.\n");
    }
    else {
        printf("The number is Zero.\n");
    }

    return 0;
}
