#include <stdio.h>

int main(void)
{
	int i;
	char msg1[21];
	char msg2[100];
	
	gets(msg1);
	sprintf(msg2, "ȫ�߻�: ������ ���� '%s' �̷� �� ���� ������!\n", msg1);
	puts(msg2);
	return 0;
}
