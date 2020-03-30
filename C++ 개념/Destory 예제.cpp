
#include <iostream>
using namespace std;

class Test{
	private:
		char ch;
		
	public:
		void localFunc(char ch){
			Test temp(ch);
			cout << "local Function new Test Create" << endl;
		};
		
		Test(char ch){
			this->ch = ch;
			cout << ch << " »ý¼º °³²Üµü" << endl; 
		}
		~Test(){
			cout << ch << " ¼Ò¸êÀÚ ¾Ë¾Æ¼­ ^^" << endl;
		}
		void setCharacter(char ch){
			this->ch = ch;
		};
};

int main(void)
{

	Test sample1 = Test('a');
	sample1.localFunc('b');
	sample1.setCharacter('c');
	/*
	Test sampleArr[2] = {Test('a'), Test('b')};
	sampleArr[0].localFunc('c');
	*/
	
	
	/*int * ptr = new int[500];
	ptr[0] = 5;
	cout << ptr[505] << ' ' << sizeof(ptr[505]) << endl;
	*/

	return 0;
}
