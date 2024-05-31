#include <stdio.h>
#define m 3
#define n 3
void main()
{
    int a[m][n], trans[m][n], i, j;
    printf("\nenter first matrix:");
    for (i = 0; i <= m; i++)

        for (j = 0; j <= n; j++)

            scanf("%d", a[i][j]);
    for (i = 0; i <= m; i++)
        for (i = 0; j <= n; j++)
            a[i][j] = trans[n][m];
    printf("\nAfter transpose");
    for (i = 0; i <= m; i++)
        for (j = 0; j <= n; j++)
            printf("%d", trans[i][j]);
}