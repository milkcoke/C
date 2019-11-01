
#include <stdio.h>
#define MAX 10000
void InsertionSort(int arr[], int length)
{
	int i, j, temp;
	
	for(i = 1; i < length; i++)
	{
		temp = arr[i];
		for( j = i-1 ; j>=0 ; j--)
		{
			if(arr[j] < temp)
			{
				arr[j+1] = arr[j];
			}
			else
			break;
		}
		arr[j+1] = temp;
	}
}

int main(void)
{	int i = 0;
	int size;
	scanf("%d", &size);
	int arr[MAX];
	for( i = 0; i < size ; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	InsertionSort(arr, size);
	
	for( i = 0 ; i <size ; i++)
	{
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
