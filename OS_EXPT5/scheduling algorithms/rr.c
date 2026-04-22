#include <stdio.h>
int main()
{
    int n, tq, completed = 0, completionTime = 0;
    printf("Enter number of processes: \n");
    scanf("%d", &n);
    printf("Enter Time Quantum: \n");
    scanf("%d", &tq);
    int at[n], bt[n], rem[n], tat[n], wt[n];
    float avgtat = 0, avgwt = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter AT and BT for P%d: \n", i + 1);
        scanf("%d %d", &at[i], &bt[i]);
        rem[i] = bt[i];   
    }

    while (completed < n)
    {
        int idle = 1;
        for (int i = 0; i < n; i++)
        {
            if (at[i] <= completionTime && rem[i] > 0)
            {
                idle = 0; 
                if (rem[i] > tq)
                {
                    completionTime += tq; 
                    rem[i] -= tq; 
                }
                else
                {
                    completionTime += rem[i]; 
                    tat[i] = completionTime - at[i];   
                    wt[i] = tat[i] - bt[i];            
                    rem[i] = 0;
                    completed++;
                }
            }
        }
        if (idle){
            completionTime++;   
        }
    }

    for (int i = 0; i < n; i++)
    {
        avgtat += tat[i];
        avgwt += wt[i];
    }
    printf("\nAverage Turnaround Time: %.2f\n", avgtat / n);
    printf("Average Waiting Time: %.2f\n", avgwt / n);
    return 0;
}
