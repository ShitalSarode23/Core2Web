

#include<stdio.h>

void main(){

	int num;
	int rem;
	int sum = 0;
	printf("Enter number: ");
	scanf("%d",&num);
	int temp = num;

	while(num!=0){

		rem = num%10;
		int fact = 1;
		while(rem!=0){

			fact = fact*rem;
			rem--;
		}
		sum += fact;
		num = num/10;
	}
	if(sum == temp)
		printf("%d is a strong number\n",temp);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-22 July 2020$ ./a.out 
Enter number: 145
145 is a strong number
*/
