

#include<stdio.h>

void main(){

	int n;

	scanf("%d",&n);

	if(n>=2){
		if(n==2)
			printf("%d is a prime number\n",n);
		else if(n%2!=0)
			printf("%d is a prime number\n",n);
		else
			printf("Not a prime number\n");
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
5
5 is a prime number
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
2
2 is a prime number
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
8
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ vim prime.c
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ cc prime.c
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
5
5 is a prime number
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
2
2 is a prime number
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
8
Not a prime number
*/
