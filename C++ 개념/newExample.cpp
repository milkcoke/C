
#include <iostream>
using namespace std;

typedef struct _animal{
	char name[30];
	int age;
	int health;
	int food;
	int clean;
}Animal;

void play(Animal *animal){
	animal->clean = 100;
	animal->food = 100;
	animal->health = 100;
}
void show_stat(Animal * animal){
	// Animal &ref ref �־ȵ�? 
	cout << animal->clean << animal->health << animal->food << endl;
}
int main(void){

	Animal * animalArr[30] = {NULL};
	
		cout << "������ �̸���? :";
		animalArr[0] = new Animal; 
		cin >> animalArr[0]->name;
		
	play(animalArr[0]);
	show_stat(animalArr[0]);
	delete[] animalArr;
	return 0;
}
