
#include<stdio.h>
void main(){

	for(int i = 1;i<=4;i++){
		for(int j = 3;j>=i;j--)
			printf("\t");
		int x ;
		x = i;
		for(int k = 1;k<=2*i-1;k++){
			if(k<i){
				printf("%d\t",x*x*x);
				x--;
			}
			else if(i == k){
				printf("%d\t",x);
				x++;
			}
			else if(k>i){
				printf("%d\t",x*x);
				x++;
			}
		}
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-Pyramid$ ./a.out 
			1	
		8	1	4	
	27	8	1	4	9	
64	27	8	1	4	9	16	

*/
