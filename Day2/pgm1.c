// check if a number is positive
#include <stdio.h>

int main() {
    int number;

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
