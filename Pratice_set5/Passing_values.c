#include <stdio.h>
int sum(int a, int b); // Function Prototype

int main()
{
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);

    int c = sum(a, b);
    printf("the Sum of a and b is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}