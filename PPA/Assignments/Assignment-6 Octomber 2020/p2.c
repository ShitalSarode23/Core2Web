
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
	for(int i = 0;i<m;i++){

		float avg ;
		int sum = 0;
		for(int j = 0;j<n;j++){

			sum += *(*(arr+i)+j);
		}
		avg = (float)sum/(float)n;
		printf("Average of row %d:%.2f\n",i,avg);
	}
	for(int i = 0;i<n;i++){

		float avgc ;
		int sumc = 0;
		for(int j = 0;j<m;j++){

			sumc += *(*(arr+j)+i);
		}
		avgc = (float)sumc/(float)m;
		printf("Average of column %d:%.2f\n",i,avgc);
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-6 Octomber 2020$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-6 Octomber 2020$ ./a.out 
Enter Size:3 4
1 2 3 4
5 6 7 8
9 10 11 12
Average of row 0:2.50
Average of row 1:6.50
Average of row 2:10.50
Average of column 0:5.00
Average of column 1:6.00
Average of column 2:7.00
Average of column 3:8.00

*/
