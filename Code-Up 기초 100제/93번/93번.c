#include <stdio.h>


int main(void)
{	
	int n;
	scanf("%d", &n);
	int i = 0;
	int indexArr[n];
	int arr[24] = {0};
	
	for(i = 0; i < n ; i++)
	{ // scanf에 대한 정확한 동작 원리 파악 (띄어쓰기는 다 가져다 버린다구!) 
		scanf("%d", &indexArr[i]);
		arr[indexArr[i]]++;
	}
	
	for(i = 1; i <= 23 ; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
} 
