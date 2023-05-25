#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t mutex;

void* thread_function(void* arg)
{
    // Wait for the mutex
    sem_wait(&mutex);

    // Critical section
    printf("Thread ID: %ld entered the critical section.\n", (long)arg);
    printf("Thread ID: %ld is performing some task.\n", (long)arg);
    printf("Thread ID: %ld exited the critical section.\n", (long)arg);

    // Release the mutex
    sem_post(&mutex);

    pthread_exit(NULL);
}

int main()
{
    pthread_t thread_id[2];

    // Initialize the semaphore
    sem_init(&mutex, 0, 1);

    // Create two threads
    for (long i = 0; i < 2; i++)
    {
        pthread_create(&thread_id[i], NULL, thread_function, (void*)i);
    }

    // Wait for the threads to complete
    for (int i = 0; i < 2; i++)
    {
        pthread_join(thread_id[i], NULL);
    }

    // Destroy the semaphore
    sem_destroy(&mutex);

    return 0;
}
