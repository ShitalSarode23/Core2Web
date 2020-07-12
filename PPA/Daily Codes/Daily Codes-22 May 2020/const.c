

#include<stdio.h>
void main(){

	int x=10;
	const int y=20;

	printf("%d %d\n",x,y);

	x=x+1;
//	y=y+1;			//Error:assignment of read-only variable y
	printf("%d %d\n",x,y);


}
