

#include<stdio.h>
void main(){

	int num1,num2,mul;
	printf("Enter two numbers");
	scanf("%d %d",&num1,&num2);

	if(num1<0 || num2<0){
		printf("Sorry negative numbers not allowed\n");
	}
	else{
		mul = num1*num2;
	
	switch(mul%2==0){

		case 1:
			printf("Number is even\n");
			break;
		case 0:
			printf("Number is odd\n");
			break;
	}



	}
}
