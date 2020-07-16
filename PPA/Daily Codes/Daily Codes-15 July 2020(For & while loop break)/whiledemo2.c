
#include<stdio.h>

void main(){

	int num;
	int i = 1;

	while(i<=20){


		printf("Enter number : \n");
		scanf("%d",&num);

		if(num%4 == 0 && num%10 == 0){
			break;
		}
		else
			printf("%d\n",num);
		i++;
	}
	printf("Out of while\n");
}
