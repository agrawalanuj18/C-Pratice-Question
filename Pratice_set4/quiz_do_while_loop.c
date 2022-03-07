#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter the value of number of natural to print\n");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i++);
    } while (i <= n);

    return 0;
}