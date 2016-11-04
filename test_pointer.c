/*************************************************************************
    > File Name: test_pointer.c
    > Author: huangyang
    > Mail:  
    > Created Time: Fri 28 Oct 2016 03:33:12 AM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int *p=a;
	printf("p=%p\t&a=%p\ta=%p\n",p,&a,a);//三个值都一样，即指针的取址还是他本身的值但是加减移动不一样
	printf("&a+1=%p\t&(&a+1)=%p\n",(&a+1),(a+1));
	p=(int *)(&a+1);
	printf("%d,%d\n",*(a+1),*(p-1));



	char ss[]={'a','b','c'};
	char yy='e';
	char *p1,*p2,*p3;
	char **pp;
	p1=ss;
//	pp=&ss;
//	p2=*pp;
	p3=&yy;
	pp=&p3;
	p2=*pp;
	printf("%p,%p,%p,%p,%c,%p\n",p1,p2,pp,p3,*p2,&pp);


