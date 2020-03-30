#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void * showPIDTID(void * data)
{
	char * tName = (char *)data;
	pid_t pid;
	pthread_t tid;
	pid = getpid();
	tid = pthread_self();
	
	printf("====%s====\nProcessID: %d\nThreadID: %d\n", tName, pid, tid);
	
}

int main(void)
{
	int i;
	int tid, status;
	char * ThreadName[2] = {"Alarm Control", "StopWatch Contorl"};
	pthread_t Alarm, StopWatch;
	pthread_create(&Alarm, NULL, showPIDTID, (void *)ThreadName[0]);
	pthread_create(&StopWatch, NULL, showPIDTID, (void *)ThreadName[1]);
	
	pthread_join(Alarm, (void**)&status);
	pthread_join(StopWatch, (void**)&status);
	
	printf("���¾� Mian thread! �ٸ� ��Ʈ��  Thread�� ���� ������!\n");
	return 0;
}
