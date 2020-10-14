
#include<stdio.h>
void main(){


	char arr[] = {'a','G','h'};
	char* cptr[] = {&arr[0],&arr[1],&arr[2]};
	for(int i = 0;i<3;i++){

		if(*cptr[i]>65 && *cptr[i] <=90)
			*cptr[i] +=32;
		else
			*cptr[i] -=32;
	}
	for(int i = 0;i<3;i++){

		printf("%c ",*cptr[i]);
	}
	printf("\n");
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-October-2020$ cc p3.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-12-October-2020$ ./a.out 
A g H 

*/
