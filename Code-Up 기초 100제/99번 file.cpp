#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

int main(void)
{

  	FILE *fp1 = fopen("a.txt", "r");
  	
	int arr[11][11] = {0};
	for(int i = 1; i <= 10; i++)
	{
		for(int j = 1; j<= 10; j++)
		{
			fscanf(fp1, "%d ", &arr[i][j]);
		}
	}
		fclose(fp1);
		
		for(int i = 1; i <= 10; i++)
	{
		for(int j = 1; j<= 10; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}

	
	return 0;
}
