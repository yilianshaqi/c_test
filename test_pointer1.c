/*************************************************************************
    > File Name: test_pointer1.c
    > Author: huangyang
    > Mail:  
    > Created Time: Fri 28 Oct 2016 04:28:32 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
	char aa[10];
//	strcpy(aa,"01234567891");
//	printf("%s\n",aa);


	int ss[]={1,2,3,4,5};
	int *p=ss;
	printf("%d,%d\n",*p,*(++p));
	printf("%s,%d\n",__FILE__,__LINE__);
}
