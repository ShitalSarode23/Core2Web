

#include<stdio.h>

void main(){

	int count = 5;
	for(int i=1;i<=5;i++){

		int x = i*count;
		for(int j=5;j>=i;j--){

			printf("%d ",x);
			x=x-i;
		}
		printf("\n");
		count--;
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-22 July 2020$ ./a.out 
5 4 3 2 1 
8 6 4 2 
9 6 3 
8 4 
5 

*/
