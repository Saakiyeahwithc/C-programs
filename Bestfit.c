#include <stdio.h>
#define max 25
void main()
{
    int frag[max], b[max], f[max], i, j, nb, nf, temp, lowest = 10000;
    static int bf[max], ff[max];
    printf("\n Enter the number of block:");
    scanf("%d", &nb);
    printf("\nEnter the number of files:");
    scanf("%d", &nf);
    printf("\nEnter the size of the block:\n");
    for (i = 1; i <= nb; i++)
    {
        printf("block %d:", i);
        scanf("%d", &b[i]);
    }
    printf("Enter the size of the files:\n");
    for (i = 1; i <= nf; i++)
    {
        printf("file %d:", i);
        scanf("%d", &f[i]);
    }
    for (i = 1; i <= nf; i++)
    {
        for (j = 1; j <= nb; j++)
        {
            if (bf[j] != 1)
            {
                temp = b[j] - f[i];
            }
            if (temp >= 0)
            {
                if (lowest > temp)
                {
                    ff[i] = j;
                    lowest = temp;
                }
            }
            frag[i] = lowest;
        }
        bf[ff[i]] = 1;
        lowest = 10000;
    }
    printf("\n file no \tfile size\t block no\tblock size\tfragment");
    for (i = 1; i <= nf && ff[i] != 0; i++)
    {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", i, f[i], ff[i], b[ff[i]], frag[i]);
    }
}