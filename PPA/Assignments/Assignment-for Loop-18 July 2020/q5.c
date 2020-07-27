

#include<stdio.h>
void main(){

	for(int outer = 1;outer<=3;outer++){

		for(int inner = 1;inner<=5;inner++){

			if(inner%2==0)
				printf("-");
			else
				printf("*");
		}
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-forLoop-18July2020$ ./a.out 
*-*-*
*-*-*
*-*-*
*/
