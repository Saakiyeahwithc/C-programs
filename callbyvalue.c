#include <stdio.h>
int swap(int x, int y);
void mainn()
{
    int a = 5, b = 8;
    printf("\nBefore calling swap()");
    printf("\na=%d", a);
    printf("\nb=%d", b);
    swap(a, b);
    printf("\nAfter calling swap()");
    printf("\na=%d", a);
    printf("\nb=%d", b);
}
int swap(int a, int b)
{
    int x, y, temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nInside swap()");
    printf("\na=%d", x);
    printf("\nb=%d", y);
    return swap(a, b);
}