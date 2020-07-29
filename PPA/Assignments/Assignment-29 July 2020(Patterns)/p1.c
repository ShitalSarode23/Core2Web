
#include<stdio.h>
void main(){

	int num = 1;
	for(int outer = 1;outer<=5;outer++){

		for(int space = 1;space<outer;space++){
			printf("\t");
		}
		int count = outer;
		for(int inner = 5;inner>=outer;inner--){

			printf("%d\t",num * count);
			count++;
		}
		num++;
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-29 July 2020(Patterns)$ ./a.out 
1	2	3	4	5	
	4	6	8	10	
		9	12	15	
			16	20	
				25	
*/
