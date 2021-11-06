#include<stdio.h>
int main(){
    int P,R,T;
    printf("Enter the value of Pricipal\n");
    scanf("%d", &P);
    printf("Enter the value of Rate\n");
    scanf("%d", &R);
    printf("Enter the value of Time\n");
    scanf("%d", &T);

    float Simple_Interest = P*R*T;
    printf("Simple Interest is equal to %f\n", Simple_Interest);
    return 0;
}