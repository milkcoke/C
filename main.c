
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int leftValue = 0, rightValue = 0;	
	char op = ' ';
	
	if(argc < 4)
	{
		printf("Parameter 갯수 부족"); 
	}
	
	leftValue = atoi(argv[1]);
	op = argv[2][0]; // 그냥 argv[2] 하면 문자열이라 공백 문자 포함됨. 
	rightValue = atoi(argv[3]);
	
	switch(op)
	{
		case '+':
		printf("%d %c %d = %d\n", leftValue, op, rightValue, leftValue+rightValue);
		break;
		
		case '-':
		printf("%d %c %d = %d\n", leftValue, op, rightValue, leftValue - rightValue);
		break;
		
		case '/':
		printf("%d %c %d = %d\n", leftValue, op, rightValue, leftValue / rightValue);
		break;
		
		case '*':
		printf("%d %c %d = %d\n", leftValue, op, rightValue, leftValue * rightValue);
		break;
		
		default:
		printf("잘못 입력 하셨습니다.\n");
		break;
	}	

	return 0;
} 
