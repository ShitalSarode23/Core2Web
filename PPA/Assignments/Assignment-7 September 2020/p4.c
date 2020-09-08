
#include<stdio.h>
void main(){

	int num = 7;
	int j = 1;
	for(int i = 1;i<=4;){

		if(j<=i){

			printf("%d ",num--);
			j++;
			continue;
		}
		else{

			printf("\n");
			num++;
			j = 1;
			i++;
		}
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-7 September 2020$ ./a.out 
7 
7 6 
6 5 4 
4 3 2 1 
*/
