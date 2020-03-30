#include <iostream>
#include <algorithm>
using namespace std;

class Student{
	private:
		string name;
		int score;
	public:
		Student(){
			this->name = "이름없음";
			this->score = 0;
		} 
		Student(string name, int score){ //생성자  
			this->name = name;
			this->score = score;
		}
		int getScore(){
			return this->score;
		}
		void printInfo(){
			cout << "학생 이름: " << this->name << endl;;
			cout << "학생 점수: " << this->score << endl;;
		}
		void setScore(int score)
		{
			this->score = score;
		}
		bool operator<(Student &ref) // '<'의 의미? 
		{
		return this->score < ref.getScore();
		} 

};

	
	
int main(void){

	Student students[]= {Student("나동빈", 90),
						Student("김지훈", 70),
						Student("김택용", 60)};
	Student none;
	none.printInfo();
	
	sort(students, students+3); // 여기 compare 따로 넣을 필요가 없음. 
	for(int i = 0; i < 3; i++)
	{
		students[i].printInfo();
	}					
	
	return 0;
}
