
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
		cout << "학생명: " << this->name << endl << "점수: " << this->score << endl;	
	};
};

int main(void)
{
	student s1("카미", 50);
	s1.showInfo();
	student s2(s1);
	/*student s2 = s1; //copy Constructor auto-calling
	s2.showInfo();
	
	printf("s1의 주소 : %p \ns2의 주소 : %p\n", &s1, &s2);
	s2 = s1;
	*/
	s2.showInfo();
	//cout << "s2에 s1객체를 복붙!" << endl; 
	printf("s1의 주소 : %p \ns2의 주소 : %p\n", &s1, &s2);
	return 0;
}

