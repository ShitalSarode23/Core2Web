
#include<stdio.h>
void main(){


	for(int i = 1;i<=5;i++){
		for(int j = 4;j>=i;j--)
			printf("  ");
		int num = 1;
		for(int k = 1;k<=2*i-1;k++)
			printf("%d ",num++);
		printf("\n");
	}
}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-Pyramid$ ./a.out 
        1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 

*/
