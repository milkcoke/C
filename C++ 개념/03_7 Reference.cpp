#include <iostream> 

using namespace std;


	int fn1(int &a)
	{
		return a;
	}
	// return �� �ܼ� int a��³� '��' (r-value)  << register ���� (Read Only, Write XX) 
	int& fn2(int &b)
	// return�� b��� reference�� �����ϴ� ���� << x����ü. 
	{ 
		return b;
	}
	
	int main(void)
{
	int x = 1;
	cout << fn1(x) << endl;
	cout << ++fn2(x) << endl;
	
	
	
}
