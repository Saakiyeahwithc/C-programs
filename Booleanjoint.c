#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, p, q, i, j;
    int first[5][5], second[5][5], join[5][5];
    printf("Insert the no. of rows and columns of the first matrix: \n");
    scanf("%d%d", &m, &n);
    printf("Insert the elements of the first matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }
    printf("Insert the no. of rows and columns of the second matrix: \n");
    scanf("%d%d", &p, &q);
    printf("Insert the elements of the second matrix: \n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }
    printf("The elements of the first matrix are:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", first[i][j]);
        }
        printf("\n");
    }
    printf("The elements of the second matrix are:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", second[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            join[i][j] = first[i][j] || second[i][j];
        }
    }
    printf("Boolean join of the matrices are:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", join[i][j]);
        }
        printf("\n");
    }
}
