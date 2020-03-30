#include <stdio.h>

int main(void)
{
	char buffer[100];
	FILE *fp1 , *fp2;
	//수정 
	fp1 = fopen("Source.txt", "r");
	/*{
		printf("Source.txt 파일을 열 수 없습니다.\n");
		return 0;
	}*/
	
	fp2 = fopen("Target.txt", "w");
	/*{
		printf("Target.txt 파일을 열 수 없습니다.\n");
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
