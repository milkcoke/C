#include <iostream> 

using namespace std;


	int fn1(int &a)
	{
		return a;
	}
	// return 이 단순 int a라는놈 '값' (r-value)  << register 영역 (Read Only, Write XX) 
	int& fn2(int &b)
	// return이 b라는 reference가 참조하는 변수 << x그자체. 
	{ 
		return b;
	}
	
	int main(void)
{
	int x = 1;
	cout << fn1(x) << endl;
	cout << ++fn2(x) << endl;
	
	
	
}
