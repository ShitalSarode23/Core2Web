

#include<stdio.h>

void main(){

	int n,i=1;
	scanf("%d",&n);

	if(n%2==0){

		while(n>0){
			printf("%d ",n);
			n = n-1;
		}
	}
	else{
		while(n>0){
			printf("%d ",n);
			n=n-2;
		}
	}
	
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-while-loop$ ./a.out 
6
6 5 4 3 2 1 shital@sarode:~/Desktop/PPA/Assignments/Assignment-while-loop$ ./a.out 
7
7 5 3 1
*/
