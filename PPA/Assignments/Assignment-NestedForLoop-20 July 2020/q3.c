
#include<stdio.h>
void main(){

	int row;
	printf("Enter number of rows : ");
	scanf("%d",&row);
	int num = row;
	for(int outer = 1;outer<=row;outer++){

		for(int space = 1;space<outer;space++){

			printf(" ");
		}
		for(int inner = row;inner>=outer;inner--){

			printf("%d",num);
		}
		num--;
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-NestedForLoop-20 July 2020$ ./a.out 
Enter number of rows : 4
4444
 333
  22
   1
*/
