

#include<stdio.h>
void main(){

	int num;
	printf("Enter table integer to print table : ");
	scanf("%d",&num);
	int count = 1;
	for(int outer = 1;outer<=4;outer++){

		for(int space = 1;space<outer ;space++)
			printf("\t");
		for(int inner = 1;inner<=5-outer;inner++){

			printf("%d\t",num*count);
			count++;
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-NestedForLoop-20 July 2020$ ./a.out 
Enter table integer to print table : 2
2	4	6	8	
	10	12	14	
		16	18	
			20	
*/
