
#include<stdio.h>
void main(){
	int j = 1,n = 1;
	for(int i = 1;i<=4;){

		if(j<=i){

			printf("%d ",n*n*n);
			j++;
			n++;
			continue;
		}
		else{

			printf("\n");
			i++;
			j = 1;
		}
	}

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-3-September 2020$ ./a.out 
1 
8 27 
64 125 216 
343 512 729 1000 

*/
