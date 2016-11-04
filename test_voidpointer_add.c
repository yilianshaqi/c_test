/*************************************************************************
    > File Name: test_voidpointer_add.c
    > Author: huangyang
    > Mail:  
    > Created Time: Wed 19 Oct 2016 05:28:21 AM PDT
 ************************************************************************/

#include<stdio.h>
main()
{
void *p;
char *ch;
int  *num;
int sdk=10;
p =&sdk;
printf("*p=%p,*ch=%p,*num=%p\n",p,ch,num);
p++;
ch++;
num++;
printf("*p=%p,*ch=%p,*num=%p\n",p,ch,num);
/*
(void)0;
int sc;
sc=(void)0 + 6;
*/
void *yy;
printf("yy=%p,y=%p\n",yy,&yy);
yy++;

printf("yy=%p,y=%p\n",yy,&yy);
int i;
void *lol[10];
for( i=0;i<10;i++)
{
	printf("lol%d=%p\t",i,&lol[i]);

}
}
