#include <iostream>
#define MAX 2147483647
using namespace std;

int main(void)
{
	int arr[MAX] = {0};
	int i = 0;
	
	for( ; i < MAX ; ) 
	{
	 cin >> arr[i++];
	}
	while(arr[i] != 0)
	{
	cout << arr[i] <<endl;
	}
 	return 0;
}
