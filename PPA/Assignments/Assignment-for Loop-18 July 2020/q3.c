
#include<stdio.h>
void main(){

	int num;
	scanf("%d",&num);
	for(int outer =1;outer<=num;outer++){

		int fact = 1;
		for(int inner = 1;inner<=outer;inner++){

			fact = fact * inner;
		}
		printf("%d ",fact);
	}
	printf("\n");
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-forLoop-18July2020$ ./a.out 
5
1 2 6 24 120 
*/
