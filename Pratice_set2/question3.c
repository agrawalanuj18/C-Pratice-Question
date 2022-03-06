#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibilty test: %d",  97 % num ); // If number print 0 it means it is divisble otherwise not divisble
    
    return 0;
}