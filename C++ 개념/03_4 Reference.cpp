#include <iostream>

int fn1(int &a) { return a; }
int &fn2(int &a) { return a; } // 인자를 Reference로 반환. 

int main() {
  int x = 1;
  std::cout << fn2(x)++ << std::endl;
  std::cout << "x :: " << x << std::endl;
}
