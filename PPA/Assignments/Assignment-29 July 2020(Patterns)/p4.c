
#include<stdio.h>
void main(){

	int num = 1;
	for(int outer = 1;outer<=5;outer++){

		for(int space = 1;space<outer;space++){
			printf("\t");
		}
		for(int inner = 5;inner>=outer;inner--){

			if(outer%2 != 0)
				printf("%d\t",num * num);
			else
				printf("%d\t",num*num*num);
			num++;
		}
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-29 July 2020(Patterns)$ ./a.out 
1	4	9	16	25	
	216	343	512	729	
		100	121	144	
			2197	2744	
				225	

*/
