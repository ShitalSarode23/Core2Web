
#include<stdio.h>
void main(){

	int arr[3][3];
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			scanf("%d",&*(*(arr+i)+j));
		}
	}
	int arr1[3][3];
	printf("Transpose:\n");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			*(*(arr1+i)+j)= *(*(arr+j)+i);
			printf("%d ",*(*(arr1+i)+j));
		}
		printf("\n");
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-8-October-2020$ vim p1.c
shital@sarode:~/Desktop/PPA/Assignments/Assignment-8-October-2020$ cc p1.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-8-October-2020$ ./a.out 
1 2 3
4 5 6
7 8 9
Transpose:
1 4 7 
2 5 8 
3 6 9 

*/
