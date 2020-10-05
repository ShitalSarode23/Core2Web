
#include<stdio.h>
void main(){

	int arr[3][3];
	printf("Enter array element:");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++)
			scanf("%d",&*(*(arr+i)+j));
	}
	printf("Final array:\n");
	for(int i = 0;i<3;i++){
		int temp;
		for(int j = 0;j<3;j++){
			if(j == 0){

				temp = *(*(arr+i)+j);
				*(*(arr+i)+j) = *(*(arr+i)+2);
				*(*(arr+i)+2) = temp;
			}
		}
	}
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++)
			printf("%d ",*(*(arr+i)+j));
		printf("\n");
	}
	printf("\n");

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-5 Octomber 2020$ cc p5.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-5 Octomber 2020$ ./a.out 
Enter array element:
1 2 3
4 5 6
7 8 9
Final array:
3 2 1 
6 5 4 
9 8 7 

*/
