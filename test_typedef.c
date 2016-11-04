/*************************************************************************
    > File Name: test_typedef.c
    > Author: huangyang
    > Mail:  
    > Created Time: Mon 24 Oct 2016 04:36:04 AM PDT
 ************************************************************************/

#include<stdio.h>
typedef  char *  time ;


// #define time_t int *
int main()
{
/*	typedef  int*  time_t;  //typedef定义的i和j都为int*  
	int num=10;
	i=&num;
	j=&num;			*/

	#define time_t int *
	time_t  i,j;
	int num=10;
	i=&num;
	j=num;       //define定义j为int型

	typedef int * (*fun)(void);   //直接用fun代替*（*fun）（void）这种数据类型
	fun select;      //  int *(*select)(void) 
}
