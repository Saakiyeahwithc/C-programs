// C program to write OR logical operator
#include <stdio.h>
int or (int, int);
int main()
{
    int a, b;
    printf("A\tB\tA or B\n");
    for (a = 0; a <= 1; a++)
    {
        for (b = 0; b <= 1; b++)
        {
            printf("%d\t%d\t%d\n", a, b, or (a, b));
        }
    }
    return 0;
}
int or (int a, int b)
{
    if (a == 1 || b == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}