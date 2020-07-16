

#include<stdio.h>

void main(){

	int min,hr,min1;

	scanf("%d",&min);

	if(min>60){
		hr=min/60;
		min1=min%60;
	}
	printf("%d Hours,%d Minutes\n",hr,min1);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
452
7 Hours,32 Minutes
*/
