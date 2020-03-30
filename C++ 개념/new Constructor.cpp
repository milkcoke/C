
#include <iostream>
using namespace std;

int main(void){
	int *p = new int[20];
	
	for(int i = 0; i < 20; i++)
	{
		p[i] = i;
		cout << p[i] << ' ';
	}
	
	delete[] p;
	
	return 0;
} 
