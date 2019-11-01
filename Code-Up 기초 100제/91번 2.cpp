#include <iostream>
using namespace std;


int main(void)
{
	int a = 0, m = 0, d = 0, n = 0;
	cin >> a >> m >> d >> n;
	for(int i = 0; i < n-1 ; i++)
	{
	a = a * m  + d;
	}
	cout << a << endl;

	return 0;
}
