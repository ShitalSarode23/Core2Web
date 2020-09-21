
#include<stdio.h>
void main(){

	int len;
	printf("Enter length :");
	scanf("%d",&len);
	char carr[len];
	printf("Enter characters in array to print pattern:");
	for(int i = 0;i<len;i++){

		scanf(" %c",&carr[i]);
	}
	for(int i = 0;i<len;i++){

		for(int j = 0;j<=i;j++){

			printf("%c ",carr[j]);
		}
		printf("\n");
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-21-September 2020$ ./a.out 
Enter length :6
Enter characters in array to print pattern:SHITAL
S 
S H 
S H I 
S H I T 
S H I T A 
S H I T A L 
*/
