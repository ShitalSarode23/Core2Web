

#include<stdio.h>
void main(){

	int a=10;
	int b=20;

	if((a && b++) && (a++ || ++b)){		//20 &&10=1 && 1=1 ,10 || 21=1||..(not execute)=1

		printf("a:%d\n",a);		//10

		printf("b:%d\n",b);		//21
	}
	
	printf("out of if\n");



}
