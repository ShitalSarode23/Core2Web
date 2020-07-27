

#include<stdio.h>
void main(){

	for(int outer = 1;outer<=4;outer++){

		for(int inner = 1;inner<=4;inner++){

			if(outer == inner)
				printf("# ");
			else
				printf("= ");
		}
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-forLoop-18July2020$ ./a.out 
# = = = 
= # = = 
= = # = 
= = = # 
*/
