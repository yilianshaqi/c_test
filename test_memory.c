/*************************************************************************
    > File Name: test_memory.c
    > Author: huangyang
    > Mail:  
    > Created Time: Wed 26 Oct 2016 04:52:52 AM PDT
 ************************************************************************/

#include<stdio.h>

int main()
{
	char i=4;
	int  j=892;
//	char *p =&i;
	char *s=(char*)&j;
	printf("%d\n",*s);
	int  *p=(int *)&i;
	printf("%d\n",*p);
	

	

}
