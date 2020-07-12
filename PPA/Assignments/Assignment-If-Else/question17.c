

#include<stdio.h>
void main(){

	int n1,n2,n3,l;
	printf("Enter n1 n2 n3 ");
	scanf("%d %d %d",&n1,&n2,&n3);

	if(n1>n2 &&n1>n3)

		l=n1;
	else if(n2>n1 && n2>n3)
		l=n2;
	else
		l=n3;

	printf("%d\n",l);
	if(l%2==0)
		printf("The largest number among %d %d %d is an even number\n",n1,n2,n3);

	else
		printf("The largest number among %d %d %d is an odd number\n",n1,n2,n3);




}
