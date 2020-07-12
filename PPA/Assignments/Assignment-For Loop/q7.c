
#include<stdio.h>

void main(){

	int x,y;

	printf("Enter the number :");
	scanf("%d",&x);

	printf("Enter limit :");
	scanf("%d",&y);

	for(int i=x;i<=y;i){
		
		printf("%d ",i);
		i=i+x;
		
	}
	printf("\n");

}
