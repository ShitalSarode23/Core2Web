
#include<stdio.h>
void main(){

	int s1;
	printf("Enter length of an array: ");
	scanf("%d",&s1);
	int arr1[s1];
	printf("arr1: ");
	for(int i = 0;i<s1;i++)
		scanf("%d",arr1+i);
	for(int i = 0;i<s1;i++){

		if(*(arr1+i)%2 == 0)
			printf("%d ",*(arr1+i));
	}
	printf("\n");
	
}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-Octomber-2020$ ./a.out 
Enter length of an array: 5
arr1: 23 12  56 277 122
12 56 122 

*/
