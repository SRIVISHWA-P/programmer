#include <stdio.h>
#include <pthread.h>

// global variables
int count = 0;
pthread_mutex_t mutex;

// thread function to increment the count
void* increment_count(void* arg) {
    int i;
    for (i = 0; i < 100000; i++) {
        // acquire the lock
        pthread_mutex_lock(&mutex);
        
        // critical section
        count++;
        
        // release the lock
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main() {
    // initialize the mutex
    pthread_mutex_init(&mutex, NULL);
    
    // create two threads
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, increment_count, NULL);
    pthread_create(&thread2, NULL, increment_count, NULL);
    
    // wait for the threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    // destroy the mutex
    pthread_mutex_destroy(&mutex);
    
    // print the final count
    printf("Final count = %d\n", count);
    
    return 0;
}
