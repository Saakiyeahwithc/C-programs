#include <stdio.h>

void swap(int *x, int *y);
void main()
{
    int a = 5;
    int b = 10;
    printf("\nBefore calling swap()");
    printf("\na= %d ", a);
    printf("\nb= %d", b);
    swap(&a, &b);
    printf("\nAfter calling swap()");
    printf("\na= %d ", a);
    printf("\nb= %d", b);
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\nInside swap()");
    printf("\na= %d ", *x);
    printf("\nb= %d", *y);
}
