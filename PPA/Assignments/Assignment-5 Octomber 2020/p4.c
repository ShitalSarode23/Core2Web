
#include<stdio.h>
void main(){

	int arr[3][3];
	printf("Enter array element:");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++)
			scanf("%d",&*(*(arr+i)+j));
	}
	printf("Prime numbers: ");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			int flag = 0;
			for(int k = 2;k<(*(*(arr+i)+j))/2;k++){

				if(*(*(arr+i)+j) % k == 0){
					flag = 1;
					break;
				}
			}
			if(flag == 0 && *(*(arr+i)+j) > 1)
				printf("%d ",*(*(arr+i)+j));
		}
	}
	printf("\n");

}
/*
hital@sarode:~/Desktop/PPA/Assignments/Assignment-5 Octomber 2020$ ./a.out 
Enter array element:
1 2 3
4 5 6
7 8 9
Prime numbers: 2 3 4 5 7 

*/
