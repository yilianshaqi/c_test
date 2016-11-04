/*************************************************************************
    > File Name: test_void_pointer.c
    > Author: huangyang
    > Mail:  
    > Created Time: Wed 19 Oct 2016 04:22:08 AM PDT
 ************************************************************************/

#include<stdio.h>
void main()
{
	int *p;
	int num=9;
	p=&num;
	printf("*p=%d\n",*p);
	char *str;
	void *pv;
	char hi='d';
	str=pv;             //void 指向char没有问题
	str=&hi;
	printf("*hi=%c\t &hi=%p\n",*str,&hi);

	pv=p;          //int 指向void 也没有问题
	pv=str;			//编译也ok
	long ss=100;
//	printf("*pv=%c\n",*pv);   // warning: dereferencing ‘void *’ pointer [enabled by default]	test_void_pointer.c:24:2: error: invalid use of void expression     char型指针指向void型，void本身类型没有变化
	pv=&ss;
	p=pv;
	printf("*p=%d\t p=%p\n",*p,p);

	int count=9;
	int *pcount;
	void *ps=&count;
//	ps=pcount;
	pcount=ps;
	printf("*pcount=%d\n",*pcount);
}
