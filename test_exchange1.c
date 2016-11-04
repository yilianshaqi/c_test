/*************************************************************************
    > File Name: test_exchange1.c
    > Author: huangyang
    > Mail:  
    > Created Time: Wed 26 Oct 2016 02:57:31 AM PDT
 ************************************************************************/

#include<stdio.h>

int main()
{
	int i=10;
	float j=12.99;
	int num=i+j;
	printf("%d\n",num);   //编译时报警告，需要强制类型转换
//	printf("%f\n",i+j);   //i+j = 22.990000运算时i转为float
	
	char y='a';     //字符转化为对应ASC11值，a=97, 计算时就是97
	int s=10;
	int count = y+s;
	printf("%d\n",count);

	unsigned char m=7;
	char  k=-10;
//	char ret=k+m;
	unsigned char ret=m+k;   //无符号转换为有符号的再进行计算

	printf("%d\n",ret);
	printf("%d\n",k>m?k:m);
	int ss=-9;
	unsigned int yy=11;
	printf("%d\n",ss>yy?ss:yy);
	short h=-19;
	unsigned short g=20;
	printf("%d\n",h>g?h:g);

//	char b=-18;
//	unsigned char  x=2;
//	short b=-18;
//	unsigned short x=2;		//char和short不进符号转换
//	int b=-1;
//	unsigned int x=2;
	long b=-1;
	unsigned long x=2;
	printf("long=%d\n",sizeof(long));
	if(b*x>0){

		printf("ok\n");
	}
	else{
		printf("no\n");
	}

//	unsigned float u=9;		//unsigned不能修饰浮点型数据
//	unsigned double u=10;
	
/*	unsigned int fo=2147483650;
	unsigned	long tk=10;
	if(fo+tk>0)
	{
		printf("long\n");
	}
	else
	{
		printf("unsigned\n");
	}
*/
	char pp=-10;
	unsigned l=12;
	printf("char=%d\n",sizeof(pp));
//	printf(("add char =%d\n",sizeof(pp+l)));
//
	char kl=-107;
	char lo=10;
	printf("k=%d\n",kl<<2);
	printf("kl=%d\n",((kl+lo)<<2));
	int mm=-107;
	printf("mm=%d\n",mm<<2);
}
