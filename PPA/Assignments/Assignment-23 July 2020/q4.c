

#include<stdio.h>

void main(){

	for(int outer=1;outer<=5;outer++){

		for(int space=4;space>=outer;space--){

			printf("  ");
		}
		char ch = 'F';
		ch=ch-outer;
		for(int inner=1;inner<=outer;inner++){

			printf("%c ",ch++);
	
		}
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-23July2020$ ./a.out 
        E 
      D E 
    C D E 
  B C D E 
A B C D E 


*/
