#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the given marks");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Grade A");
    }
    else if (marks >= 80)
    {
        printf("Grade B");
    }
    else if (marks >= 70)
    {
        printf("Grade c");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
