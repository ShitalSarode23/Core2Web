
#include<stdio.h>
void main(){

	int x;

	printf("Enter value to print table: \n");
	scanf("%d",&x);

	for(int i=1;i<=10;i++){

		printf("%d  ",x*i);

	}
	printf("\n");
}
