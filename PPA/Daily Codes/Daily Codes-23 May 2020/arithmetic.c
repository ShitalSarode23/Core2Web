

#include<stdio.h>
void main(){

	int a=5,b=6,c=7,ans;
	ans=a+b-c;
	printf("%d\n",ans);		//4

	ans=a*b/c;
	printf("%d\n",ans);		//4

	ans=a+b/c-a*b;
	printf("%d\n",ans);		//-25


}
