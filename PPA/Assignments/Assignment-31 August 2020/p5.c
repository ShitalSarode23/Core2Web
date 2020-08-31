#include<stdio.h>
void main(){

	int num;
	printf("Enter number to find its perferct divisors:");
	scanf("%d",&num);
	for(int i = 1;i<num;i++){

		if(num % i == 0)
			printf("%d ",i);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-31 August 2020$ ./a.out 
Enter number to find its perferct divisors:24
1 2 3 4 6 8 12 
*/
