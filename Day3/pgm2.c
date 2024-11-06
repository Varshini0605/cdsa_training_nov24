#include <stdio.h>

int isPrime(int n) 
{
    if (n <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // n is divisible by i, so it's not prime
        }
    }

    return 1;  // n is prime
}

int main()
 {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}