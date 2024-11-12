// find the smallest 3 distinct numbers
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Check if all numbers are distinct
    if (num1 == num2 || num2 == num3 || num1 == num3) {
        printf("The numbers are not distinct. Please enter three different numbers.\n");
    } else {
        // Finding and displaying the smallest number
        if (num1 < num2 && num1 < num3) {
            printf("The smallest number is: %d\n", num1);
        } else if (num2 < num1 && num2 < num3) {
            printf("The smallest number is: %d\n", num2);
        } else {
            printf("The smallest number is: %d\n", num3);
        }
    }

    return 0;
}
