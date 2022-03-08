#include <stdio.h>
int main()
{
    int n, i = 2;
    printf("Enter the given value of n\n");
    scanf("%d", &n);
    int remainder;
    do
    {
        remainder = n % i;
        if (remainder == 0 && n != 2)
        {
            printf("Given number is not prime number\n");
            break;
        }

        i++;
    } while (i < n);
    if (remainder != 0 || n == 2)
    {
        printf("Given number is prime number\n");
    }

    return 0;
}