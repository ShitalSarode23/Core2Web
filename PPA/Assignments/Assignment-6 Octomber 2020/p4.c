
#include<stdio.h>
void main(){

	int arr[3][3];
	for(int i = 0;i<3;i++){

		for(int j = 0;j<3;j++){

			scanf("%d",&*(*(arr+i)+j));
		}
	}
	int arr2[3];
	for(int i = 0;i<3;i++){

		for(int j = 0;j<3;j++){

			if(i == j){

				arr2[i] = arr[i][j]*arr[i][j];
			}
		}
	}
	printf("Array:\n");
	for(int i = 0;i<3;i++){

		for(int j = 0;j<3;j++){

			printf("%d ",*(*(arr+i)+j));
		}
		printf("\n");
	}
	printf("Array2: ");
	for(int i = 0;i<3;i++){

		printf("%d ",*(arr2+i));
	}
	printf("\n");


}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-6 Octomber 2020$ cc p4.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-6 Octomber 2020$ ./a.out 
1
2
3
4
5
6
7
8
9
Array:
1 2 3 
4 5 6 
7 8 9 
Array2: 1 25 81 

*/
