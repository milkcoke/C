#include <iostream>
#include <cstdio.h>
#define MAX_BUF 100
using namespace std;

int main(void)
{
FIle *fp1, *fp2;
char buffer[MAX_BUF];

fp1 = fopen("a.txt", "r");
fp2 = fopen("b.txt", "w");

while(fgets(buffer, MAX, fp1) != NULL)
	fputs(buffer, fp2);
	
fclose(f1);
fclose(f2);

return 0;
	
} 
