

#include<stdio.h>
void main(){

	int a = 12,b = 10;
	int ans;

	ans = --a + --a + --a + --a  + --a;
	printf("%d %d \n",a,ans);		

	ans = b-- + b-- + b-- + b--;
	printf("%d %d\n",b,ans);		



}
