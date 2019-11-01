#include <iostream>

void changeValue(int &ref) 
{
	ref = 777;
}

int main(void)
{
	int a = 333;
	std::cout << a << std::endl;
	changeValue(a);
	std::cout << a << std::endl;

	
	return 0;	
}
