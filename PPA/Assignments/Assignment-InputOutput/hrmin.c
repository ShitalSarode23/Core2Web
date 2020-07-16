

#include<stdio.h>

void main(){

	int hr;
	int min,sum;

	printf("Enter Hours:");
	scanf("%d",&hr);

	printf("Enter minutes:");
	scanf("%d",&min);

	sum = hr*60+min;

	printf("Total Minutes :%d minutes\n",sum);
}

/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
Enter Hours:2
Enter minutes:30
Total Minutes :150 minutes
*/
