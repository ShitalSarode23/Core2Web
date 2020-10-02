
#include<stdio.h>
void main(){

	int s1;
	printf("Enter length of an array: ");
	scanf("%d",&s1);
	int arr1[s1],arr2[s1];
	int *ptr1 = arr1;
	int *ptr2 = arr2;
	printf("arr1: ");
	for(int i = 0;i<s1;i++)
		scanf("%d",arr1+i);
	for(int i = 0;i<s1;i++){

		if(*(ptr1+i) % 2 != 0)
			*(ptr2+i) = *(ptr1+i);
	}
	printf("first array:");
	for(int i = 0;i<s1;i++)
		printf("%d ",*(arr1+i));
	printf("\nSecond array:");
	for(int i = 0;i<s1;i++){
	
		if(*(ptr2+i)==0)
			continue;
		printf("%d ",*(ptr2+i));
	}
	printf("\n");
	
}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-Octomber-2020$ ./a.out 
Enter length of an array: 5
arr1: 1 2 3 4 5
first array:1 2 3 4 5 
Second array:1 3 5 

*/
