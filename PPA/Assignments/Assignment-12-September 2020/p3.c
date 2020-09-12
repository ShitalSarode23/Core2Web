
#include<stdio.h>
void main(){

	int n;
	double sum = 0,x = n;
	printf("Enter Size of an array:");
	scanf("%d",&n);
	int arrNum[n];
	for(int i = 1;i<=n;i++){

		scanf("%d",&arrNum[i]);
	}
	for(int i = 1;i<=n;i++){

		sum += arrNum[i];
	}
	printf("Mean = %lf\n",sum/n);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-September 2020$ ./a.out 
Enter Size of an array:7
12
34
56
75
43
21
6
Mean = 35.285714

*/
