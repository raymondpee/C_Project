#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	int mypipefd[2];
	int ret;
	char buffer[20];

	ret=pipe(mypipefd);
	pid =fork();
	if (pid==0)
	{
	//This is child process, now try to write something to parent
		printf("This is child\n");
		write(mypipefd[1],"Hello\n",10);
	}

	else
	{
	//This is parent
		printf("This is parent process\n");
		read(mypipefd[0],buffer,12);
		printf("%s\n",buffer);
	}	
	return 0;
}
