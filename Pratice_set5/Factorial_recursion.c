#include <stdio.h>
int factorial(int x);
int main()
{
    int a;
    printf("Enter the value of n\n");
    scanf("%d", &a);
    int result = factorial(a);
    printf("the Factorial of %d is equal to %d\n", a, result);
    return 0;
}

int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        int f = x * factorial(x - 1);
        return f;
    }
}