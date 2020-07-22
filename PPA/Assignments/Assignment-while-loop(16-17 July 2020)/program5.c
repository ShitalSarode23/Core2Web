

#include<stdio.h>

void main(){

	int i=1;
	int c=0;
	while(i<=50){

		if(i%2==0 && i%5==0){
			printf("%d ",i);
			c++;
		}
		i++;
	}
	printf("\nThere are %d even numbers divisible by 5 from 1 to 50\n",c);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-while-loop$ ./a.out 
10 20 30 40 50 
There are 5 even numbers divisible by 5 from 1 to 50
*/
