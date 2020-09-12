
#include<stdio.h>
void main(){

	int size,sum = 0;
	printf("Enter Size of an array:");
	scanf("%d",&size);
	int numArray[size];
	printf("Enter numbers:");
	for(int i = 1;i<=size;i++){

		scanf("%d",&numArray[i]);
	}
	for(int i = 1;i<=size;i++){

		sum += numArray[i];
	}
	printf("Sum = %d\n",sum);

}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-11 September 2020(Array-2)$ ./a.out 
Enter Size of an array:10
Enter numbers:
1
2
3
4
5
6
7
8
9
10
Sum = 55

*/
