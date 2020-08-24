#include<stdio.h>
void main(){

	int j =1;
	for(int i= 1;i<=4;){

		if(j<=4){
			printf("0 ");
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
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment24-August-2020$ ./a.out 
0 0 0 0 
0 0 0 0 
0 0 0 0 
0 0 0 0 
*/
