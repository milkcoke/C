#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main(void){
	int user_input;
	cout << "�Է� �ض� ��" << endl;
	cout << "1. �̸�" << endl;
	cout << "2. ����" << endl;
	cout << "3. �汸ȸ��" << endl;
	cin >> user_input;
	
	switch(user_input){
	
	case 1:
	 cout << "�̸�: faclon " << endl;
	 break;
	case 2:
		cout << "���� : �ĸ��� " << endl;
		break;
	case 3:
		cout << "�汸ȸ�� : 10 " << endl;
		break;
	default:
		cout << "��â���� �پ�� �Ӹ�" << endl;
		break;
	}
	
	return 0;
}
