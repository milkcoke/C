
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int leftValue = 0, rightValue = 0;	
	char op = ' ';
	
	if(argc < 4)
	{
		printf("Parameter ���� ����"); 
	}
	
	leftValue = atoi(argv[1]);
	op = argv[2][0]; // �׳� argv[2] �ϸ� ���ڿ��̶� ���� ���� ���Ե�. 
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
		printf("�߸� �Է� �ϼ̽��ϴ�.\n");
		break;
	}	

	return 0;
} 
