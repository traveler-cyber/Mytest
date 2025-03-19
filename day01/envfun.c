#include<stdio.h>

int main(void){
	extern char** environ;
	for(char**pp = environ;*pp;++pp){
		printf("%s\n",*pp);
	}
	return 0;
}










