
#include<stdio.h>
void main(){

	int arr[3][3];
	printf("Array1: \n");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			scanf("%d",&*(*(arr+i)+j));
		}
	}
	int arr1[3][3];
	printf("Array2: \n");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			scanf("%d",&*(*(arr1+i)+j));
		}
	}
	int arr2[3][3];
	printf("Addition: \n");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			*(*(arr2+i)+j)= *(*(arr+i)+j)+*(*(arr1+i)+j);
			printf("%d ",*(*(arr2+i)+j));
		}
		printf("\n");
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ ./a.out 
Array1: 
1 2 3
3 4 5
6 1 2
Array2: 
2 3 4
5 1 1
7 2 2
Addition: 
3 5 7 
8 5 6 
13 3 4 

*/
