#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int ch, i;
	FILE *fp = fopen("./Temp.txt", "r");
	if(fp == NULL)
	{
		printf("Failed to open the file\n");
		return -1;
	}
	
	for(i = 0; i < 3; i++)
	{
		ch = fgetc(fp);
		printf("%c ", ch);
	}
	fclose(fp);
	return 0;
	
}
