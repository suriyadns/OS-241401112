#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int at[n], bt[n], ct[n], tat[n], wt[n];
    for(i = 0; i < n; i++) {
        printf("Enter Arrival Time and Burst Time for P%d: ", i+1);
        scanf("%d %d", &at[i], &bt[i]);
    }
    float total_tat = 0, total_wt = 0;
    ct[0] = at[0] + bt[0]; // First process [cite: 16]
    for(i = 1; i < n; i++) {
        if(ct[i-1] < at[i])
            ct[i] = at[i] + bt[i]; // CPU idle [cite: 20]
        else
            ct[i] = ct[i-1] + bt[i]; // [cite: 22]
    }
    for(i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i]; // [cite: 26]
        wt[i] = tat[i] - bt[i]; // [cite: 27]
        total_tat += tat[i]; // [cite: 28]
        total_wt += wt[i]; // [cite: 29]
    }
    printf("\nAverage Turnaround Time: %.2f", total_tat / n); // [cite: 31]
    printf("\nAverage Waiting Time: %.2f\n", total_wt / n); // [cite: 32]
    return 0;
}
