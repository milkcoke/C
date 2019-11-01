#include <iostream>
using namespace std;

unsigned int Fibonacci(unsigned int n)
{
	if(n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return Fibonacci(n-1) + Fibonacci(n-2);
	}
}
int main(void)
{
	unsigned int N;
	cin >> N;
	
	cout << Fibonacci(N);
	
	return 0; 
}
