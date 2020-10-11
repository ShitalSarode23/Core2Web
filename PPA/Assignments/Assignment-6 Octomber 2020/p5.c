
#include<stdio.h>
void main(){

	int arr[3][3];
	for(int i = 0;i<3;i++){

		for(int j = 0;j<3;j++){

			scanf("%d",&*(*(arr+i)+j));
		}
	}
	int arr1[3][3];
	for(int i = 0;i<3;i++){

		for(int j = 0;j<3;j++){

			if(*(*(arr+i)+j) %2 ==0)
				*(*(arr1+i)+j) = (*(*(arr+i))+j)*(*(*(arr+i))+j);
			else
				*(*(arr1+i)+j) = (*(*(arr+i))+j)*(*(*(arr+i))+j)*(*(*(arr+i))+j);
		}
	}
	printf("Array :\n");
	for(int i = 0;i<3;i++){

		for(int j = 0;j<3;j++){

			printf("%3d ",*(*(arr1+i)+j));
		}
		printf("\n");
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-6 Octomber 2020$ cc p5.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-6 Octomber 2020$ ./a.out 
1 2 3
4 5 6
3 2 1
Array :
  1   4  27 
 16 125  36 
 27  16 125 

*/
