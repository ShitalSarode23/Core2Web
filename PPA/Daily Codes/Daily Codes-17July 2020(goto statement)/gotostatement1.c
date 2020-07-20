

#include<stdio.h>

void main(){

	printf("goto statement\n");

	goto goodafternoon;

	printf("After goto statement\n");		//Never going to execute

	goodafternoon:
		printf("Good Afternoon\n");



}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-17July 2020(goto statement)$ ./a.out 
goto statement
Good Afternoon
*/
