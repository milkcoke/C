#include <stdio.h>
#include <stdlib.h>

int * func(num){
	int * ptr = &num;
//	when ends this function (escae block scope) ptr will point invalid address which is address in Stack segment
	return ptr;
}



int main(void){
//	int n = 10;
//	int * result_p = func(n);
	
	char name[10] = "oh_my_god";
	printf("%s\n", name);
	char *dp = (char *)malloc(sizeof(name));
	dp = name;
	printf("%p", dp);
//	printf("invalid address : %p", result_p);
	
	return 0;
}




