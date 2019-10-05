#include <stdio.h>
#define MAX 1000

int main(void)

{
	int i = 0;
	char str[MAX];
	
	fgets(str, MAX, stdin);
	for(; str[i] != 'q'; i++)
	{
		if(str[i]== ' ')
		{
		continue;	
		}
		else
		printf("%c\n", str[i]);
		
	}
	printf("%c",str[i]);
	
	return 0;
}
