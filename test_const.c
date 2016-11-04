/*************************************************************************
    > File Name: test_const.c
    > Author: huangyang
    > Mail:  
    > Created Time: Fri 21 Oct 2016 05:42:15 AM PDT
 ************************************************************************/

#include<stdio.h>

const int main()
{
	const int i=9;            //只表示其修饰的变量只读，不对其值有影响
	printf("i=%d\n",i);

	const int  *p;
	printf("p=%p\n",p);
	p=&i;
	printf("p=%p\n",p);

//	*p=10;             //*p 只读不能被赋值
	
//	 int * const s=&i;   //赋值时会报警告，常量值丢失
//	s=&i;	//s只读
//	*s= 12;
//	printf("*s=%d\n",*s);
//	printf("i=%d\n",i);

	int math=8;				//const修饰**p；**p只读，*p和p可读可写
	int *sp=&math;
	const  int **kk; 
//	kk=&sp;				//赋值会报警告
	printf("ppp=%p\n",kk);
	*kk=*kk+1;
	printf("ppp=%p\n",*kk);
//	**kk=**kk+1;
// #define const  LEN   10   //被const修饰的宏定义不能做数组的维度数
	#define LEN 10
	int a[LEN];

	#define const MAX  11;
	int count;
	switch(count )
	{
//		case MAX :      //被const修饰的宏定不能放在case后边
//			  break;
		case LEN :
			  break;
		default :
			break;
	}

} 
