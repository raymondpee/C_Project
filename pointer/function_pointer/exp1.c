#include <stdio.h>

void test_the_result(int x){

printf("is ok");
}

int main(){
void (*ptr_test)(int);
ptr_test= &test_the_result;
ptr_test(2);
return 0;

}
