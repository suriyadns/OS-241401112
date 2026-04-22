#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int at[n], bt[n], tat[n], wt[n];
    int done[n];
    // Input
    for(int i = 0; i < n; i++)
    {
        printf("Enter Arrival Time and Burst Time for P%d: ", i+1);
        scanf("%d %d", &at[i], &bt[i]);
        done[i] = 0; // Initialize all processes as not done [cite: 49]
    }
    int completed = 0;
    int completionTime = 0;
    float avgtat = 0, avgwt = 0;
    
    // SJF Scheduling (Non-Preemptive)
    while(completed < n)
    {
        int idx = -1;
        int minBT = 9999;
        // Find shortest job among arrived processes [cite: 59]
        for(int i = 0; i < n; i++)
        {
            if(at[i] <= completionTime && done[i] == 0)
            {
                if(bt[i] < minBT)
                {
                    minBT = bt[i];
                    idx = i;
                }
            }
        }
        if(idx != -1)
        {
            if(completionTime < at[idx]){
                completionTime = at[idx];
            }
            completionTime += bt[idx];
            tat[idx] = completionTime - at[idx]; // [cite: 77]
            wt[idx] = tat[idx] - bt[idx]; // [cite: 78]
            done[idx] = 1; 
            completed++; 
        }
        else
        {
            completionTime++;  // CPU Idle [cite: 84]
        }
    }
    // Calculate averages [cite: 87]
    for(int i = 0; i < n; i++)
    {
        avgtat += tat[i];
        avgwt += wt[i];
    }
    printf("\nAverage Turnaround Time: %.2f\n", avgtat / n); // [cite: 93]
    printf("Average Waiting Time: %.2f\n", avgwt / n); // [cite: 94]
    return 0;
}
