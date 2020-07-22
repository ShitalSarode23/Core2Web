
#include<stdio.h>

void main(){

	int outer = 1;
	while(outer<=5){

		int inner = 5;
		while(inner>=outer){

			if(outer==1 || inner==5)
				printf("* ");
			else
				printf("= ");
			inner--;
		}
		printf("\n");
		outer++;
	}

}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-21 July 2020(Nested While Loop)$ ./a.out 
* * * * * 
* = = = 
* = = 
* = 
* 

*/
