// find the second smallest digit in the number
#include <stdio.h>

int main() {
    int number, digit;
    int smallest = 9, secondSmallest = 9; // Initialize to 9 as digits range from 0 to 9

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
        if (digit < smallest) {
            secondSmallest = smallest; // Update second smallest
            smallest = digit; // Update smallest
        } else if (digit < secondSmallest && digit > smallest) {
            secondSmallest = digit; // Update second smallest
        }

        number /= 10;  // Remove the last digit
    }

    if (secondSmallest == 9) {
        printf("There is no second smallest digit in the number.\n");
    } else {
        printf("The second smallest digit is: %d\n", secondSmallest);
    }

    return 0;
}
