/*************************************************************************
    > File Name: test_extern1.c
    > Author: huangyang
    > Mail:  
    > Created Time: Tue 25 Oct 2016 03:55:52 AM PDT
 ************************************************************************/

#include<stdio.h>


int all=10;
// extern  fun();
int main()
{
	static int  someone=19;
	fun();
}
	int fun2()
{
	int i=99;
	printf("i=%d\n",i);
}
