#include<sys/shm.h>
#include<sys/ipc.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void main()
{
	int id,a,b;
	void *sm;
	char buf[100];
	id=shmget((key_t)1222,1024,0666);
	printf("key of shared memory is %d\n",id);
	sm=shmat(id,NULL,0);
	printf("process attached at%p\n",sm);
	printf("data read from memory;\n%s\n",(char*)sm);
	strcpy(buf,sm);
	a=buf[0]-'0';
	b=buf[2]-'0';
	printf("the sum is %d",a+b);
}
