

#include<stdio.h>
void main(){

	for(int outer = 1;outer<=5;outer++){

		for(int space = 1;space<outer;space++){

			printf("  ");
		}
		for(int inner = 1;inner<=6-outer;inner++){

			printf("* ");
		}
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-forLoop-18July2020$ ./a.out 
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
*/
