#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Ladder if-else structure
    if (ch == 'a' || ch == 'A')
        printf("%c is a Vowel.\n", ch);
    else if (ch == 'e' || ch == 'E')
        printf("%c is a Vowel.\n", ch);
    else if (ch == 'i' || ch == 'I')
        printf("%c is a Vowel.\n", ch);
    else if (ch == 'o' || ch == 'O')
        printf("%c is a Vowel.\n", ch);
    else if (ch == 'u' || ch == 'U')
        printf("%c is a Vowel.\n", ch);
    else
        printf("%c is a Consonant.\n", ch);

    return 0;
}
