
#include<stdio.h>
void main(){


	int m,n;
	printf("Enter Size:");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(int i = 0;i<m;i++){

		for(int j = 0;j<n;j++){

			scanf("%d",&*(*(arr+i)+j));
		}
	}
	int flag = 0;
	for(int i = 0;i<m;i++){

		for(int j = i+1;j<n;j++){
			if(arr[i][j] != 0)
				flag = 1;
		}
	}
	if(flag == 0)
		printf("Matrix is Lower Triangular\n");
	else
		printf("Matrix is not Lower Triangular\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-6 Octomber 2020$ ./a.out 
Enter Size:3 3
1 0 0
2 3 0
4 5 6
Matrix is Lower Triangular
shital@sarode:~/Desktop/PPA/Assignments/Assignment-6 Octomber 2020$ ./a.out 
Enter Size:3 3
1 2 0
3 4 0 
5 6 7
Matrix is not Lower Triangular

*/
