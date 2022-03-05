#include<stdio.h>
int main(){
    float P,R,T;
    printf("Enter the value of Pricipal\n");
    scanf("%f", &P);
    printf("Enter the value of Rate\n");
    scanf("%f", &R);
    printf("Enter the value of Time\n");
    scanf("%f", &T);

    float Simple_Interest = (P*R*T)/100;
    printf("Simple Interest is equal to %f\n", Simple_Interest);
    return 0;
}