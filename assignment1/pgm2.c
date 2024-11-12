// check if a number is perfect square
#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int sqrtValue;

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the square root and check if it's a perfect square
    sqrtValue = sqrt(number);

    if (sqrtValue * sqrtValue == number) {
        printf("%d is a perfect square.\n", number);
    } else {
        printf("%d is not a perfect square.\n", number);
    }

    return 0;
}
