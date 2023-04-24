#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>

int main()
{
	int i;
	void *shared_memory;
	char suff[100];
	int shmid;
	shmid=shmget((key_t)2345,1024,0666);
	printf("Key of shared memory is %d\n",shmid);
	shared_memory=shmat(shmid,NULL,0);
	printf("Process attatched at %p\n",shared_memory);
	printf("DATA USED FROM SHARED MEMORY IS :%s\n",(char *)shared_memory);
}
