#include <stdio.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	char buffer[100];
	FILE *fp1 , *fp2;
	if((fp1 = fopen("./Source.txt", "r")) == NULL)
	{
		cout << "Source.txt 파일을 열 수 없습니다." << endl;
		return -1;
	}
	if((fp2 = fopen("./Target.txt", "w")) == NULL)
	{
		cout << "Target.txt 파일을 열 수 없습니다." << endl;
		return -1;
	}
	
	while(fgets(buffer, 100, fp1) != NULL)
	{
		fputs(buffer, fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
	
}
