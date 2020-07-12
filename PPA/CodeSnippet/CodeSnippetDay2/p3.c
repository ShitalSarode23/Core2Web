

#include<stdio.h>
void main(){

	int i = -30, j = 20, k = 1,m;

	m = ++i && ++j && --k;			//-29 && 21 && 0

	printf("%d %d %d %d\n",i,j,k,m);	//-29 21 0 0



}
