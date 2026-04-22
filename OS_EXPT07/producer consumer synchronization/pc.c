#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int in = 0, out = 0;

sem_t empty;
sem_t full;
pthread_mutex_t mutex;

void* producer(void* arg) {
    for(int i = 0; i < 5; i++) {
        sem_wait(&empty); // Wait if buffer is full
        pthread_mutex_lock(&mutex); // Lock buffer for writing
        
        buffer[in] = i;
        printf("Producer produced: %d\n", buffer[in]);
        in = (in + 1) % BUFFER_SIZE;
        
        pthread_mutex_unlock(&mutex); // Unlock buffer
        sem_post(&full); // Signal that buffer has an item
        sleep(1); // Small delay to see output clearly
    }
    return NULL;
}

void* consumer(void* arg) {
    for(int i = 0; i < 5; i++) {
        sem_wait(&full); // Wait if buffer is empty
        pthread_mutex_lock(&mutex); // Lock buffer for reading
        
        int item = buffer[out];
        printf("Consumer consumed: %d\n", item);
        out = (out + 1) % BUFFER_SIZE;
        
        pthread_mutex_unlock(&mutex); // Unlock buffer
        sem_post(&empty); // Signal that a slot is free
        sleep(2); // Consumer is slower than producer
    }
    return NULL;
}

int main() {
    pthread_t prod, cons;
    
    // Initialize semaphores and mutex
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);
    pthread_mutex_init(&mutex, NULL);

    // Create threads
    pthread_create(&prod, NULL, producer, NULL);
    pthread_create(&cons, NULL, consumer, NULL);

    // Wait for threads to finish
    pthread_join(prod, NULL);
    pthread_join(cons, NULL);

    // Cleanup
    sem_destroy(&empty);
    sem_destroy(&full);
    pthread_mutex_destroy(&mutex);

    return 0;
}
