
#include<stdio.h>
void main(){
	
	int j = 1;
	int num = 1;
	for(int i = 1;i<=4;){

		if(j<=4){

			printf("%d\t",num++);
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
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-20 August 2020$ ./a.out 
1	2	3	4	
5	6	7	8	
9	10	11	12	
13	14	15	16	
*/
