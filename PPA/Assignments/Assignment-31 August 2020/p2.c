#include<stdio.h>
void main(){

	for(int i = 1;i<=100;i++){

		if(i % 4 == 0 && i % 7 == 0)
			printf("%d ",i);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-31 August 2020$ ./a.out 
28 56 84 

*/
