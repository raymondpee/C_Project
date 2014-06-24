Signal is more like a message sent to the process to do the interruption


There are many declaration, but we only define the important case
1)The file need include <signal.h>

2) we need declare the signal() function, at here we redirect 
the next method that the program execute once the signal jump in
*FOR EXAMPLE signal(SIGTERM,method);

3)To demonstrate, we can use the kill in outside method to test the program
exp: kill -15 *pidofprogram
output: myhande with signal 15
