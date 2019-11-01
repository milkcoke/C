#include <iostream>
using namespace std;

int main(void)
{
	int stdNum = 0, minN =0, totalSum =0;
	
	cin >> stdNum;
	
	while(totalSum < stdNum)
	{
		minN++;
		totalSum += minN;
	}
	
	cout << minN << endl;
	
	return 0;
}
