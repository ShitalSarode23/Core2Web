

#include<stdio.h>
void main(){

	int len;
	printf("Enter the length of an array:");
	scanf("%d",&len);
	int arrNum[len];
	printf("Enter elements in an array\n");		
	for(int i = 0;i<len;i++){

		scanf("%d",&arrNum[i]);
	}
	printf("Elements in reverse order : ");	
	for(int k = len-1;k>=0;k--){

		printf("%d ",arrNum[k]);
	}
	printf("\n");
}/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-15-September 2020$ ./a.out 
Enter the length of an array:4   
Enter elements in an array
56 63 74 60
Elements in reverse order : 60 74 63 56 
*/
