#include <stdio.h>
int main()
{
    int math, chem, phy;
    printf("Enter the marks of maths\n");
    scanf("%d", &math);
    printf("Enter the marks of chemistry\n");
    scanf("%d", &chem);
    printf("Enter the marks of physics\n");
    scanf("%d", &phy);

    int result = (math + chem + phy) / 3;

    if (result >= 40 && math>= 33 && chem>= 33 && phy >= 33)
    {
        printf("Pass");
    }
    else
    {
        printf("fail");
    }

    return 0;
}
