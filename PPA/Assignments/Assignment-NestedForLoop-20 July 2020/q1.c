/*

	  1
	2 1
      3 2 1
    4 3 2 1
  5 4 3 2 1
*/
#include<stdio.h>
void main(){

	int row;
	printf("Enter number of rows");
	scanf("%d",&row);
	for(int outer = 1;outer<=row;outer++){

		for(int space = 1;space<=row-outer;space++){

			printf("  ");
		}
		int num = outer;
		for(int inner = 1;inner<=outer;inner++){

			printf("%d ",num--);
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-NestedForLoop-20 July 2020$ ./a.out 
Enter number of rows 5 
        1 
      2 1 
    3 2 1 
  4 3 2 1 
5 4 3 2 1 
*/
