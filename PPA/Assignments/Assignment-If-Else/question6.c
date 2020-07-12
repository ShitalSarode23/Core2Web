

#include<stdio.h>
void main(){

	int subVal=15;
	
	if(subVal++ && subVal--){			//15 && 16=1 ,subVal=15

		printf("SubVal : %d\n",subVal);		//15

	}

	if(subVal-- || ++subVal){			//15 ||..,subVal=14

		printf("SubVal : %d\n",subVal);		//14

	}

	if(subVal > subVal);{				//Null Statement

		printf("SubVal : %d\n",subVal);		//14
	}
}
