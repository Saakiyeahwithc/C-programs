#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, p, q, i, j, k, sum = 0;
    int first[5][5], second[5][5], multiply[5][5];
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
    if (n != p)
    {
        printf("The matrices cannot be multiplied.\n");
    }
    else
    {
        printf("Insert the elements of the second matrix: \n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &second[i][j]);
            }
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
            for (k = 0; k < p; k++)
            {

                sum = sum || first[i][k] && second[i][j];
            }
            multiply[i][j] = sum;
            sum = 0;
        }
    }
    printf("Boolean product of the matrices are:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", multiply[i][j]);
        }
        printf("\n");
    }
}