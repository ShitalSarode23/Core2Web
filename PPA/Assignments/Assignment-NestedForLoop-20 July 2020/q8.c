
#include<stdio.h>
void main(){

	int row;
	printf("Enter number of rows : ");
	scanf("%d",&row);
	int count = 1;
	for(int outer = 1;outer<=row;outer++){

		for(int space = row;space>outer;space--){

			printf("  ");
		}
		for(int inner = 1;inner<=outer;inner++){

			printf("%d ",count++);
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-NestedForLoop-20 July 2020$ ./a.out 
Enter number of rows : 4
      1 
    2 3 
  4 5 6 
7 8 9 10 
*/
