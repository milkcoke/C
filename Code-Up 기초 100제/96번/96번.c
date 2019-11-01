
#include <stdio.h>

int main(void)
{
	int Num;
	int arr[20][20] = {0};
	int x, y, i, j;
	
	scanf("%d", &Num);
	for(i = 1; i <= Num ; i++)
	{
	scanf("%d %d", &x, &y);
	arr[x][y] = 1;
	}
	
	for(i = 1 ; i <= 19 ; i++)
	{
	
		for(j = 1; j<= 19; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n"); 
	}
	
	return 0;
}
