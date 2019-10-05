#include <stdio.h>

int main(void)
{	
	int i = 0;
	int a = 0, b = 0, c = 0;
	int arr[3] = {0};
	scanf("%d %d %d", &a, &b, &c);
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	
	for( i = 0 ; i < 3 ; i++)
	{	 
		if(arr[i]%2 == 0)
		printf("%d\n", arr[i]);
		else
		continue;
	}
	
	return 0;
}
