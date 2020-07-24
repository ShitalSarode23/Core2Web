

#include<stdio.h>

void main(){

	int count = 0;
	for(int outer=1;outer<=5;outer++){

		for(int space=4;space>=outer;space--){

			printf("  ");
		}
		char ch = 'A';
		ch=ch+count;
		for(int inner=1;inner<=outer;inner++){

			printf("%c ",ch++);
	
		}
		count++;
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-23July2020$ ./a.out 
        A 
      B C 
    C D E 
  D E F G 
E F G H I 

*/
