#include <iostream>
using namespace std;

int main(void)
{
	int a = 0, d = 0, n = 0;
	cin >> a >> d >> n;
	n = a + (n-1)*d;
	cout << n << endl;
	
	return 0;
}
