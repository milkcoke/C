
#include <iostream>
using namespace std;

class student{
	private:
		int score;
		string name;
	public:
		student(){ //Default Constructor
			this->score = 0;
			this->name = " ";
		}
		student(string name, int score){
			this->name = name;
			this->score = score;
		}
		student(const student &s){ //copy Constructor
			this->name = s.name;
			this->score = s.score;
		}
	void showInfo(){
		cout << "�л���: " << this->name << endl << "����: " << this->score << endl;	
	};
};

int main(void)
{
	student s1("ī��", 50);
	s1.showInfo();
	student s2(s1);
	/*student s2 = s1; //copy Constructor auto-calling
	s2.showInfo();
	
	printf("s1�� �ּ� : %p \ns2�� �ּ� : %p\n", &s1, &s2);
	s2 = s1;
	*/
	s2.showInfo();
	//cout << "s2�� s1��ü�� ����!" << endl; 
	printf("s1�� �ּ� : %p \ns2�� �ּ� : %p\n", &s1, &s2);
	return 0;
}

