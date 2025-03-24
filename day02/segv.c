//段错误演示
#include<stdio.h>

int main(void){
	int* p = NULL;
	*p = 100;
	printf("*p = %d",*p);
	return 0;
}
