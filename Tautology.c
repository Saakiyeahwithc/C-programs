// C program to show that (p==>q)^(q==>r)==>(p==>r) is a tautology
#include <stdio.h>
int imp(int, int);
int and (int, int);
int main()
{
    int p, q, r;
    printf("P\tQ\tR\t(P==>Q)^(Q==>R)==>(P==>R)\n");
    for (p = 0; p <= 1; p++)
    {
        for (q = 0; q <= 1; q++)
        {
            for (r = 0; r <= 1; r++)
            {
                printf("%d\t%d\t%d\t%d\n", p, q, r, imp(and(imp(p, q), imp(q, r)), imp(p, r)));
            }
        }
    }
    return 0;
}
int and (int p, int q)
{
    if (p == 0 || q == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int and (int q, int r)
{
    if (q == 0 || r == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int imp(int p, int r)
{
    if (p == 0 || r == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}