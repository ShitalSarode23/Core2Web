
#include<stdio.h>
void main(){

	int num;
	printf("Enter number to print its table:");
	scanf("%d",&num);
	for(int i = 1;i<= 10;i++){

		printf("%d ",i*num);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-26-August-2020$ ./a.out 
Enter number to print its table:4
4 8 12 16 20 24 28 32 36 40 

*/
