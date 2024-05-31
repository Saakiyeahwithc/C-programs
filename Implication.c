// C program to write implication
#include <stdio.h>
int imp(int, int);
int main()
{
    int a, b;
    printf("A\tB\tA or B\n");
    for (a = 0; a <= 1; a++)
    {
        for (b = 0; b <= 1; b++)
        {
            printf("%d\t%d\t%d\n", a, b, imp(a, b));
        }
    }
    return 0;
}
int imp(int a, int b)
{
    if (a == 1 && b == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}