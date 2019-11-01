#include <iostream>
using namespace std;


// 배열의 Reference는 잘 활용 X (크기 명시 불편함...
// 어차피 1차원 포인터 쓰면 크기 몇이든 ㄴ바로 저장되니까!
 
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
