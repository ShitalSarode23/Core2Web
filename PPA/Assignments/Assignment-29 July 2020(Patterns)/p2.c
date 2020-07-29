
#include<stdio.h>
void main(){

	int num = 1;
	int cnt = 1;
	for(int outer = 1;outer<=5;outer++){

		for(int space = 1;space<outer;space++){
			printf("\t");
		}
		for(int inner = 5;inner>=outer;inner--){

			printf("%d\t",num++);
		}
		cnt =cnt+2;
		num = cnt;
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-29 July 2020(Patterns)$ ./a.out 
1	2	3	4	5	
	3	4	5	6	
		5	6	7	
			7	8	
				9	

*/
