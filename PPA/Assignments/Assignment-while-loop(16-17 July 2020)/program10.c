
#include<stdio.h>

void main(){

	int n1,n2,i=1;
	printf("Enter lower bound of range  :");
	scanf("%d",&n1);
	printf("Enter upper bound of range  :");
	scanf("%d",&n2);

	while(n1<=n2){

		if(n1%2==0)
			printf("%d ",n1*n1);
		else
			printf("%d ",n1*n1*n1);
		n1++;

	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-while-loop$ ./a.out 
Enter lower bound of range  :1
Enter upper bound of range  :5
1 4 27 16 125
*/
