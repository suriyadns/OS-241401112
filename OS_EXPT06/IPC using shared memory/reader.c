#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main() {
    key_t key = ftok("shmfile", 65); // Use the same key
    int shmid = shmget(key, 1024, 0666 | IPC_CREAT);
    char *str = (char*) shmat(shmid, (void*)0, 0); // Attach to segment

    printf("Data read from memory: %s\n", str);
    shmdt(str); // Detach from memory
    shmctl(shmid, IPC_RMID, NULL); // Destroy the segment
    return 0;
}
