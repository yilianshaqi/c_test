/*************************************************************************
    > File Name: test_static1.c
    > Author: huangyang
    > Mail:  
    > Created Time: Tue 25 Oct 2016 04:24:34 AM PDT
 ************************************************************************/

#include<stdio.h>

int all=10;

void fun1(int *p)
{
	*p=100;
//	printf("ss=%d\n",ss);  //static修饰的变量在其他函数中不能同过变量名访问
	printf("p=%p\t*p=%d\n",p,*p);
}
int * fun2()
{
	static int ss=99;
	int *p=&ss;
	printf("fun2 p=%p\t*p=%d\n",p,*p);
	return p;
}
/*
int main()
{

	fun1(fun2());

	fun2();
	
} 
*/

static void private()
{
	printf("private ok\n");

}
void public()
{
	printf("public ok \n");
}
