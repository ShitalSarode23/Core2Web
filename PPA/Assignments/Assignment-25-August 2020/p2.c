
#include<stdio.h>
void main(){

	int num,sum = 0;
	scanf("%d",&num);
	for(int i = 1;i<=num;i++){

		sum +=i;
	}
	printf("The sum number up to %d:%d\n",num,sum);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-25-August 2020$ ./a.out 
10
The sum number up to 10:55
*/
