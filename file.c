#include <stdio.h>
void main()
{
    int num;
    long int facto;
    long int factorial(int num);
    printf("Enter the number:");
    scanf("%d", &num);
    facto = factorial(num); // calling function
    printf("%d!= %ld", num, facto);
}
long int factorial(int num)
{
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}