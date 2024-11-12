//find the biggest of 2 distinct numbers
#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check if the numbers are distinct
    if (num1 == num2) {
        printf("The numbers are not distinct. Please enter two different numbers.\n");
    } else {
        // Finding and displaying the biggest number
        if (num1 > num2) {
            printf("The biggest number is: %d\n", num1);
        } else {
            printf("The biggest number is: %d\n", num2);
        }
    }

    return 0;
}
