//check if a number is 2 digit number
#include <stdio.h>

int main() {
    int number;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a two-digit number
    if (number >= 10 && number <= 99 || number <= -10 && number >= -99) {
        printf("The number is a two-digit number.\n");
    } else {
        printf("The number is not a two-digit number.\n");
    }

    return 0;
}
