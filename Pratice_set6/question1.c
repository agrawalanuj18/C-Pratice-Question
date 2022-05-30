#include <stdio.h>
int main(){
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);
    int *j = &i;
    printf("The address of i is %u\n", j);
    printf("The value of variable %u\n", *(&i));
    return 0;
}