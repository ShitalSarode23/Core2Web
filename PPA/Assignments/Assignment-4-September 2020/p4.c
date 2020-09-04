
#include<stdio.h>
void main(){

	int row;
	printf("Enter number of rows:");
        scanf("%d",&row);
	int j = 1;
	int c = row-1;
	int n = c;
	for(int i = 1;i<=row;){

		if(j<=i){

			printf("%d ",n);
			j++;
			n++;
			continue;
		}
		else{

			printf("\n");
			i++;
			j = 1;
			c = c-1;
			n = c;
		}
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-4-September 2020$ ./a.out 
Enter number of rows:4
3 
2 3 
1 2 3 
0 1 2 3 
*/
