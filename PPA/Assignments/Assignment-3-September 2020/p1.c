
#include<stdio.h>
void main(){

	int num;
	printf("Enter number to check whether it is perfect number or not:");
	scanf("%d",&num);
	int sum = 0;
	for(int i = 1;i<num;i++){

		if(num % i == 0)
			sum += i;
	}
	if(sum == num)
		printf("%d is a Perfect number\n",num);
	else
		printf("%d is not a Perfect number\n",num);
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-3-September 2020$ ./a.out 
Enter number to check whether it is perfect number or not:6
6 is a Perfect number
*/
