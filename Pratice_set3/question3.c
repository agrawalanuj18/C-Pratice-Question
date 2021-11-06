#include <stdio.h>
int main()
{
    int income;
    printf("enter your income");
    scanf("%d", &income);
    // if (income >= 0)
    // {
    //     printf("no tax");
    // }
    // else if (income >= 2.5)
    // {
    //     printf("5 tax");
    // }
    // else if (income >= 5)
    // {
    //     printf("20 tax");
    // }
    // else if (income >= 10)
    // {
    //     printf("30 tax");
    // }
    // above code is not write in right order

    if (income>=10){
        printf("30" );
    }
    else if (income>=5){
        printf("20");
    }
    
    else if (income>=2.5){
        printf("5");
    }
    else if (income>=0){
        printf("0");
    }
    
    return 0;
}
