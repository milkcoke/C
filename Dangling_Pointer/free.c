#include <stdio.h>
#include <stdlib.h>


int main(void){
	char name[10] = "oh_my_god";
	printf("%s\n", name);
//	char *dp = (char *)malloc(sizeof(name));
//	printf("dp's memeory address(in Stack segment): %p\n", &dp);
//	
//	printf("dp's value(this value is in heap segement) : %p\n", dp);
//	dp = name;
//	printf("original address of name : %p\n", name);
////	dp point address of varaible 'name'
//	printf("dp value : %p\n dp's address : %p\n", dp, &dp);
//	
//	printf("insert new value(string) into dp\n");
//	
	int * dp2 = (int *)malloc(sizeof(int));
	printf("dp2's value(this value is in heap segment): %p\n", dp2);
	*dp2 = 15;
	printf("%d\n", *dp2);
	free(dp2);
//	after free you have to insert NULL pointer for preventing dangling pointer
	dp2 = NULL;
	printf("dp2's address: %p\n", dp2);
	printf("after free dp2 and now value : %d\n", *dp2);

	
//	int * pi = (int * )malloc(sizeof(int));
//	*pi = 5;
//	printf("*pi: %d\n", *pi);
//	free(pi);
//	printf("%d\n", *pi);
//	printf("%p", pi);
	
	
	
	
//	free(dp);
//	printf("%p\n", dp);

//	dp = NULL;
//	printf("%p\n", dp);
	
	return 0;
}






