#include <iostream>
using namespace std;


class Test{
	
	private:
	char c;
	
	public:
	Test(char c){
		this->c = c;
		cout << this->c << "의 생성자 호출" << endl;
	}
	
	~Test(){
		cout << this->c << "의 소멸자 호출" << endl;
	}
	void printFunc(){
		cout << this->c << "문자 보유중\n";
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
