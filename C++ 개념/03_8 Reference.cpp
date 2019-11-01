
#include <iostream>
#include <algorithm>
using namespace std;


int& selfR(int &n){
	return n;
}

int main(void) {
	int a = 5;
	cout << selfR(a)++ << endl;;
	cout << a << endl;
	
  return 0;
}
