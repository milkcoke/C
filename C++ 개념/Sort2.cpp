#include <iostream>
#include <algorithm>

using namespace std;

class Student {
	public:
		string name;
		int score;
		Student(string name, int score){
			this->name = name;
			this->score = score;
		}
		
		bool operator <(Student &a){
			return this->score < a.score;
		}
};


int main(void){
	Student students[] = {
		Student("±èÅÃ¿ë", 49),
		Student("½Å»ó¹®", 60),
		Student("ÄÚÅÎ¿ë", 100), 
	};
	
	sort(students, students+3);
	
	for(int i= 0; i < 3; i++)
	{
		cout << students[i].name <<endl;
	}
	return 0;
} 
