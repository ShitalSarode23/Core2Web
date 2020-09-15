

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
	printf("Elements in an array:");
	for(int i = 0;i<len;i++){

		printf("%d ",arrNum[i]);
	}
	printf("\nSize = %ld\n",sizeof(arrNum));
	printf("Address = %p\n",arrNum);
}/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-15-September 2020$ ./a.out 
Enter the length of an array:5
Enter elements in an array
10
20
30
40
50
Elements in an array:10 20 30 40 50 
Size = 20
Address = 0x7ffc642bf360
*/
