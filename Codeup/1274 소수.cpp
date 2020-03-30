#include <iostream>
using namespace std;

bool isPrimeNumber(int n)
{
	if(n == 1)
	return false;
	else{ 
		for(int i = 2; i <= n /2 ; i++)
		{
		if(n % i == 0)
		return false;
		}
		return true;
	} 
}

int main(void){
	int N;
	cin >> N;

	if(isPrimeNumber(N))
	cout << "prime";
	else
	cout << "not prime";
	
	return 0;
}
