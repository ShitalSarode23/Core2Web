
#include<stdio.h>
void main(){

	int len;
	printf("Enter length of an array: ");
	scanf("%d",&len);
	int arr[len];
	int arr1[len];
	int arr2[len];
	printf("First Array Elements: ");
	for(int i = 0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	printf("Second Array Elements: ");
	for(int i = 0;i<len;i++){
		scanf("%d",&arr1[i]);
	}
	for(int i = 0;i<len;i++){
	
		int max = 0;
		if(arr1[i] % arr[i] == 0){

			if(arr[i]>arr1[i])
				max = arr[i];
			else
				max = arr1[i];
			int fact = 1;
			for(int k = max;k>=1;k--){

				fact *=k; 
			}
			arr2[i] = fact;
		}
		else{

			if(arr[i]<arr1[i])
				arr2[i] = arr[i];
			else
				arr2[i] = arr1[i];
		}
	}
	printf("Third Array Elements are: ");
	for(int i = 0;i<len;i++){
		printf("%d ",arr2[i]);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-21-September 2020$ ./a.out 
Enter length of an array: 4
First Array Elements: 2 2 1 8
Second Array Elements: 4 7 8 12
Third Array Elements are: 24 2 40320 8 

*/
