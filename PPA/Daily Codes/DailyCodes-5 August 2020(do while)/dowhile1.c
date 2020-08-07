#include<stdio.h>
void main(){

	int num;
	char ch = 'y';
	do{

		printf("Enter Number ");
		scanf("%d",&num);
		int var = num;
		int rem;
		int rev = 0;
		while(num!=0){

			rem = num % 10;
			rev = rev * 10 + rem;
			num = num/10;
		}
		printf("reverse of %d is %d\n",var,rev);
		printf("Do you want to continue ?");
		scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y');
}
/*
shital@sarode:~/Desktop/Core2Web/PPA/Daily Codes/DailyCodes_5$ ./a.out 
Enter Number 1234
reverse of 1234 is 4321
Do you want to continue ?y
Enter Number 456
reverse of 456 is 654
Do you want to continue ?n
*/
