
#include<stdio.h>
void main(){

	int row;
	printf("Enter number of rows : ");
	scanf("%d",&row);
	char ch = 'a',ch1 = 'E';
	for(int outer = 1;outer<=row;outer++){

		int count = 1;
		for(int space = 1;space<outer;space++){

			printf("  ");
			count++;
		}
		for(int inner = row;inner>=outer;inner--){

			if(count%2==0){
				printf("%c ",ch++);
				count++;
			}
			else{
				printf("%c ",ch1--);
				count++;
			}
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-NestedForLoop-20 July 2020$ ./a.out 
Enter number of rows : 4
E a D b 
  c C d 
    B e 
      f 
*/
