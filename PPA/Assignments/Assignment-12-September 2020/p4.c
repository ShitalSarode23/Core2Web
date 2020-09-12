
#include<stdio.h>
void main(){

	int n;
	printf("Enter Size of array:");
	scanf("%d",&n);
	int arrNum[n];
	for(int i = 1;i<=n;i++){

		scanf("%d",&arrNum[i]);
	}
	printf("Numbers in an array:");
	for(int i = 1;i<=n;i++){

		printf("%d ",arrNum[i]);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-September 2020$ cc p4.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-September 2020$ ./a.out 
Enter Size of array:5
12
43
5
61
22
Numbers in an array:12 43 5 61 22
*/
