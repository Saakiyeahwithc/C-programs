#include <stdio.h>
void main()
{
    int t, bu[20], wa[20], tat[20], ct[10], max, i, j, n;
    float awt = 0, att = 0, temp = 0;
    printf("\nEnter the number of process--");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the burst time for process%d--", i + 1);
        scanf("%d", &bu[i]);
        ct[i] = bu[i];
    }
    printf("\nEnter the size of time slice--");
    scanf("%d", &t);
    max = bu[0];
    for (i = 1; i < n; i++)
    {
        if (max < bu[i])
        {
            for (j = 0; j < (max / t) + 1; j++)
            {
                for (i = 0; i < n; i++)
                    for (i = 0; i < n; i++)
                        if (bu[i] != 0)
                            if (bu[i] <= t)
                            {
                                tat[i] = temp + bu[i];
                                temp = temp + bu[i];
                                bu[i] = 0;
                            }
                            else
                            {
                                bu[i] = bu[i] - t;
                                temp = temp + t;
                            }
            }
        }

        for (i = 0; i < n; i++)
        {
            wa[i] = tat[i] - ct[i];
            att += tat[i];
        }
    }
    {
        printf("\nThe average turn around time is--%f", att / n);
        printf("\n The average waiting time is--%f", awt / n);
        printf("\tprocess \tburst time \twaiting time \t turnaround time\n");
        for (i = 0; i < n; i++)
            printf("\n\t%d\t\t%d\t\t%d\t\t%d", i + 1, ct[i], wa[i], tat[i]);
    }
}