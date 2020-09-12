
#include<stdio.h>
void main(){

	int size;
	printf("Enter Size of an array:");
	scanf("%d",&size);
	int stud_age[size];
	for(int i = 1;i<=size;i++){

		scanf("%d",&stud_age[i]);
	}
	for(int i = 1;i<=size;i++){

		printf("%d ",stud_age[i]);
	}
	printf("\n");

}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-11 September 2020(Array-2)$ ./a.out 
Enter Size of an array:5
21
22
23
22
24
21 22 23 22 24 
*/
