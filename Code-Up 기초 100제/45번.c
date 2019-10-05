
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d\n", a+b);
	printf("%d\n", abs(a-b));
	printf("%d\n", a * b);
	printf("%d\n", a <= b? (int)(b / a) : (int)(a / b));
	printf("%d\n", a <= b? (int)(b % a) : (int)(a % b));
	printf("%.2f\n", a <= b ? (double)b / (double)a  : (double)a / (double)b);
	
	return 0; 
 } 
