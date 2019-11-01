#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main(void){
	int user_input;
	cout << "입력 해라 ㅎ" << endl;
	cout << "1. 이름" << endl;
	cout << "2. 별명" << endl;
	cout << "3. 방구회수" << endl;
	cin >> user_input;
	
	switch(user_input){
	
	case 1:
	 cout << "이름: faclon " << endl;
	 break;
	case 2:
		cout << "별명 : 파르콘 " << endl;
		break;
	case 3:
		cout << "방구회수 : 10 " << endl;
		break;
	default:
		cout << "독창성이 뛰어나군 임마" << endl;
		break;
	}
	
	return 0;
}
