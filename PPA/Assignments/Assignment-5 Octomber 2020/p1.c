
#include<stdio.h>
void main(){

	int m,n;
	printf("Enter rows & columns: ");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++)
			scanf("%d",&arr[i][j]);
	}
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int sum = 0;
	printf("Main diadonal elements: ");
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			if(i == j){
				printf("%d ",*(*(arr+i)+j));
				sum += *(*(arr+i)+j);
			}
		}
	}
	printf("\n");
	printf("Main diagonal elements addition is:%d\n",sum);
	if(sum % 2 == 0){

		printf("Transpose Matrix:\n");
		for(int i = 0;i<m;i++){
			for(int j = 0;j<n;j++){
				printf("%d ",*(*(arr+j)+i));
			}	
		printf("\n");
	}

	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-5 Octomber 2020$ ./a.out 
Enter rows & columns: 3 3
12
14   
16
21
24
26
06
18
10
12 14 16 
21 24 26 
6 18 10 
Main diadonal elements: 12 24 10 
Main diagonal elements addition is:46
Transpose Matrix:
12 21 6 
14 24 18 
16 26 10 
*/
