//动态库的动态加载
#include<stdio.h>
#include<dlfcn.h>//dlopen dlsym dlclose dlerror

int main(void){
	//载入内存
	void* handle = dlopen("./shared/libmath.so",RTLD_NOW);
	if(handle == NULL){
		fprintf(stderr,"dlopen:%s\n",dlerror());
		return -1;
}
	//使用库中的函数
	int (*add)(int,int) = dlsym(handle,"add");
	if(add == NULL){
		fprintf(stderr,"dlsym:%s\n",dlerror());
		return -1;
}
	int (*sub)(int,int) = dlsym(handle,"sub");
	if(sub == NULL){
		fprintf(stderr,"dlsym:%s\n",dlerror());
		return -1;
}
	void (*show)(int,char,int,int) = dlsym(handle,"show");
	if(show == NULL){
		fprintf(stderr,"dlsym:%s\n",dlerror());
		return -1;
}
	int a = 123,b = 456;
	show(a,'+',b,add(a,b));
	show(a,'-',b,sub(a,b));
	//卸载库
	dlclose(handle);
	return 0;
}


