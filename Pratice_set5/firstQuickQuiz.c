#include <stdio.h>
void morning();
void afternoon();
void night();
int main()
{
    printf("Firstly call Morning function\n");
    morning();
    printf("secondary call Afternoon Function\n");
    afternoon();
    printf("Third call night Function\n");
    night();
    return 0;
}
void morning()
{
    printf("Good morning\n");
}
void afternoon()
{
    printf("Good afternoon\n");
}
void night()
{
    printf("Good night\n");
}