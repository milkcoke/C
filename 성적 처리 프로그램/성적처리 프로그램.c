#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define averageScore 70.0F
int main(void)
{
	int index = 0, num = 0;
	typedef struct _student {
		char name[10];
		char isPass[10];
		int korScore, engScore, sum;
		double average;
	}student;
	
	printf("�� ���� �л� �Է�? \t");
	scanf("%d", &num);
	student *ptr[3] = {NULL};// 3���� student�� �����͸� ��� �迭 , �ʱ�ȭ ����� ���� {NULL} 
	// ������ �޸𸮿� ��� ��ġ�ɱ�? 

	
	for (index = 0 ; index < num; index++)
	{	
		
 		ptr[index] = (student *)malloc(sizeof(student));
 			 // ����ü ������ �����Ҵ�.
 		
		
		/* �� �̰� �ȵǰ� 
		printf("�л��� ����, ����, ���� ������ �Է��ϼ���:");
		scanf("%s, %d, %d", ptr[index]->name,&ptr[index]->korScore, &ptr[index]->engScore);
		printf("%s, %d, %d", ptr[index]->name,&ptr[index]->korScore, &ptr[index]->engScore);
		*/
		
		//�̰� �� �Ǵ°ų� ���� 
		printf("�л��� ���� �Է��ϼ���: ");
		scanf("%s", ptr[index]->name);
		printf("����, ���� ������ �Է��ϼ���: "); 
		scanf("%d, %d", &ptr[index]->korScore, &ptr[index]->engScore);
		ptr[index]->sum = ptr[index]->korScore + ptr[index]->engScore;
		ptr[index]->average = (double)ptr[index]->sum / 2.0;
		
		if(ptr[index]->average >= averageScore)
		{
		strcpy(ptr[index]->isPass, "Pass");
		}
		else
		{
		strcpy(ptr[index]->isPass, "Fail"); 
		}
	}
	for(index = 0; index < num; index++)
	{
	printf("�л��� �������� �������� ���� ���\t��\n");
	printf("%s %d\t %d\t %d\t%f%s\n",ptr[index]->name, ptr[index]->korScore, ptr[index]->engScore, ptr[index]->sum, ptr[index]->average, ptr[index]->isPass);
	free(ptr[index]);
	ptr[index]= NULL;
	}
	
	return 0;
}
