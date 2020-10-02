
#include<stdio.h>
void main(){

	int size;
	printf("Enter size: ");
	scanf("%d",&size);
	int arr1[size],arr2[size];
	int *ptr1 = arr1;
	int *ptr2 = arr2;
	for(int i = 0;i<size;i++){
		scanf("%d",arr1+i);
	}
	for(int i = 0;i<size;i++){
		scanf("%d",arr2+i);
	}
	int arr3[size];
	int *ptr3 = arr3;
	for(int i = 0;i<5;i++){
		*(ptr3+i) = *(ptr1+i)+*(ptr2+i);
	}
	for(int i = 0;i<5;i++)
		printf("%d ",*(ptr3+i));
	printf("\n");

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-1-Octomber-2020$ ./a.out 
Enter size: 5
1 2 3 4 5
5 6 7 8 9
6 8 10 12 14 

*/
