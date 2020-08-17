#include<stdio.h>
void main(){

	int j = 1;
	for(int i = 1;i<=4;){

		if(j<=4){
			printf("* ");
			j++;
			continue;
		}
		if(j>4){
			printf("\n");
			i++;
			j = 1;
		}
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment17-August-2020$ ./a.out 
* * * * 
* * * * 
* * * * 
* * * * 

*/
