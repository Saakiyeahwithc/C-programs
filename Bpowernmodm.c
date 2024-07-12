// C program to find b power n modulo m
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int power(int, int, int);
int main()
{
    int b, n, m, result;
    printf("Enter basse b: \n");
    scanf("%d", &b);
    printf("Enter power p: \n");
    scanf("%d", &n);
    printf("Enter modulo m: \n");
    scanf("%d", &m);
    result = power(b, n, m);
    printf("%d^%dmod%d=%d\n", b, n, m, result);
}
int main(int b, int n, int m)
{
    int result = 1;
    b = b % m;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = (result = b) % m;
        }
        n = n / 2;
        b = (b * b) % m;
    }
    return result;
}