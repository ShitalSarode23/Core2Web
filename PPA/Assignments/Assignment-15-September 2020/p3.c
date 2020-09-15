

#include<stdio.h>
void main(){

	int len;
	printf("Enter the length of an array:");
	scanf("%d",&len);
	int arrNum[len];
	printf("Enter elements in an array : ");
	for(int i = 0;i<len;i++){

		scanf("%d",&arrNum[i]);
	}
	int c = 0;
	for(int i = 0;i<len;i++){

		int rem;
		while(arrNum[i]!=0){

			rem = arrNum[i] % 10;
			if(rem == 1)
				c++;
			arrNum[i] /= 10;
		}
	}
	printf("Occurance of 1`s in array:%d\n",c);
}/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-15-September 2020$ ./a.out 
Enter the length of an array:9
Enter elements in an array : 121 3 45 21 61 11 12 22 4
Occurance of 1`s in array:7

*/
