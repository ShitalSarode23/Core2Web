

#include<stdio.h>

void main(){

	char ch = 'A';
	int i = 1;
	while(i<=5){

		int j = 5;
		while(j>=i){

			printf("%c ",ch);
			ch++;
			j--;
		}
		printf("\n");
		i++;

	}
}

/*
shital@sarode:~/Desktop/PPA/Daily Codes/Daily Codes-21 July 2020(Nested While Loop)$ ./a.out 
A B C D E 
F G H I 
J K L 
M N 
O 
*/
