#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int arr[10] = {0};

	memset(arr, 77 , sizeof(arr)); // arr배열의 전체 크기 바이트만큼 77로 초기화  
	printf("%d\n", arr[0]);
	for(i = 0 ; i < 10; i++)
	{
		printf("arr[%d] : %d\n", i, arr[i]);
	}
		
	return 0;

}
