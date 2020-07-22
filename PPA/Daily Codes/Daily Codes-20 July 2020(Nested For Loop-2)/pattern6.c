
#include<stdio.h>

void main(){

	for(int i=1;i<=5;i++){

		int x=1;
		for(int j=5;j>=i;j--){
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-20 July 2020(Nested For Loop-2)$ ./a.out 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

*/
