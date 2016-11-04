/*************************************************************************
    > File Name: test_fopen1.c
    > Author: huangyang
    > Mail:  
    > Created Time: Fri 28 Oct 2016 05:17:24 AM PDT
 ************************************************************************/

#include<stdio.h>
int main(){

	FILE *file=fopen("./test_and.c","r");
	char buf;
//	printf("%s,%d",file,*file);
	
	while(fread(&buf,1,1,file)!=0){
		printf("%c",buf);
	}	
	return 0;
}
