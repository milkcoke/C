#include <iostream>
#include <algorithm>
using namespace std;

class Student{
	private:
		string name;
		int score;
	public:
		Student(){
			this->name = "�̸�����";
			this->score = 0;
		} 
		Student(string name, int score){ //������  
			this->name = name;
			this->score = score;
		}
		int getScore(){
			return this->score;
		}
		void printInfo(){
			cout << "�л� �̸�: " << this->name << endl;;
			cout << "�л� ����: " << this->score << endl;;
		}
		void setScore(int score)
		{
			this->score = score;
		}
		bool operator<(Student &ref) // '<'�� �ǹ�? 
		{
		return this->score < ref.getScore();
		} 

};

	
	
int main(void){

	Student students[]= {Student("������", 90),
						Student("������", 70),
						Student("���ÿ�", 60)};
	Student none;
	none.printInfo();
	
	sort(students, students+3); // ���� compare ���� ���� �ʿ䰡 ����. 
	for(int i = 0; i < 3; i++)
	{
		students[i].printInfo();
	}					
	
	return 0;
}
