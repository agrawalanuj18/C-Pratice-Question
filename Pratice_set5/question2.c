#include <stdio.h>
float celcius(float cel);
int main()
{
    float cel;

    printf("enter the value of cel\n");
    scanf("%f", &cel);

    printf("Fahrenite is equal to %f", celcius(cel));
    return 0;
}

float celcius(float cel)
{
    float far = (cel * 9 / 5) + 32;
    return far;
}