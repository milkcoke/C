
#include <stdio.h>

int main(void)
{
	char ch;
	int i;
	
	FILE *fp1 = fopen("./data.txt", "w");
	
	FILE *fp2 = fopen("./data.txt", "r");
	
	fputs("A B C", fp1);
	fclose(fp1);
	
	for(i = 0; i < 20; i++)
	{
		ch = fgetc(fp2);
		printf("%c ", ch);
	}

	fclose(fp2);
	return 0;
	
	
}


