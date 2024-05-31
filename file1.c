#include <stdio.h>
void main()
{
    int num;
    long int facto;
    long int factorial(int num);
    printf("Enter the value: ");
    scanf("%d", &num);
    facto = factorial(num);
    printf("%d!=%ld", num, facto);
}
long int factorial(int num)
{
    long int facto = 1;
    int i;
    if (num == 0)
        return 1;
    else
    {
        for (i = 1; i <= num; i++)
            facto = facto * i;
        return facto;
    }
}