

#include<stdio.h>

void main(){

	for(int outer=1;outer<=4;outer++){

	
		for(int space=3;space>=outer;space--){

			printf("  ");
		}
	
		int x = 1;

		for(int inner=1;inner<=outer;inner++){

			printf("%d ",x);
			x++;
		}
		printf("\n");

	}

}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-23 July 2020$ ./a.out 
      1 
    1 2 
  1 2 3 
1 2 3 4 


*/
