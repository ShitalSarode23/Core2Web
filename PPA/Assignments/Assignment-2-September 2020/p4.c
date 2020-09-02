
#include<stdio.h>
void main(){
	int j = 1,n = 1;
	for(int i = 1;i<=4;){

		if(j<=i){

			printf("%d ",n*n);
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
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-2-September 2020$ ./a.out 
1 
4 9 
16 25 36 
49 64 81 100 
*/
