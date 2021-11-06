#include <stdio.h>
int main(){
    int x,y,z,k;
    printf("enter the valule of x\n");
    scanf("%d",&x);
     printf("enter the valule of y\n");
    scanf("%d",&y); 
    printf("enter the valule of z\n");
    scanf("%d",&z);
     printf("enter the valule of k\n");
    scanf("%d",&k);
    printf("Evaluation is equal to %d\n", 3*x/y-z+k);
    // Bodmas is not applicable in c
    // so we follow the piorities order which we have to remember for this calculation 
    // if there is an condition where piorities order are same 
    // then we goes left to write to solve the equation
    return 0;
}