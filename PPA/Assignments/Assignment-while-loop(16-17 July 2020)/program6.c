
#include<stdio.h>

void main(){

	int n,i=1;
	int sum =0;
	printf("Enter a number : ");
	scanf("%d",&n);

	while(i<=n){

		sum +=i;
		i++;
	}
	printf("The sum of all natural numbers from 1 to %d is : %d\n",n,sum);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-while-loop$ ./a.out 
Enter a number : 10
The sum of all natural numbers from 1 to 10 is : 55
*/
