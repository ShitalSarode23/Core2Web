
#include<stdio.h>

void main(){

	for(int i=5;i>=1;i--){

		for(int j=1;j<i;j++)
			printf("%d ",i*i);
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-20 July 2020(Nested For Loop-2)$ ./a.out 
25 25 25 25 
16 16 16 
9 9 
4 

*/
