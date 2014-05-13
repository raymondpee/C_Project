1) Make the function.c file, declare method inside (as example)
2) make a .so file with this command "gcc -shared -o libfunction.so function.c"
3) Make main.c file
4) Make main.c file with the follow command " gcc -o main main.c -L. -lfunction"
	- -L. means link the library with current directory
	- lfunction is the .so file that is libfunction.so
5) export the file with current directory
	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
	("Almost like i=i+1")
6) Now the linking of library path is completed, you can start the main file
