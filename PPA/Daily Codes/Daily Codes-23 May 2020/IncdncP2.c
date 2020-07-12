

#include<stdio.h>
void main(){

	int a = 10,b = 6,ans;

	ans = a++ + a++ + a++ + a++;		// 10 + 11 + 12 +13 
	printf("%d %d\n",a,ans);		// 14 46

	ans = ++b + ++b + ++b + ++b + ++b;	// 8 + 8 +9+10+11 
	printf("%d %d\n",b,ans);		// 11 46




}
