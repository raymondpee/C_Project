#include <stdio.h>
#include <signal.h>


void mysignalhandler(int mysignal)
{
	printf("My handle with signal %d\n",mysignal);

}

int main()
{
	int i=0;
	signal(SIGTERM,mysignalhandler);
	while(1)
	{
		i++;
		printf("i=%d\n",i);
		sleep(1);
	}
	return 0;
}
