#include <stdio.h>
char star(char ch);
int main()
{
    int n, i;
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            printf("%c", star(i));
        }
        i++;
    }

    return 0;
}

char star(char ch)
{
    char c = '*';
    return c;
}
