

#include<stdio.h>

void main(){

	int n,i=1;
	int sum=0,mult=1;

	printf("Enter Number");
	scanf("%d",&n);
	while(i<=n){

		if(i%2==0)
			sum +=i;
		else
			mult *=i;
		i++;
	}
	printf("Sum of all even numbers between 1 to %d : %d\n",n,sum);
	printf("Multiplication of all odd numbers between 1 to %d : %d\n",n,mult);

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-while-loop$ ./a.out 
Enter Number 10
Sum of all even numbers between 1 to 10 : 30
Multiplication of all odd numbers between 1 to 10 : 945
*/
