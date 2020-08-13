
#include<stdio.h>
void main(){

	for(int i = 1;i<=4;i++){
		for(int j = 3;j>=i;j--)
			printf("  ");
		int x = 5;
		x = x - i;
		for(int k = 1;k<=2*i-1;k++)
			printf("%d ",x++);
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-Pyramid$ ./a.out 
      4 
    3 4 5 
  2 3 4 5 6 
1 2 3 4 5 6 7 

*/
