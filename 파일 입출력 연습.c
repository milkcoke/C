#include <stdio.h>

int main(void)
{
	char buffer[100];
	FILE *fp1 , *fp2;
	//���� 
	fp1 = fopen("Source.txt", "r");
	/*{
		printf("Source.txt ������ �� �� �����ϴ�.\n");
		return 0;
	}*/
	
	fp2 = fopen("Target.txt", "w");
	/*{
		printf("Target.txt ������ �� �� �����ϴ�.\n");
		return 0;
	}*/
	
	while(fgets(buffer, sizeof(buffer), fp1) != NULL)
	{
		fputs(buffer, fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
	
}
