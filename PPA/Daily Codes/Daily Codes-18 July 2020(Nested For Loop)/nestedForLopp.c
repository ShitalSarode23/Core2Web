

#include<stdio.h>

void main(){

	int rows = 0;
	int cols = 0;

	printf("Enter rows & columns :");
	scanf("%d %d",&rows,&cols);

	for(int i=1;i<=rows;i++){

		for(int j=1;j<=cols;j++)

			printf("* ");
		printf("\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-18 July 2020(Nested For Loop)$ ./a.out 
* * * * 
* * * * 
* * * * 
* * * * 
*/
