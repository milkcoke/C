
#include <iostream>
using namespace std;

typedef struct _Ani{
	char name[10];
	int age;
	int health, food, clean;
}Animal;


void create_animal(Animal * animal){
	cout << "동물 나이는?" << '\n';
	cin >> animal->age;
	cout << "동물 이름은?" << '\n';
	cin >>animal->name;
	
	animal->health = 100;
	animal->food = 100;
	animal->clean = 100;
}

void show_stat(Animal * animal){
	cout << "나이 : " << animal->age << '\n';
	cout << "이름 : " << animal->name << '\n';
	cout << animal->health << animal->food << animal->clean << '\n';
}
int main(void)
{
	int N;
	Animal * list[10] = {NULL};
	cout << "동물을 몇마리 생성? " << endl;
	cin >> N;
	
	for( int i = 0 ; i < N ; i++)
	{
		list[i] = new Animal; //Animal 구조체 할당된 주소를 반.. 
		create_animal(list[i]);
	}
	cout <<"몇 번째 동물 상태 확인 ?" << endl;
	cin >> N;
	show_stat(list[N]);환 
	
	return 0;
	
}

