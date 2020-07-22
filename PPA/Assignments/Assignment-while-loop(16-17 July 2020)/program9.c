

#include<stdio.h>

void main(){

	int n,i=0;
	printf("Enter number of days to comple the assignment :");
	scanf("%d",&n);

	while(n>=0){

		if(n==0)
			printf("%d days assignment is overdue\n",n);
		else
			printf("%d days remaining\n",n);
		n--;
	}

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-while-loop$ ./a.out 
Enter number of days to comple the assignment :7
7 days remaining
6 days remaining
5 days remaining
4 days remaining
3 days remaining
2 days remaining
1 days remaining
0 days assignment is overdue
*/
