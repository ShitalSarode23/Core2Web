
#include<stdio.h>
void main(){

	int arr[2][3][3];
	printf("Array: \n");
	for(int i = 0;i<2;i++){
		for(int j = 0;j<3;j++){
			for(int k = 0;k<3;k++)
				scanf("%d",&*(*(*(arr+i)+j)+k));
		}
	}
	int arr1[3][3];
	int arr2[3][3];
	for(int i = 0;i<2;i++){
		for(int j = 0;j<3;j++){
			for(int k = 0;k<3;k++){
				if(i == 0){
					*(*(arr1+j)+k) = *(*(*(arr+i)+j)+k);
				}
				else
					*(*(arr2+j)+k) = *(*(*(arr+i)+j)+k);
			}
		}
	}
	printf("Array1: \n");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			printf("%d ",*(*(arr1+i)+j));
		}
		printf("\n");
	}
	printf("Array2: \n");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			printf("%d ",*(*(arr2+i)+j));
		}
		printf("\n");
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ cc p5.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ ./a.out 
Array: 
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
Array1: 
1 2 3 
4 5 6 
7 8 9 
Array2: 
1 2 3 
4 5 6 
7 8 9 

*/
