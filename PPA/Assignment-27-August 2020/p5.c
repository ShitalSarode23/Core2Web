
#include<stdio.h>
void main(){

	int j = 1;
	for(int i = 1;i<=4;){

		if(j<=i){

			printf("* ");
			j++;
			continue;
		}
		else{

			printf("\n");
			j = 1;
			i++;
		}
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-27-August 2020$ ./a.out 
* 
* * 
* * * 
* * * * 

*/
