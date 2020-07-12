

#include<stdio.h>
void main(){

	int num;
	printf("Enter the number between 0-5\n");
	scanf("%d",&num);
	if(num<0)
		printf("You entered negative number\n");
	else if(num>5)
		printf("Entered number is greater than five\n");
	else
		switch(num){

			case 0:
				printf("Zero\n");
				break;
			case 1:
				printf("One\n");
				break;
			case 2:
				printf("Two\n");
				break;
			case 3:
				printf("Three\n");
				break;
			case 4:
				printf("Four\n");
				break;
			case 5:
				printf("Five\n");
				break;

		}
}
