

#include<stdio.h>
void main(){

	int a=10;
	int ans=0;

	ans=++a;
	printf("%d %d\n",a,ans);		//11 11

	ans=a++;
	printf("%d %d\n",a,ans);		//12 11

	ans=--a;
	printf("%d %d\n",a,ans);		//11 11

	ans=a--;
	printf("%d %d\n",a,ans);		//10 11
}
