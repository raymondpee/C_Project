#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHSIZE 100

int main()
{
	int shmid;
	key_t key;
	char *shm;
	char *s;

	key= 9876;
	shmid =shmget(key, SHSIZE,0666);
	shm= shmat(shmid,NULL,0); 
	
	for (s=shm; *s !=0; s++)
		printf("%c\n",*s);
	
	*shm ='*';
	return 0;
}
