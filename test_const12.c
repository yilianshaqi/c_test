/*************************************************************************
    > File Name: test_const12.c
    > Author: huangyang
    > Mail:  
    > Created Time: Thu 27 Oct 2016 04:59:29 AM PDT
 ************************************************************************/

#include<stdio.h>
int main(){

	const int i=10;
//	int *p=&i;		//编译报警告
//	const	int * p=&i;//编译没有问题

//	printf("*p=%d,i=%d\n",*p,i);

	int j=19;
	const int * const s=&j;
	printf("*s=%d\n",*s);
	j=22;
	printf("*s=%d\n",*s);

//	s=&j;
}
