#include <stdio.h>
int fact(int a);
int main()
{
    int a;
    printf("Enter number to calculate its factorial:\n");
    scanf("%d", &a);
    a = fact(a);
    printf("%d", a);
    return 0;
}

int fact(int a)
{

    if (a == 1)
    {
        return 1;
    }
    return a * fact(a - 1);
}