

#include<stdio.h>

void main(){

	for(int outer=1;outer<=5;outer++){

		for(int space=4;space>=outer;space--){

			printf("  ");
		}
		int x = outer;
		for(int inner=1;inner<=outer;inner++){
			printf("%d ",x--);
	
		}
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-23July2020$ ./a.out 
        1 
      2 1 
    3 2 1 
  4 3 2 1 
5 4 3 2 1 


*/
