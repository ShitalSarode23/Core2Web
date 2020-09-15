

#include<stdio.h>
void main(){

	int len;
	printf("Enter the length of an array:");
	scanf("%d",&len);
	char arrChar[len];
	printf("Enter characters in an array\n");
	for(int i = 0;i<len;i++){

		scanf(" %c",&arrChar[i]);
	}
	printf("Elements in an array:");
	for(int i = 0;i<len;i++){

		if(arrChar[i]<97)
			printf("%c ",arrChar[i]+32);
		else
			printf("%c ",arrChar[i]);
	}
	printf("\n");
}/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-15-September 2020$ ./a.out 
Enter the length of an array:5
Enter characters in an array
A
s
K
L
n
Elements in an array:a s k l n 

*/
