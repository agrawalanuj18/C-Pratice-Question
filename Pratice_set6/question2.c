#include <stdio.h>
int address(int i);
int main(){
   int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);
    int *j = &i;
    printf("The address of i is %u and %u\n", j, address(i));
    return 0;
}

int address(int i){
    int *j = &i;
    return j;
}