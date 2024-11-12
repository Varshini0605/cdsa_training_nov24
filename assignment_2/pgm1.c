//find the frequency of digits in a number
#include <stdio.h>

int main() {
    int number, digit;
    int frequency[10] = {0}; // Array to store frequency of digits 0–9

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Make the number positive if it is negative
    if (number < 0) {
        number = -number;
    }

    // Count the frequency of each digit
    while (number > 0) {
        digit = number % 10;       // Get the last digit
        frequency[digit]++;        // Increment the frequency of the digit
        number /= 10;              // Remove the last digit
    }

    // Display the frequency of each digit
    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }

    return 0;
}