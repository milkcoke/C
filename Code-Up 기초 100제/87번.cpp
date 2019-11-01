#include <iostream>
using namespace std;

int main(void)
{
	unsigned int max = 0;
	unsigned int totalSum = 0;
	int i = 0;
	cin >> max;
	while(totalSum < max)
	{
		totalSum += ++i;
	}
	cout << totalSum << endl;
	
	return 0;
	
}
