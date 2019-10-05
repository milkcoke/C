#include <stdio.h>

int Nand(int a, int b)
{
	if(a==0 && b==0)
	return 1;
	else
	return 0;
}
int main(void)
{
	int a,b = 0;
	int result;
	scanf("%d %d", &a, &b);
	result = Nand(a, b);
	printf("%d", result);
	
	return 0;
}
