#include <iostream>
using namespace std;


class Test{
	
	private:
	char c;
	
	public:
	Test(char c){
		this->c = c;
		cout << this->c << "�� ������ ȣ��" << endl;
	}
	
	~Test(){
		cout << this->c << "�� �Ҹ��� ȣ��" << endl;
	}
	void printFunc(){
		cout << this->c << "���� ������\n";
	};
};

void localFunc(char c)
{
	Test temp2(c);
}
int main(void)
{
	Test temp('A');

	localFunc('J');
	temp.printFunc();
	
	return 0;
}
