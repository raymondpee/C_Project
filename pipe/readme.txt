This pipe is to try to send the data between the process

The sequence of execution:
1) library needed <stdlib.h>, <unistd.h>

2) we need to declare pid_t and a 2 element int array for file descriptor
	exp: pid_t pid, int mypipefd[2]

3) we wll use pipe() method to link the mypipefd *(Important)
	exp: pipe(mypipefd);

4) we later fork out the child and parent process
	pid=fork() //Here we will use the pid that we declared just now
			to get the process id

5) After we fork it
	-If process id is 0, then it is child process
	-If process id is 1, then it is parent process

6) Now we tell the child process to send command to parent process:
	exp:
	write(mypipefd[1],"test buffer",12);

7) Now we tell the parent process to recieve the command 
	exp:
	read(mypipefd[0],buf,15);
	//buf is the char buf[15];

Conclusion:
And now you're done! The main concept is that we use the
-int mypipefd[2] to link 2 process together, one in one out
-fork() to spilt out parent and child process.
	-which later can send data between 2 (using read/write() method) 



