

#include<stdio.h>
void main(){

	int a=10;
	int b=20;

	if((a && b++) && (a++ || ++b)){		//20 &&10=1 && 1=1(b becomes 21) ,10 || 21=1||..(not execute)=1 and a=11

		printf("a:%d\n",a);		//11

		printf("b:%d\n",b);		//21
	}
	
	printf("out of if\n");



}
