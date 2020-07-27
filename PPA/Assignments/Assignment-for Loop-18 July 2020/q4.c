

#include<stdio.h>
void main(){

	int num;
	for(int outer = 1;outer<=4;outer++){

		num = outer;
		for(int inner = 1;inner<=4;inner++){

			printf("%d ",num++);
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-forLoop-18July2020$ ./a.out 
1 2 3 4 
2 3 4 5 
3 4 5 6 
4 5 6 7 
*/
