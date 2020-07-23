

#include<stdio.h>

void main(){

	int x = 1;
	int k;
	for(int i=1;i<=4;i++){
		k=4-i;
		for( ;k!=0;k--){
			printf(" ");
			}
		for(int j=1;j<=i;j++){
	
			printf("%d ",x);
			x=x+1;
		
		}
	
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-22 July 2020$ ./a.out 
   1 
  2 3 
 4 5 6 
7 8 9 10 

*/
