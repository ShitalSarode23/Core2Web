

#include<stdio.h>

void main(){

	for(int outer=1;outer<=5;outer++){

		for(int space=4;space>=outer;space--){

			printf("  ");
		}

		int c=0;
		int x=0,y=1;
		for(int inner=1;inner<=outer;inner++){
			printf("%d ",c);
			if(c==0)
				c=1;
			else if(c==1)
				c=0;

		}
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-23July2020$ ./a.out 
        0 
      0 1 
    0 1 0 
  0 1 0 1 
0 1 0 1 0 


*/
