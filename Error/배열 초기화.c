#include <stdio.h>

void main(void)
{	
int i = 0;
	int arr[10] = {1, 2, 3, };
	for( ;  i < sizeof(arr) / sizeof(int); i++)
	{
		printf("arr[%d] : %d\n", i, arr[i]);
	}
	
	return;
}
