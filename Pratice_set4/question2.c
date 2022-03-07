#include <stdio.h>
int main()
{
    int n;
    printf("Enter the given value of n\n");
    scanf("%d", &n);
    for (int i = 10; i; i--)
    {
        printf("The value of\t");
        printf("%d x %d = %d \n", n, i, i * n);
    }

    return 0;
}
