#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the given value of n\n");
    scanf("%d", &n);
    int remainder;
    for (i = 2; i < n; i++)
    {
        remainder = n % i;
        if (remainder == 0)
        {
            printf("Given number is not prime number\n");
            break;
        }
    }
    if (remainder != 0 || n == 2)
    {
        printf("Given number is prime number\n");
    }

    return 0;
}