
#include<stdio.h>
void main(){

	int len;
	printf("Enter length of an array: ");
	scanf("%d",&len);
	int arr[len];
	int temp;
	printf("Array elements: ");
	for(int i = 0;i<len;i++){

		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<len/2;i++){

		temp = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = temp;
	}
	for(int i = 0;i<len;i++){

		printf("%d ",arr[i]);
	}
	printf("\n");


}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-21-September 2020$ ./a.out 
Enter length of an array: 6
Array elements: 3 61 23 9 87 0
0 87 9 23 61 3 

*/
