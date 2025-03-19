//使用静态库
#include <stdio.h>
#include "calc.h"
#include "show.h"

int main(void){
	int a = 8,b = 5;
	show(a,'+',b,add(a,b));
	show(a,'-',b,sub(a,b)); 
	return 0;
}
