
#include<stdio.h>

void main(){

	int outer = 1;
	int temp = outer;
	while(outer<=5){

		int inner = 5;
		while(inner>=outer){

			if(inner==5 || outer==inner)
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
* = = = * 
* = = * 
* = * 
* * 
* 

*/
