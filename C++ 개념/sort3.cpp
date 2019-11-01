
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
	public:
		string name;
		int score;
		Student(string name, int score){
			this->name = name;
			this->score = score;
		}
		bool operator < (Student &ref){
			return this->score > ref.score;
		}
};

int main(void){
	Student studentArr[] = {Student("Akalli", 60), Student("Jayce", 80), Student("Shindra", 50)};
	
	sort(studentArr, studentArr +3 );
	for(int i = 0 ; i < sizeof(studentArr)/sizeof(Student) ;i++){
		cout << studentArr[i].name << ' ';
	}
	
}
