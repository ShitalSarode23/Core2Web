

#include<stdio.h>
void main(){

	int a,b,ans;

	printf("Enter Number for a and b :\n");
	scanf("%d %d",&a,&b);		//20 10

	//add
	ans = a+b;
	printf("Add = %d\n",ans);	//30

	//sub
	ans = a-b;
	printf("Sub = %d\n",ans);	//10

	//mult
	ans = a*b;
	printf("Mul = %d\n",ans);	//200

	//div
	ans = a/b;
	printf("Div = %d\n",ans);	//2
}
