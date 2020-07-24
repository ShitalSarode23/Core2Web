

#include<stdio.h>

void main(){

	//for row
	for(int outer=1;outer<=4;outer++){

		//for space
		for(int space=3;space>=outer;space--){

			printf("  ");
		}
		//for column-star
		for(int inner=1;inner<=outer;inner++){

			printf("* ");
		}
		printf("\n");

	}

}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-23July2020$ ./a.out 
      * 
    * * 
  * * * 
* * * * 

*/
