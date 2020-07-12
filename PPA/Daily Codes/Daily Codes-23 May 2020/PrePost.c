

#include<stdio.h>
void main(){


	int a=5,b=6,ans=0;
	ans=a++ +b;
	printf("%d %d %d\n",a,b,ans);		//6 6 11


	int x=5,y=6;
	ans=++x+y;
	printf("%d %d %d\n",x,y,ans);		//6  6 12


	int s=5,p=6;
	ans=s---p;
	printf("%d %d %d\n",s,p,ans);		//4 6 -1

	int k=5,l=6;
	ans=--k+l;
	printf("%d %d %d\n",k,l,ans);		//4 6 10


}
