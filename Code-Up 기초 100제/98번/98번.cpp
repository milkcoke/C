
#include <iostream>
#include <stdlib.h>
using namespace std;

	typedef struct _stick{
		int length;
		int direction; // 0이면 가로 1이면 세로 
		int x, y;
	}Stick;


void InsertStick(Stick * sp, int Go[][100])
{
	int i, j;
	if(!sp->direction)
	for(i = 1, j = sp->y; i <= (sp->length) ; j++, i++)
	{
		Go[sp->x][j]++;
	}
	else
	for(i = sp->x, j = 1; j <= (sp->length) ; i++, j++)
	{
		Go[i][sp->y]++;
	}
}

int main (void){
	

	
	int N, h, w, i, j;
	cin >> h >> w;
	cin >>N;
	int Go[h+1][100] = {0};
	Stick *arr[N] = {NULL}; //필수 구조체 포인터배열 
	
	for(i = 0 ; i < N; i++)
	{
		arr[i] = (Stick *)malloc(sizeof(Stick));
		cin >> arr[i]->length >> arr[i]->direction >> arr[i]->x >> arr[i]-> y;
		InsertStick(arr[i], Go);
 
	}
	
	for(i = 1; i <= h ; i++)
	{ 
		for(j = 1; j <= w ; j++)
		{
			cout << Go[i][j] << ' ';
		}
		cout << endl;
	}
	
	for(i = 0 ; i < N ; i++)
	{
		free(arr[i]);
	}

	return 0;
	
	
}
