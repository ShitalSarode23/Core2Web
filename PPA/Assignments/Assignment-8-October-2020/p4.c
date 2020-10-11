
#include<stdio.h>
void main(){

	int a = 20,b = 10;

	int ad = a+b,sub = a-b,m = a*b,div  = a/b;
	int *ptr[] = {&ad,&sub,&m,&div};
	for(int i = 0;i<4;i++)
		printf("%d ",*(*(ptr+i)));
	printf("\n");

}
/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-8-October-2020$ cc p4.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-8-October-2020$ ./a.out 
30 10 200 2 

*/
