#include <stdio.h>

void main() {
    int bsize[20], psize[20], bno, pno, flags[20], allocation[20], i, j;

    // Initialize flags and allocation arrays
    for(i = 0; i < 20; i++) {
        flags[i] = 0;
        allocation[i] = -1;
    }

    printf("Enter number of blocks: ");
    scanf("%d", &bno);
    printf("Enter size of each block:\n");
    for(i = 0; i < bno; i++) {
        printf("Block %d: ", i + 1);
        scanf("%d", &bsize[i]);
    }

    printf("\nEnter number of processes: ");
    scanf("%d", &pno);
    printf("Enter size of each process:\n");
    for(i = 0; i < pno; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &psize[i]);
    }

    // First Fit Logic
    for(i = 0; i < pno; i++) {
        for(j = 0; j < bno; j++) {
            if(bsize[j] >= psize[i]) {
                allocation[i] = j; // Allocate block j to process i
                bsize[j] -= psize[i]; // Reduce available size in that block
                break; // Move to the next process immediately
            }
        }
    }

    printf("\nProcess No.\tProcess Size\tBlock no.\n");
    for(i = 0; i < pno; i++) {
        printf("%d\t\t%d\t\t", i + 1, psize[i]);
        if(allocation[i] != -1)
            printf("%d\n", allocation[i] + 1);
        else
            printf("Not Allocated\n");
    }
}
