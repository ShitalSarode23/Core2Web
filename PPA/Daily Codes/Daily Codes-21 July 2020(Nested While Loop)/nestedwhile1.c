

#include<stdio.h>

void main(){

	int outer = 1;
	int x = 1;
	char ch = 'A';
	while(outer<=5){

		int inner = 5;
		while(inner>=outer){

			if(inner%2!=0)
				printf("%c\t",ch);
			else
				printf("%d\t",x);
			inner--;
			ch++;
			x++;
		}
		printf("\n");
		outer++;
	}
}
/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-21 July 2020(Nested While Loop)$ ./a.out 
A 2 C 4 E 
F 7 H 9 
J 11 L 
M 14 
O 
*/
