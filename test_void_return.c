/*************************************************************************
    > File Name: test_void_return.c
    > Author: huangyang
    > Mail:  
    > Created Time: Wed 19 Oct 2016 03:49:53 AM PDT
 ************************************************************************/

#include<stdio.h>
void fun1(){
	printf("fun1  ok\n");

}
void fun2(void)
{
	printf("fun2  ok\n");
}
void fun3(void)
{
	printf("fun3 ok\n");
	int i=10;
	return i;
}
 fun4(void)
{
	printf("fun4 ok\n");
	float i=9.9;
	return i;
}
void main(void)
{
	int m=10;
	fun1(m);
	fun2();
	fun2(m); // error: too many arguments to function ‘fun2’

	fun3();    //编译时会报警告
//	//warning: ‘return’ with a value, in function returning void
	fun4();

}
