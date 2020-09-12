
#include<stdio.h>
void main(){

	int size,max = 0;
	printf("Enter Size of an array:");
	scanf("%d",&size);
	int numArray[size];
	printf("Enter numbers:");
	for(int i = 1;i<=size;i++){

		scanf("%d",&numArray[i]);
	}
	for(int i = 1;i<=size;i++){

		if(numArray[i]>max)
			max = numArray[i];
	}
	printf("Maximum number in an array = %d\n",max);

}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-11 September 2020(Array-2)$ ./a.out 
Enter Size of an array:5
Enter numbers:
14
7
35
78
2
Maximum number in an array = 78

*/
