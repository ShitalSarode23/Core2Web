
#include<stdio.h>
void main(){

	for(int outer = 1;outer<=5;outer++){

		for(int space = 1;space<outer;space++){
			printf("\t");
		}
		int num = 1;
		for(int inner = 1;inner<=6-outer;inner++){
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
shital@sarode:~/Desktop/PPA/Assignments/Assignment-29 July 2020(Patterns)$ ./a.out 
1	2	6	24	120	
	1	2	6	24	
		1	2	6	
			1	2	
				1	
*/
