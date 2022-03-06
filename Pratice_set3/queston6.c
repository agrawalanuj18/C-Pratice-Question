#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("Enter the value of num1\n");
    scanf("%d", &num1);
    printf("Enter the value of num2\n");
    scanf("%d", &num2);
    printf("Enter the value of num3\n");
    scanf("%d", &num3);
    printf("Enter the value of num4\n");
    scanf("%d", &num4);

    if ((num1 >= num2) && (num1 >= num3) && (num1 >= num4))
    {
        printf("num1 is greater than others\n");
    }
    else if ((num2 >= num1) && (num2 >= num3) && (num2 >= num4))
    {
        printf("num2 is greater than others\n");
    }
    else if ((num3 > num2) && (num3 > num1) && (num3 > num4))
    {
        printf("num3 is greater than others\n");
    }
    else
    {
        printf("num4 is greater than others\n");
    }
    return 0;
}