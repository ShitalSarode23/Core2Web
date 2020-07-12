

#include<stdio.h>
void main(){

	int x = 12, y = 13,ans ,ans1, ans2 ;

	printf("x= %d\ny= %d\n",x,y);

	ans1 = x++ && ++y;					//12 && 14
								//1
	printf("x= %d\ny= %d\nans1= %d\n",x,y,ans1);		//13 14 1

	x = 12,y = 13;
	ans2 = x++ || ++y;					//12 || ..(not check)
								//1
	printf("x= %d\ny= %d\nans2= %d\n",x,y,ans2);		//13 13 1

	ans = ans1 != ans2;					//1 != 1
								//0
	printf("ans= %d\n",ans);				//0

}
