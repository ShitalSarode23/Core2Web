

#include<stdio.h>

void main(){

	double d1,d2,x,y;

	printf("First double value :");
	scanf("%lf",&d1);

	printf("Second double value :");
	scanf("%lf",&d2);

	printf("Entered number upto second precision are :%.2lf & %.2lf\n",d1,d2);
	printf("Their Addition :%.2lf\n",d1+d2);
	printf("Their Subtraction :%.2lf\n",d1-d2);
	printf("Their Multiplication :%.2lf\n",d1*d2);
	printf("Their Division :%.2lf\n",d1/d2);

}
/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-InputOutput$ ./a.out 
First double value :12.745
Second double value :10.2229
Entered number upto second precision are :12.74 & 10.22
Their Addition :22.97
Their Subtraction :2.52
Their Multiplication :130.29
Their Division :1.25
*/
