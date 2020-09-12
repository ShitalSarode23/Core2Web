
#include<stdio.h>
void main(){

	int size;
	printf("Enter Size of an array:");
	scanf("%d",&size);
	int numArray[size];
	printf("Enter numbers:");
	for(int i = 1;i<=size;i++){

		scanf("%d",&numArray[i]);
	}
	for(int i = 1;i<=size;i++){

		if(numArray[i] % 2 == 0)
			printf("%d ",numArray[i]);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-11 September 2020(Array-2)$ ./a.out 
Enter Size of an array:5
Enter numbers:
12
35
68
79
52
12 68 52 

*/
