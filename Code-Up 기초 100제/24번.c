#include <stdio.h>

int main(void)
{
	int i;
	char voca[21];
	scanf("%s", voca);
	
	i = 0;
	while(voca[i]!='\0')
	{
		printf("'%c'\n", voca[i]);
		i++;
	}
	return 0;
}
