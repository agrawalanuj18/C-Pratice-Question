#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the given value of n\n");
    scanf("%d", &n);
    int sum = 0;
    while (i <= 10)
    {
        // variable ki value change/update ho sakti h

        sum += i * n; // sum = sum + i

        if (i == 10)
        {
            printf("Sum of n natural number is %d\n", sum);
        }
        i++;
    }
    return 0;
}
