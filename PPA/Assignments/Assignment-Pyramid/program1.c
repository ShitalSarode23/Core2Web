
#include<stdio.h>
void main(){

	char ch = 'A';
	for(int i = 1;i<=5;i++){
		for(int j = 4;j>=i;j--)
			printf("  ");
		for(int k = 1;k<=2*i-1;k++)
			printf("%c ",ch);
		printf("\n");
		ch++;
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-Pyramid$ ./a.out 
        A 
      B B B 
    C C C C C 
  D D D D D D D 
E E E E E E E E E 
*/
