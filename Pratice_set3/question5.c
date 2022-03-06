#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    // lowercase is belong the number 97 to 122
    // because of that data, we find out the character is lowercase or not
    if (ch <= 122 && ch >= 97)

    {
        printf("the character is lowercase");
    }
    else
    {
        printf("the character is not lowercase");
    }
    return 0;
}