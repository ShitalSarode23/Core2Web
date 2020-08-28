
#include<stdio.h>
void main(){

	int j =1;
	for(int i = 1;i<=4;){

		if(j<=i){

			printf("%d ",i);
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
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-28 August 2020$ ./a.out 
1 
2 2 
3 3 3 
4 4 4 4 
*/
