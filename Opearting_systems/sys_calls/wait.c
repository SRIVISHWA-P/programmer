#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
	if (fork()== 0)
		printf("This is child process\n");
	else
	{
		printf("This is parent process\n");
		wait(NULL);
		printf("Child process is terminated\n");
	}

	printf("Bye\n");
	return 0;
}

