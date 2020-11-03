


#include<stdio.h>
int isPrime(int n){

	int flag = 0;

	for(int i = 2; i<=n/2; i++){

		if(n%i == 0){
			flag = 1;
			break;
		}
	}

	if(flag == 0)
		return 1;	
	else
		return 0;
}

void main(){

	int arr[] = {1,2,3,4,5,6,7};

	for(int i = 0; i<7; i++){

		if(isPrime(arr[i]))
			printf("%d is a prime no.\n",arr[i]);
		else
			printf("%d is not a prime no.\n",arr[i]);
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ cc p5.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ ./a.out 
1 is a prime no.
2 is a prime no.
3 is a prime no.
4 is not a prime no.
5 is a prime no.
6 is not a prime no.
7 is a prime no.

*/		
	

	

