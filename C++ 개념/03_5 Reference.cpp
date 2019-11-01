#include <iostream>


//  Àü¿ª CONST =? Code Segment
// Local Const -> Data Segement
 
int change_val(int &p)
{
	p = 5;
}

int main (void)
{
	int a = 888;
	change_val(a);
	std::cout << a << std::endl;
	const int& ref = 5;
	int b = 1, c = 2;

	std::cout << ref << std::endl;

	
	return 0;
}
