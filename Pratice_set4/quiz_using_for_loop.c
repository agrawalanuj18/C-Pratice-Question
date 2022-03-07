#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the natural number you want to print\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("the number is %d\n", i);
    }

    return 0;
}
