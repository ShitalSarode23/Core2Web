


#include<stdio.h>
int fact(int);

void main(){

	int n;
	scanf("%d",&n);

	printf("%d\n",fact(n));
}

int fact(int n){
	
	int f = 1;
	for(int i = n; i>0; i--)
		f = f*i;

	return f;
}/*shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ cc p2.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-20-October-2020$ ./a.out 
5
120
*/
