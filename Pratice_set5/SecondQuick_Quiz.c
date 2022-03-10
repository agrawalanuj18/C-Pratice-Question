#include <stdio.h>
int Area(int side);
int main()
{
    int a;
    printf("Enter the value of Side a\n");
    scanf("%d", &a);

    int c = Area(a);
    printf("Area is Equal to %d", c); 
    return 0;
}

int Area(int side)
{
    int result = side * side;
    return result;
}