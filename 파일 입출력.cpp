#include <iostream>
#include <cstdio>
#include <stdio.h>
#define MAX_BUF 1000
using namespace std;

int main(void)
{
FILE *fp1, *fp2;
char buffer[MAX_BUF];


fp1 = fopen("./a.txt", "r");
fp2 = fopen("./c.txt", "a");

while(fgets(buffer, MAX_BUF, fp1)!=NULL)
	{
		fputs(buffer, fp2);
	}
	
fclose(fp1);
if(fclose(fp3) == -1)
{
	perror("Failed to close the file");
}

return 0;
	
} 


