
#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	int arr[10001];
	int i;
	int min = 24;
	for(i = 0 ; i < num ; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i] < min)
		min = arr[i];
	}
	printf("%d", min);
	return 0;
	
}
