/*************************************************************************
    > File Name: test_fopen2.c
    > Author: huangyang
    > Mail:  
    > Created Time: Fri 28 Oct 2016 05:25:13 AM PDT
 ************************************************************************/

#include<stdio.h>
int main(){

	FILE   *file=fopen("./test_and.c","r");
	char buf[10]="";
	int ret=0;
	while((ret=fread(buf,2,5,file))!=0){
	//	printf("%s",buf);
	printf("%d\t",ret);
	}
	printf("\n");
	return 0;
}
