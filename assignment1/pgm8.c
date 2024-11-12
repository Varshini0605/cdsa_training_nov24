//check if a number is divisible by 5
#include <stdio.h>

int main() {
    int number;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is divisible by 5
    if (number % 5 == 0) {
        printf("The number is divisible by 5.\n");
    } else {
        printf("The number is not divisible by 5.\n");
    }

    return 0;
}
