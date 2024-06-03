#include <stdio.h>
int main()
{
    int bt[20], wt[20], tat[20], i, n;
    float wtavg, tatavg;
    printf("\nEnter the number of process--");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter burst time for process%d--", i);
        scanf("%d", &bt[i]);
    }
    wt[0] = wtavg = 0;
    tat[0] = tatavg = bt[0];
    for (i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
        tat[i] = tat[i - 1] + bt[i];
        wtavg = wtavg + wt[i];
        tatavg = tatavg + tat[i];
    }
    printf("\t process \t burst time\t waiting time\t turnaround time\n");
    for (i = 0; i < n; i++)
    {
        printf("\n\tp%d\t\t%d\t\t%d\t\t%d", i, bt[i], wt[i], tat[i]);
    }
    printf("\naverage waiting time --%f", wtavg / n);
    printf("\naverage turnaround time--%f", tatavg / n);
}
