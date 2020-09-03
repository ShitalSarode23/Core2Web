
#include<stdio.h>
void main(){

	int n1,n2;
	printf("Enter range to print series of factorial of all numbers:");
	scanf("%d %d",&n1,&n2);
	for(int i = n1;i<=n2;i++){

		int fact = 1;
		for(int j = 1;j<=i;j++){

			fact *= j;
		}
		printf("Factorial of %d = %d\n",i,fact);
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-3-September 2020$ ./a.out 
Enter range to print series of factorial of all numbers:1 5
Factorial of 1 = 1
Factorial of 2 = 2
Factorial of 3 = 6
Factorial of 4 = 24
Factorial of 5 = 120

