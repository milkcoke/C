#include <iostream>
#include <algorithm>

using namespace std;


bool compare(int N, int M)
{
	return N < M;
}

int main(void){
	int arr[10] = {1, 3, 6, 2, 5, 4,7, 10, 9, 8};
	sort(arr, arr+10, compare);
	
	for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++)
	{
		cout << arr[i] << ' ';
	}
	
	return 0;
} 
