


#include<stdio.h>
int isNeon(int n){

	int rem,sum = 0;
	int a = n*n;
	while(a!=0){

		rem = a%10;

		sum = sum + rem;

		a = a/10;
	}

	if(sum == n)
		return 1;
	else
		return 0;
}



void main(){

	int n;

	scanf("%d",&n);

	if(isNeon(n))
		printf("%d is a Neon no. \n",n);
	else
		printf("%d is not a Neon no.\n",n);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ cc p3.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ ./a.out 
9
9 is a Neon no. 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ ./a.out 
4
4 is not a Neon no.
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ ./a.out 
54
54 is not a Neon no.

*/	
	

	
