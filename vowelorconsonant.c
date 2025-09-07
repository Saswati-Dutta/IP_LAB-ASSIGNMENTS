#include <stdio.h>

int main() {
    char c;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", c);
            break;
        default:
            if ( c >= 'a' && c <= 'z')
                printf("%c is a consonant.\n", c);
            else
                printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
