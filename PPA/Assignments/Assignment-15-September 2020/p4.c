

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
	printf("Elements in ascending order : ");	
	for(int i = 0;i<len;i++){

		for(int j = i+1;j<len;j++){

			if(arrNum[i]>arrNum[j]){

				int temp = arrNum[i];
				arrNum[i] = arrNum[j];
				arrNum[j] = temp;
			}
		}
	}
	for(int k = 0;k<len;k++){

		printf("%d ",arrNum[k]);
	}
	printf("\n");
}/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-15-September 2020$ ./a.out 
Enter the length of an array:5
Enter elements in an array
13 5 64 42 23
Elements in ascending order : 5 13 23 42 64 

*/
