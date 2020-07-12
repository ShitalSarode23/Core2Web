

#include<stdio.h>
void main(){

	int a = 8,b = 9,ans;

	ans = (a > b || a++) && (++b && a < b);			//( 0 || 8) && (10 && 1)
								//1 && 1
								//1
	printf("%d %d %d\n",a,b,ans);				//9 10 1


}
