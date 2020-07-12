
#include<stdio.h>
void main(){

	int a=10,b=20,ans=0;
     //	10++;		//lvalue required as increament operator

	ans=a++ + ++b;
	printf("%d %d %d\n",a,b,ans);		//11 21 31

	//ans=a++++b;
	//ans=(a+b)++;
}
