
#include<stdio.h>
void main(){

	int num = 1;
	int row;
	printf("Enter number of rows ");
	scanf("%d",&row);
	for(int outer = 1;outer<=row;outer++){

		for(int space = 1;space<outer;space++){

			printf("\t");
		}
		for(int inner = row;inner>=outer;inner--){

			printf("%d\t",num);
			num += 2;
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-NestedForLoop-20 July 2020$ ./a.out 
Enter number of rows 5
1	3	5	7	9	
	11	13	15	17	
		19	21	23	
			25	27	
				29	
*/
