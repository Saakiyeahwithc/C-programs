// To Search an element using binary search.
#include <stdio.h>
int Binarysearch(int[], int, int);
void main()
{
    int x[20], i, n, p, key;
    printf("\n Enter the no of element:");
    scanf("%d", &n);
    printf("\n Enter %d elements in assending order:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);
    printf("\n Enter the element to be search:");
    scanf("%d", &key);
    p = Binarysearch(x, n, key);
    if (p == -1)
        printf("\n The search is unsuccessful:\n");
    else
        printf("\n%d is found at location %d", key, p);
}
int Binarysearch(int a[], int n, int k)
{
    int lo, hi, mid;
    lo = 0;
    hi = n - 1;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (k == a[mid])
            return (mid);
        if (k < a[mid])
            hi = mid - 1;
        else
            lo = mid + 1;
    }
}