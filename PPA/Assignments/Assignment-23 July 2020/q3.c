

#include<stdio.h>

void main(){

	for(int outer=1;outer<=5;outer++){

		for(int space=4;space>=outer;space--){

			printf("\t");
		}
		int num = 6-outer;
		for(int inner=1;inner<=outer;inner++){

			printf("%d\t",num*num);
			num++;
		}
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-23July2020$ ./a.out 
				25	
			16	25	
		9	16	25	
	4	9	16	25	
1	4	9	16	25	

*/

*/
