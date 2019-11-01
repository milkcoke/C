#include <stdio.h>

int change_val(int &p) {
  p = 3;

  return 0;
}
int main() {
  int number = 5;

 printf("%d", number);
  change_val(number);
	printf("%d", number);
}
