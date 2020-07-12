

#include<stdio.h>
void main(){

	int i = -3, j = 2, k = 0,m;

	m = ++i && ++j || ++k;			//-2 && 3 || ++k

	printf("%d %d %d %d\n",i,j,k,m);	//-2 3 0 1



}
