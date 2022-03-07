#include <stdio.h>
int main()
{
    int n, i = 10;
    printf("Enter the given value of n\n");
    scanf("%d", &n);
    while (i > 0)
    {
        printf("The value of\t");
        printf("%d x %d = %d \n", n, i, i * n);
        i--;
    }

    return 0;
}
