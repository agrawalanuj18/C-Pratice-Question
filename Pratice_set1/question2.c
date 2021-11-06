#include <stdio.h>
int main(){
    float r,c,h;
    c = 3.14;
    printf("Enter the value of radius\n");
    scanf("%f",&r);
    printf("Enter the value of height\n");
    scanf("%f",&h);
    printf("Area of cylinder is equal to %f", h*c*r*r);
    return 0;
}