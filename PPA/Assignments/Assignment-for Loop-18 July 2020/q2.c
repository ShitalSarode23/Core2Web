

#include<stdio.h>
void main(){

	int num = 1;
	for(int outer = 1;outer<=3;outer++){

		for(int inner = 1;inner<=3;inner++){

			printf("%d ",num++);
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-forLoop-18July2020$ ./a.out 
1 2 3 
4 5 6 
7 8 9 
*/
