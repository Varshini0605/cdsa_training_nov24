// check if a char is upper case
#include <stdio.h>

int main() {
    char ch;

    // Ask user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    } else {
        printf("%c is not an uppercase letter.\n", ch);
    }

    return 0;
}
