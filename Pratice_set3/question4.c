#include <stdio.h>
// #include <math.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    int leap = (year % 4);
    if (leap == 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not leap year\n");
    }

    return 0;
}
