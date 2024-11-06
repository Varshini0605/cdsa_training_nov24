#include(stdio.h)
int main()
int findSmallestDigit(int number)
{
    int smallest = 9;
    if numberb < 0){
        number = -number;
    }
    while (number > 0){
        int digit = number % 10;
        if (digit < smallest){
            smallest = digit;
        } 
        number /= 10;
    }
    return smallest;
}
{
    int number;
    printf("Enter a number: ")
    scanf("%d", &number);
    int  smallestDigit = findSmallestDigit(number);
    printf("The smallest digit in %d\n",number,smallestDigit);
    return 0;
}