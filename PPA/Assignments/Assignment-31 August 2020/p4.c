
#include<stdio.h>
void main(){

	int j = 1;
	for(int i = 1;i<=5;){

		if(j<=i){

			if(i % 2 == 0)
				printf("1 ");
			else
				printf("0 ");
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
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-31 August 2020$ ./a.out 
0 
1 1 
0 0 0 
1 1 1 1 
0 0 0 0 0 
*/
