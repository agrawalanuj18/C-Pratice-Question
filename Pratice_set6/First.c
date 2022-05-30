#include <stdio.h>
int main()
{
    int i = 34;
    int *j = &i;

    printf("The Value of i is equal to %d\n", i);
    printf("The Value of i is equal to %d\n", *j);
    printf("The Address of i is equal to %u\n", &i);
    printf("The Address of i is equal to %u\n", j);
    printf("The Address of j is equal to %u\n", &j);
    printf("The Value of j is equal to %d\n", *(&j));
    return 0;
}
