#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (i = n; i; i--)
    {
        printf("the number is %d\n", i);
    }

    return 0;
}