

#include<stdio.h>
void main(){

	int a=8,b=8,x=24,y=38,ans=0;
	ans=b++ +b++;
	printf("%d %d\n",b,ans);		//10 17

	ans=a++ +a++ +a++;
	printf("%d %d\n",a,ans);		//6 12

	ans=x-- +x-- +x--;
	printf("%d %d\n",x,ans);		//21 69

	ans=++y + y++;
	printf("%d %d\n",y,ans);		//40 79


}
