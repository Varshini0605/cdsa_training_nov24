// find the sum of odd placed even digits in the number
#include <stdio.h>

int main() {
    int number, position = 1, digit, sum = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Make the number positive if it is negative
    if (number < 0) {
        number = -number;
    }

    // Traverse through each digit in the number
    while (number > 0) {
        digit = number % 10; // Get the last digit

        // Check if the position is odd and the digit is even
        if (position % 2 != 0 && digit % 2 == 0) {
            sum += digit; // Add the digit to sum if it meets the conditions
        }

        number /= 10;  // Remove the last digit
        position++;    // Move to the next position
    }

    printf("The sum of even digits at odd positions is: %d\n", sum);

    return 0;
}