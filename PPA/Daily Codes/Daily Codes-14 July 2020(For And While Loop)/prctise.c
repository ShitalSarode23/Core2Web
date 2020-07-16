
#include<stdio.h>

void main(){

	float x = 0.0f;
	float y = 0.0f;

	printf("i\tj\n");

	for(int i=0;i<=10;i++,x+=0.20,y-=0.20){

		printf("%.2f\t%.2f\n",x,y);
	
	}
}
