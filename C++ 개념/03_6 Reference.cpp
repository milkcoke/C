#include <iostream>
using namespace std;


// �迭�� Reference�� �� Ȱ�� X (ũ�� ��� ������...
// ������ 1���� ������ ���� ũ�� ���̵� ���ٷ� ����Ǵϱ�!
 
int main (void)
{
	int i = 0;
	int arr[3] = {0};
	int (&ref)[3] = arr;
	
	for( ; i < sizeof(ref) / sizeof(int) ; i++)
	{
		ref[i] = i;
	}
	cout << ref[0] << ref[1] << ref[2] << endl;
	
	
	return 0;
}
