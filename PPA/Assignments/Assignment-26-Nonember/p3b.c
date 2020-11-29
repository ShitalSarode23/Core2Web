
#include<stdio.h>
void table(){

	extern int x,y;
	for(int i = 1;i<=y;i++){

		printf("%d x %d = %d\n",x,y,x*i);
	}
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-26-Nonember$ cc p3.c p3a.c p3b.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-26-Nonember$ ./a.out 
Enter 2 Numbers:2 3
2 x 3 = 2
2 x 3 = 4
2 x 3 = 6
*/:wq
