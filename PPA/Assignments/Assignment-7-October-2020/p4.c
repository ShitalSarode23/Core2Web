
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
	printf("Multiplication: \n");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			arr2[i][j] = 0;
			for(int k = 0;k<3;k++){
			*(*(arr2+i)+j) += *(*(arr+i)+k)**(*(arr1+k)+j);
			}
		}
	}
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			printf("%d ",*(*(arr2+i)+j));
		}
		printf("\n");
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ vim p4.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ cc p4.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ ./a.out 
Array1: 
1 2 3
4 5 6
7 8 9
Array2: 
1 2 3
4 5 6
7 8 9
Multiplication: 
30 36 42 
66 81 96 
102 126 150 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ 


*/
