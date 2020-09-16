

#include<stdio.h>
void main(){

	int arr1[5] = {1,2,3,4,5};
	int arr2[5];

	for(int i=0;i<5;i++){
		arr2[i] = arr1[i];
		printf("%d ",arr2[i]);
	}
	printf("\n");
	/*
	int flag = 0;
	for(int i=0;i<5;i++){
		if(arr2[i] == arr1[i])
			flag = 1;
		else{
			flag = 0;
			break;
		}
	}
	if(flag == 1)
		printf("Same\n");
		*/
}/*
shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-15 September 2020$ ./a.out 
1 2 3 4 5 
*/
