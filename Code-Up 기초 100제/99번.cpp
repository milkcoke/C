#include <iostream>
using namespace std;

int main(void)
{

  
	int arr[11][11] = {0};
	int i, j;
	for(int i = 1; i <= 10; i++)
	{
		for(int j = 1; j<= 10; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	i = 2, j = 2; //출발점 setting  
	
	while(arr[i][j] != 2 && i <= 10 && j <= 10) // out of index 방지 
	{
		if(arr[i][j+1] != 1) // 오른쪽 검사  
		arr[i][j++] = 9;
		else if(arr[i+1][j] != 1) // 아래쪽 검사  
		arr[i++][j] = 9;
		else
		break;
	}
	arr[i][j] = 9; // 마지막 도달한 지점은 9로 이미 도달한 상태. // 도착점 setting 
	
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
