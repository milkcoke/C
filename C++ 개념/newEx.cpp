
#include <iostream>
using namespace std;

typedef struct _Ani{
	char name[10];
	int age;
	int health, food, clean;
}Animal;


void create_animal(Animal * animal){
	cout << "���� ���̴�?" << '\n';
	cin >> animal->age;
	cout << "���� �̸���?" << '\n';
	cin >>animal->name;
	
	animal->health = 100;
	animal->food = 100;
	animal->clean = 100;
}

void show_stat(Animal * animal){
	cout << "���� : " << animal->age << '\n';
	cout << "�̸� : " << animal->name << '\n';
	cout << animal->health << animal->food << animal->clean << '\n';
}
int main(void)
{
	int N;
	Animal * list[10] = {NULL};
	cout << "������ ��� ����? " << endl;
	cin >> N;
	
	for( int i = 0 ; i < N ; i++)
	{
		list[i] = new Animal; //Animal ����ü �Ҵ�� �ּҸ� ��.. 
		create_animal(list[i]);
	}
	cout <<"�� ��° ���� ���� Ȯ�� ?" << endl;
	cin >> N;
	show_stat(list[N]);ȯ 
	
	return 0;
	
}

