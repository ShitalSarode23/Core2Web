
#include<stdio.h>
void main(){

	int arr[3][3];
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			scanf("%d",&*(*(arr+i)+j));
		}
	}
	for(int i = 0;i<3;i++){
		int sum = 0;
		for(int j = 0;j<3;j++){
			sum += *(*(arr+i)+j);
			printf("%d ",*(*(arr+i)+j));
		}
		printf("Addition is %d\n",sum);
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ cc p1.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-7-October-2020$ ./a.out 
1 2 3
4 4 6  
7 8 9
1 2 3 Addition is 6
4 4 6 Addition is 14
7 8 9 Addition is 24
*/
