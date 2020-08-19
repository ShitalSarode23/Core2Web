
#include<stdio.h>
void main(){

	int row,j = 1;
	printf("Enter number of rows :");
	scanf("%d",&row);
	for(int i = 1;i <=row;){
		if(j<=row){
			printf("%d ",j++);
			continue;
		}
		else{

			printf("\n");
			i++;
			j = 1;
		}

	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-19 August 2020$ ./a.out 
Enter number of rows :4
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
*/
