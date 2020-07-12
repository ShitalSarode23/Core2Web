

#include<stdio.h>
void main(){

	int x=5,y=0,z=6,ans=0;
	ans=x&&y;
	printf("%d\n",ans);		//0

	ans=x||y;
	printf("%d\n",ans);		//1

	ans=++x && z++;
	printf("%d %d %d\n",x,z,ans);		//6 7 1

	ans=++x || z++;
	printf("%d %d %d\n",x,z,ans);		//7 7 1





}
