#include <iostream>

int fn1(int &a) { return a; }

int main() {
  int x = 1;
  std::cout << fn1(x)++ << std::endl;
  //fn1(x)�� r-value �̴�. (�����θ� ��ȯ�޾ұ� ����. 
  //�������� ������ �����Ƿ� �б⸸ ����..'
  //operate (����)�� �Ұ���! 
}
