

#include<stdio.h>
void main(){

	int x,y;
	printf("Enter two numbers : ");
	scanf("%d %d",&x,&y);			//15 30

	for(int i=y;i>=x;i){			//i=30;i>=15;i--

		printf("%d ",i);		//30 
		i=i-2;

	}
	printf("\n");


}
