// check if a person is eligible for vote on age basis
#include <stdio.h>

int main() {
    int age;

    // Ask user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the person is eligible to vote
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
