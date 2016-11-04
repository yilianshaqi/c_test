/*************************************************************************
    > File Name: test_extern2.c
    > Author: huangyang
    > Mail:  
    > Created Time: Tue 25 Oct 2016 03:57:00 AM PDT
 ************************************************************************/

#include<stdio.h>

int  all;  //没有赋值也没有extern也是声明
// extern int all;
// int all=88;           //会报重复定义
int fun()
{
	printf("all=%d\n",all);

//	extern fun2();    //函数不管有没有extern修饰都能被引用，应该是被编译器优化了
	fun2();

//	extern someone;
//	printf("someone=%d\n",someone);
}
