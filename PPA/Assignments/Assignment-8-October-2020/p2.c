
#include<stdio.h>
void main(){

	int arr[5];
	for(int i = 0;i<5;i++)
		scanf("%d",&*(arr+i));
	int *ptr[5];
	for(int i = 0;i<5;i++){

		*(ptr+i) = arr+i;
	}
	for(int i = 0;i<5;i++)
		printf("%d ",*(*(ptr+i)));
	printf("\n");

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-8-October-2020$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-8-October-2020$ ./a.out 
1 2 3 4 5
1 2 3 4 5 
*/
