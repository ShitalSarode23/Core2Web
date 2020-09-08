
#include<stdio.h>
void main(){

	int n = 7;
	int j = 1,num = 7;
	for(int i = 1;i<=4;){

		if(j<=i){

			printf("%d ",n--);
			j++;
			continue;
		}
		else{

			printf("\n");
			j = 1;
			n = --num;
			i++;
		}
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-8 September 2020$ ./a.out 
7 
6 5 
5 4 3 
4 3 2 1 

*/
