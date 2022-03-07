#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the given value of n\n");
    scanf("%d", &n);
    int sum = 0;
    while (i <= n)
    {
        // variable ki value change/update ho sakti h

        sum += i; // sum = sum + i

        if (i == n)
        {
            printf("Sum of n natural number is %d\n", sum);
        }
        i++;
    }
    return 0;
}
