

#include<stdio.h>

void main(){

	int n;
	int i=1;
	int sum = 0;
	printf("Enter number to check perfect number or not");
	scanf("%d",&n);

	while(i<n){

		if(n%i==0)
			sum +=i;
		i++;
	}
	printf("%d is a perfect number\n",sum);

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-while-loop$ ./a.out 
Enter number to check perfect number or not 6
6 is a perfect number
*/
