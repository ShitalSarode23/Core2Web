
#include<stdio.h>
void main(){

	int sum = 0;
	float avg;
	for(int i = 1;i<=10;i++){

		scanf("%d",&i);
		sum +=i;
	}
	avg = (float)sum / 10;
	printf("The sum of 10 entered number is :%d\n",sum);
	printf("Average of 10 entered number is :%.2f\n",avg);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-25-August 2020$ ./a.out 
1 2 3 4 5 6 7 8  9 10
The sum of 10 entered number is :55
Average of 10 entered number is :5.50

*/
