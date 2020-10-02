
#include<stdio.h>
void main(){

	int arr[5];
	for(int i = 0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	int sum = 0;
	for(int i = 0;i<5;i++){
		sum += *(arr+i);
		printf("%d  ",*(arr+i));
	}
	printf("\nSum = %d\n",sum);

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-1-Octomber-2020$ ./a.out 
9  
8
7
6
5
9  8  7  6  5  
Sum = 35
*/
