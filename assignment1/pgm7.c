// check if a character is a digit or a alphabet or a symbol
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Taking input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("The character is a digit.\n");
    }
    // Check if the character is an alphabet
    else if (isalpha(ch)) {
        printf("The character is an alphabet.\n");
    }
    // If neither, it is considered a symbol
    else {
        printf("The character is a symbol.\n");
    }

    return 0;
}
