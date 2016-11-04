/*************************************************************************
    > File Name: test_define.c
    > Author: huangyang
    > Mail:  
    > Created Time: Mon 24 Oct 2016 05:33:21 AM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
//	#define SUM (a,b)   (a+b)
	#define SUM(a,b)   (a+b)
	int num=SUM (12,8);
	#define _hh_
	#ifdef _hh_
	#error   _hh_ exist
	#endif



}
