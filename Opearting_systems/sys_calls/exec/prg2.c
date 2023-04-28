//prg2.c

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
		//A null terminated array of character
		//pointers
		char *args[]={"./prg1",NULL};
		execvp(args[0],args);
	
		/*All statements are ignored after execvp() call as this whole
		process(prg2.c) is replaced by another process (prg1.c)
		*/
		printf("Ending-----");
	
	return 0;
}

