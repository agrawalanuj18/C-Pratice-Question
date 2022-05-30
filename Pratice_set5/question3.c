#include <stdio.h>
float force(int mass);
int main()
{
    float m;
    printf("Enter the value of mass\n");
    scanf("%f", &m);
    printf("The force of attraction is equal to %f\n", force(m));
    return 0;
}
float force(int mass)
{
    float gravity = 9.8;
    float f = mass * gravity;
    return f;
}