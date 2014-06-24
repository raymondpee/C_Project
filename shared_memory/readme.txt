This section is about saving a buffer in a same memory pool, that allow 2 process to access it
We are called this as shared_memory

Server:
1) we need to include library <sys/ipc.h>, <sys/shm.h>

2) use special class key_t to define out the shared memory id (shmid)
	-We use the key_t to define the process id of!!
	exp: key-9876	

3) we using shmget, include key_t to get the shmid, with define of its attribute
	exp:  shmid =shmget(key, SHSIZE,IPC_CREAT | 0666);

4) we then using shmat to return the address of the attached shared memory segment
	*RMB the shmid is different than shm address!
	*We use shmat to get the address of shared memory, while use shmget to get the
	 id of the current shared memory process!
	*shmat return void * value
	exp:   shm= shmat(shmid,NULL,0); //char *shm

5) we copy the buffer to shared memory address using memcpy
	structure: void *memcpy(void *dest, const void *src, size_t n);
	exp:  memcpy(shm, "Hello",11);


Client:
1) We repeat from 1 to 4, still need use shmget and shmat
	-id (type of the shared memory)
	   |-->address (shared memory address)

Application:
1) We write the buffer in the server, and then print it out in client
2) After we write buffer in server, we request server to wait for the client to responce
(by printing the string from client)
3) ./server, ./client

	
