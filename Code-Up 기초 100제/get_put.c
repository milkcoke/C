#include <stdio.h>

int main(void)
{
	int i;
	char msg1[21];
	char msg2[100];
	
	gets(msg1);
	sprintf(msg2, "È«»ß»ß: ¹®½ÂÈÆ ³»°¡ '%s' ÀÌ·± ¸» ¾²Áö ¸»·¨Áö!\n", msg1);
	puts(msg2);
	return 0;
}
