
#include<stdio.h>
void main(){


	int j = 1;
	for(int i = 1;i<= 4;){

		if(j<=i){

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
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-26-August-2020$ ./a.out 
0 
0 0 
0 0 0 
0 0 0 0 
*/
