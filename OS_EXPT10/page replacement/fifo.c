#include <stdio.h>

int main() {
    int i, j, n, a[50], frame[10], no, k, avail, count = 0;

    printf("\nEnter number of pages: ");
    scanf("%d", &n);

    printf("Enter the page numbers (reference string):\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    printf("Enter number of frames: ");
    scanf("%d", &no);

    for (i = 0; i < no; i++)
        frame[i] = -1;

    j = 0; 
    printf("\nRef String\tPage Frames\n");
    printf("----------\t-----------\n");

    for (i = 1; i <= n; i++) {
        printf("%d\t\t", a[i]);
        avail = 0;

        for (k = 0; k < no; k++) {
            if (frame[k] == a[i])
                avail = 1;
        }

        if (avail == 0) {
            frame[j] = a[i];    
            j = (j + 1) % no;   
            count++;            
            
            for (k = 0; k < no; k++) {
                if (frame[k] != -1)
                    printf("%d ", frame[k]);
                else
                    printf("- ");
            }
        } else {
            printf("  (Hit)"); 
        }
        printf("\n");
    }

    printf("\nTotal Page Faults: %d\n", count);
    return 0;
}
