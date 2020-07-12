

#include<stdio.h>
void main(){

	int a=4,b=8,x=15,y=17,ans=0;

	ans=++b + ++b + ++b;
	printf("%d %d\n",b,ans);	//11 31

	ans=++a + ++a + ++a;

	printf("%d %d\n",a,ans);	//7 19

	ans=--x + --x + --x;
	printf("%d %d\n",x,ans);	//12 38

	ans=--y - --y - --y;
	printf("%d %d\n",y,ans);	//14 -14


}
