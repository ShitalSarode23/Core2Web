
#include<stdio.h>
void main(){

	int row;
	printf("Enter number of rows:");
	scanf("%d",&row);
	int j = 1;
	for(int i = 1;i<=row;){

		if(j<=row+1-i){

			if(j % 2 == 0)
				printf("= ");
			else
				printf("+ ");
			j++;
			continue;
		}
		else{

			printf("\n");
			i++;
			j = 1;
		}
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-9 September 2020$ ./a.out 
Enter number of rows:4
+ = + = 
+ = + 
+ = 
+ 
*/
