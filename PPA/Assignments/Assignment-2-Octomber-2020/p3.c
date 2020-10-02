
#include<stdio.h>
void main(){

	int s1;
	printf("Enter length of an array: ");
	scanf("%d",&s1);
	int arr1[s1],arr2[s1];
	printf("arr1: ");
	for(int i = 0;i<s1;i++)
		scanf("%d",arr1+i);
	printf("arr2: ");
	for(int i = 0;i<s1;i++)
		scanf("%d",arr2+i);
	int flag = 0;
	for(int i = 0;i<s1;i++){

		if(*(arr1+i) != *(arr2+i))
			flag = 1;
	}
	if(flag == 0)
		printf("Both array are equal\n");
	else
		printf("Both array are not equal\n");
	
}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-Octomber-2020$ ./a.out 
Enter length of an array: 5
arr1: 2 5 1 7 3
arr2: 2 5 1 7 3
Both array are equal
shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-Octomber-2020$ ./a.out 
Enter length of an array: 3
arr1: 2 7 9
arr2: 2 7 8
Both array are not equal
*/
