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
	
	i = 2, j = 2; //����� setting  
	
	while(arr[i][j] != 2 && i <= 10 && j <= 10) // out of index ���� 
	{
		if(arr[i][j+1] != 1) // ������ �˻�  
		arr[i][j++] = 9;
		else if(arr[i+1][j] != 1) // �Ʒ��� �˻�  
		arr[i++][j] = 9;
		else
		break;
	}
	arr[i][j] = 9; // ������ ������ ������ 9�� �̹� ������ ����. // ������ setting 
	
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
