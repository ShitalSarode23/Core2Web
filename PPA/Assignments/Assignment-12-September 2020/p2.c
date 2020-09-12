
#include<stdio.h>
void main(){

	int n;
	printf("Enter Size of array:");
	scanf("%d",&n);
	int arrNum[n];
	for(int i = 1;i<=n;i++){

		scanf("%d",&arrNum[i]);
	}
	printf("Prime numbers:");
	for(int i = 1;i<=n;i++){

		int flag = 0;
		for(int j = 2;j<arrNum[i];j++){

			if(arrNum[i] % j == 0){

				flag = 1;
				break;
			}
		}
		if(flag == 0)
			printf("%d ",arrNum[i]);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-September 2020$ ./a.out 
Enter Size of array:8
2
4
7
16
11
43
17
76
Prime numbers:2 7 11 43 17 
*/
