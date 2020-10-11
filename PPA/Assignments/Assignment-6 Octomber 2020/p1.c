
#include<stdio.h>
void main(){

	int arr[3][3];
	for(int i = 0;i<3;i++){

		for(int j = 0;j<3;j++){

			scanf("%d",&*(*(arr+i)+j));
		}
	}
	int flag1 = 0,flag0 = 0;
	for(int i = 0;i<3;i++){

		for(int j = 0;j<3;j++){

			if(i == j){

				if(*(*(arr+i)+j) != 1)
					flag1 = 1;
			}
			else{

				if(*(*(arr+i)+j) != 0)
					flag0 = 1;
			}
		}
	}
	if(flag0 == 0 && flag1 == 0)
		printf("Given matrix is Identity matrix\n");
	else
		printf("Given matrix is not an Identity matrix\n");


}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-6 Octomber 2020$ ./a.out 
1 0 0
0 1 0
0 0 1
Given matrix is Identity matrix
shital@sarode:~/Desktop/PPA/Assignments/Assignment-6 Octomber 2020$ ./a.out 
1 2 0
0 1 0
0 0 1
Given matrix is not an Identity matrix
*/
