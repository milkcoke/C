#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int arr[10] = {0};

	memset(arr, 77 , sizeof(arr)); // arr�迭�� ��ü ũ�� ����Ʈ��ŭ 77�� �ʱ�ȭ  
	printf("%d\n", arr[0]);
	for(i = 0 ; i < 10; i++)
	{
		printf("arr[%d] : %d\n", i, arr[i]);
	}
		
	return 0;

}
