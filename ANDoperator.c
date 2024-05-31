// C program to write AND logical operator
#include <stdio.h>
int and (int, int);
int main()
{
    int a, b;
    printf("A\tB\tA and B\n");
    for (a = 0; a <= 1; a++)
    {
        for (b = 0; b <= 1; b++)
        {
            printf("%d\t%d\t%d\n", a, b, and(a, b));
        }
    }
    return 0;
}
int and (int a, int b)
{
    if (a == 1 && b == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}