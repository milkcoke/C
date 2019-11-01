#include <stdio.h>

int main(void)
{
	int stdNum = 0, minN =0, totalSum =0;
	
	scanf("%d", &stdNum);
	
	while(totalSum < stdNum)
	{
		minN++;
		totalSum += minN;
	}
	
	printf("%d", minN);
	
	return 0;
}
