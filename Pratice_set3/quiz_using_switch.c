#include <stdio.h>
int main()
{
    int marks;

    printf("Enter the marks\n");
    scanf("%d", &marks);
    
     switch (marks)
    {
    case 100:
        printf("1st rank\n");
        break;
    case 90:
        printf("2nd Rank\n");
        break;
    default:
        printf("Not Rank holder\n");        
        break;                                                    
    }
    
    return 0;
}