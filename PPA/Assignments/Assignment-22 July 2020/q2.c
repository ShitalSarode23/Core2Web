

#include<stdio.h>

void main(){

	int temp = 1;
	for(int i=1;i<=5;i++){

		for(int j=1;j<=i;j++){
			
			printf("%d ",temp++);
		
		}
		printf("\n");
		temp = temp-1;

	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-22 July 2020$ ./a.out 
1 
1 2 
2 3 4 
4 5 6 7 
7 8 9 10 11 
*/
