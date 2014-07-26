#include <stdio.h>

typedef struct {
	int (*add)(int,int);
}Test;


int add_outside(int x, int y){
	return x+y;
}

int main(){
	Test a;
	a.add=&add_outside;
	printf("%d\n",a.add(3,2));
}
