/*************************************************************************
    > File Name: test_and.c
    > Author: huangyang
    > Mail:  
    > Created Time: Thu 27 Oct 2016 04:35:48 AM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
	int i=9;
	int j=-2;
	if((i<5)&(++j)){         //&也可以接表达式，&前为假其后也要求；&&为短路与，其前为假其后的表达式不进行运算
		printf("if ok j=%d\n",j);
		printf("j=%d\n",j);	
	}
	else {

		printf("else okj=%d\n",j);
		printf("j=%d\n",j);	
	}

	if(i&&9){
		printf("&& ok\n");
	}
	else {
	printf("else && \n");
	}
	int num=i&j;
	printf("num&=%d\n",num);
	num=i&&j;
	printf("num&=%d\n",num);

}
