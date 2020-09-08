
#include<stdio.h>
void main(){

	int num;
	printf("Enter limiting factor to print perfect numbers:");
	scanf("%d",&num);
	for(int i = 1;i<=100;i++){

		int sum = 0;
		for(int j = 1;j<i;j++){

			if(i % j == 0)
				sum += j;
		}
		if(sum == i)
			printf("%d ",i);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-8 September 2020$ ./a.out 
Enter limiting factor to print perfect numbers:100
6 28 
*/
