#include <iostream>
using namespace std;
long long int Euclid_GCD(int a, int b){
	if(b == 0)
	return a;
	else
	return Euclid_GCD(b, a % b);
} 
long long int LCM(int n, int m){
	return n * m / Euclid_GCD(n, m);	
}

int main(void)
{
	long long int LCMnum = 0;
	long long int LCMnum2 = 0;
	long long int a, b, c;
	
	cin >> a>> b>> c;
	//LCMnum2 = LCM(a,b);
	LCMnum = LCM(LCM(a,b),c);
	
	cout << LCMnum <<endl;
	
	
	return 0;
}
