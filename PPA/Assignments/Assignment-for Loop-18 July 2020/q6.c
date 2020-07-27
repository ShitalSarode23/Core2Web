
#include<stdio.h>
void main(){

	for(int outer = 1;outer<=5;outer++){

		char ch = 'A';
		for(int inner = 1;inner<=outer;inner++){

			printf("%c ",ch++);
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-forLoop-18July2020$ ./a.out 
A 
A B 
A B C 
A B C D 
A B C D E 
*/
