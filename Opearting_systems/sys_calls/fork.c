#include <stdio.h>
#include <unistd.h>

int main()
{
    int id;
    printf("Hello user!\n");

    id = fork();
    if (id > 0) {
        /*parent process*/
        printf("the parent section [Process id: %d].\n", getpid());
    }
    else if (id == 0) {
        /*child process*/
        printf(" the fork that is created [Process id: %d].\n", getpid());
        printf("the fork that is parent process id: %d.\n", getppid());
    }
    else {
        /*fork creation failed*/
        printf("the fork that is failed!!\n");
    }

    return 0;
}


