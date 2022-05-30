#include <stdio.h>
int change(int *i);
int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);
    int *j = &i;
    printf("The address of i is %u\n", j);
    // After the change
    change(i);
    printf("The value of i is %d\n", i);
    printf("The address of i is %u\n", j);

    return 0;
}
int change(int *i)
{
    int temp = (*(&i)) * 10;
    return temp;
}
