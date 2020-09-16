

#include<stdio.h>
void main(){

	int arr1[3] = {1,2,3};
	int arr2[3] = {1,2,3};

	if(arr2[0] == arr1[0] && arr2[1] == arr1[1] && arr2[2] == arr1[2])
		printf("Same\n");
	else
		printf("Different\n");
}
/*shital@sarode:~/Desktop/PPA/Daily Codes/DailyCodes-15 September 2020$ ./a.out 
Same
*/
