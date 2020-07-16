
#include<stdio.h>

void main(){

	int num = 0;

	for(int i = 0;i<=10;i++){

		printf("Enter Even Number: \n");
		scanf("%d",&num);

		if(num%2 == 0)
			printf("%d is even number\n",num);
		else
			break;
	}
	printf("Out of for loop\n");

}
