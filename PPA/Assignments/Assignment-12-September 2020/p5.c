
#include<stdio.h>
void main(){

	int n;
	printf("Enter Size of an array:");
	scanf("%d",&n);
	int arrNum[n];
	for(int i = 1;i<=n;i++){

		scanf("%d",&arrNum[i]);
	}
	printf("Numbers divisible by 5 are:");
	for(int i = 1;i<=n;i++){

		if(arrNum[i] % 5 == 0)
			printf("%d ",arrNum[i]);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-September 2020$ ./a.out 
Enter Size of an array:5
34
45
5
13
70
Numbers divisible by 5 are:45 5 70 

*/
