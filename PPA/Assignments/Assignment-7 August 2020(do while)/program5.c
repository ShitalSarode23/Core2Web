
#include<stdio.h>
void main(){

	int isPalindrome(int num){

		int rev=0,rem,temp = num;
		while(num!=0){

			rem = num % 10;
			rev = rev * 10 + rem;
			num = num /10;
		}
		if(rev == temp)
			return 0;
		else
			return 1;
	}
	int num;
	do{

		printf("Enter number : ");
		scanf("%d",&num);
		printf("%d\n",num);
	}while(isPalindrome(num)!=0);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7 August 2020(do while)$ ./a.out 
Enter number : 123 
123
Enter number : 345
345
Enter number : 12321
12321

*/
