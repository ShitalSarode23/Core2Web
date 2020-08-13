
#include<stdio.h>
void main(){

	int x = 2;
	for(int i = 1;i<=4;i++){
		char ch = 'A';
		for(int j = 3;j>=i;j--){
			printf("  ");
		}
		ch = ch + x;
		for(int k = 1;k<=2*i-1;k++){
			if(k<=i){
				printf("%c ",++ch);
			}
			if(k>i){
				printf("%c ",--ch);
			}
		}
		x--;
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-Pyramid$ ./a.out 
      D 
    C D C 
  B C D C B 
A B C D C B A 

*/
