

#include<stdio.h>
void main(){

	int a=5,ans=0;
	ans=++a + ++a;
	printf("%d %d\n",a,ans);		//7 14

	int x=10;
	ans=--x + --x;

	printf("%d %d\n",x,ans);		//8 16

}
