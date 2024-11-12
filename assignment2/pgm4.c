//find the lucky digit 
#include <stdio.h>

int main() {
    int number, digit;
    int frequency[10] = {0}; // Array to store frequency of each digit (0-9)
    int maxFrequency = 0, luckyDigit = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Make the number positive if it is negative
    if (number < 0) {
        number = -number;
    }

    // Calculate the frequency of each digit
    while (number > 0) {
        digit = number % 10; // Extract the last digit
        frequency[digit]++;  // Increase the frequency of the digit
        number /= 10;        // Remove the last digit
    }

    // Find the digit with the highest frequency
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > maxFrequency || (frequency[i] == maxFrequency && i > luckyDigit)) {
            maxFrequency = frequency[i];
            luckyDigit = i;
        }
    }

    printf("The lucky digit is: %d\n", luckyDigit);

    return 0;
}
