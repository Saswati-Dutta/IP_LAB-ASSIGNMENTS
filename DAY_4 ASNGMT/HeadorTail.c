#include <stdio.h>

int main() {
    char coin;   // variable to store user input (H or T)

    // Ask the user to enter the coin result
    printf("Enter H for Head or T for Tail: ");
    scanf(" %c", &coin);  // read a character

    // Check the input and display result
    if (coin == 'H' || coin == 'h') {   // if input is H or h
        printf("Result: Head\n");
    }
    else if (coin == 'T' || coin == 't') {  // if input is T or t
        printf("Result: Tail\n");
    }
    else {
        printf("Invalid input! Please enter H or T.\n");
    }

    return 0;
}
