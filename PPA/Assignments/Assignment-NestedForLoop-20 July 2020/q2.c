

#include<stdio.h>
void main(){

	int row;
	printf("Enter number of rows ");
	scanf("%d",&row);
	for(int outer = 1;outer<=row;outer++){

		for(int space = 1;space<=row-outer;space++){

			printf("\t");
		}
		for(int inner = 1;inner<=outer;inner++){
			int f = 1;
			for(int fact = 1;fact<=inner;fact++){
			
				f = f*fact;
			}
			printf("%d\t",f);
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-NestedForLoop-20 July 2020$ ./a.out 
Enter number of rows  5
				1	
			1	2	
		1	2	6	
	1	2	6	24	
1	2	6	24	120	
*/
