

#include<stdio.h>
void main(){

	int x = 10,y = 20;

	switch(x){

		case 'x':					// case x:gives error =case label does not reduce to integer type
			printf("Case 10\n");
			printf("x = %d\n",x);
			break;
		case 'y':					//it also gives error if we taken as case y:instead of case 'y'
			printf("Case 20\n");
			printf("y = %d\n",y);
			break;
		default:					
			printf("default\n");			//default
			break;




	}

}
