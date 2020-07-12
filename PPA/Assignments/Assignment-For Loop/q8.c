

#include<stdio.h>

void main(){

	char ch1,ch2;

	scanf("%c %c",&ch1,&ch2);

	int x=ch1;

	int y=ch2;

	for(int i=x;i>=y;i--){


		printf("%c ",i);

	}

	printf("\n");

}
