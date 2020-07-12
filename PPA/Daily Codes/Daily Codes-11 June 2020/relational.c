

#include<stdio.h>
void main(){

	int x=5,y=7,ans=0;

	ans=x>y;
	printf("%d\n",ans);		//0

	ans=x<y;
	printf("%d\n",ans);		//1


	ans=x>=y;
	printf("%d\n",ans);		//0


	ans=x<=y;
	printf("%d\n",ans);		//1

	ans=x==y;
	printf("%d\n",ans);		//0

	ans=x!=y;
	printf("%d\n",ans);		//1
}
