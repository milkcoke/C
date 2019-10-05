#include <stdio.h>

int main(void)
{
	int arr[3][5]= {
	{1,2,3,4,5},
	{6,7,8,9,10},
	{11,12,13,14,15}
	};
	int i = 0, j = 0;
	int (*p)[5] = &arr[0]; //arr
	

	
	for(i = 0 ; i < 3; i++)
	{
		for( j = 0 ; j < 5; j++)
		{
			printf("%2d ", p[i][j]); 
		}
		printf("\n");
	}

	return 0;
			
}
