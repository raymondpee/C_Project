#include <stdio.h>
#include <stdlib.h>

int main(){
int *a =malloc(sizeof(int));
*(a+2)=10;
printf("%d",*(a+1));
}
