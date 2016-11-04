/*************************************************************************
    > File Name: test_volatile_const.c
    > Author: huangyang
    > Mail:  
    > Created Time: Fri 21 Oct 2016 04:25:02 AM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
	 volatile int i=10;   //olatilie和const能同时修饰一个变量
	printf("i=%d\n",i);

//	i=10;					 //const修饰不能改变其值
	printf("i=%d\n",i);

	volatile int *p=&i;        // volatile可以修饰指针变量 
	printf("p=%p,\t*P=%d\n",p,*p);
	p++;					//volatile修饰的指针可以++操作
	printf("p=%p\n",p);

	return 0;
}
