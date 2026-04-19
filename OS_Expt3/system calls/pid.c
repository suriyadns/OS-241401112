#include <stdio.h>
#include <unistd.h>

int main() {
    printf("PID: %d\n", getpid()); // PID of the current process
    printf("PPID: %d\n", getppid()); // PID of the process that started your program
    return 0;
}
