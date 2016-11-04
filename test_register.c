/*************************************************************************
    > File Name: test_register.c
    > Author: huangyang
    > Mail:  
    > Created Time: Fri 21 Oct 2016 04:43:34 AM PDT
 ************************************************************************/

#include<stdio.h>

//  register  int num=19 ;      //register  不能修饰全局变量
	
	int  func( register int p){
	printf("registr 可以修饰形参\n");   //register 可以修饰形参，函数参数传值可以不是被register修饰的值
	return 0;
}


int main()
{
//	register i=999999;
//	register float  i=99.99;
 //   register long i=223453556L;   //register修饰的变量可以时int long 和float 以及double型
	double i=23456678.9578;
	printf("i=%lf\n",i);

	register int p=10;
//	int *ss=&p;     //register 修饰的变量不能取地址
	int yy=18;
//	register int *ss = &yy;    //register可以修饰指针
	register int *ss;
	printf("ss=%p\n",ss);
	ss++;
	printf("ss=%p\n",ss);
	
	register int num;            //register 未初始化但系统自定初始化为0；
	printf("num=%d\n",num);
	
	func(num);
	func(yy);	
//	static register int count=20;	//不能修饰静态变量
//	register static  int count=20;
	printf("count=%d\n",count);
}
