#include<sys/ipc.h>
#include<sys/shm.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int id;
	void*sm;
	char buf[100];
	id=shmget((key_t)1222,1024,0666|IPC_CREAT);
	printf("key of shared memory is %d\n",id);
	sm=shmat(id,NULL,0);
	printf("process attached at%p\n",sm);
	printf("enter data to written;\n");
	read(0,buf,100);
	strcpy(sm,buf);
	printf("written data is\n%s\n",(char*)sm);
}


