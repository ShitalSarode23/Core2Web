

#include<stdio.h>
void main(){

	float x=5.2, y=10.5;
	if(x == 5.2){	
		printf("x : %d\n",x);			/*format specifire should be of float type i.e %f..and float value is internally stored as different ,so here the comparison is wrong.*/
	}
	if(y == 10.5);{
		printf("y : %f\n",y);			//format specifire=%f
	}			
}
