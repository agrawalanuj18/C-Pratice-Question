#include <stdio.h>
int average(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("The Average of given three number is equal to %d", average(a, b, c));
    return 0;
}
int average(int a, int b, int c)
{
    int result = (float)(a + b + c) / 3;
    return result;
}