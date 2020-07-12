
#include<stdio.h>
void main(){

	int m1,m2,m3,m4,m5,sum,x;

	printf("Enter marks of five subjects\n");		//marks out of 100
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);


	if( m1>40 && m2>40 && m3>40 && m4>40 && m5> 40){
		sum=m1+m2+m3+m4+m5;

		if(sum>400 && sum<500)
			x=1;
		else if(sum>200 && sum<300)
			x=2;
		else
			x=3;
	switch(x){
		case 1:
			printf("First Class\n");
			break;
		case 2:
			printf("Second Class\n");
			break;
		default:
			printf("pass\n");
			break;
	}
	}
	else
		printf("You failed in exam\n");

}
