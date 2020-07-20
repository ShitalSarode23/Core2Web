

#include<stdio.h>

void main(){

	int x = 7;

	printf("goto statement\n");

	goodmornig:
		printf("Good Morning!!!\n");
		printf("Have a nice day\n");
		x--;

	if(x>5)
		goto goodmornig;

}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-17July 2020(goto statement)$ ./a.out 
goto statement
Good Morning!!!
Have a nice day
Good Morning!!!
Have a nice day
*/
