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
	
	printf("몇 명의 학생 입력? \t");
	scanf("%d", &num);
	student *ptr[3] = {NULL};// 3개의 student형 포인터를 담는 배열 , 초기화 방법에 유의 {NULL} 
	// 요놈들은 메모리에 어떻게 배치될까? 

	
	for (index = 0 ; index < num; index++)
	{	
		
 		ptr[index] = (student *)malloc(sizeof(student));
 			 // 구조체 포인터 동적할당.
 		
		
		/* 왜 이건 안되고 
		printf("학생의 성명, 국어, 영어 성적을 입력하세요:");
		scanf("%s, %d, %d", ptr[index]->name,&ptr[index]->korScore, &ptr[index]->engScore);
		printf("%s, %d, %d", ptr[index]->name,&ptr[index]->korScore, &ptr[index]->engScore);
		*/
		
		//이건 왜 되는거냐 ㅅㅂ 
		printf("학생의 성명만 입력하세요: ");
		scanf("%s", ptr[index]->name);
		printf("국어, 영어 점수를 입력하세요: "); 
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
	printf("학생명 국어점수 영어점수 총점 평균\t평가\n");
	printf("%s %d\t %d\t %d\t%f%s\n",ptr[index]->name, ptr[index]->korScore, ptr[index]->engScore, ptr[index]->sum, ptr[index]->average, ptr[index]->isPass);
	free(ptr[index]);
	ptr[index]= NULL;
	}
	
	return 0;
}
