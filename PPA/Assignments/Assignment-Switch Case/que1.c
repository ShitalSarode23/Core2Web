

#include<stdio.h>
void main(){

	int a = 20;

	switch(~a){					//-21

		case 20 :
			printf("Case 20\n");
			printf("a = %d\n",a);
			break;
		case -20 :
			printf("Case -20\n");
			printf("a = %d\n",a);
			break;
		case -21 :				//this case will execute
			printf("Case -21\n");		//Case -21
			printf("a = %d\n",a);		//20
			break;
		default :
			printf("default\n");
			break;

	}



}
