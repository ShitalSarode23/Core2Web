
#include<stdio.h>
void main(){

	int ch = 'A';
	int j = 1;
	for(int i = 1;i<=5;){

		if(j<=6-i){

			printf("%c ",ch);
			j++;
			continue;
		}
		else{

			printf("\n");
			i++;
			j = 1;
			ch++;
		}
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-8 September 2020$ ./a.out 
A A A A A 
B B B B 
C C C 
D D 
E 
*/
