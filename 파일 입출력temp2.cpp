#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
 FILE *fp = fopen("a.txt", "a+");
 char buffer[100];
 gets(buffer);
 
 buffer[0] = '\n';
 
 fputs(buffer, fp);
 
 fclose(fp);
 
 return 0;
} 



