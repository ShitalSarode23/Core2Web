

#include<stdio.h>
void main(){

	int row;
	printf("Enter number of rows : ");
	scanf("%d",&row);
	int count = 1;
	for(int outer=1;outer<=row;outer++){

		for(int inner = 1;inner<=count;inner++){

			printf("$ ");
		}
		count +=2;
		printf("\n\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-NestedForLoop-20 July 2020$ ./a.out 
Enter number of rows : 5
$ 

$ $ $ 

$ $ $ $ $ 

$ $ $ $ $ $ $ 

$ $ $ $ $ $ $ $ $ 

*/
