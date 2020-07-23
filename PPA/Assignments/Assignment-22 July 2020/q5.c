

#include<stdio.h>

void main(){

	for(int i=1;i<=4;i++){
		for(int k=3;k!=i-1;k--){
			printf(" ");
		}
		char ch = 'a';
		for(int j=1;j<=i;j++){
			printf("%c",ch);
			ch++;
		
		}
		printf("\n");
		

	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-22 July 2020$ ./a.out 
   a
  ab
 abc
abcd

*/
