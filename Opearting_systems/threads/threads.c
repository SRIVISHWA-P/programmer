#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <stdbool.h>
#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int count=0;
int in=0;
int out=0;



void* producer(void* arg) {
    while (true)
    {
        int item = rand() % 10 + 1;
        while (count == BUFFER_SIZE) {
            printf("Buffer is full! Producer waiting....\n");
            sleep(1);
        }
        buffer[in]=item;
        in=(in+1)%BUFFER_SIZE;
        count++;
        printf("Producer produced %d\n", item);
        sleep(1);
    }
    pthread_exit(NULL);
}

void* consumer(void* arg) {
    while (true)
    {
        while (count == 0) {
            printf("Buffer is empty! Consumer waiting....\n");
            sleep(1);
        }
        int item=buffer[out];
        out=(out+1)%BUFFER_SIZE;
        count--;
        printf("COnsumer consumed %d\n", item);
        sleep(1);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t prod,cons;
    pthread_create (&prod, NULL, producer, NULL);
    pthread_create(&cons, NULL, consumer, NULL);

    pthread_join(prod, NULL);
    pthread_join(cons, NULL);

    return 0;
}


