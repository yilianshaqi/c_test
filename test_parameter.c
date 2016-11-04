/*************************************************************************
    > File Name: test_parameter.c
    > Author: huangyang
    > Mail:  
    > Created Time: Thu 27 Oct 2016 05:25:44 AM PDT
 ************************************************************************/

#include<stdio.h>
void fun(int x,int y)
{
//`	printf("&x=%p\n",x);
	printf("fun pkk\n");
}
int main()
{
	int a=8;
	int b=18;
	fun(a,b);
	void (*ss)(int,int );
	ss=&fun;
	ss(7,9);
	printf("ss=%p\n",ss);
	printf("%p\n",fun);
	printf("&fun=%p\n",&fun);
}
