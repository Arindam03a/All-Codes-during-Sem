#include<stdio.h>

int main() {
    int bt[20], wt[20], tat[20], i, n;
    float wtavg = 0, tatavg = 0;

    printf("\n Enter the number of processes -- ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\n Enter Burst Time for Process %d -- ", i);
        scanf("%d", &bt[i]);
    }

    wt[0] = 0;
    tat[0] = bt[0];

    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
        tat[i] = tat[i - 1] + bt[i];
        wtavg += wt[i];
        tatavg += tat[i];
    }

    printf("\t PROCESS \t BURST TIME \t WAITING TIME\t TURNAROUND TIME\n");

    for (i = 0; i < n; i++)
        printf("\n\t P %d \t\t %d \t\t %d \t\t %d", i, bt[i], wt[i], tat[i]);

    printf("\n Average Waiting Time -- %f", wtavg / n);
    printf("\n Average Turnaround Time -- %f", tatavg / n);

    return 0;
}

