#include <stdio.h>
void Selectionsort(int[], int);
void main()
{
    int x[20], i, n;
    printf("\n Enter the no. of element to be sorted: ");
    scanf("%d", &n);
    printf("\n Enter %d elements:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);
    Selectionsort(x, n);
    printf("\n The sorted array is:\n");
    for (i = 0; i < n; i++)
        printf("%4d", x[i]);
}
void Selectionsort(int a[], int n)
{
    int i, j, pos, large;
    for (i = n - 1; i > 0; i--)
    {
        large = a[0];
        pos = 0;
        for (j = 1; j <= i; j++)
        {
            if (a[i] > large)
            {
                large = a[j];
                pos = j;
            }
        }
        a[pos] = a[i];
        a[i] = large;
    }
}
