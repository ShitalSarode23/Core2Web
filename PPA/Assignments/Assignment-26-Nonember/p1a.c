#include<stdio.h>

void fun(int x,int y){

	printf("Numbers:%d %d\n",x,y);
	if(x>y)
		printf("Larger:%d\n",x);
	else
		printf("Larger:%d\n",y);
}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-26-Nonember$ cc p1.c p1a.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-26-Nonember$ ./a.out 
Numbers:20 50
Larger:50
*/
