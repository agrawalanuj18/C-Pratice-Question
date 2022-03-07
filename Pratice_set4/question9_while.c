#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the given value of n\n");
    scanf("%d", &n);
    int factorial = 1;
    do
    {
        factorial = factorial * i;
        if (i == n)
        {
            printf("The Factorial is equal to %d\n", factorial);
        }
        i++;
        
    }while (i < n+1);

    return 0;
}