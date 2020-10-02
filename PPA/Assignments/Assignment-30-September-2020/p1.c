#include<stdio.h>
void main(){

	int arr[6] = {1,2,3,4,5,6};
	int *iptr = &arr[6];

	for(int i = 0; i<6; i++){

		iptr = iptr - 1;
		printf("%d ",*iptr);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-30-September-2020$ ./a.out 
6 5 4 3 2 1 
*/
