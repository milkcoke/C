#include <stdio.h>

int main(void)
{
	int i = 0;
	char regNo[15];
	scanf("%s", regNo);
	
	while(i<=13)
	{
	if(regNo[i] == '-')
		{
		i++;
		continue;
		}
	else
	{
	printf("%c", regNo[i]);
	i++;
	}
	
	}
	
	return 0;
}
