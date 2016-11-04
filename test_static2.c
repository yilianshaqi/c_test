/*************************************************************************
    > File Name: test_static2.c
    > Author: huangyang
    > Mail:  
    > Created Time: Tue 25 Oct 2016 04:46:28 AM PDT
 ************************************************************************/

#include<stdio.h>


int main()
{
	public();
	extern int 	private();
//	private();
	extern int all;
	printf("all=%d\n",all);
}
