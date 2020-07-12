

#include<stdio.h>
void main(){

	int i = 4, j = -1, k = 0,w,x,y,z;

	w = i || j || k;			//4 || not check
	x = i && j && k;			//4 && -1 && 0 
	y = i || j && k;			//4 ||(j && k)-not check
	z = i && j || k;			//(4 && -1)||

	printf("%d %d %d %d\n",w,x,y,z);	//1 0 1 1



}
