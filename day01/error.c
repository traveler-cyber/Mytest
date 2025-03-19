#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main(void){
	int *p = malloc(0xffffffffffffffffffff);
	if(p == NULL){
		printf("malloc失败\n");
		printf("errno = %d\n",errno);
		printf("malloc:%s\n",strerror(errno));
		perror("在第7行：");
		return -1;
	}	
	free(p);
	p = NULL;
	return 0;
}
