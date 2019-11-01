#include <iostream>
using namespace std;

int numbering(int a, int m, int d, int n)
{	
	if(n == a)
	return a;
	else
	{
	if(m < 0)
	return numbering(a, m, d, -((n-d)/(-m))) * m + d;
	return numbering(a, m, d, (n-d)/m) * m + d;
	}
}
int main(void)
{
	int a = 0, m = 0, d = 0, n = 0;


	cin >> a >> m >> d >> n;

	cout << numbering(a, m, d, n) << endl;
	
	return 0;
}
