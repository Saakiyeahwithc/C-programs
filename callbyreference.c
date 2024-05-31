#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\nInside swap()");
    printf("\na=%d", *x);
    printf("\nb=%d", *y);
}
void main()
{
    int a = 19, b = 67;
    printf("\nBefore calling swap()");
    printf("\na=%d", a);
    printf("\nb=%d", b);
    swap(&a, &b);
    printf("\nAfter calling swap()");
    printf("\na=%d", a);
    printf("\nb=%d", b);
}
