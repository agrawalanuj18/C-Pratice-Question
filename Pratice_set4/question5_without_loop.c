#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the given value of n\n");
    scanf("%d", &n);
    int sum = (n * (n + 1)) / 2;
    
        printf("The value of Sum of n Natural number is %d\n ", sum);
        
    return 0;
}
