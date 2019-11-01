#include <iostream>

int fn1(int &a) { return a; }

int main() {
  int x = 1;
  std::cout << fn1(x)++ << std::endl;
  //fn1(x)는 r-value 이다. (값으로만 반환받았기 때문. 
  //레지스터 영역에 있으므로 읽기만 가능..'
  //operate (수정)은 불가능! 
}
