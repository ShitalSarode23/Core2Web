

#include<stdio.h>

void main(){

	//for row
	for(int outer=1;outer<=4;outer++){

		//for space
		char ch = 'A';
		for(int space=3;space>=outer;space--){

			printf("  ");
			ch++;
		}
		//for column
		for(int inner=1;inner<=outer;inner++){

			printf("%c ",ch);
			ch++;
		}
		printf("\n");

	}

}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-23 July 2020$ ./a.out 
      D 
    C D 
  B C D 
A B C D 


*/
