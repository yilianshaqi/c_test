/*************************************************************************
    > File Name: test_volatile_pthread.c
    > Author: huangyang
    > Mail:  
    > Created Time: Thu 20 Oct 2016 05:45:41 AM PDT
 ************************************************************************/
#include <pthread.h>

#include<stdio.h>
int i=2;


void * func(void *p)
{
	sleep(1);
	i=10;
	printf("pthread i=%d\n",i);
	pthread_exit(0);
}





int main()
{
	pthread_t  pthread;
	pthread_create(&pthread,NULL,func,NULL);
	while(i==2)
	{
		printf("father i=%d\n",i);
//   	sleep(2);
	}
}
