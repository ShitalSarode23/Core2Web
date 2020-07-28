
#include<stdio.h>
void main(){

	int row;
	printf("Enter number of rows : ");
	scanf("%d",&row);
	for(int outer = 1;outer<=row;outer++){

		for(int space = row;space>outer;space--){

			printf("  ");
		}
		char ch = 'a';
		for(int inner = 1;inner<=outer;inner++){

			printf("%c ",ch++);
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-NestedForLoop-20 July 2020$ ./a.out 
Enter number of rows : 5
        a 
      a b 
    a b c 
  a b c d 
a b c d e 

*/
