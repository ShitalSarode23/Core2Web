

#include<stdio.h>

void main(){

	int outer = 1;
	while(outer<=5){

		int inner = 1;
		while(inner<=outer){

			if(outer%2==0)
				printf("= ");
			else
				printf("* ");
			inner++;
		}
		printf("\n");
		outer++;
	}


}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-21 July 2020(Nested While Loop)$ ./a.out 
* 
= = 
* * * 
= = = = 
* * * * * 
*/
