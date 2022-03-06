#include <stdio.h>
// #include <math.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    int leap = (year % 4); // Leap year is always divisible by 4
    if (leap == 0)         // thats why I apply this equation
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not leap year\n");
    }

    return 0;
}
