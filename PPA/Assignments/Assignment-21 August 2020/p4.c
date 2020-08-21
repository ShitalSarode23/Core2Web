
#include<stdio.h>
void main(){

	int j = 1,num = 2;
	for(int i = 1;i<=4;){

		if(j<=4){

			printf("%d ",num);
			num += 2;
			j++;
			continue;
		}
		else{
			printf("\n");
			i++;	
			j = 1;
			num = 2;

		}
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-21 August 2020$ ./a.out 
2 4 6 8 
2 4 6 8 
2 4 6 8 
2 4 6 8 
*/
