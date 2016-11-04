/*************************************************************************
    > File Name: test_return.c
    > Author: huangyang
    > Mail:  
    > Created Time: Mon 24 Oct 2016 05:52:14 AM PDT
 ************************************************************************/

#include<stdio.h>
int fun(void )
{
	  int ss=10;
	  int *p=&ss;
//	  return p;			//返回指针有问题

//	 return ss;
}

int main()
{
	int *num;

	num=fun();
//	printf("num=%d\n",num);

}
