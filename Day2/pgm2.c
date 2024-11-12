// program that reverses the elements of an array in place using pointers.
#include <stdio.h>

int main() 
{
    int n;
    
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int *start = arr;
    int *end = arr + n - 1;

    while (start < end) 
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
