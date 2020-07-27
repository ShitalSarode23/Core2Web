

#include<stdio.h>
void main(){

	for(int outer = 1;outer<=5;outer++){

		char ch = 'A';
		for(int inner = 1;inner<=5;inner++){

			printf("%c ",ch++);
		}
		printf("\n");

	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-forLoop-18July2020$ ./a.out 
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 
*/
