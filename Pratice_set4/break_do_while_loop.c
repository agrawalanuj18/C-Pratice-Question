#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("%d\n", i++);
        if (i == 15)
        {
            break;
        }

    } while (i < 100);
    return 0;
}
